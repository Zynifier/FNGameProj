#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode.h"
#include "GameplayTagContainer.h"
#include "FortConversationTaskNode_ApplyDataDrivenEffect.generated.h"

class UFortControllerEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_ApplyDataDrivenEffect : public UFortConversationTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParticipantID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UFortControllerEffect*> EffectsToApply;
    
    UFortConversationTaskNode_ApplyDataDrivenEffect();
    
};
