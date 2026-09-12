#pragma once
#include "CoreMinimal.h"
#include "FriendChestInstancedDetail.h"
#include "FriendChestInstancedDetail_ItemDefinition.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFriendChestInstancedDetail_ItemDefinition : public UFriendChestInstancedDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> InstancedItem;
    
    UFriendChestInstancedDetail_ItemDefinition();
    
};
