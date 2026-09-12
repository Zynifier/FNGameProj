#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode_Service.h"
#include "FortConversationTaskNode_GrantQuest.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_GrantQuest : public UFortConversationTaskNode_Service {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideSpeakerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisplayQuestProviderImage;
    
public:
    UFortConversationTaskNode_GrantQuest();
    
};
