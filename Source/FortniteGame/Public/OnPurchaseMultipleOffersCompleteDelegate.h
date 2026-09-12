#pragma once
#include "CoreMinimal.h"
#include "PurchasedItemInfo.h"
#include "OnPurchaseMultipleOffersCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnPurchaseMultipleOffersComplete, bool, bSuccess, const TArray<FPurchasedItemInfo>&, PurchasedItems, const TArray<FString>&, OfferIdList);
