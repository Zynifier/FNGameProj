#pragma once
#include "CoreMinimal.h"
#include "FortLevelStreamingData.generated.h"

USTRUCT(BlueprintType)
struct FFortLevelStreamingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UniquePackageName;
    
    FORTNITEGAME_API FFortLevelStreamingData();
};
