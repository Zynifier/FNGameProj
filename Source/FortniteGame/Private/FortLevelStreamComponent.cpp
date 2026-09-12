#include "FortLevelStreamComponent.h"
#include "Net/UnrealNetwork.h"

void UFortLevelStreamComponent::OnLevelAdded(ULevel* InLevel, UWorld* InWorld) {
}

void UFortLevelStreamComponent::OnLevelRemoved(ULevel* InLevel, UWorld* InWorld) {
}

void UFortLevelStreamComponent::OnRep_LevelStreamingData() {
}

bool UFortLevelStreamComponent::IsLoaded() const {
    return false;
}

bool UFortLevelStreamComponent::IsLoading() const {
    return false;
}

void UFortLevelStreamComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortLevelStreamComponent, LevelStreamingData);
}

UFortLevelStreamComponent::UFortLevelStreamComponent() {
    bAutoLoadLevel = false;
    bAllowUnload = false;
}
