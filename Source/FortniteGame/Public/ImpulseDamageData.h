#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "ImpulseDamageData.generated.h"

USTRUCT(BlueprintType)
struct FImpulseDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinVelocityForDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PercentageOfDamage;
    
    FORTNITEGAME_API FImpulseDamageData();
};
