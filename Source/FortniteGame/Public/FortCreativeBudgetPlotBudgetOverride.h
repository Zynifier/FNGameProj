#pragma once
#include "CoreMinimal.h"
#include "FortCreativeBudget.h"
#include "FortCreativeGridCellBudget.h"
#include "FortCreativeBudgetPlotBudgetOverride.generated.h"

class UFortCreativeRealEstatePlotItemDefinition;

USTRUCT(BlueprintType)
struct FFortCreativeBudgetPlotBudgetOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCreativeRealEstatePlotItemDefinition> PlotItemDefinitionClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudget> Budgets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreativeHeatmapThermometerEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreativeHeatmapThermometerCellSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreativeHeatmapThermometerInfluenceDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeGridCellBudget> CreativeHeatmapThermometerBudgetOverrides;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpatialThermometerEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHeatmapEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpatialThermometerCellSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpatialInfluenceDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudget> SpatialBudgetOverrides;
    
    FORTNITEGAME_API FFortCreativeBudgetPlotBudgetOverride();
};

