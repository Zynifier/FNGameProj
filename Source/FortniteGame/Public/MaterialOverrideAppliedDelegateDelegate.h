#pragma once
#include "CoreMinimal.h"
#include "FortPawnMaterialOverride.h"
#include "MaterialOverrideAppliedDelegateDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMaterialOverrideAppliedDelegate, AFortPlayerPawn*, AffectedPawn, const FFortPawnMaterialOverride&, AppliedOverride);
