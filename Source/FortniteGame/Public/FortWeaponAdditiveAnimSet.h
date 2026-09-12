#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAnimInput_WeaponAdditiveAnimAsset.h"
#include "FortWeaponAdditiveAnimSet.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortWeaponAdditiveAnimSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_WeaponAdditiveAnimAsset MaleBodyType_AnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_WeaponAdditiveAnimAsset FemaleBodyType_AnimAsset;
    
    UFortWeaponAdditiveAnimSet();
    
};
