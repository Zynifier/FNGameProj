#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponOverheatState.h"
#include "OnOverheatStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverheatStateChanged, EFortWeaponOverheatState, OverheatState);
