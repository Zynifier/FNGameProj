#include "FortMiniMapComponent_Discoverable.h"
#include "Net/UnrealNetwork.h"

void UFortMiniMapComponent_Discoverable::DisableDefaultVisibilityCanChangeAtRuntime() {
}

void UFortMiniMapComponent_Discoverable::OnRep_NotDiscoveredIcon() {
}

void UFortMiniMapComponent_Discoverable::OnRep_NotDiscoveredIconScale() {
}

void UFortMiniMapComponent_Discoverable::SetMiniMapDiscoveredIcon(UObject* MiniMapIcon) {
}

void UFortMiniMapComponent_Discoverable::SetMiniMapDiscoveredIconScale(const FVector2D& IconScale) {
}

void UFortMiniMapComponent_Discoverable::SetMiniMapNotDiscoveredIconScale(const FVector2D& IconScale) {
}

bool UFortMiniMapComponent_Discoverable::GetDefaultVisibilityCanChangeAtRuntime() const {
    return false;
}

void UFortMiniMapComponent_Discoverable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMiniMapComponent_Discoverable, NotDiscoveredIconScale);
    DOREPLIFETIME(UFortMiniMapComponent_Discoverable, NotDiscoveredIcon);
    DOREPLIFETIME(UFortMiniMapComponent_Discoverable, DefaultVisibility);
}

EMiniMapComponentDiscoverableVisibility UFortMiniMapComponent_Discoverable::GetDefaultVisibility() {
    return EMiniMapComponentDiscoverableVisibility::Unset;
}

void UFortMiniMapComponent_Discoverable::SetDefaultVisibility(const EMiniMapComponentDiscoverableVisibility InVisibility, const bool bClearAllPlayerVisibilityOverrides) {
}

void UFortMiniMapComponent_Discoverable::SetVisibilityForPlayer(AFortPlayerController* PlayerController, EMiniMapComponentDiscoverableVisibility Visibility) {
}

EMiniMapComponentDiscoverableVisibility UFortMiniMapComponent_Discoverable::GetPlayersSetVisibility(const AFortPlayerController* PlayerController) const {
    return EMiniMapComponentDiscoverableVisibility::Unset;
}

EMiniMapComponentDiscoverableVisibility UFortMiniMapComponent_Discoverable::GetVisibilityForPlayer(const AFortPlayerController* PlayerController) const {
    return EMiniMapComponentDiscoverableVisibility::Unset;
}

UFortMiniMapComponent_Discoverable::UFortMiniMapComponent_Discoverable() {
    bDefaultVisibilityCanChangeAtRuntime = false;
    NotDiscoveredIcon = NULL;
    DefaultVisibility = EMiniMapComponentDiscoverableVisibility::Unset;
}
