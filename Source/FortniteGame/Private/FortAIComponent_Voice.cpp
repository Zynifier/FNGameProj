#include "FortAIComponent_Voice.h"
#include "Net/UnrealNetwork.h"

void UFortAIComponent_Voice::SetVoiceSoundBank(UFortTaggedSoundBank* InSoundBank) {
}

UFortTaggedSoundBank* UFortAIComponent_Voice::GetVoiceSoundBank() const {
    return NULL;
}

void UFortAIComponent_Voice::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAIComponent_Voice, VoiceSoundBank);
}

UFortAIComponent_Voice::UFortAIComponent_Voice() {
    VoiceSoundBank = NULL;
}
