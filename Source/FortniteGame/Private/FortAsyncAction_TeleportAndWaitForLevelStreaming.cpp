#include "FortAsyncAction_TeleportAndWaitForLevelStreaming.h"

void UFortAsyncAction_TeleportAndWaitForLevelStreaming::OnLevelStreamingComplete() {
}

UFortAsyncAction_TeleportAndWaitForLevelStreaming* UFortAsyncAction_TeleportAndWaitForLevelStreaming::CreateTeleportAndWaitForLevelStreaming(AFortPlayerPawn* InPlayerPawn, const FVector& InTeleportLocation, const FRotator& InTeleportRotation, const bool NewBIgnoreCollision, const bool NewBIgnoreSupplementalKillVolumeSweep) {
    return NULL;
}

UFortAsyncAction_TeleportAndWaitForLevelStreaming::UFortAsyncAction_TeleportAndWaitForLevelStreaming() {
    PlayerPawn = NULL;
    bIgnoreCollision = false;
    bIgnoreSupplementalKillVolumeSweep = false;
}

