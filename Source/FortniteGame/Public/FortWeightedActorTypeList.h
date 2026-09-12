#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Templates/SubclassOf.h"
#include "FortWeightedActorTypeList.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFortWeightedActorTypeList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, FScalableFloat> WeightedClassTypes;
    
public:
    FORTNITEGAME_API FFortWeightedActorTypeList();
};
