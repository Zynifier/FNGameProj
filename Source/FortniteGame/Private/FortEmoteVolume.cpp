#include "FortEmoteVolume.h"

TArray<FEmoteActionBinding> AFortEmoteVolume::GetGrantedEmotes() const {
    return TArray<FEmoteActionBinding>();
}

FName AFortEmoteVolume::GetRequiredObjectiveName() const {
    return NAME_None;
}

UFortQuestItemDefinition* AFortEmoteVolume::GetRequiredQuest() const {
    return NULL;
}

bool AFortEmoteVolume::IsPlayerOverlapping(const AFortPlayerController* PlayerController) const {
    return false;
}

bool AFortEmoteVolume::WasPlayerGrantedEmotes(const AFortPlayerController* PlayerController) const {
    return false;
}

AFortEmoteVolume::AFortEmoteVolume() {
    RequiredQuest = NULL;
    bAllowGrantingUnownedEmotes = false;
    bUseEmoteCategory = false;
    bDisplayExclusive = false;
}
