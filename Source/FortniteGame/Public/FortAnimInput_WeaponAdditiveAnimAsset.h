#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_WeaponAdditiveAnimAsset.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FFortAnimInput_WeaponAdditiveAnimAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* TargetingAdditivePoseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* NonTargetedAdditivePoseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* RelaxedAdditivePoseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* RelaxedWhileSprintingAdditiveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* RelaxedWhileCrouchSprintingAdditiveAnim;
    
    FORTNITEGAME_API FFortAnimInput_WeaponAdditiveAnimAsset();
};
