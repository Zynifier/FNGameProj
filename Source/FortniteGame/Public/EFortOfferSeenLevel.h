#pragma once
#include "CoreMinimal.h"
#include "EFortOfferSeenLevel.generated.h"

UENUM(BlueprintType)
enum class EFortOfferSeenLevel : uint8 {
    Unseen,
    Notification,
    ItemShopVisited,
    OfferSectionVisited,
    Purchased,
};
