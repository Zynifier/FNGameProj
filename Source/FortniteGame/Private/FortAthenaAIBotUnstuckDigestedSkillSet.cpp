#include "FortAthenaAIBotUnstuckDigestedSkillSet.h"

UFortAthenaAIBotUnstuckDigestedSkillSet::UFortAthenaAIBotUnstuckDigestedSkillSet() {
    bCanTeleportWhenStuck = true;
    bCanTeleportWhenStuckWithPlayerAround = true;
    MaxDistanceSqToPlayerToTeleport = 1;
    PlayerToPhoebeAngleVisibilityConeToTeleport = 1;
    TimeBetweenPartialPathToConsiderPathStuck = 1;
    ConsecutivePartialPathCountToConsiderPathStuck = 0;
    DistanceSqBetweenBlockedPathToConsiderPathStuck = 1;
    DistanceBetweenSampleToConsiderPathStuckInWater = 1;
    TimeBetweenSampleToConsiderPathStuckInWater = 1;
    DistanceBetweenSampleToConsiderPathStuckOnGround = 1;
    TimeBetweenSampleToConsiderPathStuckOnGround = 1;
    ConsecutiveBlockedPathCountToConsiderPathStuck = 0;
    MaxSafeZoneIndexToAllowTeleport = 0;
    TimeToBreakBlockingDoor = 0.0f;
    TimeToCloseBlockingDoor = 0.0f;
    RiverbedObstacleCollisionNormalThreshold = 0.0f;
    MaxSteeringDirectionAttempts = 0;
    SteeringAttemptDuration = 0.0f;
}

