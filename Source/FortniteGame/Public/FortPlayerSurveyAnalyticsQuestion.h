#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnalyticsResponse.h"
#include "FortPlayerSurveyAnalyticsQuestion.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnalyticsQuestion {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InitialOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestionTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestionTextLocalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyAnalyticsResponse> Responses;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TimeTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnswered;
    
    FORTNITEGAME_API FFortPlayerSurveyAnalyticsQuestion();
};
