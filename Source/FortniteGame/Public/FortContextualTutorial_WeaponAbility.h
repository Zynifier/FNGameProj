#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "GameplayTagContainer.h"
#include "FortContextualTutorial_WeaponAbility.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortContextualTutorial_WeaponAbility : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_WeaponAbility();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAbilityTrigger(const FGameplayTag Tags, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
};
