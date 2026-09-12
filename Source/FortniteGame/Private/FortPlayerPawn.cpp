#include "FortPlayerPawn.h"
#include "Particles/ParticleSystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortPlayerPawn::VerifySkydivingMatchesServer() {
}

void AFortPlayerPawn::UpdatePreviousPositionAndVelocity(float DeltaSeconds, FVector OldLocation, FVector OldVelocity) {
}

void AFortPlayerPawn::UpdateGameStateModifiedGravity(float GravityMultiplier) {
}

void AFortPlayerPawn::UpdateAimbotDetectionStatus() {
}

void AFortPlayerPawn::UnableToPerformAction(bool bPlayMontage, const FGameplayTagContainer& FailedReason) {
}

void AFortPlayerPawn::ToggleGender() {
}

void AFortPlayerPawn::ToggleBodyType() {
}

float AFortPlayerPawn::TimeFromJumpApex() const {
    return 0.0f;
}

void AFortPlayerPawn::SwitchToPreviousPart(const FString& PartName) {
}

void AFortPlayerPawn::SwitchToNextPart(const FString& PartName) {
}

void AFortPlayerPawn::SwapPawnCosmeticItemAndVariant(const FGuid& SwapId, const TArray<FFortSwapItemAndVariantData>& SwapData, bool bAllowActiveHotswap, EFortAppliedSwapItemAndVariantState ForcedSwapState) {
}

bool AFortPlayerPawn::SupportsTetheredMovement() {
    return false;
}

void AFortPlayerPawn::StopItemInteractionAbility(const EItemInteractionStatus ItemInteractionStatus) {
}

void AFortPlayerPawn::StopFacialAnimationStream() {
}

void AFortPlayerPawn::StopCarryingPlayer(bool bFromAbilityCancel) {
}

void AFortPlayerPawn::StartGhostModeExit(const float InGhostModeExitDuration) {
}

void AFortPlayerPawn::StartFloating() {
}

void AFortPlayerPawn::StartedInteractSearch() {
}

bool AFortPlayerPawn::ShouldPlayDeathAnimation() {
    return false;
}

bool AFortPlayerPawn::ShouldDriverHaveReticle() const {
    return false;
}

bool AFortPlayerPawn::ShouldAllowShadowStanceMaterialsForPartType(EFortCustomPartType PartType) const {
    return false;
}

void AFortPlayerPawn::SetWeaponOverrideAnimSet(UFortWeaponAnimSet* WeaponOverrideAnimSet) {
}

void AFortPlayerPawn::SetVehicleOverrideExit(bool bIgnoreLaunch) {
}

void AFortPlayerPawn::SetThrownItemTrajectoryHitResult(const FHitResult& InHitResult) {
}

void AFortPlayerPawn::SetTetherPawn(APawn* InTetherPawn) {
}

void AFortPlayerPawn::SetStasisMode(EFortPawnStasisMode InStasisMode) {
}

void AFortPlayerPawn::SetPreviousVelocity(FVector OldVelocity) {
}

void AFortPlayerPawn::SetPreviousPosition(FVector OldPosition) {
}

void AFortPlayerPawn::SetPossessedProp(ABuildingGameplayActorPlayerPropAttachment* InPossessedProp) {
}

void AFortPlayerPawn::SetPetType(const UAthenaPetItemDefinition* PetToCreate) {
}

void AFortPlayerPawn::SetPendingTetherLaunch(float Amount) {
}

void AFortPlayerPawn::SetPendingSkydiveLaunch(bool bPending) {
}

void AFortPlayerPawn::SetNumActiveBalloons(int32 NewBalloonCount) {
}

void AFortPlayerPawn::SetIsInFrontEndHologram(bool bInFrontEndHologram) {
}

void AFortPlayerPawn::SetInVortex(bool bNewValue, float UpwardLaunchVelocity, float GravityFloorAltitude, float GravityFloorWidth, float GravityFloorGravityScalar, float GravityFloorTerminalVelocity) {
}

void AFortPlayerPawn::SetInSlipperyMovement(bool bIsSlippery) {
}

void AFortPlayerPawn::SetHomeActor(AActor* NewActor) {
}

void AFortPlayerPawn::SetFortPlayerPawnLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2) {
}


void AFortPlayerPawn::SetFacialTypeOverride(EFortFacialAnimTypes NewType) {
}

void AFortPlayerPawn::SetEquippedArmoredInterface(TScriptInterface<IFortArmoredInterface> InInterface) {
}

void AFortPlayerPawn::SetCustomMeshHeightAdjustTarget(int32 HeightAdjust, int32 LerpSpeed) {
}

void AFortPlayerPawn::SetClientObservedStatsFromAnotherPawn(AFortPlayerPawn* OtherPawn) {
}

void AFortPlayerPawn::SetBalloonRope(ABuildingGameplayActor* InBalloonRope) {
}

void AFortPlayerPawn::SetActorHiddenInGameWithGameplayEffect(bool bNewHidden, const TSubclassOf<UGameplayEffect>& HidePawnGameplayEffectClass, bool bRemoveAllOfThisTag) {
}

void AFortPlayerPawn::ServerUpdateVehicleInputStateUnreliable_Implementation(FFortAthenaVehicleInputStateUnreliable ReliableInput, float Timestamp) {
}
bool AFortPlayerPawn::ServerUpdateVehicleInputStateUnreliable_Validate(FFortAthenaVehicleInputStateUnreliable ReliableInput, float Timestamp) {
    return true;
}

void AFortPlayerPawn::ServerUpdateVehicleInputStateReliable_Implementation(FFortAthenaVehicleInputStateReliable ReliableInput) {
}
bool AFortPlayerPawn::ServerUpdateVehicleInputStateReliable_Validate(FFortAthenaVehicleInputStateReliable ReliableInput) {
    return true;
}

void AFortPlayerPawn::ServerUnmarkRespawned_Implementation() {
}
bool AFortPlayerPawn::ServerUnmarkRespawned_Validate() {
    return true;
}

void AFortPlayerPawn::ServerToggleGender_Implementation() {
}
bool AFortPlayerPawn::ServerToggleGender_Validate() {
    return true;
}

void AFortPlayerPawn::ServerToggleBodyType_Implementation() {
}
bool AFortPlayerPawn::ServerToggleBodyType_Validate() {
    return true;
}

void AFortPlayerPawn::ServerThrowCarriedPlayer_Implementation() {
}

void AFortPlayerPawn::ServerSetAttachment_Implementation(FRepFortMeshAttachment Attachment) {
}
bool AFortPlayerPawn::ServerSetAttachment_Validate(FRepFortMeshAttachment Attachment) {
    return true;
}

void AFortPlayerPawn::ServerSetAimbotDetection_Implementation(bool bEnableDetection) {
}
bool AFortPlayerPawn::ServerSetAimbotDetection_Validate(bool bEnableDetection) {
    return true;
}

