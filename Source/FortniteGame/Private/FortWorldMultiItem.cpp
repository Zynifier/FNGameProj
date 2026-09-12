#include "FortWorldMultiItem.h"

void UFortWorldMultiItem::IncrementItemXP(float IncrementAmount) {
}

void UFortWorldMultiItem::OnOwnerPlayerPawnAbilityActivated(UFortGameplayAbility* GameplayAbility, FGameplayTagContainer AbilityTags) {
}

void UFortWorldMultiItem::OnOwnerPlayerPawnAbilityEndedWithData(const FAbilityEndedData& AbilityEndedData) {
}

void UFortWorldMultiItem::StopDisablingEquipAnimation() {
}

UFortWorldMultiItem::UFortWorldMultiItem() {
    TimeOfLastSwitch = 0.0f;
    bWantsToSwitch = false;
    bTellHasBegun = false;
    bDisableEquipAnimationThisFrame = false;
    CurrentSelectedItemIndex = 0;
    CurrentItemXP = 0.0f;
}
