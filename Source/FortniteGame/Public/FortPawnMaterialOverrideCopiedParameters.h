#pragma once
#include "CoreMinimal.h"
#include "FortPawnMaterialOverrideCopiedParameters.generated.h"

USTRUCT(BlueprintType)
struct FFortPawnMaterialOverrideCopiedParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ScalarParamNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> VectorParamNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TextureParamNames;
    
    FORTNITEGAME_API FFortPawnMaterialOverrideCopiedParameters();
};
