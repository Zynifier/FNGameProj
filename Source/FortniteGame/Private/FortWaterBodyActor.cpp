#include "FortWaterBodyActor.h"
#include "Engine/World.h"
#include "FortAthenaNavArea_Water.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "WaterBodyCustomActor.h"
#include "WaterBodyLakeActor.h"
#include "WaterBodyOceanActor.h"
#include "WaterBodyRiverActor.h"

AFortWaterBodyActor::AFortWaterBodyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    bReplicates = false;
    UpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::NeverUpdate;
    CollisionProfileName = TEXT("WaterBodyCollision");
    bCanAffectNavigation = true;
    WaterNavAreaClass = UFortAthenaNavArea_Water::StaticClass();

    Generator = NULL;
    RiverToLakeTransitionMat = NULL;
    RiverToLakeTransitionMID = NULL;
    RiverToOceanTransitionMat = NULL;
    RiverToOceanTransitionMID = NULL;
    OceanCollisionExtents = FVector(50000.0f, 50000.0f, 10000.0f);
    OceanHeightOffset = 0.0f;
    WaterPriority = 0;
    bIsSwamp = false;

    SwampRadius = -1.0f;
    bHasValidSwampLocation = false;
    CachedWaterVelocityRemapTime = -1.0f;
    bWaterVelocityRemapCached = false;
}

void AFortWaterBodyActor::SetSwampLocationAndRadius(const FVector& InPosition, float InRadius) {
    SwampLocation = InPosition;
    SwampRadius = InRadius;

    const EWaterBodyType BodyType = GetWaterBodyType();
    const bool bSupportsSwamp = (BodyType == EWaterBodyType::Ocean) || (BodyType == EWaterBodyType::Lake && bIsSwamp);
    bHasValidSwampLocation = bSupportsSwamp && InRadius > 0.0f;
}

float AFortWaterBodyActor::GetWaterVelocityAtSplineInputKey(float InKey) const {
    const float Velocity = Super::GetWaterVelocityAtSplineInputKey(InKey);

    if (WaterVelocityRemapInputRange.Value == 0.0f || WaterVelocityRemapOutputRange.Value == 0.0f) {
        return Velocity;
    }

    AFortWaterBodyActor* MutableThis = const_cast<AFortWaterBodyActor*>(this);
    if (const UWorld* World = GetWorld()) {
        if (World->GetTimeSeconds() - CachedWaterVelocityRemapTime >= 0.0f) {
            MutableThis->CachedWaterVelocityRemapTime = World->GetTimeSeconds();
            MutableThis->bWaterVelocityRemapCached = false;
        }
    }

    if (!bWaterVelocityRemapCached) {
        MutableThis->CachedWaterVelocityRemapInputMin = WaterVelocityRemapInputRange.GetValueAtLevel(0.0f);
        MutableThis->CachedWaterVelocityRemapInputMax = WaterVelocityRemapInputRange.GetValueAtLevel(1.0f);
        MutableThis->CachedWaterVelocityRemapOutputMin = WaterVelocityRemapOutputRange.GetValueAtLevel(0.0f);
        MutableThis->CachedWaterVelocityRemapOutputMax = WaterVelocityRemapOutputRange.GetValueAtLevel(1.0f);
        MutableThis->bWaterVelocityRemapCached = true;
    }

    float Alpha = 1.0f;
    float Result;
    if (Velocity > CachedWaterVelocityRemapInputMin) {
        const float InputRange = CachedWaterVelocityRemapInputMax - CachedWaterVelocityRemapInputMin;
        if (FMath::Abs(InputRange) <= SMALL_NUMBER) {
            if (Velocity < CachedWaterVelocityRemapInputMax) {
                Alpha = 0.0f;
            }
        } else {
            Alpha = (Velocity - CachedWaterVelocityRemapInputMin) / InputRange;
        }
        Result = CachedWaterVelocityRemapOutputMin + (CachedWaterVelocityRemapOutputMax - CachedWaterVelocityRemapOutputMin) * Alpha;
    } else {
        if (FMath::Abs(CachedWaterVelocityRemapInputMin) <= SMALL_NUMBER) {
            if (Velocity < CachedWaterVelocityRemapInputMin) {
                Alpha = 0.0f;
            }
        } else {
            Alpha = Velocity / CachedWaterVelocityRemapInputMin;
        }
        Result = CachedWaterVelocityRemapOutputMin * Alpha;
    }

    return Result < 0.0f ? 0.0f : Result;
}

