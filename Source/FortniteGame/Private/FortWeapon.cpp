#include "FortWeapon.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "FortGenericDataStoreManagerComponent.h"
#include "Net/UnrealNetwork.h"

bool AFortWeapon::WeaponDataIsValid() const {
    return false;
}

bool AFortWeapon::WeaponDataHasMatchingGameplayTag(const FGameplayTag TagToCheck) const {
    return false;
}

bool AFortWeapon::WeaponDataHasAnyMatchingGameplayTags(const FGameplayTagContainer TagContainer) const {
    return false;
}

void AFortWeapon::UseWeaponDurability(float DurabilityScale) {
}

void AFortWeapon::UpdateDamageStartLocation() {
}

bool AFortWeapon::TryReloadAmmoFromAbility() {
    return false;
}

void AFortWeapon::StopWeaponFireFX() {
}

void AFortWeapon::StopForceFeedback() {
}

void AFortWeapon::SetWeaponVisibilityControllerOnly(const bool bDesiredVisibility, const bool bForceUpdate) {
}

void AFortWeapon::SetWeaponVisibility(const bool bDesiredVisibility, const bool bForceUpdate) {
}

void AFortWeapon::SetWeaponPawnAnimsetOverride(UFortWeaponAnimSet* NewWeaponPawnAnimsetOverride) {
}

void AFortWeapon::SetWeaponData(UFortWeaponItemDefinition* InWeaponData) {
}

void AFortWeapon::SetTrajectoryVisibilityControllerOnly(AFortPlayerController* FortPlayerController, const bool bNewVisible) {
}

void AFortWeapon::SetTrajectoryVisibility(const bool bNewVisible) {
}

void AFortWeapon::SetTraceThroughPawnsLimit(int32 NewTraceThroughPawnsLimit) {
}

void AFortWeapon::SetTraceThroughPawns(bool bNewTraceThroughPawns) {
}

void AFortWeapon::SetTraceThroughBuildingsLimit(int32 NewTraceThroughBuildingsLimit) {
}

void AFortWeapon::SetShouldDrawNativeReticle(bool bInShouldDrawReticle) {
}

bool AFortWeapon::SetHudKeyActionVisibility(int32 Index, bool bVisible) {
    return false;
}

void AFortWeapon::SetHudKeyActionsVisibility(const TArray<FWeaponHudKeyActionVisibility>& IndexVisibilityArray) {
}

bool AFortWeapon::SetHiddenInGameOtherLocalControllersOnly(USceneComponent* SceneComp, const bool NewHidden, const bool bPropagateToChildren) {
    return false;
}

bool AFortWeapon::SetHiddenInGameControllerOnly(USceneComponent* SceneComp, const bool NewHidden, const bool bPropagateToChildren) {
    return false;
}

void AFortWeapon::SetFireSoundPitchMultiplier(const float NewPitch) {
}

void AFortWeapon::ServerSetChargeState_Implementation(uint8 NewState) {
}
bool AFortWeapon::ServerSetChargeState_Validate(uint8 NewState) {
    return true;
}

void AFortWeapon::ServerResetShotReport_Implementation() {
}
bool AFortWeapon::ServerResetShotReport_Validate() {
    return true;
}

void AFortWeapon::ServerReleaseWeaponAbility_Implementation(const FGameplayAbilitySpecHandle& SpecHandle) {
}
bool AFortWeapon::ServerReleaseWeaponAbility_Validate(const FGameplayAbilitySpecHandle& SpecHandle) {
    return true;
}

void AFortWeapon::RestoreOriginalMaterials() {
}

void AFortWeapon::ResetTempWeaponMaterialOverride() {
}

void AFortWeapon::Reload() {
}

void AFortWeapon::PlayWeaponFireFX(bool bSecondaryFire) {
}

void AFortWeapon::PlayReloadFX(EFortReloadFXState ReloadStage) {
}

