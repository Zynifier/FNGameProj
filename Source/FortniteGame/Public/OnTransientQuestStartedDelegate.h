#pragma once
#include "CoreMinimal.h"
#include "OnTransientQuestStartedDelegate.generated.h"

class UFortQuestItem;
class UFortQuestItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTransientQuestStarted, const UFortQuestItem*, TransientQuestItem, const UFortQuestItemDefinition*, PreceedingQuestDef);
