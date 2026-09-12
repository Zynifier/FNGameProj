#include "FortPhysicsObjectComponent.h"
#include "Net/UnrealNetwork.h"

void UFortPhysicsObjectComponent::WakeUp() {
}

void UFortPhysicsObjectComponent::SetSimulatePhysics(bool bSimulate) {
}

void UFortPhysicsObjectComponent::SetPhysicsPreset(const UFortPhysicsObjectPreset* InPhysicsPreset) {
}

void UFortPhysicsObjectComponent::SetLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName) {
}

void UFortPhysicsObjectComponent::SetAngularVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName) {
}

void UFortPhysicsObjectComponent::PutToSleep() {
}

bool UFortPhysicsObjectComponent::IsAwake() const {
    return false;
}

void UFortPhysicsObjectComponent::InitializePhysics(UPrimitiveComponent* PrimitiveComponent) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UPrimitiveComponent* UFortPhysicsObjectComponent::GetSimulatingComponent() const {
    return NULL;
}

void UFortPhysicsObjectComponent::ClientBroadcastHitDetection_Implementation(AController* EventInstigator, float Radius, float Relevancy, const FVector HalfPoints, const FVector DoublePoints) {
}

void UFortPhysicsObjectComponent::BroadcastLinearVelocity_Implementation(FVector NewVel, bool bAddToCurrent, FName BoneName) {
}

void UFortPhysicsObjectComponent::BroadcastAngularVelocity_Implementation(FVector NewVel, bool bAddToCurrent, FName BoneName) {
}

void UFortPhysicsObjectComponent::ActivatePhysicsObject(AActor* PhysicsObject) {
}

void UFortPhysicsObjectComponent::ClearImpactInstigatorFromPhysicsObject(AActor* PhysicsObject) {
}

void UFortPhysicsObjectComponent::DeactivatePhysicsObject(AActor* PhysicsObject) {
}

void UFortPhysicsObjectComponent::PutToSleepPhysicsObject(AActor* PhysicsObject) {
}

void UFortPhysicsObjectComponent::SetImpactInstigatorForPhysicsObject(AActor* PhysicsObject, AActor* Instigator) {
}

void UFortPhysicsObjectComponent::WakeUpPhysicsObject(AActor* PhysicsObject) {
}

void UFortPhysicsObjectComponent::DecrementNeverSleep() {
}

void UFortPhysicsObjectComponent::DeferredSetupPhysicsObject() {
}

void UFortPhysicsObjectComponent::IgnorePawnForCollision(AFortPawn* Pawn, bool bIgnore) {
}

void UFortPhysicsObjectComponent::IncrementNeverSleep() {
}

void UFortPhysicsObjectComponent::OnRep_AwakeState() {
}

void UFortPhysicsObjectComponent::SetBuoyancyAssetOverride(const UFortPhysicsObjectBuoyancyData* InBuoyancyAssetOverride) {
}

void UFortPhysicsObjectComponent::SetCollisionEffectsDataOverride(const UFortPhysicsObjectCollisionEffectsData* InEffectsDataOverride) {
}

void UFortPhysicsObjectComponent::SetImpactDamageDataOverride(const UFortPhysicsObjectImpactDamageData* InImpactDamageData) {
}

void UFortPhysicsObjectComponent::SetNavigationDataOverride(const UFortPhysicsObjectNavigationData* InNavigationDataOverride) {
}

void UFortPhysicsObjectComponent::SetPhysicalMaterialOverride(const UPhysicalMaterial* InPhysicalMaterialOverride) {
}

float UFortPhysicsObjectComponent::GetGravity(bool bUseGravityMultiplier) const {
    return 0.0f;
}

void UFortPhysicsObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPhysicsObjectComponent, bServerHasSetupPhysicsObject);
    DOREPLIFETIME(UFortPhysicsObjectComponent, bForceStartActiveAndAwake);
    DOREPLIFETIME(UFortPhysicsObjectComponent, PhysicsObjectAwakeState);
}

void UFortPhysicsObjectComponent::GetMovingStateData(AActor*& OutInstigator, FHitResult& OutHitResult, float& OutLinearSpeed, EFortPhysicsObjectMovementState& OutMovementState) const {
}

UFortPhysicsObjectComponent::UFortPhysicsObjectComponent() {
    PhysicsPreset = NULL;
    bInitializeUsingRootComponent = true;
    SimulatingComponent = NULL;
    BuoyancyComponent = NULL;
    CustomGravityMultiplier = 0.0f;
    EffectsDataOverride = NULL;
    PhysicalMaterialOverride = NULL;
    BuoyancyAssetOverride = NULL;
    ImpactDamageDataOverride = NULL;
    NavigationDataOverride = NULL;
    bHasSetupPhysicsObject = false;
    bServerHasSetupPhysicsObject = false;
    bForceStartActiveAndAwake = false;
    bHasComponentActivated = false;
    PhysicsObjectAwakeState = EFortPhysicsObjectAwakeState::Invalid;
}

