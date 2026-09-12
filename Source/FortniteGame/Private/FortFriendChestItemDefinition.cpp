#include "FortFriendChestItemDefinition.h"

UFortFriendChestItemDefinition::UFortFriendChestItemDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    InstancedDetail = NULL;
    GrantsPerPeriod = 0;
    GrantsPerSeason = 0;
    CatchupBankSize = 0;
    bAllowSeasonCatchup = false;
    TimePeriod = EFriendChestTimePeriod::Daily;
}
