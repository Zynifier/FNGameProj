#include "FortControllerRequirement_HasCompletedQuestObjective.h"

TArray<FName> UFortControllerRequirement_HasCompletedQuestObjective::Editor_GetValidObjectives() const {
    return TArray<FName>();
}

UFortControllerRequirement_HasCompletedQuestObjective::UFortControllerRequirement_HasCompletedQuestObjective() {
    bResolveQuestDetailsFromServiceProvider = false;
}
