#include "FortAthenaMutator_HUDElementVisibility.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_HUDElementVisibility::OnClientEnteredVolume(APlayerState* Client, AFortVolume* Volume) {
}

void AFortAthenaMutator_HUDElementVisibility::OnClientPlayModeChanged(AFortMinigame* Minigame, bool bIsInPlayMode) {
}

void AFortAthenaMutator_HUDElementVisibility::OnCreativeLinkedVolumeChangedForPC(AFortVolume* Volume) {
}

void AFortAthenaMutator_HUDElementVisibility::OnMinigameSetUp(AFortMinigame* Minigame) {
}

void AFortAthenaMutator_HUDElementVisibility::OnRep_HUDVisibiliyModifierChanged() {
}

void AFortAthenaMutator_HUDElementVisibility::OnVolumePlaysetChanged(UFortPlaysetItemDefinition* PlaysetItemDef) {
}

void AFortAthenaMutator_HUDElementVisibility::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_HUDElementVisibility, HUDElementVisbilityData);
}

AFortAthenaMutator_HUDElementVisibility::AFortAthenaMutator_HUDElementVisibility() {
}
