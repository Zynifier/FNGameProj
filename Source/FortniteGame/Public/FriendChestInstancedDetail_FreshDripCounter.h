#pragma once
#include "CoreMinimal.h"
#include "FriendChestInstancedDetail.h"
#include "GameplayTagContainer.h"
#include "FriendChestInstancedDetail_FreshDripCounter.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFriendChestInstancedDetail_FreshDripCounter : public UFriendChestInstancedDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FreshTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DripTag;
    
    UFriendChestInstancedDetail_FreshDripCounter();
    
};
