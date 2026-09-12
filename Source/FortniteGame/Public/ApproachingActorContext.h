#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ApproachingActorContext.generated.h"

USTRUCT(BlueprintType)
struct FApproachingActorContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ApproachingActorLocations;
    
    FORTNITEGAME_API FApproachingActorContext();
};
