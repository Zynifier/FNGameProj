#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode_GrantQuest.h"
#include "FortConversationTaskNode_GrantStaticQuest.generated.h"

class UFortQuestItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_GrantStaticQuest : public UFortConversationTaskNode_GrantQuest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> QuestToGrantPtr;
    
public:
    UFortConversationTaskNode_GrantStaticQuest();
    
};
