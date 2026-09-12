#pragma once
#include "CoreMinimal.h"
#include "FortPlayerPawnObjectReference.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFortPlayerPawnObjectReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TrackedObject;
    
    FORTNITEGAME_API FFortPlayerPawnObjectReference();
};
