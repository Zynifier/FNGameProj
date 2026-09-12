#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActiveVehicleUI.h"
#include "FortAthenaSKMotorVehicle.h"
#include "Templates/SubclassOf.h"
#include "VehicleSpecificUIDetails.h"
#include "TurretCosmeticData.h"
#include "FortMountedTurret.generated.h"

class AFortPlayerPawn;
class UFortMountedTurretConfigs;
class UMatineeCameraShake;

UCLASS(Blueprintable)
class AFortMountedTurret : public AFortAthenaSKMotorVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamIndex, meta=(AllowPrivateAccess=true))
    uint8 TeamIndex;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstrainVerticalRotationOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform LastFrameTurretTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PedalScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovementParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BatteryParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RumbleIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* DriverCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* PassengerCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* LocalPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTurretCosmeticData TurretCosmeticData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMountedTurretConfigs> FortMountedTurretConfigsClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMountedTurretConfigs* FortMountedTurretConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleSpecificUIDetails> CustomUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveVehicleUI> ActiveUI;
    
public:
    AFortMountedTurret();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamIndex(uint8 OldVal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGetExitSocketTransform(const FName ExitSocket, const int32 SocketIndex, const FTransform InTransform, bool& bOutOverriderExitSocket, FTransform& OutOverrideTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerRiding() const;
    
    UFUNCTION(BlueprintCallable)
    void NativeUpdateOverheatCosmetics(const AFortPlayerPawn* InDriverPawn, float InReplicateOverheatOf20, UPARAM(Ref) FRotator& OutTurretRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetManned(bool bInIsManned);
    
    UFUNCTION(BlueprintCallable)
    void SetOverheating(bool bInIsOverheating);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float NativeCurrentOverheatScalar(float InReplicateOverheatOf20) const;
    
};