void AFortPlayerPawn::ServerSendZiplineState_Implementation(const FZiplinePawnState& InZiplineState) {
}
bool AFortPlayerPawn::ServerSendZiplineState_Validate(const FZiplinePawnState& InZiplineState) {
    return true;
}

void AFortPlayerPawn::ServerSendAimbotDetectionStatus_Implementation(const TArray<uint8>& Payload) {
}
bool AFortPlayerPawn::ServerSendAimbotDetectionStatus_Validate(const TArray<uint8>& Payload) {
    return true;
}

void AFortPlayerPawn::ServerRootMotionInterruptNotifyStopMontage_Implementation(UAnimMontage* MontageToStop) {
}
bool AFortPlayerPawn::ServerRootMotionInterruptNotifyStopMontage_Validate(UAnimMontage* MontageToStop) {
    return true;
}

void AFortPlayerPawn::ServerReviveFromDBNO_Implementation(AController* EventInstigator) {
}
bool AFortPlayerPawn::ServerReviveFromDBNO_Validate(AController* EventInstigator) {
    return true;
}

void AFortPlayerPawn::ServerRespawnFromDBNO_Implementation() {
}
bool AFortPlayerPawn::ServerRespawnFromDBNO_Validate() {
    return true;
}

void AFortPlayerPawn::ServerResetAbilitySystemComponent_Implementation() {
}

void AFortPlayerPawn::ServerPlayUnableToPerformActionMontage_Implementation() {
}
bool AFortPlayerPawn::ServerPlayUnableToPerformActionMontage_Validate() {
    return true;
}

AFortAthenaVehicle* AFortPlayerPawn::ServerOnExitVehicle(ETryExitVehicleBehavior ExitForceBehavior) {
    return NULL;
}

void AFortPlayerPawn::ServerInterrogateDBNOPlayer_Implementation(AFortPlayerPawn* InDBNOHoistee) {
}

void AFortPlayerPawn::ServerHoistDBNOPlayer_Implementation(AFortPlayerPawn* InDBNOHoistee) {
}

void AFortPlayerPawn::ServerHandlePickupInfo_Implementation(AFortPickup* Pickup, FFortPickupRequestInfo Params) {
}
bool AFortPlayerPawn::ServerHandlePickupInfo_Validate(AFortPickup* Pickup, FFortPickupRequestInfo Params) {
    return true;
}

void AFortPlayerPawn::ServerHandlePickup(AFortPickup* Pickup, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound) {
}

void AFortPlayerPawn::ServerEquipLastWeaponOrGadget_Implementation(bool bForce) {
}
bool AFortPlayerPawn::ServerEquipLastWeaponOrGadget_Validate(bool bForce) {
    return true;
}

void AFortPlayerPawn::ServerDropCarriedPlayer_Implementation() {
}

void AFortPlayerPawn::ServerCyclePart_Implementation(EFortCustomPartType Part, bool bNextPart) {
}
bool AFortPlayerPawn::ServerCyclePart_Validate(EFortCustomPartType Part, bool bNextPart) {
    return true;
}

void AFortPlayerPawn::ServerCycleColorSwatch_Implementation(EColorSwatchType SwatchType, bool bNext) {
}
bool AFortPlayerPawn::ServerCycleColorSwatch_Validate(EColorSwatchType SwatchType, bool bNext) {
    return true;
}

void AFortPlayerPawn::ServerCycleAccessoryColorSwatch_Implementation(EFortCustomPartType Part, bool bNext) {
}
bool AFortPlayerPawn::ServerCycleAccessoryColorSwatch_Validate(EFortCustomPartType Part, bool bNext) {
    return true;
}

void AFortPlayerPawn::ServerChoosePart_Implementation(EFortCustomPartType Part, UCustomCharacterPart* ChosenCharacterPart) {
}
bool AFortPlayerPawn::ServerChoosePart_Validate(EFortCustomPartType Part, UCustomCharacterPart* ChosenCharacterPart) {
    return true;
}

void AFortPlayerPawn::ServerChooseGender_Implementation(EFortCustomGender Gender) {
}
bool AFortPlayerPawn::ServerChooseGender_Validate(EFortCustomGender Gender) {
    return true;
}


void AFortPlayerPawn::ReviveFromDBNO(AController* EventInstigator) {
}

void AFortPlayerPawn::RestoreDBNOCollisionAfterDrop() {
}

void AFortPlayerPawn::ResetGameplayAttributes(const bool bIgnoreStatClamp) {
}

void AFortPlayerPawn::ResetClothAndDynamics() {
}

void AFortPlayerPawn::RemoveExpiredIgnoredActorsAndCheckForNextTimer() {
}

void AFortPlayerPawn::RemoveAttachment() {
}

void AFortPlayerPawn::RemoveAbilityAITarget(AFortAIPawn* InTarget) {
}

void AFortPlayerPawn::RandomizeCharacter(const FString& GenderString) {
}

void AFortPlayerPawn::PushFootstepBankOverride(int32 Priority, UFortFootstepAudioBank* InFootstepBankOverride) {
}

void AFortPlayerPawn::PushAnimBPOverride(int32 Priority, TSubclassOf<UAnimInstance> InAnimBPOverride) {
}

void AFortPlayerPawn::PostResIn() {
}

void AFortPlayerPawn::PopFootstepBankOverride(int32 Priority, UFortFootstepAudioBank* InFootstepBankOverride) {
}

void AFortPlayerPawn::PopAnimBPOverride(int32 Priority, TSubclassOf<UAnimInstance> InAnimBPOverride) {
}

void AFortPlayerPawn::PlayGroupEmote(const UFortMontageItemDefinitionBase* EmoteAsset) {
}

void AFortPlayerPawn::PerformSupplementalKillVolumeSweep() {
}

void AFortPlayerPawn::PassengerToPassengerAnimationStopped() {
}

void AFortPlayerPawn::PassengerToDriverAnimationStopped() {
}







void AFortPlayerPawn::OnRep_WaitingForEmoteInteraction() {
}

void AFortPlayerPawn::OnRep_VehicleInputStateUnreliable() {
}

void AFortPlayerPawn::OnRep_VehicleInputStateReliableForReplay() {
}

void AFortPlayerPawn::OnRep_UpdateContextTracker() {
}

void AFortPlayerPawn::OnRep_StoredControlRotation() {
}

void AFortPlayerPawn::OnRep_StartedInteractSearch() {
}

void AFortPlayerPawn::OnRep_ReplicatedSkyTube() {
}

void AFortPlayerPawn::OnRep_ReplicatedIsInVortex() {
}

void AFortPlayerPawn::OnRep_ReplicatedIsInSlipperyMovement() {
}

void AFortPlayerPawn::OnRep_ReplicatedInGliderRedeploy() {
}

void AFortPlayerPawn::OnRep_ReplicatedAnimMontage() {
}

void AFortPlayerPawn::OnRep_RepAnimMontageStartSection() {
}

void AFortPlayerPawn::OnRep_PossessedProp(ABuildingGameplayActorPlayerPropAttachment* OldProp) {
}

void AFortPlayerPawn::OnRep_ParachuteLockedOpen() {
}

