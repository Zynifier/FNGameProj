#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardItemReference.h"
#include "AthenaSeasonItemData_BattlePass.h"
#include "AthenaSeasonItemCustomSkinCategoryData.h"
#include "AthenaSeasonItemData_CustomSkin.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaSeasonItemData_CustomSkin : public UAthenaSeasonItemData_BattlePass {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRewardItemReference CustomSkinCID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaSeasonItemCustomSkinCategoryData> Categories;
    
public:
    UAthenaSeasonItemData_CustomSkin();
    
};
