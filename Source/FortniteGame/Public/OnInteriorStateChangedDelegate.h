#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioState.h"
#include "OnInteriorStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteriorStateChanged, EInteriorAudioState, PreviousState, EInteriorAudioState, CurrentState);
