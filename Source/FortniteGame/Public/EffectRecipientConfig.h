#pragma once
#include "CoreMinimal.h"
#include "EDataDrivenEffectRecipient.h"
#include "EffectRecipientConfig.generated.h"

class UFortControllerEffect;

USTRUCT(BlueprintType)
struct FEffectRecipientConfig {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataDrivenEffectRecipient Recipient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UFortControllerEffect*> Effects;
    
    FORTNITEGAME_API FEffectRecipientConfig();
};
