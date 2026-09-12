#pragma once
#include "CoreMinimal.h"
#include "EFortPerModeInputType.generated.h"

UENUM(BlueprintType)
enum class EFortPerModeInputType : uint8 {
    KeyboardMouse,
    Controller,
};
