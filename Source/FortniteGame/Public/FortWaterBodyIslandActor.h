#pragma once
#include "CoreMinimal.h"
#include "WaterBodyIslandActor.h"
#include "FortWaterBodyIslandActor.generated.h"

UCLASS(Blueprintable)
class AFortWaterBodyIslandActor : public AWaterBodyIsland {
    GENERATED_BODY()
public:
    AFortWaterBodyIslandActor(const FObjectInitializer& ObjectInitializer);
};

