#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "HUDElementVisibilityRepData.h"
#include "FortAthenaMutator_HUDElementVisibility.generated.h"

class AFortMinigame;
class AFortVolume;
class APlayerState;
class UFortPlaysetItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_HUDElementVisibility : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FHUDElementVisibilityRepData HUDElementVisbilityData;
    
public:
    AFortAthenaMutator_HUDElementVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnVolumePlaysetChanged(UFortPlaysetItemDefinition* PlaysetItemDef);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnClientEnteredVolume(APlayerState* Client, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnClientPlayModeChanged(AFortMinigame* Minigame, bool bIsInPlayMode);
    
    UFUNCTION(BlueprintCallable)
    void OnCreativeLinkedVolumeChangedForPC(AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameSetUp(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HUDVisibiliyModifierChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnVolumePlaysetChanged(UFortPlaysetItemDefinition* PlaysetItemDef);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};
