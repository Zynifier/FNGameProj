#pragma once
#include "CoreMinimal.h"
#include "ECurieManagerComponentPriority.generated.h"

UENUM()
enum class ECurieManagerComponentPriority : uint8 {
    Priority_1 = 0x1,
    Priority_2,
    Priority_3,
    Priority_4,
    Priority_5,
    Priority_6,
    Priority_7,
    Priority_8,
    Priority_9,
    Priority_10,
    Priority_Default,
};
