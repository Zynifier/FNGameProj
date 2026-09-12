#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortWeakPointHitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortWeakPointHit, const FVector&, HitLocation, const FVector&, HitNormal);
