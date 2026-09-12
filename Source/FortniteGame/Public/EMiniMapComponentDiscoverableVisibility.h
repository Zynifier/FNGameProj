#pragma once
#include "CoreMinimal.h"
#include "EMiniMapComponentDiscoverableVisibility.generated.h"

UENUM(BlueprintType)
enum class EMiniMapComponentDiscoverableVisibility : uint8 {
    Unset,
    NotVisible,
    Visible_NotDiscovered,
    Discovered,
};
