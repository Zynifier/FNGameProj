#include "BuildingGameplayActorPropQuest.h"

void ABuildingGameplayActorPropQuest::QuestLog(const FString& StringToLog) {
}

FGameplayTagContainer ABuildingGameplayActorPropQuest::GetQuestTargetTags() const {
    return FGameplayTagContainer{};
}

ABuildingGameplayActorPropQuest::ABuildingGameplayActorPropQuest() {
    bEnableConversationComponent = false;
    ConsolidatedQuestComponent = NULL;
    QuestIconComponent = NULL;
}
