#pragma once
#include "CoreMinimal.h"
#include "FortCurieActorFireEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFortCurieActorFireEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AvailablePropagationNeighbors;
    
    FORTNITEGAME_API FFortCurieActorFireEntry();
};
