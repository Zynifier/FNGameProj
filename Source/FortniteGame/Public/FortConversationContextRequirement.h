#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortConversationContextRequirement.generated.h"

class UFortControllerRequirement;

USTRUCT(BlueprintType)
struct FFortConversationContextRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParticipantID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerRequirement* Requirement;
    
    FORTNITEGAME_API FFortConversationContextRequirement();
};
