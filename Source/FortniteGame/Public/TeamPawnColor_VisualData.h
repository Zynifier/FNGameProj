#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "TeamPawnColor_VisualData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FTeamPawnColor_VisualData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GE_Glow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GlowTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinimapColor;
    
    FORTNITEGAME_API FTeamPawnColor_VisualData();
};
