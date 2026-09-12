#include "FortCreativeObjectTrackingComponent.h"
#include "Net/UnrealNetwork.h"

void UFortCreativeObjectTrackingComponent::ServerSetPreviewLocation_Implementation(bool bPreviewActive, const FVector& Location) {
}
bool UFortCreativeObjectTrackingComponent::ServerSetPreviewLocation_Validate(bool bPreviewActive, const FVector& Location) {
    return true;
}

void UFortCreativeObjectTrackingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCreativeObjectTrackingComponent, bUpdatePreviewLocation);
}

UFortCreativeObjectTrackingComponent::UFortCreativeObjectTrackingComponent() {
    bUpdatePreviewLocation = false;
}

