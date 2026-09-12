#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_InventoryOverride.h"
#include "TeamBucketDefinition.h"
#include "FortAthenaMutator_InventoryOverride_TeamBucket.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_InventoryOverride_TeamBucket : public AFortAthenaMutator_InventoryOverride {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamBucketDefinition> TeamBuckets;
    
public:
    AFortAthenaMutator_InventoryOverride_TeamBucket();
    
};
