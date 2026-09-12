#include "FortPickupComponent_ItemAttachedActor.h"

void UFortPickupComponent_ItemAttachedActor::AttachActorToPickup(AFortPickup* PickUp, AActor* ActorToAttach) {
}

void UFortPickupComponent_ItemAttachedActor::OnAttachedActorDestroyed(AActor* DestroyedActor) {
}

void UFortPickupComponent_ItemAttachedActor::OnPickupPickedUpByPlayer(AFortPickup* SelfActor, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation) {
}

UFortPickupComponent_ItemAttachedActor::UFortPickupComponent_ItemAttachedActor() {
    AttachedActor = NULL;
}
