#include "FortAthenaMutator_Valkyrie.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Valkyrie::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Valkyrie, DefaultSpawnRangeStart);
    DOREPLIFETIME(AFortAthenaMutator_Valkyrie, DefaultSpawnRangeEnd);
}

AFortAthenaMutator_Valkyrie::AFortAthenaMutator_Valkyrie() {
}
