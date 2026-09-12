#include "FortWeaponRangedTowHook.h"
#include "Net/UnrealNetwork.h"

void AFortWeaponRangedTowHook::AttachToTowHook(AActor* ActorToAttach) {
}

void AFortWeaponRangedTowHook::DetachActorsFromTowHook() {
}

void AFortWeaponRangedTowHook::OnRep_TowHook() {
}

void AFortWeaponRangedTowHook::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeaponRangedTowHook, TowHook);
}

AFortWeaponRangedTowHook::AFortWeaponRangedTowHook() {
    TowHook = NULL;
}
