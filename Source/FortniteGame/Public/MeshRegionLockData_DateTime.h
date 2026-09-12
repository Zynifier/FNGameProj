#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeshRegionLockData_Base.h"
#include "MeshRegionLockData_DateTime.generated.h"

USTRUCT(BlueprintType)
struct FMeshRegionLockData_DateTime : public FMeshRegionLockData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Data;
    
    FORTNITEGAME_API FMeshRegionLockData_DateTime();
};
