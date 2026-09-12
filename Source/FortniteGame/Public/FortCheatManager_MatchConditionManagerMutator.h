#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_MatchConditionManagerMutator.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCheatManager_MatchConditionManagerMutator : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_MatchConditionManagerMutator();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MatchConditionManagerMutatorDebug(const float TextScale);
    
};
