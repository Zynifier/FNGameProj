#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIAnalyticData.h"
#include "FortAthenaAISpawnerDataComponent_AnalyticBase.h"
#include "AttributeSet.h"
#include "FortAthenaAISpawnerDataComponent_AIAnalytic.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AIAnalytic : public UFortAthenaAISpawnerDataComponent_AnalyticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldSendSpawnEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldRecordGrabbedPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldRecordDroppedPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldRecordDeathInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldRecordRegularDowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldRecordTetheredDowns;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaAIAnalyticData AnalyticData;
    
public:
    UFortAthenaAISpawnerDataComponent_AIAnalytic();
};

