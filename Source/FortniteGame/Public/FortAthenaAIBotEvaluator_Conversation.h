#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_Conversation.generated.h"

class AActor;
class UFortAthenaAIRuntimeParameters_Conversation;
class UFortGameStateComponent_AffiliationManager;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIBotEvaluator_Conversation : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIRuntimeParameters_Conversation* ConversationRuntimeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_AffiliationManager* AffiliationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorToFocus;
    
public:
    UFortAthenaAIBotEvaluator_Conversation();
    
};
