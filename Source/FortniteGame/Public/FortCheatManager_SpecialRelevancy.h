#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_SpecialRelevancy.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCheatManager_SpecialRelevancy : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_SpecialRelevancy();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void StartMultiSquadRelevancy(int32 NumOfSquadsInRelevancyGroup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void StartNormalRelevancy();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void StartSoloRelevancy();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void StartSquadRelevancy();
    
};
