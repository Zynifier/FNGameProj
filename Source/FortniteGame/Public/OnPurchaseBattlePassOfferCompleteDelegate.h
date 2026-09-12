#pragma once
#include "CoreMinimal.h"
#include "OnPurchaseBattlePassOfferCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnPurchaseBattlePassOfferComplete, bool, bSuccess, const TArray<FString>&, OfferTemplateIdList);
