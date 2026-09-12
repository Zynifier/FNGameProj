#pragma once
#include "CoreMinimal.h"
#include "DampedSpringConfig.generated.h"

USTRUCT(BlueprintType)
struct FDampedSpringConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAccel;
    
    FORTNITEGAME_API FDampedSpringConfig();
};
