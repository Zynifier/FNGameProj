#include "UrgentQuestData.h"

FUrgentQuestData::FUrgentQuestData() {
    TotalEventTime = 0.0f;
    bQuestCompleteOnTimeExpiration = false;
    bDisplayHUDData = false;
    SortPriority = 0;
    bReverseProgressBar = false;
    bShowBountyThreatInformation = false;
    bShowBountyPriceAndDistance = false;
    DisplayPlayer = NULL;
    AcceptingPlayer = NULL;
    BountyPriceImage = NULL;
}
