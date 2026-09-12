#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_KillsFeedback.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_KillsFeedback : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDisplayKillFeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDisplayKillsInSocialMenu: 1;
    
public:
    AFortAthenaMutator_KillsFeedback();
    
};