void AFortWeapon::PlayNativeImpactFX(const FHitResult& HitResult, const FGameplayCueParameters& GameplayCueParameters) {
}

void AFortWeapon::PlayForceFeedback(bool bSecondaryFire, bool bPersistentFire, bool bImpact) {
}


void AFortWeapon::OnWeaponMontageStarted(UAnimMontage* WeaponMontage) {
}

void AFortWeapon::OnWeaponMontageBlendingOut(UAnimMontage* WeaponMontage, bool bInterrupted) {
}







void AFortWeapon::OnRep_ReplicatedWeaponData() {
}

void AFortWeapon::OnRep_ReplicatedCosmeticOverrideWeaponData() {
}

void AFortWeapon::OnRep_ReplicatedAppliedAlterations() {
}

void AFortWeapon::OnRep_PrimaryAbilitySpecHandle() {
}

void AFortWeapon::OnRep_PhantomReserveAmmo() {
}

void AFortWeapon::OnRep_LastFireTimeVerified() {
}

void AFortWeapon::OnRep_EquippedWeaponDestroyWrapper() {
}

void AFortWeapon::OnRep_ChargeStatusPack() {
}

void AFortWeapon::OnRep_AmmoCount(int32 OldAmmoCount) {
}









void AFortWeapon::OnPawnMontageStarted(UAnimMontage* PawnMontage) {
}

void AFortWeapon::OnPawnMontageBlendingOut(UAnimMontage* PawnMontage, bool bInterrupted) {
}












void AFortWeapon::ModAmmo(int32 AmountToUse) {
}


void AFortWeapon::K2_ConsumeAmmo(int32 Quantity) {
}

bool AFortWeapon::IsSuppressed() const {
    return false;
}

bool AFortWeapon::IsReloading() const {
    return false;
}

bool AFortWeapon::IsProjectileWeapon() const {
    return false;
}

bool AFortWeapon::IsFiring() const {
    return false;
}

bool AFortWeapon::IsEquipped() const {
    return false;
}

bool AFortWeapon::InventoryOwnerHasInfiniteAmmo() const {
    return false;
}

bool AFortWeapon::HasInfiniteAmmo() const {
    return false;
}

void AFortWeapon::HandleBlueprintProbablyCosmeticStomp() {
}

float AFortWeapon::GetWeaponRateOfFireModifier() {
    return 0.0f;
}

UFortWeaponAnimSet* AFortWeapon::GetWeaponPawnAnimSet() const {
    return NULL;
}

void AFortWeapon::GetWeaponMeshes(TArray<USkeletalMeshComponentBudgeted*>& WeaponMeshes) const {
}

USkeletalMeshComponentBudgeted* AFortWeapon::GetWeaponMesh() const {
    return NULL;
}

FDataTableRowHandle AFortWeapon::GetWeaponDataWeaponStatHandle() const {
    return FDataTableRowHandle{};
}

TEnumAsByte<EFortWeaponTriggerType::Type> AFortWeapon::GetWeaponDataTriggerType() const {
    return EFortWeaponTriggerType::OnPress;
}

FSlateBrush AFortWeapon::GetWeaponDataSmallPreviewImageBrush() const {
    return FSlateBrush{};
}

TSoftObjectPtr<UTexture2D> AFortWeapon::GetWeaponDataSmallPreviewImage() const {
    return NULL;
}

EFortRarity AFortWeapon::GetWeaponDataRarity() const {
    return EFortRarity::Common;
}

void AFortWeapon::GetWeaponDataPlayerGrantedGameplayTags(FGameplayTagContainer& GameplayTags) const {
}

EFortItemType AFortWeapon::GetWeaponDataItemType() const {
    return EFortItemType::WorldItem;
}

void AFortWeapon::GetWeaponDataGameplayTags(FGameplayTagContainer& GameplayTags) const {
}