void AFortPlayerPawn::OnRep_NetMovementPrioritized(bool bOldNetMovementPrioritized) {
}

void AFortPlayerPawn::OnRep_LockGroupEmoteLeaderRotation() {
}

void AFortPlayerPawn::OnRep_IsTargeting() {
}

void AFortPlayerPawn::OnRep_IsSlopeSliding() {
}

void AFortPlayerPawn::OnRep_IsSkydivingFromBus() {
}

void AFortPlayerPawn::OnRep_IsSkydiving(bool bPreviousState) {
}

void AFortPlayerPawn::OnRep_IsParachuteOpen(bool bPreviousState) {
}

void AFortPlayerPawn::OnRep_IsParachuteForcedOpen() {
}

void AFortPlayerPawn::OnRep_IsInWaterVolume() {
}

void AFortPlayerPawn::OnRep_IsInsideSafeZone() {
}

void AFortPlayerPawn::OnRep_IsInAnyStorm() {
}

void AFortPlayerPawn::OnRep_IsEmoteLeader() {
}

void AFortPlayerPawn::OnRep_InVehicle() {
}

void AFortPlayerPawn::OnRep_GroupEmoteLookTarget() {
}

void AFortPlayerPawn::OnRep_GliderOverride() {
}

void AFortPlayerPawn::OnRep_FootstepBankOverride() {
}

void AFortPlayerPawn::OnRep_FacialTypeOverride() {
}

void AFortPlayerPawn::OnRep_DBNOHoisterData(const FFortDBNOCarryHoisterData& PreviousDBNOHoisterData) {
}

void AFortPlayerPawn::OnRep_DBNOHoistee() {
}

void AFortPlayerPawn::OnRep_CustomMeshHeightAdjustTarget() {
}

void AFortPlayerPawn::OnRep_ControlledRCPawn() {
}

void AFortPlayerPawn::OnRep_CharPartAnimMontageInfo() {
}

void AFortPlayerPawn::OnRep_bHasStartedFloating() {
}

void AFortPlayerPawn::OnRep_BaseCosmeticLoadout() {
}

void AFortPlayerPawn::OnRep_AttachmentMesh() {
}

void AFortPlayerPawn::OnRep_AppliedSwaps() {
}

void AFortPlayerPawn::OnRep_AnimBPOverride() {
}

void AFortPlayerPawn::OnRep_AccelerationZPack() {
}

void AFortPlayerPawn::OnRep_AccelerationPack() {
}










void AFortPlayerPawn::OnEndParachuteMovement_Implementation() {
}


void AFortPlayerPawn::OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AFortPlayerPawn::OnBeginParachuteMovement_Implementation() {
}


void AFortPlayerPawn::MulticastUpdateVehicleInputStateReliable_Implementation(FFortAthenaVehicleInputStateReliable ReliableInput) {
}

void AFortPlayerPawn::MulticastSetWeaponOverrideAnimSet_Implementation(UFortWeaponAnimSet* WeaponOverrideAnimSet) {
}

void AFortPlayerPawn::MulticastClearWeaponOverrideAnimSet_Implementation() {
}

void AFortPlayerPawn::MarkSafe(TSubclassOf<UGameplayEffect> GEtoApply) {
}

void AFortPlayerPawn::ManualReviveFromDBNO(TSubclassOf<UGameplayEffect> ReviveGameplayEffectsOverride) {
}

void AFortPlayerPawn::LocalThrowCarriedPlayer() {
}

bool AFortPlayerPawn::LocalIsTryingToGetPickup() {
    return false;
}

void AFortPlayerPawn::ListCharacterParts(const FString& GenderAndOrPartString) const {
}

bool AFortPlayerPawn::IsZiplining() const {
    return false;
}

bool AFortPlayerPawn::IsWaterSprintBoosting() const {
    return false;
}

bool AFortPlayerPawn::IsUsingUmbrella() const {
    return false;
}

bool AFortPlayerPawn::IsUsingPersonalVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsTethered() const {
    return false;
}

bool AFortPlayerPawn::IsSprinting() const {
    return false;
}

bool AFortPlayerPawn::IsSkydivingFromLaunchPad() const {
    return false;
}

bool AFortPlayerPawn::IsSkydivingFromBus() const {
    return false;
}

bool AFortPlayerPawn::IsSkydiving() const {
    return false;
}

bool AFortPlayerPawn::IsPassivelySkydiving() const {
    return false;
}

bool AFortPlayerPawn::IsPassengerInVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsParachuteOpen() const {
    return false;
}

bool AFortPlayerPawn::IsParachuteLockedOpen() const {
    return false;
}

bool AFortPlayerPawn::IsParachuteForcedOpen() const {
    return false;
}

bool AFortPlayerPawn::IsOperatingTurret() const {
    return false;
}

bool AFortPlayerPawn::IsNiagaraSimpleWaterSim() const {
    return false;
}

bool AFortPlayerPawn::IsNiagaraProceduralWaterSim() const {
    return false;
}

bool AFortPlayerPawn::IsItemAndVariantSwapActiveById(const FGuid& SwapId) const {
    return false;
}

bool AFortPlayerPawn::IsInVortex() const {
    return false;
}

bool AFortPlayerPawn::IsInVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsInSlipperyMovement() const {
    return false;
}

bool AFortPlayerPawn::IsInSkyTube() const {
    return false;
}

bool AFortPlayerPawn::IsInInteractBlockingVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsInFrontEndHologram() const {
    return false;
}

bool AFortPlayerPawn::IsInFloatingMovement() const {
    return false;
}

bool AFortPlayerPawn::IsInCharacterCustomization() const {
    return false;
}

bool AFortPlayerPawn::IsEmoteBlockedByMovement() const {
    return false;
}

bool AFortPlayerPawn::IsDrivingVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsDrivingInteractBlockingVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsCharacterCustomizationLoadingCompleted() const {
    return false;
}

bool AFortPlayerPawn::IsActivelyStrafingInAir(const bool bCheckMovementMode) const {
    return false;
}

bool AFortPlayerPawn::IsActivelySkydivingUpInVortex() const {
    return false;
}

bool AFortPlayerPawn::IsActivelySkydiving(const bool bCheckMovementMode) const {
    return false;
}

void AFortPlayerPawn::InvokeWaterJumpSplash(const FVector& SplashPosition, float SplashScale) {
}

void AFortPlayerPawn::InvokeWaterHandSplashAttached(USceneComponent* AttachParent, FName AttachSocketName) {
}

void AFortPlayerPawn::InvokeWaterHandSplash(const FVector& SplashPosition) {
}

bool AFortPlayerPawn::HasStartedFloating() const {
    return false;
}

bool AFortPlayerPawn::HasRespawnedInAir() const {
    return false;
}

bool AFortPlayerPawn::HasRecentlyExitedZiplineFromJumping() const {
    return false;
}

bool AFortPlayerPawn::HasControlledRCPawn() const {
    return false;
}

void AFortPlayerPawn::HandleInStasis() {
}

