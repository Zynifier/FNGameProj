#pragma once
#include "CoreMinimal.h"
#include "EFortBudgetCategory.h"
#include "FortCreativeGridCellBudget.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeGridCellBudget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CellBudget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBudgetCategory Category;
    
    FORTNITEGAME_API FFortCreativeGridCellBudget();
};
