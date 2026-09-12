#pragma once
#include "CoreMinimal.h"
#include "MeshRegionLockData_Base.h"
#include "MeshRegionLockData_String.generated.h"

USTRUCT(BlueprintType)
struct FMeshRegionLockData_String : public FMeshRegionLockData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Data;
    
    FORTNITEGAME_API FMeshRegionLockData_String();
};
