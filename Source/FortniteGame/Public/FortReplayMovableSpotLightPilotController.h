#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FortReplayMovableSpotLightPilotController.generated.h"

class AFortPlayerController;
class AFortReplayMovableSpotLight;
class UInputComponent;
class ULocalPlayer;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortReplayMovableSpotLightPilotController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMovingAllLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bColorSelectMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Saturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorInputX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorInputY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* LightColorSelectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortReplayMovableSpotLight* PendingCurrentSpotLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* OriginalControllerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalPlayer* OriginalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDecel;
    
    AFortReplayMovableSpotLightPilotController();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllReplaySpotLights();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyReplaySpotLight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DuplicateReplaySpotLight();
    
    UFUNCTION(BlueprintCallable)
    void GamepadLightColorSelectX(float Amt);
    
    UFUNCTION(BlueprintCallable)
    void GamepadLightColorSelectY(float Amt);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockAllReplaySpotLights();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PilotReplaySpotLight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReAimReplaySpotLight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectNextSpotLight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectPrevSpotLight();
    
    UFUNCTION(Exec)
    void SelectSpotLightByNumber(uint32 Number);
    
    UFUNCTION(Exec)
    void SetSpotLightGroupMoveLockByNumber(uint32 Number, bool bLocked);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnReplaySpotLight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnReplaySpotLightEx(float X, float Y, float Z, float Yaw, float Pitch, int32 R, int32 G, int32 B, float InnerAngle, float OuterAngle, float Intensity, float Radius, float Temp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleLockReplaySpotLight();
    
};
