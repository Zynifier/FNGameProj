#pragma once
#include "CoreMinimal.h"
#include "FortControllerEffect.h"
#include "FortControllerEffect_NPCGiveGift.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerEffect_NPCGiveGift : public UFortControllerEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUINotifications;
    
public:
    UFortControllerEffect_NPCGiveGift();
    
};
