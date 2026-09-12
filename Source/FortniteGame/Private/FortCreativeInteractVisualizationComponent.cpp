#include "FortCreativeInteractVisualizationComponent.h"

void UFortCreativeInteractVisualizationComponent::OnPlayModeChanged(AFortMinigame* InMinigame, bool bIsInPlayMode) {
}

void UFortCreativeInteractVisualizationComponent::SetRadius(const float InInteractRadius) {
}

UShapeComponent* UFortCreativeInteractVisualizationComponent::GetCollisionComponent() const {
    return NULL;
}

float UFortCreativeInteractVisualizationComponent::GetCurrentTime() const {
    return 0.0f;
}

float UFortCreativeInteractVisualizationComponent::GetInteractRadius() const {
    return 0.0f;
}

bool UFortCreativeInteractVisualizationComponent::GetPendingShow() const {
    return false;
}

float UFortCreativeInteractVisualizationComponent::GetVisualizationDiameterDesired() const {
    return 0.0f;
}

float UFortCreativeInteractVisualizationComponent::GetVisualizationDiameterStart() const {
    return 0.0f;
}

UStaticMeshComponent* UFortCreativeInteractVisualizationComponent::GetVisualMeshComponent() const {
    return NULL;
}

bool UFortCreativeInteractVisualizationComponent::HasInteractRadius() const {
    return false;
}

UFortCreativeInteractVisualizationComponent::UFortCreativeInteractVisualizationComponent() {
    CollisionComponentClass = NULL;
    CollisionComponentAreaClass = NULL;
    FloatCurve = NULL;
    StaticMesh = NULL;
    StaticMeshMaterial = NULL;
    TransitionInterval = 0.0f;
    CurrentTime = 0.0f;
    VisualizationDiameterStart = 0.0f;
    VisualizationDiameterDesired = 0.0f;
    InteractRadius = 0.0f;
    bPendingShow = false;
}
