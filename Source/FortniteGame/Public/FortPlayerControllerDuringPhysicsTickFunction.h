#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "FortPlayerControllerDuringPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerControllerDuringPhysicsTickFunction : public FActorTickFunction {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortPlayerControllerDuringPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FFortPlayerControllerDuringPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FFortPlayerControllerDuringPhysicsTickFunction> {
    enum {
        WithCopy = false
    };
};
