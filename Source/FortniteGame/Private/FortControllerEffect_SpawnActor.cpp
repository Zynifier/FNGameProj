#include "FortControllerEffect_SpawnActor.h"

UFortControllerEffect_SpawnActor::UFortControllerEffect_SpawnActor() {
    bUseWeightedActorList = false;
    ActorClass = NULL;
    SpawnDelay = 0.0f;
    bSpawnRelativeToServiceProvider = false;
    bLocalSpaceOffsetIgnorePitchAndRoll = false;
    TransformGenerator = NULL;
}
