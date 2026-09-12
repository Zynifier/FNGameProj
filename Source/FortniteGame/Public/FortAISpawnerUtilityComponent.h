#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "OnEnvironmentQueryFinishedDelegate.h"
#include "FortAISpawnerUtilityComponent.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortAISpawnerUtilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EnvironmentQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvNamedValue> QueryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueryRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueryMinDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnvironmentQueryFinished OnEnvironmentQueryFinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> FreeSpawnSlots;
    
public:
    UFortAISpawnerUtilityComponent();
    
    UFUNCTION(BlueprintCallable)
    static bool CanSpawn();
    
    UFUNCTION(BlueprintCallable)
    static void ClearSpawnCount();
    
    UFUNCTION(BlueprintCallable)
    static void HandlePawnDied();
    
    UFUNCTION(BlueprintCallable)
    static void HandlePawnSpawned();
    
    UFUNCTION(BlueprintCallable)
    void SetEQSQuery(TSoftObjectPtr<UEnvQuery> SelectedEQSQuery);
    
    UFUNCTION(BlueprintCallable)
    void SetQueryRadius(float Radius);
    
    UFUNCTION(BlueprintCallable)
    void StartEnvironmentQuery();
    
};
