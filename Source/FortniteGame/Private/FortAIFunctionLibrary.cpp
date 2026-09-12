#include "FortAIFunctionLibrary.h"

void UFortAIFunctionLibrary::SetHearingRange(AActor* AIAgent, float Range) {
}

void UFortAIFunctionLibrary::RequestNavUpdateForBuilding(ABuildingActor* BuildingActor) {
}

void UFortAIFunctionLibrary::MakeNoiseEventAtLocation(AActor* NoiseMaker, const float MaxRange, const FVector& NoiseLocation, const FName NoiseTag) {
}

void UFortAIFunctionLibrary::MakeNoiseEvent(AActor* NoiseMaker, const float MaxRange, const FName NoiseTag) {
}

UAthenaAISpawner* UFortAIFunctionLibrary::GetAISpawner(UObject* WorldContextObject) {
    return NULL;
}

UFortAthenaAIRuntimeParameters* UFortAIFunctionLibrary::GetOrCreateAIRuntimeParameters(const AAIController* AIController, const TSubclassOf<UFortAthenaAIRuntimeParameters> ParametersClass) {
    return NULL;
}

bool UFortAIFunctionLibrary::IsConcealedByPerceptionModifiers(const UObject* WorldContextObject, FVector ObserverLocation, FVector TargetLocation, float& OutConcealment) {
    return false;
}

UFortAIFunctionLibrary::UFortAIFunctionLibrary() {
}

