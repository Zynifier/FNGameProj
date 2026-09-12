#pragma once
#include "CoreMinimal.h"
#include "OnUrgentTransientQuestStartedDelegate.generated.h"

class UFortQuestItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrgentTransientQuestStarted, const UFortQuestItem*, TransientQuestItem);
