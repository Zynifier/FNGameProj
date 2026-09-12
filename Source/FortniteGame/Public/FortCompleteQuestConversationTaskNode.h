#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode.h"
#include "FortCompleteQuestConversationTaskNode.generated.h"

class UFortQuestItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCompleteQuestConversationTaskNode : public UFortConversationTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResolveQuestDetailsFromServiceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> SoftQuestToGrant;
    
public:
    UFortCompleteQuestConversationTaskNode();
    
};
