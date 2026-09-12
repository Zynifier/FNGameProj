#pragma once
#include "CoreMinimal.h"
#include "MeshRegionLockData_Base.generated.h"

USTRUCT(BlueprintType)
struct FMeshRegionLockData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Replicated;
    
    FORTNITEGAME_API FMeshRegionLockData_Base();
};
