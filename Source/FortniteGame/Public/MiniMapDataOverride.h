#pragma once
#include "CoreMinimal.h"
#include "EMapLocationStateType.h"
#include "Fonts/SlateFontInfo.h"
#include "GameplayTagContainer.h"
#include "MiniMapDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FMiniMapDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ContextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo LocationFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapLocationStateType StateType;
    
    FORTNITEGAME_API FMiniMapDataOverride();
};
