#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortPlayerSurveyQuestionPresentationStyle.h"
#include "EFortPlayerSurveyQuestionType.h"
#include "EFortPlayerSurveyQuestionTypeLegacy.h"
#include "FortPlayerSurveyQuestionLegacy.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyQuestionLegacy : public UObject {
    GENERATED_BODY()
public:
    UFortPlayerSurveyQuestionLegacy();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortPlayerSurveyQuestionTypeLegacy GetQuestionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortPlayerSurveyQuestionPresentationStyle GetPresentationStyle() const;
    
};

