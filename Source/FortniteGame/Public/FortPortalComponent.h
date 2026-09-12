#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CreativeLoadedLinkData.h"
#include "EPortalLinkCodeLockMode.h"
#include "EPortalLinkCodeLockStatus.h"
#include "OnCreativeLinkDataErrorDelegate.h"
#include "OnCreativeLinkDataLoadedDelegate.h"
#include "OnCreativeLinkThumbnailUpdatedDelegate.h"
#include "OnPortalLinkCodeLockStatusChangedDelegate.h"
#include "OnPortalLinkLockExpiredDelegate.h"
#include "FortPortalComponent.generated.h"

class UTexture2DDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPortalComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeLinkDataLoaded OnLinkDataLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeLinkDataError OnLinkDataError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeLinkThumbnailUpdated OnLinkThumbnailUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPortalLinkCodeLockStatusChanged OnPortalLinkCodeLockStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPortalLinkLockExpired OnPortalLinkLockExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LoadedLinkData, meta=(AllowPrivateAccess=true))
    FCreativeLoadedLinkData LoadedLinkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LinkDataErrorStatus, meta=(AllowPrivateAccess=true))
    FString LinkDataErrorStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* ThumbnailTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ThumbnailTextureWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ThumbnailTextureHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EPortalLinkCodeLockMode LinkCodeLockMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LinkCodeLockStatus, meta=(AllowPrivateAccess=true))
    EPortalLinkCodeLockStatus LinkCodeLockStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWindowLockedStartsLocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHasValidLinkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bLinkRequiresCreativeContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LinkCodeLockExpirationTime;
    
public:
    UFortPortalComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void ServerSetLinkCode_Complete(bool bSuccess, const FString& ErrorMessage, const FCreativeLoadedLinkData& InLinkData);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerSetLinkCode(const FString& InLinkCode, bool bIgnoreCanSetLinkCode, bool bFromDAD);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LoadedLinkData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LinkDataErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LinkCodeLockStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnLinkThumbnailDownloaded(bool bSuccess, UTexture2DDynamic* InThumbnailTexture);
    
    UFUNCTION(BlueprintCallable)
    void OnLinkCodeLockExpired();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyEligibleForMatchmaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidLinkData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetRemainingLockDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSetLinkCode() const;
    
    UFUNCTION(BlueprintCallable)
    void ExpireLinkCodeLock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LinkRequiresCreativeContent();
    
    UFUNCTION(BlueprintCallable)
    void SetLockExpirationSecondsToNotOverrideCVar();
    
    UFUNCTION(BlueprintCallable)
    void SetLockOverrideExpirationSeconds(int32 NewExpirationSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetResetCodeAfterCooldown(bool bNewResetCodeAfterCooldown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAccountIdOwnerOfIsland() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWellKnownNameSupported() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString MakeLinkCodeWithVersioning(const FString& LinkCode, int32 Version) const;
    
};

