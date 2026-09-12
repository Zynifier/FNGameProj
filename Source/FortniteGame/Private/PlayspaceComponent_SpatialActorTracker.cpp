#include "PlayspaceComponent_SpatialActorTracker.h"

void UPlayspaceComponent_SpatialActorTracker::ActorEnteredVolume(AActor* OverlapingVolume, AActor* EnteringActor) {
}

void UPlayspaceComponent_SpatialActorTracker::ActorExitVolume(AActor* OverlapingVolume, AActor* LeavingActor) {
}

void UPlayspaceComponent_SpatialActorTracker::HandleTrackedActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

int32 UPlayspaceComponent_SpatialActorTracker::GetNumTrackedActors() const {
    return 0;
}

TSet<AActor*> UPlayspaceComponent_SpatialActorTracker::GetTrackedActors() const {
    return TSet<AActor*>();
}

UPlayspaceComponent_SpatialActorTracker::UPlayspaceComponent_SpatialActorTracker() {
    bCheckOverlapsOnStartup = false;
    bSceneQueryOnStartup = false;
    bEnableReScanTimer = false;
    ReScanFrequencyInSeconds = 0.0f;
    SceneQueryShape = ESceneQueryShape::Sphere;
}
