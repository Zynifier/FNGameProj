#pragma once
#include "CoreMinimal.h"
#include "ConversationRequirementNode.h"
#include "FortConversationRequirement_HasNoActiveQuestsFromSlottedQuestProvider.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationRequirement_HasNoActiveQuestsFromSlottedQuestProvider : public UConversationRequirementNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestSlot;
    
public:
    UFortConversationRequirement_HasNoActiveQuestsFromSlottedQuestProvider();
    
};
