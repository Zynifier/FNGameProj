#pragma once
#include "CoreMinimal.h"
#include "EGravityGunHolderObjectType.generated.h"

UENUM(BlueprintType)
enum class EGravityGunHolderObjectType : uint8 {
    Invalid,
    PhysicsObject,
    Vehicle,
    Projectile,
    PickUp,
};
