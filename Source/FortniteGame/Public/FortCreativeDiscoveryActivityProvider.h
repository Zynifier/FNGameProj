#pragma once
#include "CoreMinimal.h"
#include "FortCreativeIslandHistoryProvider.h"
#include "FortCreativeDiscoveryActivityProvider.generated.h"

class UFortCreativeDiscoverySurface;
class UFortCreativeDiscoverySurfaceManager;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCreativeDiscoveryActivityProvider : public UFortCreativeIslandHistoryProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeDiscoverySurfaceManager* Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeDiscoverySurface* Surface;
    
public:
    UFortCreativeDiscoveryActivityProvider();
    
};
