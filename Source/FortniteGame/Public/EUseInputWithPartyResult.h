#pragma once
#include "CoreMinimal.h"
#include "EUseInputWithPartyResult.generated.h"

UENUM(BlueprintType)
enum class EUseInputWithPartyResult : uint8 {
    Success,
    LocalPlayerNeedsToAllowCrossplay,
    LocalPlayerRestricted,
    RemotePlayerRestricted,
    UnknownFailure,
};
