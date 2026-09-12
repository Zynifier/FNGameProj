#include "FortWeakPointComponent.h"

void UFortWeakPointComponent::NetMulticast_HandleOwnerDamaged_Implementation(FGameplayTag MatchingTag, const FGameplayEventData Payload) {
}

void UFortWeakPointComponent::SetWeakPointsEnabled(bool bEnabled) {
}

UFortWeakPointComponent::UFortWeakPointComponent() {
    PrimarySurfaceType = SurfaceType_Default;
    bUseComplexForWeakSpots = false;
    bWeakPointsEnabled = false;
}
