#include "FortCharacterPartsComponent.h"
#include "Net/UnrealNetwork.h"

bool UFortCharacterPartsComponent::ApplyParts(const TArray<UCustomCharacterPart*>& Parts) {
    return false;
}

void UFortCharacterPartsComponent::OnRep_CharacterParts(TArray<UCustomCharacterPart*> PreviousParts) {
}

void UFortCharacterPartsComponent::RemoveAllParts() {
}

bool UFortCharacterPartsComponent::RemovePart(EFortCustomPartType PartType) {
    return false;
}

bool UFortCharacterPartsComponent::RestoreParts() {
    return false;
}

void UFortCharacterPartsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCharacterPartsComponent, CharacterPartList);
}

UFortCharacterPartsComponent::UFortCharacterPartsComponent() {
    CustomizationAssetLoader = NULL;
}
