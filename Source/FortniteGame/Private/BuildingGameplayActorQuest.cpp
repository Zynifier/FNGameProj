#include "BuildingGameplayActorQuest.h"

FGameplayTagContainer ABuildingGameplayActorQuest::GetStaticGameplayTags() {
    return FGameplayTagContainer{};
}

ABuildingGameplayActorQuest::ABuildingGameplayActorQuest() {
    bSuppressSimpleInteractionWidgetForTouch = true;
}

