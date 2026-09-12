#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "ImpulseDamageData.h"
#include "FortPhysicsObjectImpactDamageData.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPhysicsObjectImpactDamageData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImpulseDamageData> PlayerImpactDamageBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImpulseDamageData> EnvironmentImpactDamageBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BaseOnImpactDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BaseEnvironmentalOnImpactDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BaseVehicleOnImpactDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBeforeNextImpactDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FScalableFloat> SourceSurfaceTypeToDamageModifier;
    
    UFortPhysicsObjectImpactDamageData();
    
};
