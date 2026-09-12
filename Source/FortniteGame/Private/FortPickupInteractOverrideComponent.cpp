#include "FortPickupInteractOverrideComponent.h"

int32 UFortPickupInteractOverrideComponent::GetPriority() const {
    return 0;
}

UFortPickupInteractOverrideComponent::UFortPickupInteractOverrideComponent() {
    Priority = 0;
    ContextOverrideWidget = NULL;
    SecondContextOverrideWidget = NULL;
    bContextOverrideWidgetApplied = false;
}
