#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode_Service.h"
#include "Templates/SubclassOf.h"
#include "FortConversationTaskNode_ShowFutureStormCircle.generated.h"

class UFortGameplayAbility;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_ShowFutureStormCircle : public UFortConversationTaskNode_Service {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> GrantedAbility;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
public:
    UFortConversationTaskNode_ShowFutureStormCircle();
    
};
