#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDLayoutProfileSave.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDPresetExtension.generated.h"

USTRUCT(BlueprintType)
struct FFortMobileHUDPresetExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDPresetToExtend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileHUDLayoutProfileSave HUDPresetExtensionSave;
    
public:
    FORTNITEGAME_API FFortMobileHUDPresetExtension();
};