TScriptInterface<IFortVehicleInterface> AFortPlayerPawn::GetVehicleUInterface() const {
    return NULL;
}

uint8 AFortPlayerPawn::GetVehicleSeatIndex() const {
    return 0;
}

bool AFortPlayerPawn::GetVehicleOverrideExit() {
    return false;
}

AActor* AFortPlayerPawn::GetVehicleActor() const {
    return NULL;
}

AFortAthenaVehicle* AFortPlayerPawn::GetVehicle() const {
    return NULL;
}

FHitResult AFortPlayerPawn::GetThrownItemTrajectoryHitResult() const {
    return FHitResult{};
}

APawn* AFortPlayerPawn::GetTetherPawn() const {
    return NULL;
}

EFortPawnStasisMode AFortPlayerPawn::GetStasisMode() const {
    return EFortPawnStasisMode::None;
}

float AFortPlayerPawn::GetStamina() const {
    return 0.0f;
}

FVector AFortPlayerPawn::GetSlopeSlidingNormal() const {
    return FVector{};
}

void AFortPlayerPawn::GetSlopeSlidingAngles(float& LocalPitch, float& LocalRoll) const {
}

USkeletalMeshComponent* AFortPlayerPawn::GetSkeletalMeshForPartType(EFortCustomPartType PartType) const {
    return NULL;
}

USkeletalMeshComponent* AFortPlayerPawn::GetSkeletalMeshForCharmType(TEnumAsByte<EFortCustomCharmType::Type> CharmType) const {
    return NULL;
}

float AFortPlayerPawn::GetSimulatedAttributeValue(const FGameplayAttribute& Attribute, const float DefaultValue) const {
    return 0.0f;
}

FVector AFortPlayerPawn::GetPreviousVelocity() {
    return FVector{};
}

FVector AFortPlayerPawn::GetPreviousPosition() {
    return FVector{};
}

ABuildingGameplayActorPlayerPropAttachment* AFortPlayerPawn::GetPossessedProp() const {
    return NULL;
}

bool AFortPlayerPawn::GetPendingSkydiveLaunch() const {
    return false;
}

float AFortPlayerPawn::GetPawnSignificance() const {
    return 0.0f;
}

int32 AFortPlayerPawn::GetPawnLOD() const {
    return 0;
}

int32 AFortPlayerPawn::GetNumActiveBalloons() const {
    return 0;
}

float AFortPlayerPawn::GetMaxStamina() const {
    return 0.0f;
}

void AFortPlayerPawn::GetLastWaterSurfaceInfo(FVector& OutWaterSurfacePosition, FVector& OutWaterSurfaceNormal) {
}

bool AFortPlayerPawn::GetIsSlopeSliding() const {
    return false;
}

bool AFortPlayerPawn::GetIsHoldingObject() const {
    return false;
}

AActor* AFortPlayerPawn::GetHomeActor() const {
    return NULL;
}

FText AFortPlayerPawn::GetGliderDisplayName() const {
    return FText::GetEmpty();
}

void AFortPlayerPawn::GetGender(bool& IsMale, bool& IsFemale) const {
}

UAnimMontage* AFortPlayerPawn::GetFrontendAnimMontageIdleOverride() const {
    return NULL;
}

int32 AFortPlayerPawn::GetExtraLives() const {
    return 0;
}

EFortPawnDisplayContext AFortPlayerPawn::GetDisplayContext() const {
    return EFortPawnDisplayContext::BattleRoyale;
}

AFortPlayerPawn* AFortPlayerPawn::GetDBNOHoister() const {
    return NULL;
}

AFortPlayerPawn* AFortPlayerPawn::GetDBNOHoistee() const {
    return NULL;
}

AFortSkyTube* AFortPlayerPawn::GetCurrentSkyTube() const {
    return NULL;
}

AFortPlayerPawn* AFortPlayerPawn::GetControllingPawn() const {
    return NULL;
}

TSoftObjectPtr<UFXSystemAsset> AFortPlayerPawn::GetContrailParticleSystemSoftRef() {
    return NULL;
}

TArray<UActorComponent*> AFortPlayerPawn::GetComponentsByClassOnAllPartModifiers(TSubclassOf<UActorComponent> ComponentClass) const {
    return TArray<UActorComponent*>();
}

TArray<UActorComponent*> AFortPlayerPawn::GetComponentsByClassForPartType(TSubclassOf<UActorComponent> ComponentClass, EFortCustomPartType PartType) const {
    return TArray<UActorComponent*>();
}

int32 AFortPlayerPawn::GetClientObservedStatValue(const FName StatName, int32 DefaultValue) {
    return 0;
}

EFortCustomGender AFortPlayerPawn::GetCharacterGender() const {
    return EFortCustomGender::Invalid;
}

AFortPlayerCharm* AFortPlayerPawn::GetCharacterCharmActorForCharmType(TEnumAsByte<EFortCustomCharmType::Type> CharmType) const {
    return NULL;
}

TEnumAsByte<EFortCustomBodyType::Type> AFortPlayerPawn::GetCharacterBodyType() const {
    return EFortCustomBodyType::NONE;
}

float AFortPlayerPawn::GetBaseAimPitchQuantized() const {
    return 0.0f;
}

UFXSystemComponent* AFortPlayerPawn::GetActivePlayerWaterBoostComponent() const {
    return NULL;
}

UFXSystemComponent* AFortPlayerPawn::GetActivePlayerSwimmingComponent() const {
    return NULL;
}

UFXSystemComponent* AFortPlayerPawn::GetActivePlayerJumpSplashInWaterComponent() const {
    return NULL;
}

UFXSystemComponent* AFortPlayerPawn::GetActivePlayerInWaterComponent() const {
    return NULL;
}

UFXSystemComponent* AFortPlayerPawn::GetActivePlayerHandSplashInWaterComponent() const {
    return NULL;
}

FGameplayTagContainer AFortPlayerPawn::GatherMetaTags(const UAthenaCosmeticItemDefinition* CosmeticItem) const {
    return FGameplayTagContainer{};
}

void AFortPlayerPawn::ForceOpenParachuteAndOverrideGlider(const UAthenaGliderItemDefinition* InGliderOverride, bool NewBResetGliderOverrideOnLanding, bool bForceIntoGliderRedeploy) {
}

void AFortPlayerPawn::ForceDetachFromRemoteControlledPawn() {
}

void AFortPlayerPawn::ExitSkyTube(AFortSkyTube* SkyTube, bool& bIsLastTube) {
}

void AFortPlayerPawn::EnterSkyTube(AFortSkyTube* SkyTube, bool& bIsFirstTube) {
}

void AFortPlayerPawn::EndZiplining(bool bFromJump, bool bReachedEnd) {
}

void AFortPlayerPawn::EndSkydiving() {
}

void AFortPlayerPawn::EndHovering() {
}

void AFortPlayerPawn::EndGhostModeExit() {
}

void AFortPlayerPawn::EndFloating() {
}

void AFortPlayerPawn::EndedInteractSearch() {
}

