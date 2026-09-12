#pragma once
#include "CoreMinimal.h"
#include "CreativeIslandResource.generated.h"

USTRUCT(BlueprintType)
struct FCreativeIslandResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCount;
    
    FORTNITEGAME_API FCreativeIslandResource();
};
