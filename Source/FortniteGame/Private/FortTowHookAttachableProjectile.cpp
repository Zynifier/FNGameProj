#include "FortTowHookAttachableProjectile.h"
#include "Net/UnrealNetwork.h"

void AFortTowHookAttachableProjectile::DestroyProjectile() {
}

FVector AFortTowHookAttachableProjectile::GetRopeAttachLocation() const {
    return FVector{};
}

void AFortTowHookAttachableProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTowHookAttachableProjectile, OwningTowHook);
}

AFortTowHookAttachableProjectile::AFortTowHookAttachableProjectile() {
    OwningTowHook = NULL;
}
