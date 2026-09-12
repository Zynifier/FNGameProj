#pragma once
#include "CoreMinimal.h"
#include "CompositeBool.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCompositeBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> ModifyingObjects;
    
    FORTNITEGAME_API FCompositeBool();
};
