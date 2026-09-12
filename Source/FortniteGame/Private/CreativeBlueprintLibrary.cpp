#include "CreativeBlueprintLibrary.h"

TArray<FVector> UCreativeBlueprintLibrary::SegmentSphereIntersection(const FVector& SegmentStart, const FVector& SegmentEnd, const FVector& SphereOrigin, const float SphereRadius) {
    return TArray<FVector>();
}

TArray<FVector> UCreativeBlueprintLibrary::SegmentCylinderIntersection(const FVector& SegmentStart, const FVector& SegmentEnd, const FVector& CylinderOrigin, const float CylinderRadius) {
    return TArray<FVector>();
}

void UCreativeBlueprintLibrary::LogHUDMessageWarning(const FString& inString) {
}

FName UCreativeBlueprintLibrary::GetNameFromCollisionProfile(FCollisionProfileName InCollisionProfile) {
    return NAME_None;
}

UFortMinigameManager* UCreativeBlueprintLibrary::GetMinigameManager(AController* Controller, ESubGame SubGame) {
    return NULL;
}

bool UCreativeBlueprintLibrary::IsBlackListedItemDefinition(const AFortVolumeManager* VolumeManager, const UFortItemDefinition* ItemDefinition) {
    return false;
}

bool UCreativeBlueprintLibrary::IsUseRestrictionComponentDebuggingEnabled() {
    return false;
}

bool UCreativeBlueprintLibrary::IsWhiteListedItemDefinition(const UFortItemDefinition* ItemDefinition) {
    return false;
}

void UCreativeBlueprintLibrary::LogCreativeStreamingMessage(const FString& Message) {
}

void UCreativeBlueprintLibrary::UpdateInGameMapHeatmapTexture(const UObject* WorldContextObject) {
}

FFortCreativeAnimateFloatCurveResult UCreativeBlueprintLibrary::AnimateFloatCurve(const float DeltaTime, UPARAM(Ref) float& CurrentTime, UCurveFloat* FCurve, const float TotalAnimationTime, const bool bInvertTime) {
    return FFortCreativeAnimateFloatCurveResult{};
}

UCreativeBlueprintLibrary::UCreativeBlueprintLibrary() {
}

