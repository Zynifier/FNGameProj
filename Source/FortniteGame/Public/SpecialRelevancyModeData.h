#pragma once
#include "CoreMinimal.h"
#include "ESpecialRelevancyMode.h"
#include "SpecialRelevancyModeData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialRelevancyModeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialRelevancyMode Mode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 NumberOfSquads;
    
public:
    FORTNITEGAME_API FSpecialRelevancyModeData();
};
