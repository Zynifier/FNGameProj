#pragma once
#include "CoreMinimal.h"
#include "FortMcpCollectionBase.h"
#include "ECharacterEncounterType.h"
#include "EFortCollectedState.h"
#include "ESavePlayerQuestUpdate.h"
#include "FortMcpCollectedCharacterProperties.h"
#include "GameplayTagContainer.h"
#include "FortMcpCollectableCharacter.generated.h"

class AFortPlayerController;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpCollectableCharacter : public UFortMcpCollectionBase {
    GENERATED_BODY()
public:
    UFortMcpCollectableCharacter();
    
    UFUNCTION(BlueprintCallable)
    static EFortCollectedState AddToPlayerCollection(const AFortPlayerController* FPC, const FGameplayTag& Variant, const FFortMcpCollectedCharacterProperties& Props, const FGameplayTagContainer& ContextTags, ECharacterEncounterType EncounterType);
    
    UFUNCTION(BlueprintCallable)
    static void SavePlayerQuestUpdate(const AFortPlayerController* FPC, const FGameplayTag& Variant, ESavePlayerQuestUpdate Update);
    
};
