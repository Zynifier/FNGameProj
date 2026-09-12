#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Cobalt.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Cobalt : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Cobalt();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SimulateFullCobaltMatch(bool bSimulate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void EndCobaltRound();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void AwardCobaltTeamPoints(uint8 TeamToAward, int32 PointsToAward);
    
};

