#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode_Service.h"
#include "FortConversationTaskNode_SellItem.generated.h"

class UFortMontageItemDefinitionBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_SellItem : public UFortConversationTaskNode_Service {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SellSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BuyTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SoldOutTextFormat;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMontageItemDefinitionBase* ExpensivePurchaseEmote;
    
public:
    UFortConversationTaskNode_SellItem();
    
};
