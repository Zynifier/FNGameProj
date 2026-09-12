#include "FortControllerRequirement_HasAchievedObjectiveCount.h"

TArray<FName> UFortControllerRequirement_HasAchievedObjectiveCount::Editor_GetValidObjectives() const {
    return TArray<FName>();
}

UFortControllerRequirement_HasAchievedObjectiveCount::UFortControllerRequirement_HasAchievedObjectiveCount() {
    bResolveQuestDetailsFromServiceProvider = false;
}
