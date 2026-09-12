#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ContentMessageItemEntry.generated.h"

USTRUCT(BlueprintType)
struct FContentMessageItemEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentMessage;
    
    FORTNITEGAME_API FContentMessageItemEntry();
};
