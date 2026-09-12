#include "FortPhysicsTowHook.h"
#include "Net/UnrealNetwork.h"

void AFortPhysicsTowHook::OnRep_ReplicatedAttachStates() {
}

bool AFortPhysicsTowHook::GetEndPoint(FVector& OutEndPoint) const {
    return false;
}

bool AFortPhysicsTowHook::GetStartPoint(FVector& OutStartPoint) const {
    return false;
}

void AFortPhysicsTowHook::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPhysicsTowHook, ReplicatedAttachStates);
}

AFortPhysicsTowHook::AFortPhysicsTowHook() {
    AlwaysAttachedActor = NULL;
}
