#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnalyticsTextReplacementEvaluation.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnalyticsTextReplacementEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextReplacementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextReplacementValueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextReplacementValueLocalized;
    
    FORTNITEGAME_API FFortPlayerSurveyAnalyticsTextReplacementEvaluation();
};
