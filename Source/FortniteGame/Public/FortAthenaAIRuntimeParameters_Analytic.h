#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAIRuntimeParameters_Analytic.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIRuntimeParameters_Analytic : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OnDeathGameplayTags;
    
public:
    UFortAthenaAIRuntimeParameters_Analytic();
    
};
