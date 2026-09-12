#include "FortPawnComponent_PassiveHealer.h"
#include "Net/UnrealNetwork.h"

void UFortPawnComponent_PassiveHealer::OnHealedPlayerStartedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting) {
}

void UFortPawnComponent_PassiveHealer::OnHealedPlayerStoppedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting) {
}

void UFortPawnComponent_PassiveHealer::OnRep_PassiveHealingRunning() {
}

void UFortPawnComponent_PassiveHealer::Start() {
}

void UFortPawnComponent_PassiveHealer::Stop() {
}

FText UFortPawnComponent_PassiveHealer::GetGreetingPassiveHealingText() const {
    return FText::GetEmpty();
}

void UFortPawnComponent_PassiveHealer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPawnComponent_PassiveHealer, PassiveHealerInteractionCollisionProfile);
    DOREPLIFETIME(UFortPawnComponent_PassiveHealer, PassiveHealerInteractionBoxExtent);
    DOREPLIFETIME(UFortPawnComponent_PassiveHealer, PassiveHealerInteractionBoxOffset);
    DOREPLIFETIME(UFortPawnComponent_PassiveHealer, bPassiveHealingRunning);
    DOREPLIFETIME(UFortPawnComponent_PassiveHealer, SelectedEmotePrimaryAssetId);
    DOREPLIFETIME(UFortPawnComponent_PassiveHealer, SelectedInteractText);
    DOREPLIFETIME(UFortPawnComponent_PassiveHealer, SelectedGreetingText);
}

UFortPawnComponent_PassiveHealer::UFortPawnComponent_PassiveHealer() {
    GreetingTextWidgetComponentClass = NULL;
    AffiliationManager = NULL;
    InteractCollisionComponent = NULL;
    bPassiveHealingRunning = false;
    GreetingDistanceSqr = 0.0f;
    GreetingTextWidgetComponent = NULL;
    FortWorldHealItem = NULL;
}
