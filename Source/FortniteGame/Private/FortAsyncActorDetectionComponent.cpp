#include "FortAsyncActorDetectionComponent.h"

UFortAsyncActorDetectionComponent::UFortAsyncActorDetectionComponent() {
    CollisionChannel = ECC_WorldStatic;
    TraceLength = 0.0f;
}
