#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CosmeticPreviewInterface.h"
#include "FortItemPreviewMultiAngleActor.h"
#include "FortItemPreviewOnPawnActor.generated.h"

class AFortPlayerParachute;
class AFortPlayerPawn;
class AFortWeapon;
class UCameraComponent;
class UChildActorComponent;
class UFXSystemComponent;

class UAnimMontage;

UCLASS(Abstract, Blueprintable)
class AFortItemPreviewOnPawnActor : public AFortItemPreviewMultiAngleActor, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInBodyCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutTallBodyCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInTallBodyCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutBackpackCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInBackpackCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutSkydiveCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInSkydiveCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutEmoteCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInEmoteCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutEmoteHighCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInEmoteHighCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutEmoticonCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInEmoticonCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutPickaxeCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInPickaxeCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutDualPickaxeCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInDualPickaxeCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutDoubleWristPickaxeCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInDoubleWristPickaxeCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutPersonalGliderCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInPersonalGliderCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutCharacterCustomizerCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInCharacterCustomizerCameraComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* HeroPawnComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeapon* EquippedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerParachute* EquippedParachute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContrailGlideVerticalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContrailDiveVerticalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmotePlayDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteFXDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* FXSystemComponent;
    
public:
    AFortItemPreviewOnPawnActor();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePawnCustomizationComplete(AFortPlayerPawn* Pawn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPawnLocation() const;
    
    
    // Fix for true pure virtual functions not being implemented
private:
    UFUNCTION(BlueprintCallable)
    void OnMontageStopped(UAnimMontage* Montage, bool bInterrupted);
    
};

