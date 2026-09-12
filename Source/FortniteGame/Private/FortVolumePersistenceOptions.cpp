#include "FortVolumePersistenceOptions.h"
#include "Net/UnrealNetwork.h"

void UFortVolumePersistenceOptions::UnregistryFortCreativePersistenceComponent(const UFortCreativePersistenceComponent* FortCreativePersistenceComponent) {
}

UFortCreativePersistenceComponent* UFortVolumePersistenceOptions::GetFirstOrderedPersistenceComponent() const {
    return NULL;
}

bool UFortVolumePersistenceOptions::IsPlayerClearDataOptionAllowed() const {
    return false;
}

bool UFortVolumePersistenceOptions::IsTherePersistenceDevices() const {
    return false;
}

void UFortVolumePersistenceOptions::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVolumePersistenceOptions, bAllowPlayerToClearData);
    DOREPLIFETIME(UFortVolumePersistenceOptions, PersistenceDevicesCount);
}

void UFortVolumePersistenceOptions::RegistryFortCreativePersistenceComponent(const UFortCreativePersistenceComponent* FortCreativePersistenceComponent, const FFortCreativePersistenceOptions& FortCreativePersistenceOptions) {
}

void UFortVolumePersistenceOptions::UpdatePersistenceComponent(const UFortCreativePersistenceComponent* FortCreativePersistenceComponent, const FFortCreativePersistenceOptions& FortCreativePersistenceOptions) {
}

UFortVolumePersistenceOptions::UFortVolumePersistenceOptions() {
    bAllowPlayerToClearData = false;
    PersistenceDevicesCount = 0;
}
