#include "FortPawnComponent_Convert.h"
#include "Net/UnrealNetwork.h"

void UFortPawnComponent_Convert::OnConvertedPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortPawnComponent_Convert::TriggerConversion(AFortPawn* Converter, AFortPawn* Converted) {
}

void UFortPawnComponent_Convert::TriggerUnconversion(AFortPawn* Unconverter, AFortPawn* Unconverted) {
}

void UFortPawnComponent_Convert::HideIndicatorMarker() {
}

void UFortPawnComponent_Convert::OnConverterStartedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting) {
}

void UFortPawnComponent_Convert::OnConverterStoppedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting) {
}

void UFortPawnComponent_Convert::OnConverterTeamChange() {
}

void UFortPawnComponent_Convert::SetCanBeConverted(const bool bInCanBeConverted) {
}

void UFortPawnComponent_Convert::ShowIndicatorMarker() {
}

int32 UFortPawnComponent_Convert::GetNumConvertedPawns() const {
    return 0;
}

void UFortPawnComponent_Convert::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPawnComponent_Convert, bCanConvert);
    DOREPLIFETIME(UFortPawnComponent_Convert, bCanBeConverted);
    DOREPLIFETIME(UFortPawnComponent_Convert, bCanBeConvertedFromDBNO);
    DOREPLIFETIME(UFortPawnComponent_Convert, ConverterPlayerState);
}

UFortPawnComponent_Convert::UFortPawnComponent_Convert() {
    ConvertInteractionSound = NULL;
    IndicatorMarkerWidgetClass = NULL;
    bCanConvert = false;
    bCanBeConverted = false;
    bCanBeConvertedFromDBNO = false;
    ConverterPlayerState = NULL;
    CachedAIConvertParameters = NULL;
}

