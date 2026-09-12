#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorialDefinition.h"
#include "GameplayTagContainer.h"
#include "FortContextualTutorialDefinition_ItemTags.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortContextualTutorialDefinition_ItemTags : public UFortContextualTutorialDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ItemTags;
    
public:
    UFortContextualTutorialDefinition_ItemTags();
    
};
