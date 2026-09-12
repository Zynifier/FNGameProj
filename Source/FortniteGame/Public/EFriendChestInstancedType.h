#pragma once
#include "CoreMinimal.h"
#include "EFriendChestInstancedType.generated.h"

UENUM(BlueprintType)
enum class EFriendChestInstancedType : uint8 {
    ItemDefinition,
    FreshDripCounter,
    GrantXp,
    Undefined,
};
