#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "FortGameplayEffectData.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGameplayEffectData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> PawnHideGameplayEffectDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueDamagePhysicalExplosionTag;
    
public:
    UFortGameplayEffectData();
};

