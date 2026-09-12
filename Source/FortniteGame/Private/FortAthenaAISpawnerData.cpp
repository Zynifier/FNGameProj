#include "FortAthenaAISpawnerData.h"
#include "Templates/SubclassOf.h"

UFortAthenaAISpawnerDataComponent_SpawnParamsBase* UFortAthenaAISpawnerData::GetSpawnParamsComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_GameplayBase* UFortAthenaAISpawnerData::GetGameplayComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_DebugBase* UFortAthenaAISpawnerData::GetDebugComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_BehaviorBase* UFortAthenaAISpawnerData::GetBehaviorComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_AnalyticBase* UFortAthenaAISpawnerData::GetAnalyticComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_LODBase* UFortAthenaAISpawnerData::GetAILODComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_AffiliationBase* UFortAthenaAISpawnerData::GetAffiliationComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerData::CreateComponentListFromClass(const TSubclassOf<UFortAthenaAISpawnerData> AISpawnerDataClass, UObject* OuterObject) {
    return NULL;
}

UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerData::CreateComponentList(UObject* OuterObject) const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* UFortAthenaAISpawnerData::GetChanceEncounterComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_ConversationBase* UFortAthenaAISpawnerData::GetConversationComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_CosmeticBase* UFortAthenaAISpawnerData::GetCosmeticComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_OptimBase* UFortAthenaAISpawnerData::GetOptimizationComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_VoiceBase* UFortAthenaAISpawnerData::GetVoiceComponent() const {
    return NULL;
}

UFortAthenaAISpawnerData::UFortAthenaAISpawnerData() {
    SpawnParamsComponent = NULL;
    BehaviorComponent = NULL;
    AffiliationComponent = NULL;
    LODComponent = NULL;
    DebugComponent = NULL;
    AnalyticComponent = NULL;
    GameplayComponent = NULL;
    ConversationComponent = NULL;
    VoiceComponent = NULL;
    CosmeticComponent = NULL;
    ChanceEncounterComponent = NULL;
    OptimizationComponent = NULL;
}

