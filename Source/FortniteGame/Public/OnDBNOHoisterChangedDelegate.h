#pragma once
#include "CoreMinimal.h"
#include "EFortDBNOCarryEvent.h"
#include "OnDBNOHoisterChangedDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDBNOHoisterChanged, EFortDBNOCarryEvent, CarryEvent, AFortPlayerPawn*, HoisterPawn, AFortPlayerPawn*, HoisteePawn);
