#pragma once
#include "CoreMinimal.h"
#include "GiftUINotificationHandler.h"
#include "FortUINotificationHandler_ReceivedGiftItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortUINotificationHandler_ReceivedGiftItem : public UGiftUINotificationHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGenerateMultipleNotifications;
    
public:
    UFortUINotificationHandler_ReceivedGiftItem();
    
};
