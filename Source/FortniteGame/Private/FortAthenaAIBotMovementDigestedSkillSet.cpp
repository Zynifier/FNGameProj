#include "FortAthenaAIBotMovementDigestedSkillSet.h"

UFortAthenaAIBotMovementDigestedSkillSet::UFortAthenaAIBotMovementDigestedSkillSet() {
    SlowDownDistance = 1;
    TraversalSpeedEstimation = 1;
    TraversalSpeedEstimationWithThreat = 1;
    GliderDeployMinAngle = 1;
    GliderDeployMaxAngle = 1;
    GliderNoiseMaxDistance = 1;
    GliderNoiseMinDelay = 1;
    GliderNoiseMaxDelay = 1;
    JumpOffMinAngle = 1;
    JumpOffMaxAngle = 1;
    MaxPatrolDistance = 1;
    MaxPatrolDistanceRandomDeviation = 1;
    WobbleProbability = 1;
    MaxDelayBetweenWobblingMovement = 1;
    MaxDelayBetweenWobblingMovementRandomDeviation = 1;
    bAllowSwimWobble = false;
    MaxWobblingDuration = 1;
    MaxWobblingDurationRandomDeviation = 1;
    MaxWobblingIntensity = 1;
    WobblingIntensityDeviation = 1;
    MaxWobblingFrequency = 1;
    WobblingFrequencyDeviation = 1;
    WobblingStickToPathCorridorStrength = 1;
    MaxAfterLaunchedPauseTime = 1;
    AfterLaunchedPauseTimeDeviation = 1;
    bSteerMovementWhenLaunched = true;
    SteerMovementWhenLaunchedDirectionUpdateTime = 1;
    MaxReactionTimeToDangerZone = 1;
    MaxReactionTimeToDangerZoneDeviation = 1;
    bLimitBlockingObstacleAngle = false;
    SwimSprintJumpDelay = 1;
    SwimSprintJumpDelayDeviation = 1;
    SwimUnblockJumpHeightThreshold = 1;
    MoveToRangeAttackMinOffset = 1;
    MoveToRangeAttackMaxOffset = 1;
    LKPMinOffset = 1;
    LKPMaxOffset = 1;
    GliderNoiseMinDistance = 0.0f;
    GliderNoiseDistanceTreshold = 0.0f;
    GliderStopRotationDistance = 0.0f;
    MaxAfterLaunchedFromVortexPauseTime = 0.0f;
    bSwimSprintJumpNav2D = false;
    SandTunnelJumpMinTime = 0.0f;
    SandTunnelJumpMaxTime = 0.0f;
    SandTunnelBurrowedAndHiddenChance = 0.0f;
    SandTunnelBurrowedAndHiddenMinTime = 0.0f;
    SandTunnelBurrowedAndHiddenMaxTime = 0.0f;
}

