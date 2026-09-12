#include "FortGameActivity.h"

void UFortGameActivity::AsyncPreviewLoadComplete() {
}

void UFortGameActivity::OnLoadedLinkQueryComplete(bool bSuccess, const FString& ErrorMessage, const FCreativeLoadedLinkData& LinkData) {
}

void UFortGameActivity::OnPreviewRetrieved(bool bSuccess, UTexture2DDynamic* InThumbnailTexture) {
}

bool UFortGameActivity::GetIsFavorite() const {
    return false;
}

UFortGameActivity::UFortGameActivity() {
    Preview = NULL;
    Version = 0;
    Matchmaking_MaximumNumberOfPlayers = 0;
    Matchmaking_PlayersPerTeam = 0;
    Matchmaking_MMSType = EMMSRulePreset::RespectParties;
    StoredInstance = NULL;
    Type = EFortGameActivityType::Undefined;
    Matchmaking_MMSPrivacy = EMMSPrivacy::Public;
}
