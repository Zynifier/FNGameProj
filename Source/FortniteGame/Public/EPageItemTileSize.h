#pragma once
#include "CoreMinimal.h"
#include "EPageItemTileSize.generated.h"

UENUM(BlueprintType)
enum class EPageItemTileSize : uint8 {
    Size_1_x_1,
    Size_2_x_1,
    Size_2_x_2,
    Size_3_x_2,
    Size_3_x_3,
    Count,
};
