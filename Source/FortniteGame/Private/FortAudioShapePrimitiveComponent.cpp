#include "FortAudioShapePrimitiveComponent.h"

UAudioComponent* UFortAudioShapePrimitiveComponent::GetEdgeAudioComponent() {
    return NULL;
}

UAudioComponent* UFortAudioShapePrimitiveComponent::GetInsideAudioComponent() {
    return NULL;
}

bool UFortAudioShapePrimitiveComponent::GetIsPlayerInside() const {
    return false;
}

UFortAudioShapePrimitiveComponent::UFortAudioShapePrimitiveComponent() {
    SoundOnEdge = NULL;
    SoundOnInside = NULL;
}
