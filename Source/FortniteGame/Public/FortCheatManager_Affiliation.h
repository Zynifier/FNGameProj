#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCheatManager_Affiliation.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCheatManager_Affiliation : public UChildCheatManager {
    GENERATED_BODY()
public:
    UFortCheatManager_Affiliation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Affiliation_ResetAllRelations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Affiliation_ResetFactionRelations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Affiliation_ResetMemberRelations();
    
};
