#pragma once
#include "CoreMinimal.h"
#include "EFortActivityValidationResult.generated.h"

UENUM(BlueprintType)
enum class EFortActivityValidationResult : uint8 {
    NotFound,
    InvalidKeyTooShort,
    InvalidKeyCharacters,
    IneligibleParty,
    IslandPrivate,
    CreativePublishedSuccess,
};
