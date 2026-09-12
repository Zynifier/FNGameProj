#include "FortFactionInfo.h"

FFortFactionInfo::FFortFactionInfo() {
    DefaultAttitude = EFortFactionAttitude::Friendly;
    bHasSpecificRelations = false;
    bAreFactionMemberAllies = false;
    bShouldSpecificRelationsApplyToEntireFaction = false;
    bMembersCanResetSpecificRelation = false;
    ResetSpecificRelationUnawareDelay = 0.0f;
    ResetSpecificRelationNoDamageDelay = 0.0f;
}
