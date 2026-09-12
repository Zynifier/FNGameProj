#include "SpecialEventHelpers.h"

AFortAthenaMutator_SpecialRelevancy* USpecialEventHelpers::GetSpecialRelevancyMutator(const UObject* WorldContextObject) {
    return NULL;
}

bool USpecialEventHelpers::HasSeenForcedIntro(AController* Player) {
    return false;
}

void USpecialEventHelpers::MarkAccountAsHavingSeenForcedIntro(AFortPlayerController* Controller, bool bLocalOnly) {
}

USpecialEventHelpers::USpecialEventHelpers() {
}
