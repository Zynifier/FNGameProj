#pragma once
#include "CoreMinimal.h"
#include "PoseDeformationQuery.h"
#include "PoseDeformationQueryResults_Arms.h"
#include "PoseDeformationQuery_Arms.generated.h"

USTRUCT(BlueprintType)
struct FPoseDeformationQuery_Arms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPoseDeformationQueryResults_Arms QueryResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseDeformationQuery ArmUpL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseDeformationQuery ArmUpR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseDeformationQuery ArmForwardL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseDeformationQuery ArmForwardR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseDeformationQuery ArmBackL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseDeformationQuery ArmBackR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseDeformationQuery ArmForwardUpL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseDeformationQuery ArmForwardUpR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseDeformationQuery ArmForwardDownL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseDeformationQuery ArmForwardDownR;
    
    FORTNITEGAME_API FPoseDeformationQuery_Arms();
};
