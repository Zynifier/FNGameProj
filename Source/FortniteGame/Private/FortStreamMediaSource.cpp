#include "FortStreamMediaSource.h"

FMediaPlayerOptions UFortStreamMediaSource::UpdatePlayerOptions(FMediaPlayerOptions PlayerOptions) const {
    return FMediaPlayerOptions{};
}

bool UFortStreamMediaSource::ShouldStreamBePlaying(const UObject* WorldContextObject, const UPrimitiveComponent* PrimitiveComponent, float CullRadius) const {
    return false;
}

TEnumAsByte<UCPTypes::Type> UFortStreamMediaSource::ShouldProtectPlayerFromContent() const {
    return UCPTypes::UCPAudio;
}

void UFortStreamMediaSource::SetPlaybackStartTime(float StartTime) {
}

void UFortStreamMediaSource::RequestVideoUrl(const APlayerController* FortPC) {
}

void UFortStreamMediaSource::ReinstateSharing() {
}

bool UFortStreamMediaSource::IsScreenRecordingInProgress() {
    return false;
}

bool UFortStreamMediaSource::HasLocalFilePlayback() const {
    return false;
}

int32 UFortStreamMediaSource::GetCDNNumber() {
    return 0;
}

void UFortStreamMediaSource::DisableSharing() {
}

void UFortStreamMediaSource::SetLocalizedOverlays(UFortDownloadLocalizedOverlays* InOverlays) {
}

void UFortStreamMediaSource::SetUrl(UPARAM(Ref) FString& InURL) {
}

UFortStreamMediaSource::UFortStreamMediaSource() {
    VideoStreamSource = TEXT("Rabbit:ElectraA");
    VideoStreamSourceAB = 1;
    bIsLive = false;
    bBlurlLive = false;
    MaxResolution = 0;
    MaxBandwidth = 0;
    AspectRatio = 1;
    bShareLock = false;
    bAudioOnly = false;
    bPartySync = true;
    MediaDuration = 1;
    bAutoClearCDNDistribution = true;
    FortDownloadLocalizedOverlays = NULL;
    LocalFilePlaybackAsset = NULL;
}

