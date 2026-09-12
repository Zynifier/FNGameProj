#include "FortCollisionResponseSwapperComponent.h"

void UFortCollisionResponseSwapperComponent::HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UFortCollisionResponseSwapperComponent::HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UFortCollisionResponseSwapperComponent::RegisterCallbacksForOverlap(UPrimitiveComponent* InCollisionPrimitiveComponent, UPrimitiveComponent* InOverlapPrimitiveComponent) {
}

void UFortCollisionResponseSwapperComponent::RestoreCollisionResponses() {
}

void UFortCollisionResponseSwapperComponent::UnregisterCallbacksForOverlap() {
}

UFortCollisionResponseSwapperComponent::UFortCollisionResponseSwapperComponent() {
    CollisionPrimitiveComponent = NULL;
    OverlapPrimitiveComponent = NULL;
    NewCollisionResponse = ECR_Ignore;
}
