#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "FortPhysicsObjectAssetSetupData.generated.h"

class UFortPhysicsObjectBuoyancyData;
class UFortPhysicsObjectCollisionEffectsData;
class UFortPhysicsObjectImpactDamageData;
class UFortPhysicsObjectNavigationData;
class UFortPhysicsObjectPreset;
class UPhysicalMaterial;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPhysicsObjectAssetSetupData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectPreset* DefaultPhysicsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectCollisionEffectsData* DefaultEffectsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* DefaultPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectBuoyancyData* DefaultBuoyancyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectImpactDamageData* DefaultImpactDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectNavigationData* DefaultNavigationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UFortPhysicsObjectPreset*> AssetSetupTagToPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UFortPhysicsObjectCollisionEffectsData*> AssetSetupTagToEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UPhysicalMaterial*> AssetSetupTagToPhysMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UFortPhysicsObjectNavigationData*> AssetSetupTagToNavigationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UFortPhysicsObjectBuoyancyData*> AssetSetupTagToBuoyancyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UFortPhysicsObjectImpactDamageData*> AssetSetupTagToImpactDamageData;
    
public:
    UFortPhysicsObjectAssetSetupData();
    
};
