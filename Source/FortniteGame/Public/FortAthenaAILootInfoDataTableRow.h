#pragma once
#include "CoreMinimal.h"
#include "AILootInfoRowEntry.h"
#include "Engine/DataTable.h"
#include "FortAthenaAILootInfoDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaAILootInfoDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAILootInfoRowEntry> LootDroppingBehaviors;
    
    FORTNITEGAME_API FFortAthenaAILootInfoDataTableRow();
};
