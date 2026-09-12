#pragma once
#include "CoreMinimal.h"
#include "FCRP_LoopingUpdate.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFCRP_LoopingUpdate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Requester;
    
public:
    FORTNITEGAME_API FFCRP_LoopingUpdate();
};
