#pragma once
#include "CoreMinimal.h"
#include "MeshRegionLockData_Base.h"
#include "MeshRegionLockData_Int.generated.h"

USTRUCT(BlueprintType)
struct FMeshRegionLockData_Int : public FMeshRegionLockData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Data;
    
    FORTNITEGAME_API FMeshRegionLockData_Int();
};
