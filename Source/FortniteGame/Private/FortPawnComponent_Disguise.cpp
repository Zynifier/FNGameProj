#include "FortPawnComponent_Disguise.h"

void UFortPawnComponent_Disguise::OnOwnerPawnDamaged(AActor* DamageOnOwnerPawnDamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

bool UFortPawnComponent_Disguise::CanBeRevealed() const {
    return false;
}

void UFortPawnComponent_Disguise::RevealDisguise(const AActor* RevealInstigator, EFortPawnComponent_DisguiseRevealReason RevealReason) {
}

UFortPawnComponent_Disguise::UFortPawnComponent_Disguise() {
    CachedAIDisguiseParameters = NULL;
    CachedNPCBehaviorParameters = NULL;
    PlayerDetectedTimestamp = 0.0f;
    RevealPlayerProximityDuration = 0.0f;
    AffiliationManager = NULL;
}
