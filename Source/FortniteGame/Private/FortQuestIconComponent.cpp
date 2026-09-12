#include "FortQuestIconComponent.h"

void UFortQuestIconComponent::OnOwnerCustomUpdateObjective(AFortPlayerController* PlayerController, int32 AchievedCount, int32 RequiredCount) {
}

void UFortQuestIconComponent::OnOwnerQuestNotReady(AFortPlayerController* PlayerController) {
}

void UFortQuestIconComponent::OnOwnerQuestReady(AFortPlayerController* PlayerController) {
}

void UFortQuestIconComponent::PerformVisibilityDistanceCheck() {
}

void UFortQuestIconComponent::SetIcon(UObject* MiniMapIcon) {
}

void UFortQuestIconComponent::SetIconLocationOffset(const FVector& LocationOffset) {
}

void UFortQuestIconComponent::SetIconScale(const FVector2D& IconScale) {
}

void UFortQuestIconComponent::SetIconVisibilityOnMap(const bool bVisible) {
}

void UFortQuestIconComponent::SetIconVisibilityOnMiniMap(const bool bVisible) {
}

void UFortQuestIconComponent::SetViewDistanceRadius(const float ViewDistance) {
}

void UFortQuestIconComponent::SetVisibility(const bool bVisible) {
}

UFortQuestIconComponent::UFortQuestIconComponent() {
    bControlVisibilityFromOwnerQuestObjectiveState = false;
    bInteractiveStateRequiredForVisibility = false;
    ExplicitInteractionTypeToTest = TInteractionType::IT_NoInteraction;
}
