#pragma once
#include "CoreMinimal.h"
#include "CreativeBetaPermissionCustomPrimaryAssetId.generated.h"

USTRUCT(BlueprintType)
struct FCreativeBetaPermissionCustomPrimaryAssetId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Type;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FORTNITEGAME_API FCreativeBetaPermissionCustomPrimaryAssetId();
};
