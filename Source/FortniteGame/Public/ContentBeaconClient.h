#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "ContentManifest.h"
#include "EClientContentReadiness.h"
#include "ContentMessageArray.h"
#include "ReplicatedVkResolvedModule.h"
#include "ContentBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API AContentBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FContentMessageArray ContentMessagesArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DestSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DestConnectionInfoString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EClientContentReadiness ClientContentReadiness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedVkResolvedModule> ClientContentModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ClientAdditionalContentBundles, meta=(AllowPrivateAccess=true))
    FContentManifest ClientContentManifest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HostActivatedContent, meta=(AllowPrivateAccess=true))
    bool bHostActivatedContent;
    
public:
    AContentBeaconClient();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnloadManifestContentComplete();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFinishDisconnect();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheckAdditionalContentIsRequired(const FString& ClientConsumerFilterPlatform);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HostActivatedContent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientAdditionalContentBundles();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUnloadManifestContent(const TArray<FString>& PluginURls);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyDisconnect();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdditionConentIsRequiredCheckComplete(bool bAdditionalContentRequired);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFinishedActivatingContent(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartingContentUnload(const FString& PluginURL);
    
};

