#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaSpawnerDataBase.h"
#include "FortAthenaAISpawnerData.generated.h"

class UFortAthenaAISpawnerData;
class UFortAthenaAISpawnerDataComponent;
class UFortAthenaAISpawnerDataComponentList;
class UFortAthenaAISpawnerDataComponent_AffiliationBase;
class UFortAthenaAISpawnerDataComponent_AnalyticBase;
class UFortAthenaAISpawnerDataComponent_BehaviorBase;
class UFortAthenaAISpawnerDataComponent_DebugBase;
class UFortAthenaAISpawnerDataComponent_GameplayBase;
class UFortAthenaAISpawnerDataComponent_LODBase;
class UFortAthenaAISpawnerDataComponent_SpawnParamsBase;

class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase;
class UFortAthenaAISpawnerDataComponent_ConversationBase;
class UFortAthenaAISpawnerDataComponent_CosmeticBase;
class UFortAthenaAISpawnerDataComponent_OptimBase;
class UFortAthenaAISpawnerDataComponent_VoiceBase;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UFortAthenaAISpawnerData : public UFortAthenaSpawnerDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaAISpawnerDataComponent*> ClassComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_SpawnParamsBase> SpawnParamsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_BehaviorBase> BehaviorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_AffiliationBase> AffiliationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_LODBase> LODComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_DebugBase> DebugComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_AnalyticBase> AnalyticComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_GameplayBase> GameplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_ConversationBase> ConversationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_VoiceBase> VoiceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_CosmeticBase> CosmeticComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_ChanceEncounterBase> ChanceEncounterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_OptimBase> OptimizationComponent;
    
public:
    UFortAthenaAISpawnerData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_SpawnParamsBase* GetSpawnParamsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_GameplayBase* GetGameplayComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_DebugBase* GetDebugComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_BehaviorBase* GetBehaviorComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_AnalyticBase* GetAnalyticComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_LODBase* GetAILODComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_AffiliationBase* GetAffiliationComponent() const;
    
    UFUNCTION(BlueprintCallable)
    static UFortAthenaAISpawnerDataComponentList* CreateComponentListFromClass(const TSubclassOf<UFortAthenaAISpawnerData> AISpawnerDataClass, UObject* OuterObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponentList* CreateComponentList(UObject* OuterObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* GetChanceEncounterComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_ConversationBase* GetConversationComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_CosmeticBase* GetCosmeticComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_OptimBase* GetOptimizationComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_VoiceBase* GetVoiceComponent() const;
    
};

