#pragma once
#include "CoreMinimal.h"
#include "FortCreateItemDetail.generated.h"

USTRUCT(BlueprintType)
struct FFortCreateItemDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FORTNITEGAME_API FFortCreateItemDetail();
};
