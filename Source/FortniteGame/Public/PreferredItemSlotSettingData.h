#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PreferredItemSlotSettingData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPreferredItemSlotSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FORTNITEGAME_API FPreferredItemSlotSettingData();
};
