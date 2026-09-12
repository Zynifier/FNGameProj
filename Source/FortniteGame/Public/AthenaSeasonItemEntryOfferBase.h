#pragma once
#include "CoreMinimal.h"
#include "AthenaSeasonItemEntryBase.h"
#include "AthenaBattlePassOffer.h"
#include "AthenaSeasonItemEntryOfferBase.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaSeasonItemEntryOfferBase : public UAthenaSeasonItemEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaBattlePassOffer BattlePassOffer;
    
    UAthenaSeasonItemEntryOfferBase();
    
};
