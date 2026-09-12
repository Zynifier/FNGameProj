#pragma once
#include "CoreMinimal.h"
#include "EPlaylistUpdateReason.generated.h"

UENUM(BlueprintType)
enum class EPlaylistUpdateReason : uint8 {
    LocalPlayerJoinedParty,
    LocalPlayerLocationChangedToFrontend,
    LocalPlayerSubgameSelected,
    LocalPlayerLeftParty,
    LocalPlayerDeclinedCrossplayPermission,
    PartyGameSessionKeyChanged,
    PartySquadFillChanged,
    PartyMemberJoined,
    PartyMemberLeft,
    PartyMemberReadinessChanged,
    PartyMemberInGameReadyCheckChanged,
    PartyMemberLocationChanged,
    PartyMemberSpectateAvailabilityChanged,
    PartyMemberSessionJoinInfoChanged,
    ValidatePlaylist_QoSCheckFailed,
    ValidatePlaylist_TournamentEventOver,
    ValidatePlaylist_BlackoutChanged,
    ValidatePlaylist_MatchmakingEventsChanged,
    ValidatePlaylist_TournamentNewEventStarted,
    ValidatePlaylist_TournamentNewEventCountdown,
    ValidatePlaylist_TournamentsChanged,
    ValidatePlaylist_PlayerTournamentDataRefreshed,
    Initialization,
};
