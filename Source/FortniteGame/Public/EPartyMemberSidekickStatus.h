#pragma once
#include "CoreMinimal.h"
#include "EPartyMemberSidekickStatus.generated.h"

UENUM(BlueprintType)
enum class EPartyMemberSidekickStatus : uint8 {
    None,
    Linked,
    Connected,
};
