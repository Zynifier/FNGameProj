#pragma once
#include "CoreMinimal.h"
#include "RotatorErrorCheck.generated.h"

USTRUCT(BlueprintType)
struct FRotatorErrorCheck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestFromAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToleratedErrorInDegrees;
    
    FORTNITEGAME_API FRotatorErrorCheck();
};
