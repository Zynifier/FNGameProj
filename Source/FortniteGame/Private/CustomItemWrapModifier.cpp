#include "CustomItemWrapModifier.h"



UMeshComponent* ACustomItemWrapModifier::GetWrappedMeshComponent() const {
    return NULL;
}

AFortWeapon* ACustomItemWrapModifier::GetWeapon() const {
    return NULL;
}

AActor* ACustomItemWrapModifier::GetVehicle() const {
    return NULL;
}

TArray<UMeshComponent*> ACustomItemWrapModifier::GetWrappedMeshComponents() const {
    return TArray<UMeshComponent*>();
}

ACustomItemWrapModifier::ACustomItemWrapModifier() {
}

