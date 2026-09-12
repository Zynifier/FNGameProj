#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility.h"
#include "UrgentQuestData.h"
#include "FortTransientQuestGameplayAbility.generated.h"

class UFortQuestItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTransientQuestGameplayAbility : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestItemDefinition;
    
public:
    UFortTransientQuestGameplayAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostAbilityInitialization();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CompleteQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FailQuest() const;
    
    UFUNCTION(BlueprintCallable)
    void StartUrgentQuestEvent(FUrgentQuestData UrgentQuestData);
    
    UFUNCTION(BlueprintCallable)
    void StopUrgentQuestEvent(const FUrgentQuestData& UrgentQuestData);
    
};
