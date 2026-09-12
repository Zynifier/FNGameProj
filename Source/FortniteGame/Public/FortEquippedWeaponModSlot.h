#pragma once
#include "CoreMinimal.h"
#include "FortAbilitySetHandle.h"
#include "FortEquippedWeaponModSlot.generated.h"

class UFortWeaponModItemDefinition;

USTRUCT(BlueprintType)
struct FFortEquippedWeaponModSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAbilitySetHandle EquippedAbilitySetHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWeaponModItemDefinition* EquippedWeaponMod;
    
    FORTNITEGAME_API FFortEquippedWeaponModSlot();
};
