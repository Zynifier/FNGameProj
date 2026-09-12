#include "FortInteriorAudioSubsystem.h"

void UFortInteriorAudioSubsystem::SetEnabled(bool bNewEnabled) {
}

FInteriorAudioPlayerInfo UFortInteriorAudioSubsystem::GetPlayerInfo() const {
    return FInteriorAudioPlayerInfo{};
}

UFortInteriorAudioSubsystem::UFortInteriorAudioSubsystem() {
    Settings = NULL;
    FPC = NULL;
    BuildingGrid = NULL;
}

