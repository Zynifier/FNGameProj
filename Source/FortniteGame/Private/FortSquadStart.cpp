#include "FortSquadStart.h"

FTransform AFortSquadStart::GetPlayerStartTransform(const int32 Index) const {
    return FTransform{};
}

FGameplayTagContainer AFortSquadStart::GetSquadStartGameplayTags() const {
    return FGameplayTagContainer{};
}

AFortSquadStart::AFortSquadStart() {
    PlayerStarts.AddDefaulted(4);
}

