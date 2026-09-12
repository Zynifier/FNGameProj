#pragma once
#include "CoreMinimal.h"
#include "EItemWrapMaterialType.h"
#include "ApplyWrapVariant.generated.h"

USTRUCT(BlueprintType)
struct FApplyWrapVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComponentNameAllowList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WrapSectionMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> CustomSectionMaskByMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultSelectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemWrapMaterialType WrapMaterialType;
    
    FORTNITEGAME_API FApplyWrapVariant();
};
