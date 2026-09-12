#pragma once
#include "CoreMinimal.h"
#include "RequestResourcesSignatureDelegate.generated.h"

class UCreativeIslandResourceManagerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestResourcesSignature, UCreativeIslandResourceManagerComponent*, ResourceManager);
