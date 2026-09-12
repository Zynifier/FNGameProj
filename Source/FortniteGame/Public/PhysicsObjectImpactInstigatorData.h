#pragma once
#include "CoreMinimal.h"
#include "PhysicsObjectImpactInstigatorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPhysicsObjectImpactInstigatorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ImpactInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeAssigned;
    
    FORTNITEGAME_API FPhysicsObjectImpactInstigatorData();
};
