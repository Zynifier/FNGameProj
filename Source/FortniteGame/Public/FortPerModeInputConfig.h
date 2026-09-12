#pragma once
#include "CoreMinimal.h"
#include "FortPerModeInputConfig.generated.h"

USTRUCT(BlueprintType)
struct FFortPerModeInputConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputConfigName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultKeyboardMouseLayoutPresetName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ResetKeyboardMouseLayoutPresetNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultControllerLayoutPresetName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomControllerLayoutPresetName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FortPlayerInputSettingsNames;
    
    FORTNITEGAME_API FFortPerModeInputConfig();
};
