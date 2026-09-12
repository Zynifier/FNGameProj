#include "FortAthenaMutator_MusicEvents.h"

void AFortAthenaMutator_MusicEvents::HandleWaitingOnPlacement_Local(AFortPlayerStateAthena* Sender, int32 NewPlace) {
}

void AFortAthenaMutator_MusicEvents::HandleWaitingOnPlacement_Spectate() {
}

void AFortAthenaMutator_MusicEvents::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_MusicEvents::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep NewStep) {
}

AFortAthenaMutator_MusicEvents::AFortAthenaMutator_MusicEvents() {
    CrossfadeTime = 0.0f;
}
