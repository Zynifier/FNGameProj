#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyAnalyticsResponse.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnalyticsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InitialOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResponseTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResponseTextLocalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Selection;
    
    FORTNITEGAME_API FFortPlayerSurveyAnalyticsResponse();
};
