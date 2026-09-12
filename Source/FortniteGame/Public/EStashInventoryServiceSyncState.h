#pragma once
#include "CoreMinimal.h"
#include "EStashInventoryServiceSyncState.generated.h"

UENUM(BlueprintType)
enum class EStashInventoryServiceSyncState : uint8 {
    Uninitialized,
    Syncing,
    Ready,
};
