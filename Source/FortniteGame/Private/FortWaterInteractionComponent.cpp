#include "FortWaterInteractionComponent.h"
#include "FortWaterBodyActor.h"

static int32 GFortWaterInteractionComponentEnabled = 1;
static FAutoConsoleVariableRef CVarFortWaterInteractionComponentEnabled(
    TEXT("fort.WaterInteractionComponentEnabled"),
    GFortWaterInteractionComponentEnabled,
    TEXT("Whether to enable water interaction component"));

UFortWaterInteractionComponent::UFortWaterInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    PrimaryComponentTick.TickGroup = TG_DuringPhysics;
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = false;
    bAutoActivate = false;

    bIsEnabled = true;
    bTickComponentForces = true;
    bIncludeWaves = true;
    bAllowCachedDataInLargeBodies = true;

    WaterVelocityForceMultiplier = 1.5f;
    WaterVelocityShallowDepth = 150.0f;
    WaterVelocityShallowMultiplier = 0.33f;
    WaterVelocityShoreBias = 0.05f;
    BuoyancyFactor = 1.5f;
    UpBuoyancyDrag = 3.0f;
    UpBuoyancyDrag2 = 0.3f;
    DownBuoyancyDrag = 3.0f;
    DownBuoyancyDrag2 = 0.2f;
    HorizontalDrag = 1.0f;
    HorizontalDrag2 = 0.1f;

    CurrentWaterBody = NULL;
    UpdatedPrimitive = NULL;
    UpdatedComponent = NULL;
}

void UFortWaterInteractionComponent::SetComponentTickEnabled(bool bEnabled) {
    Super::SetComponentTickEnabled(bEnabled && bTickComponentForces);
}

bool UFortWaterInteractionComponent::IsInWater() const {
    return CurrentWaterBody != NULL;
}

bool UFortWaterInteractionComponent::IsEnabled() const {
    return bIsEnabled && GFortWaterInteractionComponentEnabled > 0;
}

bool UFortWaterInteractionComponent::IsReadyForWaterQuery() const {
    return UpdatedPrimitive != NULL && UpdatedComponent != NULL && IsEnabled();
}

void UFortWaterInteractionComponent::GetLastWaterSurfaceInfo(FVector& WaterPlaneLocation, FVector& WaterPlaneNormal, FVector& WaterSurfacePosition, float& WaterDepth, int32& WaterBodyIdx, FVector& WaterVelocity) {
    WaterPlaneLocation = FVector::ZeroVector;
    WaterPlaneNormal = FVector::UpVector;
    WaterSurfacePosition = FVector::ZeroVector;
    WaterDepth = -FLT_MAX;
    WaterBodyIdx = 0;
    WaterVelocity = FVector::ZeroVector;

    if (IsReadyForWaterQuery() && LastWaterSurfaceInfo.Time >= 0.0f) {
        WaterPlaneLocation = LastWaterSurfaceInfo.WaterPlaneLocation;
        WaterPlaneNormal = LastWaterSurfaceInfo.WaterPlaneNormal;
        WaterSurfacePosition = LastWaterSurfaceInfo.WaterSurfacePosition;
        WaterDepth = LastWaterSurfaceInfo.WaterDepth;
        WaterBodyIdx = LastWaterSurfaceInfo.ImmersionIdx;
        WaterVelocity = LastWaterSurfaceInfo.WaterVelocity;
    }
}

AFortWaterBodyActor* UFortWaterInteractionComponent::GetCurrentWaterBody() const {
    return CurrentWaterBody;
}

