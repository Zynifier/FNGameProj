#pragma once
#include "CoreMinimal.h"
#include "EFortQuestObjectiveStatEvent.h"
#include "FriendChestInstancedDetail.h"
#include "GameplayTagContainer.h"
#include "FriendChestInstancedDetail_GrantXp.generated.h"

class UFortAccoladeItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFriendChestInstancedDetail_GrantXp : public UFriendChestInstancedDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAccoladeItemDefinition> Accolade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestObjectiveStatEvent AccoladeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetTags;
    
    UFriendChestInstancedDetail_GrantXp();
    
};
