#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode_GrantQuest.h"
#include "FortConversationTaskNode_GrantSlottedQuest.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_GrantSlottedQuest : public UFortConversationTaskNode_GrantQuest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrantQuestToSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyQuestProvider;
    
public:
    UFortConversationTaskNode_GrantSlottedQuest();
    
};
