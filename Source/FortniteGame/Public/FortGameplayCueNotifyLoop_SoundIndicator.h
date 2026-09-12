#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortSoundIndicatorTypes.h"
#include "EFortTeamAffiliation.h"
#include "FortGameplayCueNotify_Loop.h"
#include "FortGameplayCueNotifyLoop_SoundIndicator.generated.h"

class UTexture;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameplayCueNotifyLoop_SoundIndicator : public AFortGameplayCueNotify_Loop {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortSoundIndicatorTypes SoundIndicatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundIndicatorMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EFortTeamAffiliation::Type>> ShowAffiliations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* SoundIndicatorIconOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SoundIndicatorTintOverride;
    
public:
    AFortGameplayCueNotifyLoop_SoundIndicator();
    
};
