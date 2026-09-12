#pragma once
#include "CoreMinimal.h"
#include "OnInitQuests_PrepareDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInitQuests_Prepare, const bool, bFromMcp, const bool, bFromUpdate);
