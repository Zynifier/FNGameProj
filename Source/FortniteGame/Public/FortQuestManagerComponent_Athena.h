#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardResult.h"
#include "FortQuestManagerComponent.h"
#include "FortQuestManagerComponent_Athena.generated.h"

class UFortMcpProfileSubgame;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortQuestManagerComponent_Athena : public UFortQuestManagerComponent {
    GENERATED_BODY()
public:
    UFortQuestManagerComponent_Athena();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInitQuests_Prepare(const bool bFromMcp, const bool bFromUpdate);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchRewardNotification(const FAthenaRewardResult& MatchRewardData);
    
    UFUNCTION(BlueprintCallable)
    void HandleProfileInitialized(UFortMcpProfileSubgame* McpProfile);
    
};
