#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_PlayerGliderAnimAsset.h"
#include "FortAnimInput_Skydiving.h"
#include "FortAnimInput_StandingPawnAnimAsset.h"
#include "FrontendAnimInstance.h"
#include "ItemPreviewAnimInstance.generated.h"

class AFortPlayerParachute;
class AFortWeapon;
class UFortItemDefinition;

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UItemPreviewAnimInstance : public UFrontendAnimInstance {
    GENERATED_BODY()
public:
protected:
public:
    UItemPreviewAnimInstance();
protected:
};