void AFortPlayerPawn::DriverToPassengerAnimationStopped() {
}

bool AFortPlayerPawn::DontHandsOnHips() const {
    return false;
}

bool AFortPlayerPawn::DontCrossArms() const {
    return false;
}

void AFortPlayerPawn::DisableFaceRotation(float DurationInSeconds, bool bSetStasis) {
}

void AFortPlayerPawn::DestroyBalloonRope() {
}

void AFortPlayerPawn::DebugDestroyVehicle() {
}

void AFortPlayerPawn::ConstructItemSwapClonedFromLoadout(const FFortAthenaLoadout& Loadout, const UAthenaCosmeticItemDefinition* Item, FFortSwapItemAndVariantData& SwapData) {
}

void AFortPlayerPawn::ClientUnequipCurrentWeaponById_Implementation(FGuid WeaponItemGuid, bool bSetWeaponAttachment) {
}

void AFortPlayerPawn::ClientResetAbilitySystemComponent_Implementation() {
}

void AFortPlayerPawn::ClientNotifyAbilityFailed_Implementation(const UGameplayAbility* FailedAbility, const FGameplayTagContainer& FailedReason) {
}

void AFortPlayerPawn::ClientExecuteGameplayCueOnSpecificPlayer_Implementation(const FGameplayTag GameplayCueTag) {
}

void AFortPlayerPawn::ClientAcknowledgeVehicleInputState_Implementation(float Timestamp) {
}

void AFortPlayerPawn::ClearWeaponOverrideAnimSet() {
}

void AFortPlayerPawn::ClearExistingCosmeticPetInstance() {
}

bool AFortPlayerPawn::CanUseInventoryAsDriver() const {
    return false;
}

bool AFortPlayerPawn::CanShootFromVehicle() const {
    return false;
}

bool AFortPlayerPawn::CanPredictJumpApex() {
    return false;
}

bool AFortPlayerPawn::CanInterrogateFromDBNO(AController* EventInstigator) {
    return false;
}

void AFortPlayerPawn::CancelJumpAbility() {
}

void AFortPlayerPawn::BroadcastSetWeaponOverrideAnimSet_Implementation(UFortWeaponAnimSet* WeaponOverrideAnimSet) {
}

void AFortPlayerPawn::BroadcastClearWeaponOverrideAnimSet_Implementation() {
}

void AFortPlayerPawn::BP_ForceOpenParachute() {
}

void AFortPlayerPawn::BP_ForceLockParachuteOpen(bool bLocked) {
}

void AFortPlayerPawn::BeginZiplining(const AFortAthenaZipline* Zipline, USceneComponent* SocketComponent) {
}

void AFortPlayerPawn::BeginSkydiving(bool bFromBus) {
}

void AFortPlayerPawn::BeginHovering() {
}

void AFortPlayerPawn::AttemptInstantInteractSearch() {
}

void AFortPlayerPawn::ApplyWrapToSaveTheWorldHoverboard() {
}

void AFortPlayerPawn::ApplyCosmeticLoadout() {
}




void AFortPlayerPawn::AITargetDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortPlayerPawn::AddIgnoredActor(AActor* InActorToIgnore, const float InIgnoreDuration) {
}

void AFortPlayerPawn::AddAttachment(USkeletalMesh* Attachment, TSubclassOf<UAnimInstance> InAnimBP) {
}

void AFortPlayerPawn::AddAbilityAITarget(AFortAIPawn* InTarget) {
}

void AFortPlayerPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerPawn, VehicleInputStateReliable);
    DOREPLIFETIME(AFortPlayerPawn, bIsNearSafeZoneEdge);
    DOREPLIFETIME(AFortPlayerPawn, bIsWaterJump);
    DOREPLIFETIME(AFortPlayerPawn, bIsWaterSprintBoost);
    DOREPLIFETIME(AFortPlayerPawn, bIsWaterSprintBoostPending);
    DOREPLIFETIME(AFortPlayerPawn, bIsTargeting);
    DOREPLIFETIME(AFortPlayerPawn, bIsTargetingConsumableThrow);
    DOREPLIFETIME(AFortPlayerPawn, bIsSwappingCharacterParts);
    DOREPLIFETIME(AFortPlayerPawn, StasisMode);
    DOREPLIFETIME(AFortPlayerPawn, BuildingState);
    DOREPLIFETIME(AFortPlayerPawn, AccelerationZPack);
    DOREPLIFETIME(AFortPlayerPawn, bIsInWaterVolume);
    DOREPLIFETIME(AFortPlayerPawn, CachedTeamControllingRC);
    DOREPLIFETIME(AFortPlayerPawn, BalloonActiveCount);
    DOREPLIFETIME(AFortPlayerPawn, bIsSkydiving);
    DOREPLIFETIME(AFortPlayerPawn, bIsParachuteOpen);
    DOREPLIFETIME(AFortPlayerPawn, bIsParachuteForcedOpen);
    DOREPLIFETIME(AFortPlayerPawn, bIsSkydivingFromBus);
    DOREPLIFETIME(AFortPlayerPawn, bIsSkydivingFromLaunchPad);
    DOREPLIFETIME(AFortPlayerPawn, bReplicatedIsInVortex);
    DOREPLIFETIME(AFortPlayerPawn, bReplicatedIsInSlipperyMovement);
    DOREPLIFETIME(AFortPlayerPawn, bIsSlopeSliding);
    DOREPLIFETIME(AFortPlayerPawn, bIsProxySimulationTimedOut);
    DOREPLIFETIME(AFortPlayerPawn, bInGliderRedeploy);
    DOREPLIFETIME(AFortPlayerPawn, bStartedInteractSearch);
    DOREPLIFETIME(AFortPlayerPawn, bIsUsingJetpack);
    DOREPLIFETIME(AFortPlayerPawn, bIsPlayingEmote);
    DOREPLIFETIME(AFortPlayerPawn, bIsRespawning);
    DOREPLIFETIME(AFortPlayerPawn, bIsRespawningInAir);
    DOREPLIFETIME(AFortPlayerPawn, bIsWaitingForEmoteInteraction);
    DOREPLIFETIME(AFortPlayerPawn, bIsEmoteLeader);
    DOREPLIFETIME(AFortPlayerPawn, bShouldSyncAnimationWithEmoteLeader);
    DOREPLIFETIME(AFortPlayerPawn, bShouldJitterAnimationSyncWithEmoteLeader);
    DOREPLIFETIME(AFortPlayerPawn, bDoubleFileEmoteSecondLine);
    DOREPLIFETIME(AFortPlayerPawn, bLockGroupEmoteLeaderRotation);
    DOREPLIFETIME(AFortPlayerPawn, GroupEmoteLookTarget);
    DOREPLIFETIME(AFortPlayerPawn, GroupEmoteLeaderRotationYawOffset);
    DOREPLIFETIME(AFortPlayerPawn, ReplicatedCustomMeshHeightAdjustTarget);
    DOREPLIFETIME(AFortPlayerPawn, VehicleInputStateUnreliable);
    DOREPLIFETIME(AFortPlayerPawn, bIsInAnyStorm);
    DOREPLIFETIME(AFortPlayerPawn, bIsInsideSafeZone);
    DOREPLIFETIME(AFortPlayerPawn, bHasStartedFloating);
    DOREPLIFETIME(AFortPlayerPawn, ZiplineState);
    DOREPLIFETIME(AFortPlayerPawn, bCanPredictJumpApex);
    DOREPLIFETIME(AFortPlayerPawn, VehicleStateRep);
    DOREPLIFETIME(AFortPlayerPawn, InteractingPCRep);
    DOREPLIFETIME(AFortPlayerPawn, PossessedProp);
    DOREPLIFETIME(AFortPlayerPawn, BaseCosmeticLoadout);
    DOREPLIFETIME(AFortPlayerPawn, AppliedSwaps);
    DOREPLIFETIME(AFortPlayerPawn, ServerLoadoutChangeSync);
    DOREPLIFETIME(AFortPlayerPawn, RepCharPartAnimMontageInfo);
    DOREPLIFETIME(AFortPlayerPawn, ClientObservedStats);
    DOREPLIFETIME(AFortPlayerPawn, AnimBPOverride);
    DOREPLIFETIME(AFortPlayerPawn, FootstepBankOverride);
    DOREPLIFETIME(AFortPlayerPawn, DBNOHoisterData);
    DOREPLIFETIME(AFortPlayerPawn, DBNOHoistee);
    DOREPLIFETIME(AFortPlayerPawn, PackedReplicatedSlopeAngles);
    DOREPLIFETIME(AFortPlayerPawn, PlayerStatus);
    DOREPLIFETIME(AFortPlayerPawn, AccelerationPack);
    DOREPLIFETIME(AFortPlayerPawn, RepAnimMontageInfo);
    DOREPLIFETIME(AFortPlayerPawn, RepAnimMontageStartSection);
    DOREPLIFETIME(AFortPlayerPawn, bNetMovementPrioritized);
    DOREPLIFETIME(AFortPlayerPawn, LandingMontagePair);
    DOREPLIFETIME(AFortPlayerPawn, bParachuteLockedOpen);
    DOREPLIFETIME(AFortPlayerPawn, AttachmentMesh);
    DOREPLIFETIME(AFortPlayerPawn, VortexParams);
    DOREPLIFETIME(AFortPlayerPawn, ReplicatedSkyTube);
    DOREPLIFETIME(AFortPlayerPawn, PetState);
    DOREPLIFETIME(AFortPlayerPawn, GliderOverrideStack);
    DOREPLIFETIME(AFortPlayerPawn, RemoteViewData32);
    DOREPLIFETIME(AFortPlayerPawn, ControlledRCPawn);
    DOREPLIFETIME(AFortPlayerPawn, StoredControlRotation);
    DOREPLIFETIME(AFortPlayerPawn, FacialTypeOverride);
    DOREPLIFETIME(AFortPlayerPawn, bCanShowDefaultSkin);
    DOREPLIFETIME(AFortPlayerPawn, bDisabledTetheringSupport);
    DOREPLIFETIME(AFortPlayerPawn, GroupEmoteTailTarget);
    DOREPLIFETIME(AFortPlayerPawn, GroupEmoteAnimOffset);
    DOREPLIFETIME(AFortPlayerPawn, GroupEmoteSyncValue);
    DOREPLIFETIME(AFortPlayerPawn, AnimSetOverride);
    DOREPLIFETIME(AFortPlayerPawn, AnimLayersOverride);
    DOREPLIFETIME(AFortPlayerPawn, MaterialOverrides);
}

void AFortPlayerPawn::AllowPickupInteractionWhileSkydiving(const bool bAllow) {
}

void AFortPlayerPawn::AuthUpdateLockedFloatSliderVariant_Implementation(const UAthenaCosmeticItemDefinition* ItemVariantIsUsedFor, const FGameplayTag& ChannelTag) {
}

void AFortPlayerPawn::BlindTestPredictiveInput() {
}

void AFortPlayerPawn::CheckForUnburrowTeleport() {
}

float AFortPlayerPawn::GetZiplineSpeedFactor() {
    return 0.0f;
}

float AFortPlayerPawn::GetZiplineSpeedFactorTarget() {
    return 0.0f;
}

void AFortPlayerPawn::HACK_ApplyCosmetics(const FString& ApplyCosmetics) {
}

bool AFortPlayerPawn::IsMaterialOverrideApplied(const FGuid& MaterialOverrideId, bool& bOutIsCurrentOverride) {
    return false;
}

void AFortPlayerPawn::OnRep_AnimLayersOverride() {
}

void AFortPlayerPawn::OnRep_bDisabledTetheringSupport() {
}

void AFortPlayerPawn::OnRep_GroupEmoteSyncValue() {
}

void AFortPlayerPawn::OnRep_MaterialOverrides() {
}

void AFortPlayerPawn::OnWeaponEquippedNative(AFortWeapon* NewWeapon, AFortWeapon* OldWeapon) {
}

void AFortPlayerPawn::PopAnimLayersOverride(int32 Priority, const TArray<TSubclassOf<UAnimInstance>>& InAnimLayersOverride) {
}

void AFortPlayerPawn::PopAnimSetOverride(int32 Priority, UFortWeaponAnimSet* InAnimSetOverride) {
}

void AFortPlayerPawn::PushAnimLayersOverride(int32 Priority, const TArray<TSubclassOf<UAnimInstance>>& InAnimLayersOverride) {
}

void AFortPlayerPawn::PushAnimSetOverride(int32 Priority, UFortWeaponAnimSet* InAnimSetOverride) {
}

void AFortPlayerPawn::RemoveCosmeticSwap(const FGuid& SwapId) {
}

bool AFortPlayerPawn::RemoveMaterialOverride(const FGuid& MaterialOverrideId) {
    return false;
}

bool AFortPlayerPawn::RemoveMaterialOverrideLocal(const FGuid& MaterialOverrideId) {
    return false;
}

void AFortPlayerPawn::ServerEmoteSecondaryFirePressed_Implementation() {
}

void AFortPlayerPawn::ServerStartGliderSwap_Implementation() {
}
bool AFortPlayerPawn::ServerStartGliderSwap_Validate() {
    return true;
}

void AFortPlayerPawn::ServerStopGliderSwap_Implementation() {
}
bool AFortPlayerPawn::ServerStopGliderSwap_Validate() {
    return true;
}

void AFortPlayerPawn::SetScalarParamOnOverriddenMaterials(const FName ParamName, float Value) {
}

void AFortPlayerPawn::SetTetherRopeRodMesh(USkeletalMesh* InMesh) {
}

void AFortPlayerPawn::SetTextureParamOnOverriddenMaterials(const FName ParamName, UTexture* Value) {
}

void AFortPlayerPawn::SetTransformationMontage(UAnimMontage* CurrentMontage, UAnimMontage* FutureMontage, float StartTime) {
}

