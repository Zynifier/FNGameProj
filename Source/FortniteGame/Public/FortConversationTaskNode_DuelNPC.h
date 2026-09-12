#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode_Service.h"
#include "FortConversationTaskNode_DuelNPC.generated.h"

class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_DuelNPC : public UFortConversationTaskNode_Service {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> DuelObserverAbility;
    
public:
    UFortConversationTaskNode_DuelNPC();
    
};
