#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "FortAthenaBTTask_Conversation.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaBTTask_Conversation : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConversationStatusKeyName;
    
public:
    UFortAthenaBTTask_Conversation();
    
};