UFortWorldItemDefinition* AFortWeapon::GetWeaponDataAmmoWorldItemDefinition() const {
    return NULL;
}

UFortWeaponItemDefinition* AFortWeapon::GetWeaponData() const {
    return NULL;
}

EFortWeaponChargeStateForFireFX AFortWeapon::GetWeaponChargeStateForFireFX() const {
    return EFortWeaponChargeStateForFireFX::Partial;
}

int32 AFortWeapon::GetTraceThroughPawnsLimit() const {
    return 0;
}

bool AFortWeapon::GetTraceThroughPawns() const {
    return false;
}

int32 AFortWeapon::GetTraceThroughBuildingsLimit() const {
    return 0;
}

float AFortWeapon::GetTimeToNextFire() const {
    return 0.0f;
}

bool AFortWeapon::GetSupportsAutoFireAtReticleTargetMode() const {
    return false;
}

FColor AFortWeapon::GetReticleColor() const {
    return FColor{};
}

int32 AFortWeapon::GetRemainingAmmo() const {
    return 0;
}

float AFortWeapon::GetReloadTime() const {
    return 0.0f;
}

float AFortWeapon::GetReloadProgress() const {
    return 0.0f;
}

UAnimMontage* AFortWeapon::GetReloadAnimation() const {
    return NULL;
}

float AFortWeapon::GetRange() const {
    return 0.0f;
}

float AFortWeapon::GetProjectileSpeed(float ChargePercent) const {
    return 0.0f;
}

float AFortWeapon::GetProjectilePitchOffset() const {
    return 0.0f;
}

void AFortWeapon::GetPlayerActiveGrantedGameplayTags(FGameplayTagContainer& GameplayTags) const {
}

bool AFortWeapon::GetPickupInstigatorData(int32& InstigatorHandle, FPickupInstigatorData& InstigatorData) const {
    return false;
}

FTransform AFortWeapon::GetMuzzleSocketTransform(int32 PatternIndex) const {
    return FTransform{};
}

FName AFortWeapon::GetMuzzleSocketName(int32 PatternIndex) const {
    return NAME_None;
}

FVector AFortWeapon::GetMuzzleLocation_Implementation(int32 PatternIndex) const {
    return FVector{};
}

float AFortWeapon::GetMeleeAttackPlayRate() {
    return 0.0f;
}

int32 AFortWeapon::GetMagazineAmmoCount() const {
    return 0;
}

int32 AFortWeapon::GetLocalRemainingAmmo() const {
    return 0;
}

int32 AFortWeapon::GetLocalMagazineAmmoCount() const {
    return 0;
}

bool AFortWeapon::GetIsTargeting() const {
    return false;
}

bool AFortWeapon::GetIsChargingWeapon() const {
    return false;
}

FGuid AFortWeapon::GetInventoryGUID() const {
    return FGuid{};
}

TArray<FWeaponHudData> AFortWeapon::GetHudKeyActionData() const {
    return TArray<FWeaponHudData>();
}

float AFortWeapon::GetFiringRate() const {
    return 0.0f;
}

FVector AFortWeapon::GetDamageStartLocation(FVector& AimDir, int32 PatternIndex) const {
    return FVector{};
}

float AFortWeapon::GetCurrentMaxChargePercent() const {
    return 0.0f;
}

TEnumAsByte<EFortWeaponCoreAnimation::Type> AFortWeapon::GetCoreAnimation() const {
    return EFortWeaponCoreAnimation::Melee;
}

float AFortWeapon::GetChargeToMinPercent() const {
    return 0.0f;
}

float AFortWeapon::GetChargeTime() const {
    return 0.0f;
}

float AFortWeapon::GetChargePercent() const {
    return 0.0f;
}

int32 AFortWeapon::GetBulletsPerClip() const {
    return 0;
}

int32 AFortWeapon::GetAmmoCostPerFire(float ChargePercentage) const {
    return 0;
}

