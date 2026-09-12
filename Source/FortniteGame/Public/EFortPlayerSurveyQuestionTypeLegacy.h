#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyQuestionTypeLegacy.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyQuestionTypeLegacy : uint8 {
    Invalid,
    MultipleChoice,
    MultipleSelection,
    FreeFormText,
    Num,
};
