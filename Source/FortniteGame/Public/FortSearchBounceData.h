#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortSearchBounceData.generated.h"

class AFortPlayerPawn;

USTRUCT(BlueprintType)
struct FFortSearchBounceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BounceNormal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SearchAnimationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* SearchingPawn;
    
    FORTNITEGAME_API FFortSearchBounceData();
};

