#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "ItemAndCount.h"
#include "AttributeSet.h"
#include "Engine/DataTable.h"
#include "FortAthenaAISpawnerDataComponent_InventoryBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_InventoryBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldDropCurrencyOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefaultInventoryIgnoresRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrencyPayoutRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LootInfo;
    
public:
    UFortAthenaAISpawnerDataComponent_InventoryBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetInventoryItems(TArray<FItemAndCount>& OutList);
    
};

