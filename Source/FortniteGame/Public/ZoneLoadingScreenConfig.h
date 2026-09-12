#pragma once
#include "CoreMinimal.h"
#include "ZoneLoadingScreenHeadingConfig.h"
#include "ZoneLoadingScreenConfig.generated.h"

class UFortTips;
class UTexture2D;

class USoundBase;

USTRUCT(BlueprintType)
struct FZoneLoadingScreenConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneLoadingScreenHeadingConfig Headings[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortTips*> LoadingTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LoadingMusic;
    
    FORTNITEGAME_API FZoneLoadingScreenConfig();
};

