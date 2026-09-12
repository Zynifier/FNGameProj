#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortCharacterCustomizationData.generated.h"

class UCustomCharacterPart;
class UFortFootstepAudioBank;
class UFortWeaponAnimSet;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCharacterCustomizationData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCustomCharacterPart>> CharacterPartOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> AnimBPOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWeaponAnimSet> AnimSetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> AnimLayersOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFootstepAudioBank> FootstepBankOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UFortCharacterCustomizationData();
    
};
