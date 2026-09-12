#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAISpawnerDataComponent_GameplayBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_GameplayBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CanBeConverted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CanBeConvertedFromDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ForceKillWhenUnconverted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CopyConverterSpecificRelations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RemoveFromAllFactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReleaseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CheckReleaseConditionsTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AddToFactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RemoveFromFactions;
    
public:
    UFortAthenaAISpawnerDataComponent_GameplayBase();
};

