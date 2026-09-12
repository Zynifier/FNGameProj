#include "FortWeaponSettingsComponent.h"
#include "Net/UnrealNetwork.h"

void UFortWeaponSettingsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortWeaponSettingsComponent, bPickAxe);
    DOREPLIFETIME(UFortWeaponSettingsComponent, ItemDefinition);
    DOREPLIFETIME(UFortWeaponSettingsComponent, TeamIndex);
    DOREPLIFETIME(UFortWeaponSettingsComponent, ClassSlot);
    DOREPLIFETIME(UFortWeaponSettingsComponent, RangeMultiplier);
    DOREPLIFETIME(UFortWeaponSettingsComponent, ConeAngleMultiplier);
    DOREPLIFETIME(UFortWeaponSettingsComponent, Enabled);
    DOREPLIFETIME(UFortWeaponSettingsComponent, OverriddenPropertyNames);
}

UFortWeaponSettingsComponent::UFortWeaponSettingsComponent() {
    bPickAxe = false;
    ItemDefinition = NULL;
    TeamIndex = 0;
    ClassSlot = 0;
    RangeMultiplier = 0.0f;
    ConeAngleMultiplier = 0.0f;
    Enabled = 0;
    DataSource = NULL;
}
