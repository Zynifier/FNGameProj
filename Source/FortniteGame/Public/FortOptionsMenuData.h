#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Templates/SubclassOf.h"
#include "FortOptionsMenuData.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FFortOptionsMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> PageWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush TabBrush;
    
    FORTNITEGAME_API FFortOptionsMenuData();
};
