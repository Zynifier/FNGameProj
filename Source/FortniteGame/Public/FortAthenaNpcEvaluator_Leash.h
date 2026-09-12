#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_Movement.h"
#include "FortAthenaNpcEvaluator_Leash.generated.h"

class UFortAthenaAIRuntimeParameters_Leash;

UCLASS(Blueprintable)
class UFortAthenaNpcEvaluator_Leash : public UFortAthenaAIBotEvaluator_Movement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeashKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeashMovementStateKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeashDestinationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeashLocationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeashOuterRadiusKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIRuntimeParameters_Leash* LeashRuntimeParameters;
    
public:
    UFortAthenaNpcEvaluator_Leash();
};

