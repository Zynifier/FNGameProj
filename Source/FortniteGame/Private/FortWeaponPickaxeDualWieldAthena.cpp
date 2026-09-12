#include "FortWeaponPickaxeDualWieldAthena.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Net/UnrealNetwork.h"

void AFortWeaponPickaxeDualWieldAthena::SetCurrentSwingState(EFortDualWieldSwingState NewState) {
}

void AFortWeaponPickaxeDualWieldAthena::OnRep_WieldStance() {
}

EFortDualWieldStance AFortWeaponPickaxeDualWieldAthena::GetWieldStance() const {
    return EFortDualWieldStance::TwoPicksInUse;
}

USkeletalMeshComponentBudgeted* AFortWeaponPickaxeDualWieldAthena::GetWeaponMeshOffhand() const {
    return NULL;
}

bool AFortWeaponPickaxeDualWieldAthena::GetUseAnimTrailsOffhandPSC() const {
    return false;
}

UFXSystemComponent* AFortWeaponPickaxeDualWieldAthena::GetSwingOffhandVFXComponent() const {
    return NULL;
}

UParticleSystemComponent* AFortWeaponPickaxeDualWieldAthena::GetSwingOffhandPSC() const {
    return NULL;
}

FName AFortWeaponPickaxeDualWieldAthena::GetSwingFXOffhandSocketName() const {
    return NAME_None;
}

UFXSystemComponent* AFortWeaponPickaxeDualWieldAthena::GetIdleOffhandVFXComponent() const {
    return NULL;
}

UParticleSystemComponent* AFortWeaponPickaxeDualWieldAthena::GetIdleOffhandPSC() const {
    return NULL;
}

FName AFortWeaponPickaxeDualWieldAthena::GetIdleFXOffhandSocketName() const {
    return NAME_None;
}

EFortDualWieldSwingState AFortWeaponPickaxeDualWieldAthena::GetCurrentSwingState() const {
    return EFortDualWieldSwingState::None;
}

float AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandWidth() const {
    return 0.0f;
}

FName AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandSecondSocketName() const {
    return NAME_None;
}

UParticleSystem* AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandPSCTemplate() const {
    return NULL;
}

UFXSystemComponent* AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandPSC() const {
    return NULL;
}

UNiagaraSystem* AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandNiagaraAsset() const {
    return NULL;
}

FName AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandFirstSocketName() const {
    return NAME_None;
}

UFXSystemComponent* AFortWeaponPickaxeDualWieldAthena::CreateAnimTrailOffhandFX() {
    return NULL;
}

void AFortWeaponPickaxeDualWieldAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeaponPickaxeDualWieldAthena, CurrentWieldStance);
}

AFortWeaponPickaxeDualWieldAthena::AFortWeaponPickaxeDualWieldAthena() {
    WeaponMeshOffhand = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("WeaponMeshOffhand"));
    SwingOffhandVFX = NULL;
    IdleOffhandVFX = NULL;
    AnimTrailsOffhandPSC = NULL;
    AnimTrailsOffhandPSCTemplate = NULL;
    AnimTrailsOffhandNiagaraAsset = NULL;
    bUseAnimTrailsOffhandPSC = true;
    AnimTrailsOffhandFirstSocketName = TEXT("Melee_L_Upper");
    AnimTrailsOffhandSecondSocketName = TEXT("Melee_L_Lower");
    AnimTrailsOffhandWidth = 1;
    IdleFXOffhandSocketName = TEXT("idle_fx_l");
    SwingFXOffhandSocketName = TEXT("SwingFX_l");
    OffhandGenericImpactSound = NULL;
    CurrentWieldStance = EFortDualWieldStance::TwoPicksInUse;
    EffectiveSingleWieldState = NULL;
    OriginalEquipAnimation = NULL;
    PickaxeOffhandHarvestingMontage = NULL;
    PickaxeOffhandEquipMontage = NULL;
    LastAppliedWieldState = NULL;
    PrimaryFireAbilityOverrideClass = NULL;
}

