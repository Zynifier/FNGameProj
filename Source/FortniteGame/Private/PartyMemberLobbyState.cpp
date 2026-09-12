#include "PartyMemberLobbyState.h"

FPartyMemberLobbyState::FPartyMemberLobbyState() {
    InGameReadyCheckStatus = EFortPartyMemberReadyCheckStatus::None;
    GameReadiness = EGameReadiness::NotReady;
    ReadyInputType = ECommonInputType::MouseAndKeyboard;
    CurrentInputType = ECommonInputType::MouseAndKeyboard;
    HiddenMatchmakingDelayMax = 0;
    HasPreloadedAthena = false;
}
