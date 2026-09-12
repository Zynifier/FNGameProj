#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "FortContextualTutorialGameplayTagConversion.generated.h"

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortContextualTutorialGameplayTagConversion : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FGameplayTag> ContextualTutorialIndexToGameplayTags;
    
public:
    UFortContextualTutorialGameplayTagConversion();
    
};
