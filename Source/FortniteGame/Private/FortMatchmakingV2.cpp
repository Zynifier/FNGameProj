#include "FortMatchmakingV2.h"

float UFortMatchmakingV2::GetMatchmakingAttemptThrottleTime() {
    return 0.0f;
}

UFortMatchmakingV2::UFortMatchmakingV2() {
    MMSVersionCompatability = TEXT("*");
    MMSTicketURLClient = TEXT("/api/game/v2/matchmakingservice/ticket/player/`id");
    MMSPingInterval = 1;
    bCustomKeyEnabled = false;
    UpdateCheckInterval = 1;
    bEnablePrivateMatchUpdateCheck = true;
    MatchmakingRetryInterval = 1;
    MaxMatchmakingRetries = 0;
    AltDomainRecords.AddDefaulted(8);
    LogSubmitChance = 1;
    bSubmitSecondaryLogs = false;
    LogTailKb = 0;
    WhitelistedPlaylistsForActiveCheck.AddDefaulted(1);
    bUseHotfixVersionForPlaylistRevision = false;
}

