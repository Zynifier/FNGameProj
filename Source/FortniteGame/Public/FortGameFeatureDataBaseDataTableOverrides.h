#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameFeatureDataBaseDataTableOverrides.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FFortGameFeatureDataBaseDataTableOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> BaseTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UDataTable>> PlaylistToOverrideTableMap;
    
    FORTNITEGAME_API FFortGameFeatureDataBaseDataTableOverrides();
};
