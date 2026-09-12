#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDPresetExtension.h"
#include "FortMobileHUDPresetExtensionContainer.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMobileHUDPresetExtensionContainer : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDPresetExtensionContainerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDPresetContainerToExtendTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMobileHUDPresetExtension> HUDPresetExtensions;
    
public:
    UFortMobileHUDPresetExtensionContainer();
    
};
