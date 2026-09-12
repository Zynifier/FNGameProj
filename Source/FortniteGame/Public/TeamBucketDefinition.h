#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "TeamBucketLoadout.h"
#include "TeamBucketDefinition.generated.h"

USTRUCT(BlueprintType)
struct FTeamBucketDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamBucketLoadout> Loadouts;
    
    FORTNITEGAME_API FTeamBucketDefinition();
};
