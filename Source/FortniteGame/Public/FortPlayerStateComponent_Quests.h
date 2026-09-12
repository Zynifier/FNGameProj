#pragma once
#include "CoreMinimal.h"
#include "FortPlayerStateComponent.h"
#include "GameplayTagContainer.h"
#include "UrgentQuestData.h"
#include "FortPlayerStateComponent_Quests.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortPlayerStateComponent_Quests : public UFortPlayerStateComponent {
    GENERATED_BODY()
public:
    UFortPlayerStateComponent_Quests();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpectatorClearUrgentQuestEntries();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleNoLongerTargetingBotUrgentQuest();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpectatorCompleteUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData, const FGameplayTag& CompletedEventTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpectatorFailUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData, const FGameplayTag& FailedEventTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpectatorShowUrgentQuestEntry(const FUrgentQuestData& UrgentQuestData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpectatorShowUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData);
    
};
