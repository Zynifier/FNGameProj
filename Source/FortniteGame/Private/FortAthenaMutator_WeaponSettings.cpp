#include "FortAthenaMutator_WeaponSettings.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_WeaponSettings::AddDataSourceForClassSlot(UFortItemDefinition* ItemDefinition, const uint8 ClassSlot, UObject* DataSource) {
}

void AFortAthenaMutator_WeaponSettings::AddDataSourceForTeam(UFortItemDefinition* ItemDefinition, const uint8 TeamIndex, UObject* DataSource) {
}

void AFortAthenaMutator_WeaponSettings::RemoveDataSource(UObject* DataSource) {
}

void AFortAthenaMutator_WeaponSettings::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_WeaponSettings, WeaponSettings);
}

AFortAthenaMutator_WeaponSettings::AFortAthenaMutator_WeaponSettings() {
}
