#pragma once
#include "CoreMinimal.h"
#include "FortWeaponModSlot.generated.h"

class UFortWeaponModItemDefinition;

USTRUCT(BlueprintType)
struct FFortWeaponModSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponModItemDefinition* WeaponMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDynamic;
    
    FORTNITEGAME_API FFortWeaponModSlot();
};
