#include "FortAbilityTask_WaitForCustomCharacterParts.h"

UFortAbilityTask_WaitForCustomCharacterParts* UFortAbilityTask_WaitForCustomCharacterParts::WaitForCustomCharacterPartsReady(UGameplayAbility* OwningAbility, TArray<TSoftObjectPtr<UCustomCharacterPart>> CustomCharacterParts) {
    return NULL;
}

void UFortAbilityTask_WaitForCustomCharacterParts::OnFinishedCharacterCustomizationCallback(AFortPlayerPawn* InPawn) {
}

UFortAbilityTask_WaitForCustomCharacterParts::UFortAbilityTask_WaitForCustomCharacterParts() {
    FortPlayerPawn = NULL;
}
