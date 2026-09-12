#pragma once
#include "CoreMinimal.h"
#include "PlayerAbilitiesOnGamePhaseAbilityList.generated.h"

class UFortAbilitySet;

USTRUCT(BlueprintType)
struct FPlayerAbilitiesOnGamePhaseAbilityList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAbilitySet*> AbilitySetsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAbilitySet*> AbilitySetsToRemove;
    
    FORTNITEGAME_API FPlayerAbilitiesOnGamePhaseAbilityList();
};
