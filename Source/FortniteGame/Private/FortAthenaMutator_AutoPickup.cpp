#include "FortAthenaMutator_AutoPickup.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_AutoPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupDefaultItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupAmmoItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupConsumableItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupGadgetItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupTrapItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupWeaponItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupWorldResourceItems);
}

AFortAthenaMutator_AutoPickup::AFortAthenaMutator_AutoPickup() {
    AutoPickupDefaultItems = 0;
    AutoPickupAmmoItems = 0;
    AutoPickupConsumableItems = 0;
    AutoPickupGadgetItems = 0;
    AutoPickupTrapItems = 0;
    AutoPickupWeaponItems = 0;
    AutoPickupWorldResourceItems = 0;
}
