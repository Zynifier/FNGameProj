#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyItemChangedInternalDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortPlayerSurveyItemChangedInternalDelegate, UObject*, Source, int32, Index);
