#include "FactionData.h"

FFactionData::FFactionData() {
    bActive = false;
    DefaultAttitude = EFortFactionAttitude::Friendly;
    bPropagateHostilityToFaction = false;
    bAreFactionMemberAllies = false;
    bShouldSpecificRelationsApplyToEntireFaction = false;
    bMembersCanResetSpecificRelation = false;
}