void AFortWaterBodyActor::GetWaterSurfaceInfo(const FVector& QueryLocation, FVector& WaterPlaneLocation, FVector& WaterPlaneNormal, FVector& WaterSurfacePosition, float& WaterDepth, int32& WaterBodyIdx, FVector& WaterVelocity, bool bIncludeDepth, bool bIncludeWaves) const {
    EWaterBodyQueryFlags QueryFlags = EWaterBodyQueryFlags::ComputeLocation | EWaterBodyQueryFlags::ComputeNormal | EWaterBodyQueryFlags::ComputeVelocity | EWaterBodyQueryFlags::ComputeImmersionDepth;
    if (bIncludeDepth) {
        QueryFlags |= EWaterBodyQueryFlags::ComputeDepth;
    }
    if (bIncludeWaves) {
        QueryFlags |= EWaterBodyQueryFlags::IncludeWaves;
    }

    const FWaterBodyQueryResult QueryResult = QueryWaterInfoClosestToWorldLocation(QueryLocation, QueryFlags);

    WaterPlaneLocation = QueryResult.GetWaterPlaneLocation();
    WaterPlaneNormal = QueryResult.GetWaterPlaneNormal();
    WaterSurfacePosition = QueryResult.GetWaterSurfaceLocation();
    WaterDepth = bIncludeDepth ? QueryResult.GetWaterSurfaceDepth() : 0.0f;
    WaterVelocity = QueryResult.GetVelocity();
    WaterBodyIdx = WaterBodyIndex;
}

TArray<UPrimitiveComponent*> AFortWaterBodyActor::GetCollisionComponents() const {
    if (Generator != NULL) {
        return Generator->GetCollisionComponents();
    }

    return TArray<UPrimitiveComponent*>();
}

FVector AFortWaterBodyActor::GetCollisionExtents() const {
    return OceanCollisionExtents;
}

void AFortWaterBodyActor::SetHeightOffset(float InHeightOffset) {
    const float ClampedHeightOffset = FMath::Max(0.0f, InHeightOffset);
    if (OceanHeightOffset != ClampedHeightOffset) {
        OceanHeightOffset = ClampedHeightOffset;
        OnWaterBodyChanged(true);
    }
}

float AFortWaterBodyActor::GetHeightOffset() const {
    return OceanHeightOffset;
}

UMaterialInstanceDynamic* AFortWaterBodyActor::GetRiverToLakeTransitionMaterialInstance() {
    CreateOrUpdateTransitionMIDs();
    return RiverToLakeTransitionMID;
}

UMaterialInstanceDynamic* AFortWaterBodyActor::GetRiverToOceanTransitionMaterialInstance() {
    CreateOrUpdateTransitionMIDs();
    return RiverToOceanTransitionMID;
}

void AFortWaterBodyActor::UpdateMaterialInstances() {
    Super::UpdateMaterialInstances();
    CreateOrUpdateTransitionMIDs();
}

void AFortWaterBodyActor::CreateOrUpdateTransitionMIDs() {
    if (RiverToLakeTransitionMat != NULL && (RiverToLakeTransitionMID == NULL || RiverToLakeTransitionMID->Parent != RiverToLakeTransitionMat)) {
        RiverToLakeTransitionMID = UMaterialInstanceDynamic::Create(RiverToLakeTransitionMat, this, NAME_None);
    }

    if (RiverToOceanTransitionMat != NULL && (RiverToOceanTransitionMID == NULL || RiverToOceanTransitionMID->Parent != RiverToOceanTransitionMat)) {
        RiverToOceanTransitionMID = UMaterialInstanceDynamic::Create(RiverToOceanTransitionMat, this, NAME_None);
    }
}

void AFortWaterBodyActor::InitializeBody() {
    UClass* GeneratorClass = NULL;
    switch (GetWaterBodyType()) {
        case EWaterBodyType::Lake:
            GeneratorClass = ULakeGenerator::StaticClass();
            break;
        case EWaterBodyType::Ocean:
            GeneratorClass = UOceanGenerator::StaticClass();
            break;
        case EWaterBodyType::Transition:
            GeneratorClass = UCustomMeshGenerator::StaticClass();
            break;
        default:
            GeneratorClass = URiverGenerator::StaticClass();
            break;
    }

    if (Generator != NULL && Generator->GetClass() != GeneratorClass) {
        Generator->Reset();
        Generator->MarkPendingKill();
        Generator = NULL;
    }

    if (Generator == NULL && GeneratorClass != NULL) {
        Generator = NewObject<UWaterBodyGenerator>(this, GeneratorClass, NAME_None, RF_Transactional);
    }
}

bool AFortWaterBodyActor::IsBodyInitialized() const {
    return Generator != NULL;
}

bool AFortWaterBodyActor::IsBodyDynamic() const {
    return Generator != NULL && Generator->IsDynamicBody();
}

