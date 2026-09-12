#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AILootInfoRowEntry.generated.h"

USTRUCT(BlueprintType)
struct FAILootInfoRowEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery OptionalTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDropInventoryOnDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDropLootOnDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LootTiers;
    
    FORTNITEGAME_API FAILootInfoRowEntry();
};
