#pragma once
#include "CoreMinimal.h"
#include "MediaRegionLockLocaleCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMediaRegionLockLocaleComplete, const FString&, Continent, const FString&, Country, const TArray<FString>&, Subdivisions);
