#include "FortPickupEffect.h"







UMaterialInstanceDynamic* AFortPickupEffect::ApplyCosmeticOverridesToMaterial(UMeshComponent* MeshComponent, int32 MatIndex) {
    return NULL;
}

UFortItem* AFortPickupEffect::GetPickupDummyItem() const {
    return NULL;
}

AFortPickupEffect::AFortPickupEffect() {
    StaticMesh = NULL;
    SkeletalMesh = NULL;
    ItemDefinition = NULL;
    bDoNotShowSpawnParticles = false;
    bDoNotTickSkeletalMeshComponents = true;
    bOwnedByALocalPlayer = false;
    bOwnedByPlayer = false;
    bRandomRotation = false;
    PickupByNearbyPawnSound = NULL;
    ParentPickupActor = NULL;
}

