#pragma once
#include "CoreMinimal.h"
#include "OnNewContentUpdateMessageRecievedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewContentUpdateMessageRecieved, const FString&, NewMessage);
