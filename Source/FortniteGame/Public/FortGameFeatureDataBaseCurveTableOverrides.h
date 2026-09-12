#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameFeatureDataBaseCurveTableOverrides.generated.h"

class UCurveTable;

USTRUCT(BlueprintType)
struct FFortGameFeatureDataBaseCurveTableOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveTable> BaseTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UCurveTable>> PlaylistToOverrideTableMap;
    
    FORTNITEGAME_API FFortGameFeatureDataBaseCurveTableOverrides();
};
