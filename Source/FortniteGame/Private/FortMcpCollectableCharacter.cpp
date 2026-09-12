#include "FortMcpCollectableCharacter.h"

EFortCollectedState UFortMcpCollectableCharacter::AddToPlayerCollection(const AFortPlayerController* FPC, const FGameplayTag& Variant, const FFortMcpCollectedCharacterProperties& Props, const FGameplayTagContainer& ContextTags, ECharacterEncounterType EncounterType) {
    return EFortCollectedState::Unknown;
}

void UFortMcpCollectableCharacter::SavePlayerQuestUpdate(const AFortPlayerController* FPC, const FGameplayTag& Variant, ESavePlayerQuestUpdate Update) {
}

UFortMcpCollectableCharacter::UFortMcpCollectableCharacter() {
}
