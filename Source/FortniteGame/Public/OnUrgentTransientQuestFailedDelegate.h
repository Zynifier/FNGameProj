#pragma once
#include "CoreMinimal.h"
#include "OnUrgentTransientQuestFailedDelegate.generated.h"

class UFortQuestItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrgentTransientQuestFailed, const UFortQuestItem*, TransientQuestItem);
