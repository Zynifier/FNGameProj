#include "FortSphereEdgeAudioComponent.h"

void UFortSphereEdgeAudioComponent::SetRadius(float InRadius) {
}

UFortSphereEdgeAudioComponent::UFortSphereEdgeAudioComponent() {
    Radius = 1;
    FadeOutDuration = 1;
    SphereEdgeAudioComponent = NULL;
    SphereInsideAudioComponent = NULL;
}

