#pragma once
#include "CoreMinimal.h"
#include "EConversationRequirementResult.h"
#include "GameplayTagContainer.h"
#include "ConversationParticipantRequirement.generated.h"

class UFortControllerRequirement;

USTRUCT(BlueprintType)
struct FConversationParticipantRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParticipantID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerRequirement* Requirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConversationRequirementResult FailureNodeBehaviour;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CannotUseReasonParameter;
    
    FORTNITEGAME_API FConversationParticipantRequirement();
};
