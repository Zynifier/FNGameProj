#pragma once
#include "CoreMinimal.h"
#include "ConversationRequirementNode.h"
#include "GameplayTagContainer.h"
#include "FortConversationRequirement_HasService.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationRequirement_HasService : public UConversationRequirementNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ServiceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireExactMatch;
    
public:
    UFortConversationRequirement_HasService();
    
};