void AFortPlayerPawn::SetVectorParamOnOverriddenMaterials(const FName ParamName, const FLinearColor& Value) {
}

void AFortPlayerPawn::ShowTestingPredictiveInput() {
}

float AFortPlayerPawn::GetBuildCostModifier() const {
    return 0.0f;
}

float AFortPlayerPawn::GetBuildSpeedModifier() const {
    return 0.0f;
}

FFortAthenaLoadout AFortPlayerPawn::GetPawnCosmeticLoadout(const bool bGetBaseLoadout, const bool bWarn) const {
    return FFortAthenaLoadout{};
}

UFortPlayerStateComponent_Quests* AFortPlayerPawn::GetPlayerStateQuestsComponent() const {
    return NULL;
}

TArray<USkeletalMeshComponent*> AFortPlayerPawn::GetSkeletalMeshesForAllParts() const {
    return TArray<USkeletalMeshComponent*>();
}

USkeletalMesh* AFortPlayerPawn::GetTetherRopeRodMesh() const {
    return NULL;
}

UFortControllerComponent_TransientQuests* AFortPlayerPawn::GetTransientQuestsComponent() const {
    return NULL;
}

bool AFortPlayerPawn::IsPickupInteractionWhileSkydivingAllowed() const {
    return false;
}

FGuid AFortPlayerPawn::ApplyMaterialOverride(const TSoftObjectPtr<UMaterialInterface>& Material, const FFortPawnMaterialOverrideCopiedParameters& MaterialParamsToCopy, float Priority, bool bHideParticleSystems, bool bApplyToWeapon) {
    return FGuid{};
}

FGuid AFortPlayerPawn::ApplyMaterialOverrideLocal(const TSoftObjectPtr<UMaterialInterface>& Material, const FFortPawnMaterialOverrideCopiedParameters& MaterialParamsToCopy, float Priority, bool bHideParticleSystems, bool bApplyToWeapon) {
    return FGuid{};
}

