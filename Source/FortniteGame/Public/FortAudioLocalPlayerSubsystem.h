#pragma once
#include "CoreMinimal.h"
#include "FortLocalPlayerSubsystem.h"
#include "FortAudioLocalPlayerSubsystem.generated.h"

class UFortClientSettingsRecord;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAudioLocalPlayerSubsystem : public UFortLocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UFortAudioLocalPlayerSubsystem();
    
    UFUNCTION(BlueprintCallable)
    void OnLicensedAudioTreatmentChanged(UFortClientSettingsRecord* Settings);
    
};
