#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLootedContainerDelegate.generated.h"

class ABuildingContainer;
class AFortPlayerPawnAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerLootedContainer, AFortPlayerPawnAthena*, FortPlayerPawnAthena, ABuildingContainer*, LootedContainer);
