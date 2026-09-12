#pragma once
#include "CoreMinimal.h"
#include "FortQuickBars.h"
#include "FortQuickBarsAthena.generated.h"

UCLASS(Blueprintable)
class AFortQuickBarsAthena : public AFortQuickBars {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerPrimarySlotsUpdateDelay;
    
public:
    AFortQuickBarsAthena();
};

