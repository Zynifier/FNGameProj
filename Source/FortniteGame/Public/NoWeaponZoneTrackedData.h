#pragma once
#include "CoreMinimal.h"
#include "DeviceTrackedData.h"
#include "OnResetActorsDestroyedCountDelegate.h"
#include "NoWeaponZoneTrackedData.generated.h"

class AFortMinigame;

UCLASS(Blueprintable)
class FORTNITEGAME_API UNoWeaponZoneTrackedData : public UDeviceTrackedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetActorsDestroyedCount OnResetActorsDestroyedCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortMinigame* Minigame;
    
public:
    UNoWeaponZoneTrackedData();
    
    UFUNCTION(BlueprintCallable)
    void AddTrackedDestroy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMinigameEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupMinigame(AFortMinigame* InMinigame);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartResetDestroyCountTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void TrackNewDevice();
    
    UFUNCTION(BlueprintCallable)
    void UntrackDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDestroyCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxDestroyCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxDestroyCountPerTrackedDevice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackedDestroyAtLimit() const;
    
};
