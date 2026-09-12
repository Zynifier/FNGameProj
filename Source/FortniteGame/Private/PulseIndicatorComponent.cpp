#include "PulseIndicatorComponent.h"

void UPulseIndicatorComponent::SetDisplayTeam(uint8 NewDisplayTeam) {
}

void UPulseIndicatorComponent::SetIndicatingController(AFortPlayerControllerAthena* Controller) {
}

void UPulseIndicatorComponent::StartPulseMarkers() {
}

void UPulseIndicatorComponent::StopPulseMarkers() {
}

bool UPulseIndicatorComponent::CanUseComponentIndicators() const {
    return false;
}

UPulseIndicatorComponent::UPulseIndicatorComponent() {
    PlayerPingSound = NULL;
    IndicatingController = NULL;
}
