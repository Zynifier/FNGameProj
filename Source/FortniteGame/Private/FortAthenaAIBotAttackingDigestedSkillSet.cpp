#include "FortAthenaAIBotAttackingDigestedSkillSet.h"

UFortAthenaAIBotAttackingDigestedSkillSet::UFortAthenaAIBotAttackingDigestedSkillSet() {
    MaxDistanceToEngageMeleeSq = 1;
    bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon = false;
    MaxDistanceToConsiderAsAnAlternateTargetSq = 1;
    bEnableWTFBehavior = true;
    MinCooldownDelayBetweenMeleeAttackAttempts = 1;
    MaxCooldownDelayBetweenMeleeAttackAttempts = 1;
    bEnableAlternateTargetRequiredTags = false;
    MinThrowableCount = 0;
    MaxThrowableCount = 0;
    ThrowableCooldownMin = 0.0f;
    ThrowableCooldownMax = 0.0f;
    ThrowableMinimumRangeSquared = 0.0f;
    bThrowableEvaluatorActive = false;
}

