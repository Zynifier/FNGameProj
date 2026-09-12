#include "AthenaAIPopulationTracker.h"

void UAthenaAIPopulationTracker::OnAISpawned(APawn* Pawn, const int32 RequestID) {
}

void UAthenaAIPopulationTracker::OnAgentGameOver(AFortAthenaAIBotController* AIBotController, AFortPawn* Pawn) {
}

void UAthenaAIPopulationTracker::OnFortPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

TArray<AController*> UAthenaAIPopulationTracker::GetAIMatchingQuery(const FGameplayTagQuery& TagQuery) const {
    return TArray<AController*>();
}

int32 UAthenaAIPopulationTracker::GetNumAIPawn() const {
    return 0;
}

int32 UAthenaAIPopulationTracker::GetNumNonAthenaParticipantBots() const {
    return 0;
}

int32 UAthenaAIPopulationTracker::GetNumPlayerBots() const {
    return 0;
}

int32 UAthenaAIPopulationTracker::GetNumTotalBots() const {
    return 0;
}

FAIPopulationCountSnapshot UAthenaAIPopulationTracker::GetAIPopulationTrackerCount() const {
    return FAIPopulationCountSnapshot{};
}

UAthenaAIPopulationTracker::UAthenaAIPopulationTracker() {
    CachedGameMode = NULL;
}

