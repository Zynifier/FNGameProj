#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortCreativeDiscoverySurfaceManager.generated.h"

class UFortCreativeDiscoverySurface;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCreativeDiscoverySurfaceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeDiscoverySurface*> Surfaces;
    
public:
    UFortCreativeDiscoverySurfaceManager();
    
};
