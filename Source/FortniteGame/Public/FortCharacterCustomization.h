#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortCharacterCustomization.generated.h"

class UAnimInstance;
class UCustomCharacterPart;
class UFortAnimInstance;
class UFortFootstepAudioBank;
class UFortWeaponAnimSet;

USTRUCT(BlueprintType)
struct FFortCharacterCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> CharacterPartOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAnimInstance> AnimBPClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponAnimSet* AnimSetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAnimInstance>> AnimLayersOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortFootstepAudioBank* FootstepBankOverride;
    
    FORTNITEGAME_API FFortCharacterCustomization();
};
