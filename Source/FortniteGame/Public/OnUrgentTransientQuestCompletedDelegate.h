#pragma once
#include "CoreMinimal.h"
#include "OnUrgentTransientQuestCompletedDelegate.generated.h"

class UFortQuestItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrgentTransientQuestCompleted, const UFortQuestItem*, TransientQuestItem);
