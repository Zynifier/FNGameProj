#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyFinishReason.h"
#include "FortPlayerSurveyFinishedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortPlayerSurveyFinished, UObject*, Source, EFortPlayerSurveyFinishReason, Reason);
