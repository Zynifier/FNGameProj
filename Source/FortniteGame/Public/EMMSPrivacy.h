#pragma once
#include "CoreMinimal.h"
#include "EMMSPrivacy.generated.h"

UENUM(BlueprintType)
enum class EMMSPrivacy : uint8 {
    Public,
    Private,
};
