#include "FortAthenaNPCLoopStateComponent.h"
#include "Net/UnrealNetwork.h"

void UFortAthenaNPCLoopStateComponent::OnOwnerPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortAthenaNPCLoopStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAthenaNPCLoopStateComponent, bSpawnOutsideTheLoop);
}

UFortAthenaNPCLoopStateComponent::UFortAthenaNPCLoopStateComponent() {
    bSpawnOutsideTheLoop = false;
    RuntimeLoopSettings = NULL;
}
