#include "FortWorldMultiItemXPComponent.h"

UFortWorldMultiItem* UFortWorldMultiItemXPComponent::GetOwningMultiItem() const {
    return NULL;
}

AFortPawn* UFortWorldMultiItemXPComponent::GetOwningPawn() const {
    return NULL;
}

AFortWeapon* UFortWorldMultiItemXPComponent::GetWeaponActor() const {
    return NULL;
}

UFortWorldMultiItemXPComponent::UFortWorldMultiItemXPComponent() {
    OwningWeapon = NULL;
    OwnerPawn = NULL;
    OwningMultiItem = NULL;
}
