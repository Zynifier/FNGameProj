#pragma once
#include "CoreMinimal.h"
#include "EFortSoundIndicatorTypes.h"
#include "GameplayTagContainer.h"
#include "SoundIndicatorTypePicker.generated.h"

USTRUCT(BlueprintType)
struct FSoundIndicatorTypePicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortSoundIndicatorTypes SoundIndicatorType;
    
    FORTNITEGAME_API FSoundIndicatorTypePicker();
};
