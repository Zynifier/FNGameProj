#pragma once
#include "CoreMinimal.h"
#include "FortActionKeyMapping.h"
#include "FortUserInputSettingsPerInputType.generated.h"

USTRUCT(BlueprintType)
struct FFortUserInputSettingsPerInputType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LayoutPresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateLayoutPresetNameForCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortActionKeyMapping> ActionMappings;
    
    FORTNITEGAME_API FFortUserInputSettingsPerInputType();
};
