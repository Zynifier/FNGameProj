#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "FortAthenaAIRuntimeParameters_Conversation.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIRuntimeParameters_Conversation : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnterBTTaskConversationIfPlayerAround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EnterBTTaskConversationIfPlayerAroundDistSqr;
    
public:
    UFortAthenaAIRuntimeParameters_Conversation();
    
};
