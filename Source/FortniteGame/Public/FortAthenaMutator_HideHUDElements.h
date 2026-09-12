#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "HUDElementsToHideData.h"
#include "FortAthenaMutator_HideHUDElements.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_HideHUDElements : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAthenaGamePhase, FGameplayTagContainer> HUDElementsToHideAtGamePhaseStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHUDElementsToHideData> HUDElementsToHideDataArray;
    
public:
    AFortAthenaMutator_HideHUDElements();
private:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnSafeZonePhaseChanged(int32 SafeZoneIndex);
    
};

