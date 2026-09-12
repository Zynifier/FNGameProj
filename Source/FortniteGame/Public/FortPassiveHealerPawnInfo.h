#pragma once
#include "CoreMinimal.h"
#include "FortPassiveHealerPawnInfo.generated.h"

class AFortPawn;

USTRUCT(BlueprintType)
struct FFortPassiveHealerPawnInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEmoteStarted;
    
public:
    FORTNITEGAME_API FFortPassiveHealerPawnInfo();
};
