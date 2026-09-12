#pragma once
#include "CoreMinimal.h"
#include "FortControllerRequirement.h"
#include "GameplayTagContainer.h"
#include "EConversationEventQueryMethod.h"
#include "FortControllerRequirement_HasRecordedConversationEventWithNPC.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_HasRecordedConversationEventWithNPC : public UFortControllerRequirement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QueryEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireExactEventTagMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConversationEventQueryMethod QueryMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConversationEntryTag;
    
public:
    UFortControllerRequirement_HasRecordedConversationEventWithNPC();
    
};
