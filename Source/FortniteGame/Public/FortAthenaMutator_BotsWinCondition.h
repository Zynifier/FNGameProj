#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_BotsWinCondition.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_BotsWinCondition : public AFortAthenaMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bOnlyBotRemaining: 1;
    
public:
    AFortAthenaMutator_BotsWinCondition();
};

