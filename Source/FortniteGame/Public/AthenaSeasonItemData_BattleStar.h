#pragma once
#include "CoreMinimal.h"
#include "AthenaSeasonItemData_BattlePass.h"
#include "AthenaSeasonPageGrid.h"
#include "AthenaSeasonItemData_BattleStar.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaSeasonItemData_BattleStar : public UAthenaSeasonItemData_BattlePass {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaSeasonPageGrid> PageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaSeasonPageGrid> QuestPageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaSeasonPageGrid> BonusPageList;
    
public:
    UAthenaSeasonItemData_BattleStar();
    
};
