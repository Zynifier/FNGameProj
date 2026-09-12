#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_HolsterWeapon.generated.h"

class UFortAthenaAIRuntimeParameters_NPCBehavior;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIBotEvaluator_HolsterWeapon : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIRuntimeParameters_NPCBehavior* CachedNPCBehaviorParameters;
    
public:
    UFortAthenaAIBotEvaluator_HolsterWeapon();
    
};
