#include "CustomCharacterPartAnimInstance_TowerSentinelPack.h"

FVector UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateCompLinearAccScale() {
    return FVector{};
}

FVector UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateCompLinearVelScale() {
    return FVector{};
}

FVector UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateFinalGravity() {
    return FVector{};
}

float UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateIsEmotingAlpha() {
    return 0.0f;
}

float UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateJumpingAlpha() {
    return 0.0f;
}

FVector UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateWindVector() {
    return FVector{};
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateBodyJoints() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateBoneRotators() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateCompLinearScales() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateFinalGravity() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateIsEmotingAlpha() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateJumpingAlpha() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateWindVector() {
}

UCustomCharacterPartAnimInstance_TowerSentinelPack::UCustomCharacterPartAnimInstance_TowerSentinelPack() {
    IsEmotingAlpha = 0.0f;
    JumpingAlpha = 0.0f;
    SkydivingForceScale = 0.0f;
    DanceGravityInflectionAngle = 0.0f;
    IsEmotingAlphaMin = 0.0f;
    IsEmotingAlphaMax = 0.0f;
    JumpingAlphaMin = 0.0f;
    JumpingAlphaMax = 0.0f;
}
