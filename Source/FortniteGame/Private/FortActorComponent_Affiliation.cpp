#include "FortActorComponent_Affiliation.h"
#include "Net/UnrealNetwork.h"

void UFortActorComponent_Affiliation::OnBotControllerAlertLevelChanged(AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel) {
}

void UFortActorComponent_Affiliation::OnOwnerPawnDamaged(AActor* DamageOnOwnerPawnDamageddActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortActorComponent_Affiliation::OnOwnerPawnPossessed(APawn* Pawn) {
}

void UFortActorComponent_Affiliation::OnOwnerPawnUnpossessed(APawn* Pawn) {
}

void UFortActorComponent_Affiliation::OnOwnerTeamIndexChanged() {
}

void UFortActorComponent_Affiliation::OnRep_CurrentFactions() {
}

void UFortActorComponent_Affiliation::SetCanBeDamagedByNullInstigator(const bool bInCanBeDamagedByNullInstigator) {
}

void UFortActorComponent_Affiliation::UpdatePerception() {
}

void UFortActorComponent_Affiliation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortActorComponent_Affiliation, bHasSpecificRelations);
    DOREPLIFETIME(UFortActorComponent_Affiliation, AffiliationUID);
    DOREPLIFETIME(UFortActorComponent_Affiliation, CurrentFactions);
    DOREPLIFETIME(UFortActorComponent_Affiliation, SpecificRelations);
}

UFortActorComponent_Affiliation::UFortActorComponent_Affiliation() {
    bHasSpecificRelations = false;
    bHasPerceptionUpdateRequest = false;
    bIsInGameParticipantFaction = false;
    bIsRegisteredToAffiliationSystem = false;
    ResetSpecificRelationUnawareDelay = 0.0f;
    ResetSpecificRelationNoDamageDelay = 0.0f;
    AffiliationUID = 0;
    CachedAffiliationManager = NULL;
    CachedAIPerceptionComponent = NULL;
    CachedBotController = NULL;
    bCanBeDamagedByNullInstigator = false;
}
