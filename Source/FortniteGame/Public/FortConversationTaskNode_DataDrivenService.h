#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortConversationTaskNode_Service.h"
#include "GameplayTagContainer.h"
#include "ConversationParticipantRequirement.h"
#include "ERequirementMatchPolicy.h"
#include "EffectRecipientConfig.h"
#include "FortConversationTaskNode_DataDrivenService.generated.h"

class UServiceBriefConfigCollection;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_DataDrivenService : public UFortConversationTaskNode_Service {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERequirementMatchPolicy RequirementMatchPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConversationParticipantRequirement> Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectRecipientConfig> EffectRecipientConfigs;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ServiceGameplayTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnalyticsEventName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PricingKey;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PricingColumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LimitedStockCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UServiceBriefConfigCollection* ServiceBriefConfigCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ServiceBriefCollectionKeyOveride;
    
public:
    UFortConversationTaskNode_DataDrivenService();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetServicePrice(float& PriceOut) const;
    
};
