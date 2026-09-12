#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "WaterInteractionOnEnterWaterDelegate.h"
#include "WaterInteractionOnExitWaterDelegate.h"
#include "FortWaterInteractionComponent.generated.h"

class AFortWaterBodyActor;

USTRUCT()
struct FFortWaterInteractionSurfaceInfo {
    GENERATED_BODY()

    float Time;
    float SplineInputKey;
    int32 WaterBodyIdx;
    FVector QueryLocation;
    FVector WaterVelocity;
    FVector WaterSurfacePosition;
    FVector WaterSurfaceNormal;
    FVector WaterPlaneLocation;
    FVector WaterPlaneNormal;
    float WaterDepth;
    int32 ImmersionIdx;
    TWeakObjectPtr<AFortWaterBodyActor> WaterBody;

    FFortWaterInteractionSurfaceInfo()
        : Time(-1.0f)
        , SplineInputKey(-1.0f)
        , WaterBodyIdx(0)
        , QueryLocation(FVector::ZeroVector)
        , WaterVelocity(FVector::ZeroVector)
        , WaterSurfacePosition(FVector::ZeroVector)
        , WaterSurfaceNormal(FVector::ZeroVector)
        , WaterPlaneLocation(FVector::ZeroVector)
        , WaterPlaneNormal(FVector::ZeroVector)
        , WaterDepth(0.0f)
        , ImmersionIdx(0)
    {
    }
};

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortWaterInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;

    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTickComponentForces: 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIncludeWaves: 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowCachedDataInLargeBodies: 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterVelocityForceMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterVelocityShallowDepth;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterVelocityShallowMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterVelocityShoreBias;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuoyancyFactor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpBuoyancyDrag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpBuoyancyDrag2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownBuoyancyDrag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownBuoyancyDrag2;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalDrag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalDrag2;

    UPROPERTY(BlueprintAssignable)
    FWaterInteractionOnEnterWater OnEnterWaterEvent;

    UPROPERTY(BlueprintAssignable)
    FWaterInteractionOnExitWater OnExitWaterEvent;

    UFortWaterInteractionComponent(const FObjectInitializer& ObjectInitializer);

    //~ Begin UActorComponent interface
    virtual void SetComponentTickEnabled(bool bEnabled) override;
    //~ End UActorComponent interface

    UFUNCTION(BlueprintImplementableEvent)
    void OnExitedWaterBody(AFortWaterBodyActor* WaterBody, bool bIsLastBody);

    UFUNCTION(BlueprintImplementableEvent)
    void OnEnteredWaterBody(AFortWaterBodyActor* WaterBody, bool bIsFirstBody);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWater() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLastWaterSurfaceInfo(FVector& WaterPlaneLocation, FVector& WaterPlaneNormal, FVector& WaterSurfacePosition, float& WaterDepth, int32& WaterBodyIdx, FVector& WaterVelocity);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortWaterBodyActor* GetCurrentWaterBody() const;

protected:
    bool IsReadyForWaterQuery() const;

    AFortWaterBodyActor* CurrentWaterBody;
    UPrimitiveComponent* UpdatedPrimitive;
    USceneComponent* UpdatedComponent;
    FFortWaterInteractionSurfaceInfo CurrentWaterSurfaceInfo;
    FFortWaterInteractionSurfaceInfo LastWaterSurfaceInfo;
};

