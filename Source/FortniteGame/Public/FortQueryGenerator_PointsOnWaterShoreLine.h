#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "Templates/SubclassOf.h"
#include "FortQueryGenerator_PointsOnWaterShoreLine.generated.h"

class UEnvQueryContext;
class UFortQueryData_CurvesAroundLine;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortQueryGenerator_PointsOnWaterShoreLine : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQueryData_CurvesAroundLine> CurvesAroundLineAsset;
    
public:
    UFortQueryGenerator_PointsOnWaterShoreLine();
    
};
