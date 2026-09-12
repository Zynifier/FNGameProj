#include "FortAthenaMutator_SpecialRelevancy.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_SpecialRelevancy::SetClientAuthoritativePhysics(bool bEnabled) {
}

void AFortAthenaMutator_SpecialRelevancy::StartMultiSquadRelevancy(int32 NumOfSquadsInRelevancyGroup) {
}

void AFortAthenaMutator_SpecialRelevancy::StartNormalRelevancy() {
}

void AFortAthenaMutator_SpecialRelevancy::StartSoloRelevancy() {
}

void AFortAthenaMutator_SpecialRelevancy::StartSquadRelevancy() {
}

bool AFortAthenaMutator_SpecialRelevancy::AreActorsInSameRelvancyGroup(const AActor* Actor0, const AActor* Actor1) const {
    return false;
}

void AFortAthenaMutator_SpecialRelevancy::GetActors(TArray<AActor*>& OutActors, const int32 RelevancyGroupIndex, TSubclassOf<AActor> ActorClass) const {
}

int32 AFortAthenaMutator_SpecialRelevancy::GetMaxSquadSize() const {
    return 0;
}

int32 AFortAthenaMutator_SpecialRelevancy::GetNumRelevancyGroups() const {
    return 0;
}

void AFortAthenaMutator_SpecialRelevancy::GetPlayerPawns(TArray<AFortPlayerPawn*>& OutPawns, const int32 RelevancyGroupIndex) const {
}

void AFortAthenaMutator_SpecialRelevancy::OnRep_CurrentRelevancyMode(FSpecialRelevancyModeData PrevMode) {
}

void AFortAthenaMutator_SpecialRelevancy::SpawnActorPerRelevancyGroup(const FSpecialActorSpawnData& NewSpawnData, TArray<AActor*>& SpawnedActors) {
}

void AFortAthenaMutator_SpecialRelevancy::GetRelevantPawnGroups(TArray<FRelevantPawnArray>& RelevantPawns) const {
}

void AFortAthenaMutator_SpecialRelevancy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_SpecialRelevancy, CurrentRelevancyModeData);
}

AFortAthenaMutator_SpecialRelevancy::AFortAthenaMutator_SpecialRelevancy() {
    RootGridNodeClass = NULL;
    PlayerPawnClass = NULL;
    SpecialRelevancyNode = NULL;
}
