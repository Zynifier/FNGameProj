#pragma once
#include "CoreMinimal.h"
#include "EFriendChestTimePeriod.generated.h"

UENUM(BlueprintType)
enum class EFriendChestTimePeriod : uint8 {
    Daily,
    Weekly,
};
