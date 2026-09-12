#include "FortPlayerMannequin.h"

void AFortPlayerMannequin::UpdateMorphTargets() {
}

void AFortPlayerMannequin::ToggleGenderBP() {
}

bool AFortPlayerMannequin::SetWeaponSkeletalMesh(USkeletalMesh* SkeletalMesh) {
    return false;
}

void AFortPlayerMannequin::SetSkeletalMesh(USkeletalMesh* SkeletalMesh) {
}

bool AFortPlayerMannequin::SetPart(EFortCustomPartType Part, UCustomCharacterPart* PartAsset) {
    return false;
}

void AFortPlayerMannequin::SetMannequinLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2) {
}

void AFortPlayerMannequin::SetHeroType(UFortHeroType* NewHeroType) {
}

void AFortPlayerMannequin::SetAthenaCharacterDefAndVariants(UAthenaCharacterItemDefinition* NewAthenaCharacter, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) {
}

void AFortPlayerMannequin::SetAthenaBackpackDefAndVariants(UAthenaBackpackItemDefinition* NewAthenaBackpack, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) {
}

void AFortPlayerMannequin::ResetAthenaCharacterDefAndVariants(UAthenaCharacterItemDefinition* NewAthenaCharacter, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) {
}

bool AFortPlayerMannequin::RemovePart(EFortCustomPartType Part) {
    return false;
}



USkeletalMeshComponent* AFortPlayerMannequin::GetPartSkeletalMeshComponent(EFortCustomPartType Part) const {
    return NULL;
}

EFortCustomGender AFortPlayerMannequin::GetGender() const {
    return EFortCustomGender::Invalid;
}

void AFortPlayerMannequin::GetAllPartSkeletalMeshComponents(TArray<USkeletalMeshComponent*>& SkeletalMeshComponents) {
}

FGameplayTagContainer AFortPlayerMannequin::GatherMetaTags(const UAthenaCosmeticItemDefinition* CosmeticItem) const {
    return FGameplayTagContainer{};
}

bool AFortPlayerMannequin::CyclePartBP(EFortCustomPartType Part, bool bNextPart) {
    return false;
}

void AFortPlayerMannequin::ChoosePartsForHeroType(UFortHeroType* HeroType, const TArray<FMcpVariantChannelInfo> InOverrideVariants, const bool bClearOldParts) {
}

TArray<UCustomCharacterPart*> AFortPlayerMannequin::GetCustomCharacterParts() {
    return TArray<UCustomCharacterPart*>();
}

UAthenaCharacterItemDefinition* AFortPlayerMannequin::GetAthenaCharacterItemDefinition() const {
    return NULL;
}

UAudioComponent* AFortPlayerMannequin::GetEmoteAudioComponent(const FName InSoundId) const {
    return NULL;
}

AFortPlayerMannequin::AFortPlayerMannequin() {
    CurrentFortHeroType = NULL;
    AthenaCharacter = NULL;
    AthenaBackBling = NULL;
    MannequinBoundsScale = 1;
    bIsMannequinVisible = true;
    bMannequinCastsHiddenShadow = false;
    ColorSwatches[0] = NULL;
    ColorSwatches[1] = NULL;
    WeaponSkeletalMesh = NULL;
    WeaponAttachSocket = TEXT("RightHand");
    bInitialized = false;
    bLimitTick = true;
    bAutoRegisterWithBudgetAllocator = true;
    CustomizationAssetLoader = NULL;
}

