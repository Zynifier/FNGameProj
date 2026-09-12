#pragma once
#include "CoreMinimal.h"
#include "FortAthenaLoadout.h"
#include "FortAthenaMutator.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator_SkinChangeOnWin.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_SkinChangeOnWin : public AFortAthenaMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout CosmeticLoadoutToApplyOnWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueTagToApplyOnWin;
    
public:
    AFortAthenaMutator_SkinChangeOnWin();
    
};
