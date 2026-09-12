#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortControllerEffect.h"
#include "GameplayTagContainer.h"
#include "FortControllerEffect_TriggerCustomFeedMessage.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerEffect_TriggerCustomFeedMessage : public UFortControllerEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CustomFeedMessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdditionalLocalSpaceContextOriginOffset;
    
public:
    UFortControllerEffect_TriggerCustomFeedMessage();
    
};
