#include "FortWaterBodyIslandActor.h"

AFortWaterBodyIslandActor::AFortWaterBodyIslandActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    UpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::NeverUpdate;
}

