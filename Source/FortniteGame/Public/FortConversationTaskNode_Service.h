#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode.h"
#include "FortConversationTaskNode_Service.generated.h"

class UCurveTable;
class UFortWorldItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_Service : public UFortConversationTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* ResourceCurrency;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveTable*> PricingTables;
    
public:
    UFortConversationTaskNode_Service();
    
};
