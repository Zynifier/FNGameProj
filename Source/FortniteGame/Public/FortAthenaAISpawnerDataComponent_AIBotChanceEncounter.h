#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaAISpawnerDataComponent_ChanceEncounterBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_AIBotChanceEncounter.generated.h"

class UFortPawnComponent_PassiveHealer;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter : public UFortAthenaAISpawnerDataComponent_ChanceEncounterBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PassiveHealerEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPawnComponent_PassiveHealer> PassiveHealerComponentClass;
    
public:
    UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter();
    
};
