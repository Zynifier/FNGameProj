#pragma once
#include "CoreMinimal.h"
#include "EMcpSubscriptionState.generated.h"

UENUM(BlueprintType)
enum class EMcpSubscriptionState : uint8 {
    Inactive,
    Active,
    Canceled,
    PaymentProcessError,
    BlockedBenefits,
    Unknown,
};
