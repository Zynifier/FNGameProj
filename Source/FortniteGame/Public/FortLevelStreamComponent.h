#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortLevelStreamingData.h"
#include "FortLevelStreamComponent.generated.h"

class ULevel;
class UWorld;

class ULevelStreamingDynamic;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortLevelStreamComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoLoadLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowUnload: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> LevelsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ULevelStreamingDynamic*, FFortLevelStreamingData> StreamedLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LevelStreamingData, meta=(AllowPrivateAccess=true))
    TArray<FFortLevelStreamingData> LevelStreamingData;
    
public:
    UFortLevelStreamComponent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelAdded(ULevel* InLevel, UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelRemoved(ULevel* InLevel, UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LevelStreamingData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};
