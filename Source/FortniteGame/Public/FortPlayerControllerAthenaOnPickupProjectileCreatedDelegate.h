#pragma once
#include "CoreMinimal.h"
#include "FortPlayerControllerAthenaOnPickupProjectileCreatedDelegate.generated.h"

class AFortPlayerControllerAthena;
class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortPlayerControllerAthenaOnPickupProjectileCreated, const AFortPlayerControllerAthena*, PlayerController, const UFortItemDefinition*, ItemDefinition);
