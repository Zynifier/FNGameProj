#include "FortAthenaAIRuntimeParameters_AIBotConvert.h"

UFortAthenaAIRuntimeParameters_AIBotConvert::UFortAthenaAIRuntimeParameters_AIBotConvert() {
    bShouldLeashFollowConverter = false;
    bShouldScanAroundWhenWaiting = false;
    bShouldMoveTowardsConverter = false;
    bShouldTeleportTowardsConverter = false;
    bCanDanceWithConverter = false;
    SkillLevelOverride = 0.0f;
    InnerLeashRadius = 0.0f;
    OuterLeashRadius = 0.0f;
    LeashFollowActorUpdateRate = 0.0f;
    MoveTowardsConverterInnerDistanceSq = 0.0f;
    MoveTowardsConverterOuterDistanceSq = 0.0f;
    TeleportTowardsConverterDistanceSq = 0.0f;
    MinDistanceFromConverterWhenTeleported = 0.0f;
}
