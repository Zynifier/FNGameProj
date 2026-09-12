#include "FortProjectileMoveComp_Chase.h"

void UFortProjectileMoveComp_Chase::ClearChaseTarget_Implementation() {
}

void UFortProjectileMoveComp_Chase::ClearExternalForces() {
}

void UFortProjectileMoveComp_Chase::SetChaseTarget_Implementation(USceneComponent* InChaseTarget, FName InSocketName, float InTargetReachedDistance, bool bInHomeOnChaseTarget) {
}

void UFortProjectileMoveComp_Chase::AddExternalForce(const FChaseExternalForce& ExternalForce) {
}

void UFortProjectileMoveComp_Chase::MulticastAddExternalForce_Implementation(const FChaseExternalForce& ExternalForce) {
}

UFortProjectileMoveComp_Chase::UFortProjectileMoveComp_Chase() {
    InternalChaseTarget = NULL;
    ChaseTargetReachedDistance = 0.0f;
}
