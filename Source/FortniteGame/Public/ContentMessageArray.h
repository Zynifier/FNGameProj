#pragma once
#include "CoreMinimal.h"
#include "ContentMessageItemEntry.h"
#include "Engine/NetSerialization.h"
#include "ContentMessageArray.generated.h"

USTRUCT(BlueprintType)
struct FContentMessageArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContentMessageItemEntry> Items;
    
    FORTNITEGAME_API FContentMessageArray();
};
