#include "FortAnimationBlueprintLibrary.h"

void UFortAnimationBlueprintLibrary::UpdateAnimSpinner(FAnimSpinner& SpinInformation, float DeltaSeconds, float NewRotationRate) {
}

float UFortAnimationBlueprintLibrary::GetRelevantAnimTimeRemainingFromCachedData(FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance) {
    return 0.0f;
}

float UFortAnimationBlueprintLibrary::GetRelevantAnimTimeRemainingFractionFromCachedData(FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance) {
    return 0.0f;
}

float UFortAnimationBlueprintLibrary::GetRelevantAnimTimeFromCachedData(FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance) {
    return 0.0f;
}

void UFortAnimationBlueprintLibrary::GetAlphaFromReferenceTransformDelta(float& AlphaOutput, float& RawOutput, const USkinnedMeshComponent* SkeletalMeshComponent, const FName BoneName, const FName BaseName, TEnumAsByte<EAlphaFromDeltaTypes::Type> DeltaComponentType, FVector2D InputRange, FVector2D OutputRange, FVector TwistAxis) {
}

FRotator UFortAnimationBlueprintLibrary::GetRandomWindRotator(float GameTime, float TimeOffset, float PerlinScale, FRotator Frequency, FRotator Amplitude, FRotator Offset) {
    return FRotator{};
}

FVector UFortAnimationBlueprintLibrary::GetRandomWindVector(float GameTime, float TimeOffset, float PerlinScale, FVector Frequency, FVector Amplitude, FVector Offset) {
    return FVector{};
}

float UFortAnimationBlueprintLibrary::PoseReader(const USkeletalMeshComponent* MeshComponent, FName StartJoint, FName EndJoint, FName PoseJoint, float Angle, bool bDrawDebug) {
    return 0.0f;
}

FVector UFortAnimationBlueprintLibrary::ReorientWindVector(FVector WindVector, const UCustomCharacterPartAnimInstance* PartAnimInstance, FName JointName) {
    return FVector{};
}

void UFortAnimationBlueprintLibrary::QueryPoseDeformation(const USkeletalMeshComponent* MeshComponent, UPARAM(Ref) FPoseDeformationQuery& PoseDeformationQuery) {
}

void UFortAnimationBlueprintLibrary::QueryPoseDeformation_Arms(const USkeletalMeshComponent* MeshComponent, UPARAM(Ref) FPoseDeformationQuery_Arms& ArmsDeformationQuery) {
}

UFortAnimationBlueprintLibrary::UFortAnimationBlueprintLibrary() {
}

