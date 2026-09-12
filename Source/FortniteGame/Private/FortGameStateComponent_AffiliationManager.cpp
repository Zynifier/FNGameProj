#include "FortGameStateComponent_AffiliationManager.h"
#include "Net/UnrealNetwork.h"

void UFortGameStateComponent_AffiliationManager::OnRep_FactionInfos() {
}

void UFortGameStateComponent_AffiliationManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortGameStateComponent_AffiliationManager, FactionInfos);
}

UFortGameStateComponent_AffiliationManager::UFortGameStateComponent_AffiliationManager() {
}
