#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "FortAthenaAIRuntimeParameters_NPCBehavior.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIRuntimeParameters_NPCBehavior : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSupportsHolsteredWeapon: 1;
    
public:
    UFortAthenaAIRuntimeParameters_NPCBehavior();
    
};
