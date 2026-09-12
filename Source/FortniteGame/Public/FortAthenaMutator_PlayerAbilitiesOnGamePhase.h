#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "PlayerAbilitiesOnGamePhaseAbilityList.h"
#include "FortAthenaMutator_PlayerAbilitiesOnGamePhase.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_PlayerAbilitiesOnGamePhase : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAthenaGamePhase, FPlayerAbilitiesOnGamePhaseAbilityList> AbilitySetsToGiveOnGamePhaseMap;
    
public:
    AFortAthenaMutator_PlayerAbilitiesOnGamePhase();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
};
