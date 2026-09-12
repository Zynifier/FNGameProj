#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_GameplayEffect.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_GameplayEffect : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameplayEffectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableMutator: 1;
    
public:
    AFortAthenaMutator_GameplayEffect();
    
};
