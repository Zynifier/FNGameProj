#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMiniMapIconParameterDataType.h"
#include "FortMiniMapIconMaterialParameterData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FFortMiniMapIconMaterialParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniMapIconParameterDataType DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    FORTNITEGAME_API FFortMiniMapIconMaterialParameterData();
};
