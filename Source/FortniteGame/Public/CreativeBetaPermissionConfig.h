#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CreativeBetaPermissionCustomPrimaryAssetId.h"
#include "CreativeBetaPermissionConfig.generated.h"

USTRUCT(BlueprintType)
struct FCreativeBetaPermissionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId PrimaryAssetId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PermissionTagContainer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeBetaPermissionCustomPrimaryAssetId CustomPrimaryAssetId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    FORTNITEGAME_API FCreativeBetaPermissionConfig();
};
