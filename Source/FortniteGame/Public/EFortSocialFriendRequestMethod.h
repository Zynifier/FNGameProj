#pragma once
#include "CoreMinimal.h"
#include "EFortSocialFriendRequestMethod.generated.h"

UENUM(BlueprintType)
enum class EFortSocialFriendRequestMethod : uint8 {
    LobbySuggestion,
    LobbyPlayerPanel,
    MassImportPlatformFriends,
    AutoImportPlatformFriends,
    PartyContextRewriteHelper,
};
