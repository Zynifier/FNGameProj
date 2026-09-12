#pragma once
#include "CoreMinimal.h"
#include "FortControllerEffect.h"
#include "TagModificationRequest.h"
#include "FortControllerEffect_ModifyGameplayTags.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerEffect_ModifyGameplayTags : public UFortControllerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTagModificationRequest TagModificationRequest;
    
    UFortControllerEffect_ModifyGameplayTags();
    
};
