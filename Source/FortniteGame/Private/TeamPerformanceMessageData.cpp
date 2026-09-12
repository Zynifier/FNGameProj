#include "TeamPerformanceMessageData.h"

FTeamPerformanceMessageData::FTeamPerformanceMessageData() {
    TrackingStat = ETeamPerformanceMessageTrackingStat::TeamScore;
    ReplicationType = ETeamPerformanceMessageReplicationType::VariableReplication;
    NumberOfTeamsToTriggerFor = 0;
    bEnabledInternal = false;
    bCanStillBeTriggered = false;
    MessageIndex = 0;
}