AFortPlayerPawn::AFortPlayerPawn() {
    bIsNearSafeZoneEdge = false;
    bPlayingSafeZoneEffects = false;
    bDoSafeZoneCleanup = false;
    bIsSwimmingAnimLayerLinked = false;
    bIsSprintJump = false;
    bHasDisableSprintTag = false;
    bDisableSwimSprintCancel = false;
    bIsWaterJump = false;
    bIsWaterSprintBoost = false;
    bIsWaterSprintBoostPending = false;
    bPlayingPassengerToPassengerAnimation = false;
    bPlayingDriverToPassengerAnimation = false;
    bIsTargeting = false;
    bIsTargetingConsumableThrow = false;
    bIsSwappingCharacterParts = false;
    bBalloonMovementActivated = false;
    bIsScriptedBot = false;
    bBuildHotfix = false;
    StasisMode = EFortPawnStasisMode::None;
    BuildingState = EFortBuildingState::None;
    AccelerationZPack = 0;
    ParachuteDirectionalSpeedMultiplierCurve = NULL;
    SkydivingDirectionalSpeedMultiplierCurve = NULL;
    BallooningDirectionalSpeedMultiplierCurve = NULL;
    DirectionalSpeedMultiplierCurve = NULL;
    MinimumTimeBetweenSteps = 1;
    LastStepTime = 1;
    bIsInWaterVolume = false;
    bNotifyBlueprintWhenLandscapeTeleporting = true;
    CachedTeamControllingRC = 0;
    BalloonActiveCount = 0;
    bParachuteDeployFixedVerticalDistance = true;
    bIsSkydiving = false;
    bIsParachuteOpen = false;
    bLocalIsSkydiving = false;
    bLocalIsParachuteForcedOpen = false;
    bIsParachuteForcedOpen = false;
    bIsSkydivingFromBus = false;
    bIsSkydivingFromLaunchPad = false;
    bPendingSkydiveLaunch = false;
    bIsInVortex = false;
    bReplicatedIsInVortex = false;
    bIsInSlipperyMovement = false;
    bReplicatedIsInSlipperyMovement = false;
    bIsBelowAutoDeployTestHeight = false;
    bIsSlopeSliding = false;
    bIsProxySimulationTimedOut = false;
    bIsPedestalHero = false;
    bInGliderRedeploy = false;
    bLocalInGliderRedeploy = false;
    bBeingRepossessed = false;
    bInitAbilitySystemComponentFromPlayerState = true;
    bStartedInteractSearch = false;
    bPawnLODDirty = false;
    bIsUsingJetpack = false;
    bIsPlayingEmote = false;
    bShowingOverdriveEffect = false;
    bIsRespawning = false;
    bIsRespawningInAir = false;
    bInitializedPostRepPlayerState = false;
    bEnableCharacterPartRigidBodyNode = false;
    bInitializedCharacterPartRBANSettings = false;
    bHasWaterParticleSystem = true;
    bIsInFrontEndHologram = false;
    bForceMoveRelativeToCameraRotation = false;
    bIsWaitingForEmoteInteraction = false;
    bIsEmoteLeader = false;
    bShouldSyncAnimationWithEmoteLeader = false;
    bShouldJitterAnimationSyncWithEmoteLeader = false;
    bDoubleFileEmoteSecondLine = false;
    bLockGroupEmoteLeaderRotation = false;
    GroupEmoteLookTarget = NULL;
    GroupEmoteLeaderRotationYawOffset = 1;
    GroupEmoteMaximumZDifference = 1;
    CurrentMontagerLeader = NULL;
    CurrentSyncedMontage = NULL;
    bCharacterPartsCastIndirectShadows = true;
    CharacterGender = EFortCustomGender::Invalid;
    CharacterBodyType = EFortCustomBodyType::NONE;
    JumpLastActivatedTime = 1;
    CrouchMeshOffset = 1;
    CustomMeshHeightAdjust = 1;
    CustomMeshHeightAdjustLerpSpeed = 1;
    CustomMeshHeightAdjustLerpTarget = 1;
    ReplicatedCustomMeshHeightAdjustTarget = 0;
    bIsInAnyStorm = false;
    bIsInsideSafeZone = false;
    SafeZoneAppliedGE = NULL;
    SelfReviveGameplayEffect = NULL;
    TeammateReviveGameplayEffect = NULL;
    DBNOInteractionCollisionProfile = TEXT("FortTriggerOnlyInteractions");
    DBNODeferTime = 1;
    DBNOInteractCollisionComponent = NULL;
    AggroRangeOverride = 1;
    SetByCallerReviveSignalInStorm = 1;
    LastBuildingMetadata = NULL;
    SprintCancelTime = 1;
    WaterSprintBoostAllowedTimer = 1;
    bHasStartedFloating = false;
    ZiplineSocketZOffset = 1;
    ClientSwimDiveInputTime = 1;
    bCanPredictJumpApex = false;
    UnableToPerformActionMontage = NULL;
    UnableToPerformActionSound = NULL;
    MoveSoundStimulusBroadcastInterval = 1;
    EmoteStartTime = 1;
    EmoteRandomNum = 1;
    bPlayingPassengerToDriverAnimation = false;
    VehicleSpeedAtTimeOfJump = 1;
    InteractingPCRep = NULL;
    TetherComponent = NULL;
    PendingTetherLaunch = 1;
    TetherJumpLastTime = 1;
    bSupportsTetheredMovement = true;
    BalloonRope = NULL;
    PossessedProp = NULL;
    SlopeCameraOffsetFrameCounter = 0;
    VehicleInputComponent = NULL;
    BluePrintPlaceAnimation = NULL;
    BluePrintEditAnimation = NULL;
    EmoteInteractionCollisionProfile = TEXT("FortTriggerOnlyInteractions");
    EmoteInteractCollisionComponent = NULL;
    BlueprintPaperMID = NULL;
    Hero = NULL;
    DisplayContext = EFortPawnDisplayContext::BattleRoyale;
    HACK_CustomPRIComponent = NULL;
    CharacterColorSwatches[0] = NULL;
    CharacterColorSwatches[1] = NULL;
    CharacterCharms[0] = NULL;
    CharacterCharms[1] = NULL;
    CharacterCharms[2] = NULL;
    CharacterCharms[3] = NULL;
    ServerLoadoutChangeSync = 0;
    bAllowClientLoadoutChangeSync = true;
    AnimBPOverride = NULL;
    OriginalAnimBP = NULL;
    OnCrouchStartSound = NULL;
    OnCrouchEndSound = NULL;
    FootstepBankOverride = NULL;
    OriginalFootstepBank = NULL;
    PickupSpeedMultiplier = 1;
    MaxIndicatorVisibilityDistForEnemies = 1;
    MaxIndicatorVisibilityDistForAllies = 1;
    DBNOHoistee = NULL;
    DBNOHoisterAnimSet = NULL;
    DBNOHoisteeAnimClass = NULL;
    ThrowCarriedPlayerStrengthXY = 1;
    ThrowCarriedPlayerStrengthZ = 1;
    DropCarriedPlayerForwardOffset = 1;
    DropCarriedPlayerHeightOffset = 1;
    DropCarriedPlayerTraceHeight = 1;
    bAllowDBNOCarry = false;
    bAllowDBNOCarryEnemies = true;
    bIsBeingDBNOCarried = false;
    bIsDBNOCarrying = false;
    bRequestedThrowCarriedPlayer = false;
    PackedReplicatedSlopeAngles = 0;
    CustomizationAssetLoader = NULL;
    SpawnParticles = NULL;
    SpawnSound = NULL;
    bIsLocalPlayer = false;
    bDamagedEnemy = false;
    PlayerStatus = 0;
    AccelerationPack = 0;
    RepAnimMontageStartSection = 0;
    bNetMovementPrioritized = false;
    VisibilityComponent = NULL;
    BlendablesPostProcessComp = NULL;
    bUseControllerRotationYawToRestore = false;
    CurrentGliderOpenSound = NULL;
    CurrentGliderCloseSound = NULL;
    bParachuteLockedOpen = false;
    bLocalParachuteLockedOpen = false;
    AttachmentMeshComponent = NULL;
    BotScriptedBehavior = NULL;
    ReplicatedSkyTube = NULL;
    CurrentSkyTube = NULL;
    UnderwaterDamageComponent = NULL;
    GliderClass = NULL;
    PetState = NULL;
    CosmeticPetInstance = NULL;
    ParachuteAttachment = NULL;
    bResetGliderOverrideOnLanding = false;
    ParachuteCooldownToOpen = 1;
    ParachuteCooldownToClose = 1;
    PreDrivingAnimBP = NULL;
    CurrentVehicleAnimLayerOverlayClass = NULL;
    CurrentSwimmingAnimLayerOverlayClass = NULL;
    DefaultSwimmingAnimLayerOverlayClass = NULL;
    TimeBeforeSwimmingLayerDeactivated = 1;
    ParachuteAudioLoop = NULL;
    ParachuteAndSkydiveAudioFadeInTime = 1;
    ParachuteAndSkydiveAudioFadeOutTime = 1;
    SkydiveAudioLoop = NULL;
    SoundOnParachuteForcedOpen = NULL;
    SkydivingLoop1P = NULL;
    SkydivingLoop3P = NULL;
    ParachuteOpenLoop1P = NULL;
    ParachuteOpenLoop3P = NULL;
    SwimmingAudioLoop = NULL;
    SwimmingAudioFadeOutTime = 1;
    SwimmingAudioInterpSpeed = 1;
    SoundOnSwimmingLoop = NULL;
    RemoteViewData32 = 0;
    LastQuickBarSwitchRequestTime = 1;
    CrouchStartTime = 1;
    CrouchEndTime = 1;
    CrouchLerpTime = 1;
    MeleeAbilityCooldown = 1;
    bDisallowInterrogation = false;
    bDisallowInterrogationOnNPC = false;
    FacialTypeOverride = EFortFacialAnimTypes::Default;
    GhostModeExitStartTime = 1;
    GhostModeExitDuration = 1;
    PSC_PlayerInWater = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerInWaterFX"));
    PSC_PlayerInWaterSurfaceSwimming = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerInWaterSurfaceSwimmingFX"));
    NiagaraPlayerInWaterBasicAsset = NULL;
    NiagaraPlayerInWaterSwimmingAsset = NULL;
    NiagaraPlayerWaterHandSplashAsset = NULL;
    NiagaraPlayerWaterFootSplashAsset = NULL;
    NiagaraPlayerWaterLargePlayerSplashAsset = NULL;
    NiagaraPlayerWaterBoostAsset = NULL;
    NiagaraPlayerStandingInWater = NULL;
    NiagaraPlayerSwimmingInWater = NULL;
    NiagaraPlayerHandSplashInWater = NULL;
    NiagaraPlayerFootSplashInWaterLeft = NULL;
    NiagaraPlayerFootSplashInWaterRight = NULL;
    NiagaraPlayerJumpSplashInWater = NULL;
    NiagaraPlayerWaterBoost = NULL;
    bWaterFootSplashActive = false;
    bEnableWaterInteractionEffects = true;
    bCanShowDefaultSkin = false;
    bDisabledTetheringSupport = false;
    bEmoteUsesSecondaryFire = false;
    GroupEmoteTailTarget = NULL;
    GroupEmoteAnimOffset = 0.0f;
    GroupEmoteSyncValue = 0;
    GroupEmoteSoundValue = 0;
    GroupEmoteParticleValue = 0;
    TransformationMontage = NULL;
    TransformationMontageStartTime = 0.0f;
    UnburrowLaunchXYSpeed = 0.0f;
    UnburrowLaunchZSpeed = 0.0f;
    ZiplineSpeedFactorTarget = 0.0f;
    ZiplineSpeedFactor = 0.0f;
    VehicleLastTick = NULL;
    AnimSetOverride = NULL;
    bHideBodyOnDeathRequested = false;
    CustomInteractionWidget = NULL;
}

