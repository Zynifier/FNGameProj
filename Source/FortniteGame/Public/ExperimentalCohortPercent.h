#pragma once
#include "CoreMinimal.h"
#include "ExperimentalCohortPercent.generated.h"

USTRUCT(BlueprintType)
struct FExperimentalCohortPercent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperimentNum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CohortPercent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FORTNITEGAME_API FExperimentalCohortPercent();
};

