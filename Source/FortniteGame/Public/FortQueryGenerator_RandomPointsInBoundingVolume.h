#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "Templates/SubclassOf.h"
#include "FortQueryGenerator_RandomPointsInBoundingVolume.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortQueryGenerator_RandomPointsInBoundingVolume : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> GenerateIn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue RandomPointsCount;
    
public:
    UFortQueryGenerator_RandomPointsInBoundingVolume();
    
};
