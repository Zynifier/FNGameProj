#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "Engine/SpringInterpolator.h"
#include "FortAnimNode_SlopeWarping.h"
#include "SlopeWarpingFootData.h"
#include "SlopeWarpingFootDefinition.h"
#include "FortAnimNode_QuadrupedSlopeWarping.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimNode_QuadrupedSlopeWarping : public FFortAnimNode_SlopeWarping {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference SkeletonRootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference ArmsRootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference ArmsIKFootRootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlopeWarpingFootDefinition> ArmsFeetDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSpineBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorRK4SpringInterpolator ArmsRootBoneOffsetInterpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSlopeWarpingFootData> ArmsFeetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMovementDistBeforeNewTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseMovementComponentFloorInfoInsteadOfTraces: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyAffectSkeletonRootBone: 1;
    
    FORTNITEGAME_API FFortAnimNode_QuadrupedSlopeWarping();
};
