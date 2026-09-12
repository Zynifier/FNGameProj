#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "WaterBodyActor.h"
#include "FortCurieInterface.h"
#include "FortWaterBodyActor.generated.h"

class AFortPlayerPawn;

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UWaterBodyGenerator;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortWaterBodyActor : public AWaterBody, public IFortCurieInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(NonPIEDuplicateTransient)
    UWaterBodyGenerator* Generator;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* RiverToLakeTransitionMat;

    UPROPERTY(VisibleAnywhere, Transient, TextExportTransient, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RiverToLakeTransitionMID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* RiverToOceanTransitionMat;

    UPROPERTY(VisibleAnywhere, Transient, TextExportTransient, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RiverToOceanTransitionMID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OceanCollisionExtents;

    UPROPERTY(Transient)
    float OceanHeightOffset;

    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterVelocityRemapInputRange;

    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterVelocityRemapOutputRange;

    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterVelocityPerpendicularBias;

    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterOverrideMaxCharacterForce;

    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaterPriority;

    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSwamp;

public:
    AFortWaterBodyActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSwampLocationAndRadius(const FVector& InPosition, float InRadius);

    UFUNCTION(BlueprintImplementableEvent)
    void OnReceivedBulletImpact(const FHitResult& Hit);

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerExitedWaterBody(AFortPlayerPawn* Player, bool bIsLastBody);

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerEnteredWaterBody(AFortPlayerPawn* Player, bool bIsFirstBody);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    virtual float GetWaterVelocityAtSplineInputKey(float InKey) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWaterSurfaceInfo(const FVector& QueryLocation, FVector& WaterPlaneLocation, FVector& WaterPlaneNormal, FVector& WaterSurfacePosition, float& WaterDepth, int32& WaterBodyIdx, FVector& WaterVelocity, bool bIncludeDepth, bool bIncludeWaves) const;

    //~ Begin AWaterBody interface
    virtual TArray<UPrimitiveComponent*> GetCollisionComponents() const override;
    virtual FVector GetCollisionExtents() const override;
    virtual void SetHeightOffset(float InHeightOffset) override;
    virtual float GetHeightOffset() const override;
    virtual UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance() override;
    virtual UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance() override;
    virtual void UpdateMaterialInstances() override;
    virtual void InitializeBody() override;
    virtual bool IsBodyInitialized() const override;
    virtual bool IsBodyDynamic() const override;
    //~ End AWaterBody interface

protected:
    void CreateOrUpdateTransitionMIDs();

    FVector SwampLocation;
    float SwampRadius;
    bool bHasValidSwampLocation;

    float CachedWaterVelocityRemapInputMin;
    float CachedWaterVelocityRemapInputMax;
    float CachedWaterVelocityRemapOutputMin;
    float CachedWaterVelocityRemapOutputMax;
    float CachedWaterVelocityRemapTime;
    bool bWaterVelocityRemapCached;
};

