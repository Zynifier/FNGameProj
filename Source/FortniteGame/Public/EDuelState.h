#pragma once
#include "CoreMinimal.h"
#include "EDuelState.generated.h"

UENUM(BlueprintType)
enum class EDuelState : uint8 {
    Started,
    Won,
    Lost,
};
