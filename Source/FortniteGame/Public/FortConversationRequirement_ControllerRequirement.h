#pragma once
#include "CoreMinimal.h"
#include "ConversationRequirementNode.h"
#include "GameplayTagContainer.h"
#include "FortConversationRequirement_ControllerRequirement.generated.h"

class UFortControllerRequirement;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationRequirement_ControllerRequirement : public UConversationRequirementNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParticipantID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerRequirement* Requirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpdateNodeDisplayName;
    
public:
    UFortConversationRequirement_ControllerRequirement();
    
};
