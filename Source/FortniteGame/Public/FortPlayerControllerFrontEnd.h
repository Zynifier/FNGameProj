#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortPlayerController.h"
#include "FortPlayerControllerFrontEnd.generated.h"

class UAthenaMarkerComponent;
class UFortControllerComponent_MapDiscoverability;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerFrontEnd : public AFortPlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_MapDiscoverability* DiscoverabilityComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUnlockAllZones;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMarkerComponent* MarkerComponent;
    
public:
    AFortPlayerControllerFrontEnd();
    UFUNCTION(BlueprintCallable, Exec)
    void StopWriteToAudioFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopFacialAnimationTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartWriteToAudioFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RunFacialAnimationTest(const FString& WaveFileName, int32 SampleRate);
    
    UFUNCTION(BlueprintCallable)
    void OpenEmotePicker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoiceChatPlayerMuted(const FUniqueNetIdRepl& UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInVoiceChat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingPhoenixLevelUpNotifications() const;
    
    UFUNCTION(BlueprintCallable)
    void EmotePickerSelect();
    
    UFUNCTION(BlueprintCallable)
    void EmotePickerPrevWheel();
    
    UFUNCTION(BlueprintCallable)
    void EmotePickerNextWheel();
    
    UFUNCTION(BlueprintCallable)
    void CloseEmotePicker();
    
};

