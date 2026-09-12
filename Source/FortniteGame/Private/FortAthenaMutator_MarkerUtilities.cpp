#include "FortAthenaMutator_MarkerUtilities.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_MarkerUtilities::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_MarkerUtilities, ReplicatedTeamPlacements);
}

AFortAthenaMutator_MarkerUtilities::AFortAthenaMutator_MarkerUtilities() {
}
