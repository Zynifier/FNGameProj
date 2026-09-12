#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortCurieSpatialGrid.h"
#include "FortCurieElementSpatialGrid.generated.h"

class AActor;
class UFortCurieFireNavRelevantObject;

class UFortCurieDangerousNavRelevantObject;

USTRUCT(BlueprintType)
struct FFortCurieElementSpatialGrid : public FFortCurieSpatialGrid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, UFortCurieDangerousNavRelevantObject*> NavRelevantObjectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCurieDangerousNavRelevantObject*> NavRelevantPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> PendingVoxelizationActors;
    
public:
    FORTNITEGAME_API FFortCurieElementSpatialGrid();
};

