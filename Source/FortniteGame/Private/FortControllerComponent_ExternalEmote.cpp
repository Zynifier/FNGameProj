#include "FortControllerComponent_ExternalEmote.h"
#include "Net/UnrealNetwork.h"

void UFortControllerComponent_ExternalEmote::PlayEmoteAtIndex(int32 CategoryIndex, int32 EmoteIndex) {
}

void UFortControllerComponent_ExternalEmote::OnRep_ExternalEmotes(TArray<FExternalEmoteCategory>& PreviousExternalEmotes) {
}

TArray<FExternalEmoteCategory> UFortControllerComponent_ExternalEmote::GetExternalEmotes() const {
    return TArray<FExternalEmoteCategory>();
}

void UFortControllerComponent_ExternalEmote::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_ExternalEmote, ExternalEmotes);
    DOREPLIFETIME(UFortControllerComponent_ExternalEmote, UncategorizedEmotes);
}

void UFortControllerComponent_ExternalEmote::OnRep_UncategorizedEmotes(TArray<FEmoteActionBinding>& PreviousUncategorizedEmotes) {
}

void UFortControllerComponent_ExternalEmote::PlayUncategorizedEmoteAtIndex(const int32 EmoteIndex) {
}

TArray<FEmoteActionBinding> UFortControllerComponent_ExternalEmote::GetUncategorizedEmotes() const {
    return TArray<FEmoteActionBinding>();
}

UFortControllerComponent_ExternalEmote::UFortControllerComponent_ExternalEmote() {
    InputComponent = NULL;
}

