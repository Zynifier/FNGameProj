#pragma once
#include "CoreMinimal.h"
#include "RelevantPawnArray.generated.h"

class AFortPlayerPawn;

USTRUCT(BlueprintType)
struct FRelevantPawnArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> PlayerPawns;
    
    FORTNITEGAME_API FRelevantPawnArray();
};
