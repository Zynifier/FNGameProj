#pragma once
#include "CoreMinimal.h"
#include "FortSpatialGrid.h"
#include "FortCurieSpatialGrid.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieSpatialGrid : public FFortSpatialGrid {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortCurieSpatialGrid();
};

