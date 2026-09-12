#include "FortAffiliationFunctionLibrary.h"

void UFortAffiliationFunctionLibrary::AddToFaction(const AActor* Actor, const FGameplayTag FactionTag) {
}

void UFortAffiliationFunctionLibrary::AddToFactions(const AActor* Actor, const FGameplayTagContainer& FactionsTagContainer) {
}

void UFortAffiliationFunctionLibrary::ChangeAttitudeBetweenActors(UObject* WorldContextObject, const AActor* FactionOwner, const AActor* TowardsActor, const TEnumAsByte<EFortFactionAttitude::Type> Attitude) {
}

FGameplayTagContainer UFortAffiliationFunctionLibrary::GetCurrentFactions(const AActor* Actor) {
    return FGameplayTagContainer{};
}

void UFortAffiliationFunctionLibrary::RemoveFromAllFactions(const AActor* Actor) {
}

void UFortAffiliationFunctionLibrary::RemoveFromFaction(const AActor* Actor, const FGameplayTag FactionTag) {
}

UFortAffiliationFunctionLibrary::UFortAffiliationFunctionLibrary() {
}
