#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_RoundsMutator.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCheatManager_RoundsMutator : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_RoundsMutator();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RoundsMutatorDebug(const float TextScale);
    
};
