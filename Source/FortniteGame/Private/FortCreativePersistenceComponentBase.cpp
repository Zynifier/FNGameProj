#include "FortCreativePersistenceComponentBase.h"

void UFortCreativePersistenceComponentBase::ClearData(const FUniqueNetIdRepl& PlayerID, const FString& SavePath) {
}

void UFortCreativePersistenceComponentBase::DisablePersistence(AFortMinigame* FortMinigame) {
}

void UFortCreativePersistenceComponentBase::EnablePersistence(AFortMinigame* FortMinigame) {
}

void UFortCreativePersistenceComponentBase::InitializePersistenceComponent(UFortMinigameLogicComponent* InLogicComponent, bool bInUniqueForOwner) {
}

void UFortCreativePersistenceComponentBase::LoadData(const FUniqueNetIdRepl& PlayerID, const FString& SavePath, UObject* OutData) {
}

void UFortCreativePersistenceComponentBase::SaveData(const UObject* Data, const FUniqueNetIdRepl& PlayerID, const FString& SavePath) {
}

void UFortCreativePersistenceComponentBase::SetUniqueForOwner(bool bInUniqueForOwner) {
}

void UFortCreativePersistenceComponentBase::GetPersistencePlayers(TArray<AFortPlayerState*>& PersistencePlayers) const {
}

UFortCreativePersistenceComponentBase::UFortCreativePersistenceComponentBase() {
    LogicComponent = NULL;
    bUniqueForOwner = false;
}
