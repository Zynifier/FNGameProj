#pragma once
#include "CoreMinimal.h"
#include "FortCreativeDiscoverySurfaceRevision.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeDiscoverySurfaceRevision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SurfaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Revision;
    
    FORTNITEGAME_API FFortCreativeDiscoverySurfaceRevision();
};
