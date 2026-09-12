#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "MiniMapDataOverride.h"
#include "MiniMapDataOverrideRepData.h"
#include "FortGameStateComponent_MiniMapDataOverride.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGameStateComponent_MiniMapDataOverride : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMiniMapDataOverride> MiniMapDataOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FMiniMapDataOverrideRepData> MiniMapDataOverrideRepDatas;
    
public:
    UFortGameStateComponent_MiniMapDataOverride();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MiniMapDataOverridesRepDatas();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};
