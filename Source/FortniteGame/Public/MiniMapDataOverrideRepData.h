#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MiniMapDataOverrideRepData.generated.h"

USTRUCT(BlueprintType)
struct FMiniMapDataOverrideRepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ContextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LocationTags;
    
    FORTNITEGAME_API FMiniMapDataOverrideRepData();
};
