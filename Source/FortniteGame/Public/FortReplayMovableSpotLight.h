#pragma once
#include "CoreMinimal.h"
#include "FortReplaySpectatorPawnBase.h"
#include "FortReplayMovableSpotLight.generated.h"

class USpotLightComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortReplayMovableSpotLight : public AFortReplaySpectatorPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bGroupMoveLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 LightIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepInnerAngle, meta=(AllowPrivateAccess=true))
    float RepInnerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepOuterAngle, meta=(AllowPrivateAccess=true))
    float RepOuterAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepIntensity, meta=(AllowPrivateAccess=true))
    float RepIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepRadius, meta=(AllowPrivateAccess=true))
    float RepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 RepColorR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 RepColorG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 RepColorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepTemperature, meta=(AllowPrivateAccess=true))
    float RepTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepEnabled, meta=(AllowPrivateAccess=true))
    bool bRepEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    AFortReplayMovableSpotLight();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepColor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepInnerAngle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepIntensity();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepOuterAngle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepTemperature();
    
};

