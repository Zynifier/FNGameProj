#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Animation/CachedAnimData.h"
#include "AnimSpinner.h"
#include "EAlphaFromDeltaTypes.h"
#include "PoseDeformationQuery.h"
#include "PoseDeformationQuery_Arms.h"
#include "FortAnimationBlueprintLibrary.generated.h"

class UAnimInstance;
class USkinnedMeshComponent;

class UCustomCharacterPartAnimInstance;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAnimationBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortAnimationBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateAnimSpinner(UPARAM(Ref) FAnimSpinner& SpinInformation, float DeltaSeconds, float NewRotationRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRelevantAnimTimeRemainingFromCachedData(UPARAM(Ref) FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRelevantAnimTimeRemainingFractionFromCachedData(UPARAM(Ref) FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRelevantAnimTimeFromCachedData(UPARAM(Ref) FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAlphaFromReferenceTransformDelta(float& AlphaOutput, float& RawOutput, const USkinnedMeshComponent* SkeletalMeshComponent, const FName BoneName, const FName BaseName, TEnumAsByte<EAlphaFromDeltaTypes::Type> DeltaComponentType, FVector2D InputRange, FVector2D OutputRange, FVector TwistAxis);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetRandomWindRotator(float GameTime, float TimeOffset, float PerlinScale, FRotator Frequency, FRotator Amplitude, FRotator Offset);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetRandomWindVector(float GameTime, float TimeOffset, float PerlinScale, FVector Frequency, FVector Amplitude, FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    static float PoseReader(const USkeletalMeshComponent* MeshComponent, FName StartJoint, FName EndJoint, FName PoseJoint, float Angle, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    static FVector ReorientWindVector(FVector WindVector, const UCustomCharacterPartAnimInstance* PartAnimInstance, FName JointName);
    
    UFUNCTION(BlueprintCallable)
    static void QueryPoseDeformation(const USkeletalMeshComponent* MeshComponent, UPARAM(Ref) FPoseDeformationQuery& PoseDeformationQuery);
    
    UFUNCTION(BlueprintCallable)
    static void QueryPoseDeformation_Arms(const USkeletalMeshComponent* MeshComponent, UPARAM(Ref) FPoseDeformationQuery_Arms& ArmsDeformationQuery);
    
};