TArray<UFortAlterationItemDefinition*> AFortWeapon::GetAlterations() const {
    return TArray<UFortAlterationItemDefinition*>();
}

float AFortWeapon::GetAccumulatedChargeTime() const {
    return 0.0f;
}

void AFortWeapon::GameplayCue_Weapons_Activation(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortWeapon::GameplayCue_Impact(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

bool AFortWeapon::DoesHaveOverrideWrap() const {
    return false;
}

FColor AFortWeapon::DetermineReticleColor() {
    return FColor{};
}

void AFortWeapon::ClientReportShotFlags_Implementation(uint32 ShotFlags, int32 ShotIndex) {
}

void AFortWeapon::ClientGivenTo_Implementation(APawn* P) {
}

void AFortWeapon::CheckPendingFire() {
}

void AFortWeapon::CancelActiveAbility() {
}

void AFortWeapon::AttemptApplyOverrideWrapToActor(AActor* Actor) const {
}

void AFortWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeapon, bIsEquippingWeapon);
    DOREPLIFETIME(AFortWeapon, bIsReloadingWeapon);
    DOREPLIFETIME(AFortWeapon, bIsChargingWeapon);
    DOREPLIFETIME(AFortWeapon, WeaponData);
    DOREPLIFETIME(AFortWeapon, CosmeticOverrideWeaponData);
    DOREPLIFETIME(AFortWeapon, EquippedWeaponDestroyWrapperRepCounter);
    DOREPLIFETIME(AFortWeapon, LastFireTimeVerified);
    DOREPLIFETIME(AFortWeapon, ItemEntryGuid);
    DOREPLIFETIME(AFortWeapon, WeaponLevel);
    DOREPLIFETIME(AFortWeapon, AmmoCount);
    DOREPLIFETIME(AFortWeapon, PhantomReserveAmmo);
    DOREPLIFETIME(AFortWeapon, ChargeStatusPack);
    DOREPLIFETIME(AFortWeapon, ActiveAbility);
    DOREPLIFETIME(AFortWeapon, PrimaryAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, SecondaryAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, ReloadAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, ImpactAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, AppliedAlterations);
    DOREPLIFETIME(AFortWeapon, bDisableEquipAnimation);
    DOREPLIFETIME(AFortWeapon, TrackerGuid);
    DOREPLIFETIME(AFortWeapon, ReticleTraceOverrideSpecHandle);
    DOREPLIFETIME(AFortWeapon, WeaponModSlots);
}

void AFortWeapon::OnRep_ReplicatedWeaponModSlots() {
}

bool AFortWeapon::SetHudKeyActionDescription(int32 Index, FText InActionDescription) {
    return false;
}

bool AFortWeapon::SetHudKeyActionDescriptionByID(const FString& KeyActionId, FText InActionDescription) {
    return false;
}

bool AFortWeapon::SetHudKeyActionVisibilityByID(const FString& KeyActionId, bool bVisible) {
    return false;
}

void AFortWeapon::SetTraceThroughLandscapeLimit(int32 NewTraceThroughTerrainLimit) {
}

USoundBase* AFortWeapon::GetChargedWeaponFireSound_Implementation(EFortWeaponSoundState::Type Channel, const bool bSecondaryFire) const {
    return NULL;
}

float AFortWeapon::GetChargeToAutoDischarge() const {
    return 0.0f;
}

int32 AFortWeapon::GetTraceThroughLandscapeLimit() const {
    return 0;
}

FGuid AFortWeapon::GetTrackerGuid() const {
    return FGuid{};
}

UFortWeaponAdditiveAnimSet* AFortWeapon::GetWeaponAdditiveAnimSet() const {
    return NULL;
}

bool AFortWeapon::IsGauntlet() const {
    return false;
}

