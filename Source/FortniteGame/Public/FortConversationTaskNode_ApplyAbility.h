#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode_Service.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FortConversationTaskNode_ApplyAbility.generated.h"

class UFortGameplayAbility;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_ApplyAbility : public UFortConversationTaskNode_Service {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> GrantedAbility;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventUseIfAbilityAlreadyActive;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActiveAbilityGameplayTags;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateImmediatelyOnGranting;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ServiceGameplayTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnalyticsEventName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PricingKey;
    
public:
    UFortConversationTaskNode_ApplyAbility();
    
};
