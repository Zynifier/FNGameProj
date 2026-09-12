#include "SynchronizedTeleportPlayerComponent.h"
#include "Net/UnrealNetwork.h"

void USynchronizedTeleportPlayerComponent::ServerRestartRespawn_Implementation() {
}

void USynchronizedTeleportPlayerComponent::OnRep_IsServerWaitingForClientToCancelRespawn() {
}

void USynchronizedTeleportPlayerComponent::ClientHideHUDElementsAndFadeScreen_Implementation(const FText& HUDReasonText, float FadeTime, bool bFadeAudio) const {
}

void USynchronizedTeleportPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USynchronizedTeleportPlayerComponent, bIsServerWaitingForClientToCancelRespawn);
    DOREPLIFETIME(USynchronizedTeleportPlayerComponent, FadeOutData);
}

void USynchronizedTeleportPlayerComponent::HandleTeleportScreenStatusChanged(AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, FText HUDReasonText) {
}

void USynchronizedTeleportPlayerComponent::OnRep_FadeOutData() {
}

USynchronizedTeleportPlayerComponent::USynchronizedTeleportPlayerComponent() {
    bIsServerWaitingForClientToCancelRespawn = false;
    TeleportScreenMusicCue = NULL;
    TeleportScreenFadeoutTime = 0.0f;
}

