#include "FortInviteSessionParams.h"

FFortInviteSessionParams::FFortInviteSessionParams() {
    State = EMatchmakingState::NotMatchmaking;
   
    LastBeaconResponse = EPartyReservationResult::NoResult;
}

