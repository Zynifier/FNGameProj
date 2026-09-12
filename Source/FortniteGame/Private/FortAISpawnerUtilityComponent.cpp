#include "FortAISpawnerUtilityComponent.h"

bool UFortAISpawnerUtilityComponent::CanSpawn() {
    return false;
}

void UFortAISpawnerUtilityComponent::ClearSpawnCount() {
}

void UFortAISpawnerUtilityComponent::HandlePawnDied() {
}

void UFortAISpawnerUtilityComponent::HandlePawnSpawned() {
}

void UFortAISpawnerUtilityComponent::SetEQSQuery(TSoftObjectPtr<UEnvQuery> SelectedEQSQuery) {
}

void UFortAISpawnerUtilityComponent::SetQueryRadius(float Radius) {
}

void UFortAISpawnerUtilityComponent::StartEnvironmentQuery() {
}

UFortAISpawnerUtilityComponent::UFortAISpawnerUtilityComponent() {
    EnvironmentQuery = NULL;
    QueryRadius = 0.0f;
    QueryMinDistance = 0.0f;
}
