#include "FortAbilitySystemBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

bool UFortAbilitySystemBlueprintLibrary::IsCooldownTagsActive(AActor* Actor, FGameplayTagContainer CooldownTags) {
    return false;
}

void UFortAbilitySystemBlueprintLibrary::GrantAndActivateAbilityOnSelf(UAbilitySystemComponent* AbilitySystem, const TSubclassOf<UGameplayAbility>& AbilityToGrant, UObject* ContextObject) {
}

UFortAbilitySystemComponent* UFortAbilitySystemBlueprintLibrary::GetFortAbilitySystemComponent(AActor* Actor) {
    return NULL;
}

void UFortAbilitySystemBlueprintLibrary::GetCooldownTimeRemainingAndDuration(AActor* Actor, FGameplayTagContainer CooldownTags, float& TimeRemaining, float& CooldownDuration) {
}

float UFortAbilitySystemBlueprintLibrary::GetCooldownTimeRemaining(AActor* Actor, FGameplayTagContainer CooldownTags) {
    return 0.0f;
}

FString UFortAbilitySystemBlueprintLibrary::GetAbilitySystemDebugInfo(AActor* DebugActor) {
    return TEXT("");
}

TArray<AActor*> UFortAbilitySystemBlueprintLibrary::FilterTargetsInCone(const AActor* SourceActor, const TArray<AActor*>& ActorsToCheck, const FVector& ConeStart, const FVector& ConeEnd, const float ConeRadius, FGameplayTagContainer ExcludeFromObstructionTags, bool bShouldCheckLos) {
    return TArray<AActor*>();
}

void UFortAbilitySystemBlueprintLibrary::EffectContextSetCritical(FGameplayEffectContextHandle EffectContext, bool bInCritical) {
}

void UFortAbilitySystemBlueprintLibrary::AssignActiveGameplayEffectTagSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FGameplayTag DataTag, float Magnitude) {
}

void UFortAbilitySystemBlueprintLibrary::AssignActiveGameplayEffectSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FName DataName, float Magnitude) {
}

void UFortAbilitySystemBlueprintLibrary::GrantAndActivateAbilityOnSelfWithParams(UAbilitySystemComponent* AbilitySystem, const TSubclassOf<UGameplayAbility>& AbilityToGrant, UObject* ContextObject, const FGameplayEventData GameplayEventData) {
}

bool UFortAbilitySystemBlueprintLibrary::IsGameplayCueActive(AActor* Actor, const FGameplayTag& GameplayCueTag) {
    return false;
}

bool UFortAbilitySystemBlueprintLibrary::IsGameplayEffectContextAbilityChildOf(const FGameplayEffectContextHandle& GameplayEffectContextHandle, const TSubclassOf<UGameplayAbility> AbilityClass) {
    return false;
}

bool UFortAbilitySystemBlueprintLibrary::IsGameplayEffectContextAbilityInstance(const FGameplayEffectContextHandle& GameplayEffectContextHandle, const UGameplayAbility* AbilityInstance) {
    return false;
}

UFortAbilitySystemBlueprintLibrary::UFortAbilitySystemBlueprintLibrary() {
}

