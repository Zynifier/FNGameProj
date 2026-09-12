#include "FortSocialManager.h"

UFortSocialManager::UFortSocialManager() {
    SocialImportPlatform = ESocialImportPanelPlatform::Facebook;
    bTutorialCompleted = false;
    bLeftLastPartyFromGameDisconnect = false;
    LocalTeam = NULL;
    CurrentJoinAndSpectateTarget = NULL;
    bEnablePartyJoinReturnToMainMenu = false;
    PendingQueryPartyJoinabilityResultTimeout = 0.0;
}

