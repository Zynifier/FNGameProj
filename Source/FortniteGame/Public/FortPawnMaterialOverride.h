#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortPawnMaterialOverrideCopiedParameters.h"
#include "FortPawnMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FFortPawnMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid OverrideId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPawnMaterialOverrideCopiedParameters MaterialParamsToCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideParticleSystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToWeapon;
    
    FORTNITEGAME_API FFortPawnMaterialOverride();
};
