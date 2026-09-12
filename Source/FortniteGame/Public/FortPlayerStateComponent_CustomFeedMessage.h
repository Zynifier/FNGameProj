#pragma once
#include "CoreMinimal.h"
#include "FortPlayerStateComponent.h"
#include "GameplayTagContainer.h"
#include "CustomFeedMessageContext.h"
#include "FortPlayerStateComponent_CustomFeedMessage.generated.h"

class UFortCustomFeedMessageConfig;
class UFortCustomFeedMessageGeneratorBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortPlayerStateComponent_CustomFeedMessage : public UFortPlayerStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortCustomFeedMessageConfig>> CustomFeedMessageConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UFortCustomFeedMessageGeneratorBase*> CustomFeedMessageGeneratorsInternal;
    
public:
    UFortPlayerStateComponent_CustomFeedMessage();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastTriggerCustomFeedMessage(const FGameplayTag CustomFeedMessageGeneratorID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastTriggerCustomFeedMessageWithContext(const FGameplayTag CustomFeedMessageGeneratorID, FCustomFeedMessageContext Context);
    
};
