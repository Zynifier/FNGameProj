#pragma once
#include "CoreMinimal.h"
#include "FortSavedWeaponModSlot.generated.h"

USTRUCT(BlueprintType)
struct FFortSavedWeaponModSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString WeaponModTemplateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsDynamic;
    
    FORTNITEGAME_API FFortSavedWeaponModSlot();
};
