#pragma once
#include "CoreMinimal.h"
#include "PartStackEntry.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FPartStackEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> PartList;
    
    FORTNITEGAME_API FPartStackEntry();
};
