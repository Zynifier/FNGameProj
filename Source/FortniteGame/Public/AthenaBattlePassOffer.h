#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardItemReference.h"
#include "Engine/DataTable.h"
#include "AthenaBattlePassOffer.generated.h"

USTRUCT(BlueprintType)
struct FAthenaBattlePassOffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRewardItemReference RewardItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaRewardItemReference> ChainedRewardItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle OfferPriceRowHandle;
    
    FORTNITEGAME_API FAthenaBattlePassOffer();
};
