#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConversationGiftTypeDefinition.h"
#include "GameplayTagContainer.h"
#include "FortConversationGiftTypeDefinitions.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationGiftTypeDefinitions : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FConversationGiftTypeDefinition> GiftDefinitionsByGiftTag;
    
public:
    UFortConversationGiftTypeDefinitions();
    
};
