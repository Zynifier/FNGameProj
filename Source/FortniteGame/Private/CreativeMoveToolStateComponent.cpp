#include "CreativeMoveToolStateComponent.h"
#include "Net/UnrealNetwork.h"

void UCreativeMoveToolStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCreativeMoveToolStateComponent, bPreview);
}

UCreativeMoveToolStateComponent::UCreativeMoveToolStateComponent() {
    bPreview = false;
}
