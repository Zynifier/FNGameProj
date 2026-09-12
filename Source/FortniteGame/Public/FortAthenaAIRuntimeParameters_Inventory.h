#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "FortAthenaAIRuntimeParameters_Inventory.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIRuntimeParameters_Inventory : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShouldDropCurrencyOnDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDefaultInventoryIgnoresRestrictions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSkipInventoryInitialization: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrencyPayoutRowName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LootInfo;
    
    UFortAthenaAIRuntimeParameters_Inventory();
    
};