AFortWeapon::AFortWeapon() {
    bIsEquippingWeapon = false;
    bIsReloadingWeapon = false;
    bIsChargingWeapon = false;
    bIsAimingConsumable = false;
    bUseAttributeCaching = true;
    WeaponData = NULL;
    CosmeticOverrideWeaponData = NULL;
    bImpactFXAttachedToHitActor = false;
    HitNotifyAudioBank = NULL;
    bRemoveAbilitiesWhenRemovedFromInventory = true;
    GrantedAbilityRemovalPolicy[0] = EFortWeaponAbilityRemovalPolicy::GameDefault;
    GrantedAbilityRemovalPolicy[1] = EFortWeaponAbilityRemovalPolicy::GameDefault;
    GrantedAbilityRemovalPolicy[2] = EFortWeaponAbilityRemovalPolicy::GameDefault;
    EquippedWeaponDestroyWrapperRepCounter = 0;
    PersistentFXStartTime = 1;
    MinimumTimeForPersistentFX = 1;
    WeaponReduceMeshWorkSetting = EFortWeaponReduceMeshWorkSetting::DisableTick;
    bShouldDrawNativeReticle = true;
    ReticleImage = NULL;
    AutoFireReticleImage = NULL;
    HitNotifyReticleImage = NULL;
    HitNotifyLocationReticleImage = NULL;
    HitNotifyDisplayDuration = 1;
    ReticleCenterImage = NULL;
    ReticleCenterPerfectAimImage = NULL;
    ReticleInvalidTargetImage = NULL;
    MuzzleBlockedReticleImage = NULL;
    ReticleAltCenterImage = NULL;
    ReticleOuterImage = NULL;
    ReticleAltOuterImage = NULL;
    ReticleDefaultPrimaryStrikeAngle = 1;
    ReticleDefaultSecondaryStrikeAngle = 1;
    bSupportsAutofireAtReticleTarget = true;
    CameraBase3PClass = NULL;
    CameraTargeting3PClass = NULL;
    CameraBase1PClass = NULL;
    CameraTargeting1PClass = NULL;
    DestroyedSound = NULL;
    OutOfAmmoSound = NULL;
    ReloadSounds[0] = NULL;
    ReloadSounds[1] = NULL;
    ReloadSounds[2] = NULL;
    PrimaryFireSound1P = NULL;
    PrimaryFireSound[0] = NULL;
    PrimaryFireSound[1] = NULL;
    PrimaryFireSound[2] = NULL;
    PrimaryFireStopSound1P = NULL;
    PrimaryFireStopSound[0] = NULL;
    PrimaryFireStopSound[1] = NULL;
    PrimaryFireStopSound[2] = NULL;
    SecondaryFireSound[0] = NULL;
    SecondaryFireSound[1] = NULL;
    SecondaryFireSound[2] = NULL;
    SecondaryFireStopSound[0] = NULL;
    SecondaryFireStopSound[1] = NULL;
    SecondaryFireStopSound[2] = NULL;
    ChargeFireSound1P[0] = NULL;
    ChargeFireSound1P[1] = NULL;
    ChargeFireSound1P[2] = NULL;
    ChargeFireSound[0] = NULL;
    ChargeFireSound[1] = NULL;
    ChargeFireSound[2] = NULL;
    TargetingStartSound = NULL;
    TargetingEndSound = NULL;
    PrimaryFireSoundFadeOutTime = 1;
    ImpactCameraShake = NULL;
    PrimaryForceFeedbackEffect = NULL;
    SecondaryForceFeedbackEffect = NULL;
    PrimaryImpactForceFeedbackEffect = NULL;
    SecondaryImpactForceFeedbackEffect = NULL;
    DataStoreManager = CreateDefaultSubobject<UFortGenericDataStoreManagerComponent>(TEXT("GeneralDataStore"));
    FireAudioChannels[0] = NULL;
    FireAudioChannels[1] = NULL;
    FireAudioChannels[2] = NULL;
    FireAudioChannels[3] = NULL;
    ReloadAudioChannels[0] = NULL;
    ReloadAudioChannels[1] = NULL;
    ReloadAudioChannels[2] = NULL;
    TargetingAudioChannels[0] = NULL;
    TargetingAudioChannels[1] = NULL;
    CurrentGunFireIndex = 0;
    WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("WeaponMesh0"));
    FireAudioChannelWantsToPlay[0] = 0;
    FireAudioChannelWantsToPlay[1] = 0;
    FireAudioChannelWantsToPlay[2] = 0;
    FireAudioChannelWantsToPlay[3] = 0;
    WrapSectionMask = 0;
    bUsingSecondaryFireAudio = false;
    bHasCachedAdditionalMeshes = false;
    LastFireTime = 1;
    LastFireTimeVerified = 1;
    bIsPlayingFireFX = false;
    bFireFXTriggered = false;
    TimerIntervalAdjustment = 1;
    InputQueueTimePercent = 1;
    bAllowTargeting = false;
    bIsTargeting = false;
    LastTargetingTransitionTime = 1;
    bTraceThroughPawns = false;
    bTraceThroughWorld = false;
    TraceThroughPawnsLimit = 0;
    TraceThroughBuildingsLimit = 0;
    bUseProjectileTrace = false;
    bUseWeaponTraceForReticle = false;
    ProjectilePitchOffset = 1;
    LastReloadTime = 1;
    LastSuccessfulReloadTime = 1;
    CurrentReloadDuration = 1;
    WeaponLevel = 0;
    AmmoCount = 0;
    PhantomReserveAmmo = 0;
    BurstFireCounter = 0;
    ChargeTime = 1;
    AccumulatedChargeTime = 1;
    CurrentShotLogIndex = 0;
    bInitializedWeaponItem = false;
    bPendingDestroyDueToDurabilityOrStackCount = false;
    bCompletedAppliedAlterationsLoad = false;
    bCompletedWeaponLoad = false;
    bIsCosmeticLimited = false;
    bReplicatedAppliedAlterationsWithNoInstigator = false;
    bShouldFullyApplyVariantsOnEquip = false;
    ChargeStatusPack = 0;
    ActiveAbility = NULL;
    AppliedItemWrap = NULL;
    CachedFXManager = NULL;
    CachedSignificanceManager = NULL;
    MuzzleSocketName = TEXT("Muzzle");
    MuzzleFalloffSocketName = TEXT("MuzzleFalloff");
    bForceOverrideGenerateOverlapEvents = false;
    MaxWeaponSwitchNetworkWaitTime = 1;
    LastFireAbilityTime = 1;
    EquipAnimation = NULL;
    ReloadAnimation = NULL;
    PrimaryAbilityAnimation = NULL;
    WeaponEquipMontage = NULL;
    WeaponReloadMontage = NULL;
    WeaponPrimaryAbilityMontage = NULL;
    PoseOffsetAnimSequence = NULL;
    PoseOffsetAnimSequenceFemaleOverride = NULL;
    WeaponCoreAnimation = EFortWeaponCoreAnimation::Melee;
    WeaponPawnAnimSet = NULL;
    WeaponPawnAnimLayerOverlayClass = NULL;
    WeaponPawnAnimsetOverride = NULL;
    UnableToPerformActionMontageOverride = NULL;
    ItemWrapModifier = NULL;
    LockOnTargetCandidate = NULL;
    bIgnoreTryToFireSlotCooldownRestriction = false;
    bFireConsumableAnalyticEvent = true;
    bDisableEquipAnimation = false;
    TraceThroughLandscapeLimit = 0;
    bUseVariableFocalDistanceTargeting = false;
    bSecondaryFireAlwaysCancelSwimSprint = false;
    SecondaryAbilityAnimation = NULL;
    WeaponSecondaryAbilityMontage = NULL;
    WeaponAdditiveAnimSet = NULL;
}

