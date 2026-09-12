#pragma once
#include "CoreMinimal.h"
#include "CreativeAssetMetaData.h"
#include "CreativeActorMemoryCost.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCreativeActorMemoryCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativeAssetMetaData> AssetDependencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceMemoryCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetMemoryCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ActorId;
    
    FORTNITEGAME_API FCreativeActorMemoryCost();
};
