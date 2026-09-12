#pragma once
#include "CoreMinimal.h"
#include "EDBNOMutatorType.h"
#include "FortAthenaMutator.h"
#include "DBNOCustomSettings.h"
#include "DBNOSettingsByActor.h"
#include "FortAthenaMutator_DBNOSetting.generated.h"

class AActor;
class AFortMinigame;

UCLASS(Blueprintable)
class AFortAthenaMutator_DBNOSetting : public AFortAthenaMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDBNOSettingsByActor> SettingsByActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDBNOMutatorType DBNOSetting;
    
public:
    AFortAthenaMutator_DBNOSetting();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFortAthenaMutator_DBNOSetting* GetDBNOSettingsMutator(const AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void UnsetDBNOSettings(const AActor* ActorRemovingSettings);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetDBNOSettingsAndOverride(FDBNOCustomSettings InDBNOSettings, AActor* ActorApplyingSettings);
    
};

