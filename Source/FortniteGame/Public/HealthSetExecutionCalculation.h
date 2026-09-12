#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "HealthSetExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UHealthSetExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UHealthSetExecutionCalculation();
    
};
