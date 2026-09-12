#pragma once
#include "CoreMinimal.h"
#include "AthenaSeasonItemData.h"
#include "AthenaSeasonItemData_FriendChest.generated.h"

class UFortFriendChestItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaSeasonItemData_FriendChest : public UAthenaSeasonItemData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFriendChestItemDefinition> FreshDripCounter;
    
public:
    UAthenaSeasonItemData_FriendChest();
    
};
