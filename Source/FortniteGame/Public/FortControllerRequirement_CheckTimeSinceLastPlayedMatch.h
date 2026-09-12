#pragma once
#include "CoreMinimal.h"
#include "FortControllerRequirement.h"
#include "FortControllerRequirement_CheckTimeSinceLastPlayedMatch.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_CheckTimeSinceLastPlayedMatch : public UFortControllerRequirement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 days;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seconds;
    
public:
    UFortControllerRequirement_CheckTimeSinceLastPlayedMatch();
    
};
