#pragma once
#include "CoreMinimal.h"
#include "FortUserInputSettingsPerInputType.h"
#include "FortUserInputSettingsPerMode.generated.h"

USTRUCT(BlueprintType)
struct FFortUserInputSettingsPerMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUserInputSettingsPerInputType KeyboardMouseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUserInputSettingsPerInputType ControllerSettings;
    
    FORTNITEGAME_API FFortUserInputSettingsPerMode();
};
