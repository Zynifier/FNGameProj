#pragma once
#include "CoreMinimal.h"
#include "Engine/TextureDefines.h"
#include "CapMipsTextureGroup.generated.h"

USTRUCT(BlueprintType)
struct FCapMipsTextureGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureGroup> Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLODMipCount;
    
    FORTNITEGAME_API FCapMipsTextureGroup();
};
