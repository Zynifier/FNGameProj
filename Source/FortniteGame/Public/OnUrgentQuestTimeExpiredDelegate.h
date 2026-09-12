#pragma once
#include "CoreMinimal.h"
#include "UrgentQuestData.h"
#include "OnUrgentQuestTimeExpiredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrgentQuestTimeExpired, const FUrgentQuestData&, UrgentQuestData);
