#pragma once
#include "CoreMinimal.h"
#include "EFortFootstepSurfaceType.generated.h"

UENUM(BlueprintType)
namespace EFortFootstepSurfaceType {
    enum Type {
        Default,
        Wood,
        Stone,
        Metal,
        Water,
        Snow,
        Ice,
        Lava,
        Dirt,
        Grass,
        Sand,
        Max_None,
    };
}

