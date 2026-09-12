#include "FortReplayMovableSpotLight.h"
#include "Net/UnrealNetwork.h"
#include "Components/SpotLightComponent.h"

void AFortReplayMovableSpotLight::OnRep_RepColor() {
}

void AFortReplayMovableSpotLight::OnRep_RepEnabled() {
}

void AFortReplayMovableSpotLight::OnRep_RepInnerAngle() {
}

void AFortReplayMovableSpotLight::OnRep_RepIntensity() {
}

void AFortReplayMovableSpotLight::OnRep_RepOuterAngle() {
}

void AFortReplayMovableSpotLight::OnRep_RepRadius() {
}

void AFortReplayMovableSpotLight::OnRep_RepTemperature() {
}

void AFortReplayMovableSpotLight::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortReplayMovableSpotLight, bGroupMoveLocked);
    DOREPLIFETIME(AFortReplayMovableSpotLight, LightIndex);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepInnerAngle);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepOuterAngle);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepIntensity);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepRadius);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepColorR);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepColorG);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepColorB);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepTemperature);
    DOREPLIFETIME(AFortReplayMovableSpotLight, bRepEnabled);
}

AFortReplayMovableSpotLight::AFortReplayMovableSpotLight() {
    SpotLightComp = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight0"));
    bDebugDraw = false;
    bGroupMoveLocked = false;
    LightIndex = 0;
    RepInnerAngle = 0.0f;
    RepOuterAngle = 0.0f;
    RepIntensity = 0.0f;
    RepRadius = 0.0f;
    RepColorR = 0;
    RepColorG = 0;
    RepColorB = 0;
    RepTemperature = 0.0f;
    bRepEnabled = false;
}

