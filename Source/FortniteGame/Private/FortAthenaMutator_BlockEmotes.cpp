#include "FortAthenaMutator_BlockEmotes.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_BlockEmotes::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_BlockEmotes, BlockEmotesWithTags);
}

AFortAthenaMutator_BlockEmotes::AFortAthenaMutator_BlockEmotes() {
    bGlobalEmoteBlock = true;
}

