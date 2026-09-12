#pragma once
#include "CoreMinimal.h"
#include "FortMcpCollectionsVariant.generated.h"

USTRUCT(BlueprintType)
struct FFortMcpCollectionsVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Variant;
    
    FORTNITEGAME_API FFortMcpCollectionsVariant();
};
