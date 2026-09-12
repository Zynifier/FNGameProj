#pragma once
#include "CoreMinimal.h"
#include "FortControllerRequirement.h"
#include "RotatorErrorCheck.h"
#include "FortControllerRequirement_CheckPitchYawRoll.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_CheckPitchYawRoll : public UFortControllerRequirement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotatorErrorCheck PitchErrorCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotatorErrorCheck YawErrorCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotatorErrorCheck RollErrorCheck;
    
public:
    UFortControllerRequirement_CheckPitchYawRoll();
    
};
