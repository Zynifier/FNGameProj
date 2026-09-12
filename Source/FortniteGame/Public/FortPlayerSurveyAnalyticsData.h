#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnalyticsQuestion.h"
#include "FortPlayerSurveyAnalyticsTextReplacementEvaluation.h"
#include "FortPlayerSurveyAnalyticsData.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnalyticsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SurveyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyAnalyticsQuestion> Questions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyAnalyticsTextReplacementEvaluation> TextReplacementEvaluations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreviousMatchPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreviousMatchGameSessionID;
    
    FORTNITEGAME_API FFortPlayerSurveyAnalyticsData();
};
