#pragma once
#include "CoreMinimal.h"
#include "UCPTypes.generated.h"

UENUM(BlueprintType)
namespace UCPTypes {
    enum Type {
        UCPAudio,
        UCPVideo,
        UCPBoth,
        UCPNone,
    };
}
