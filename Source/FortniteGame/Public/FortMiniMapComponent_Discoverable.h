#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortMiniMapComponent.h"
#include "EMiniMapComponentDiscoverableVisibility.h"
#include "MiniMapComponentDiscoverable_OnPlayerVisibilityChangedDelegate.h"
#include "FortMiniMapComponent_Discoverable.generated.h"

class UObject;
class UTexture2D;

class AFortPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMiniMapComponent_Discoverable : public UFortMiniMapComponent {
    GENERATED_BODY()
public:
private:
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniMapComponentDiscoverable_OnPlayerVisibilityChanged OnPlayerVisibilityChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMiniMapComponentDiscoverableVisibility DefaultVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultVisibilityCanChangeAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NotDiscoveredIconScale, meta=(AllowPrivateAccess=true))
    FVector2D NotDiscoveredIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NotDiscoveredIcon, meta=(AllowPrivateAccess=true))
    UTexture2D* NotDiscoveredIcon;
    
public:
    UFortMiniMapComponent_Discoverable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableDefaultVisibilityCanChangeAtRuntime();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_NotDiscoveredIcon();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NotDiscoveredIconScale();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMiniMapDiscoveredIcon(UObject* MiniMapIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniMapDiscoveredIconScale(const FVector2D& IconScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniMapNotDiscoveredIconScale(const FVector2D& IconScale);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetDefaultVisibilityCanChangeAtRuntime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMiniMapComponentDiscoverableVisibility GetDefaultVisibility();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDefaultVisibility(const EMiniMapComponentDiscoverableVisibility InVisibility, const bool bClearAllPlayerVisibilityOverrides);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVisibilityForPlayer(AFortPlayerController* PlayerController, EMiniMapComponentDiscoverableVisibility Visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMiniMapComponentDiscoverableVisibility GetPlayersSetVisibility(const AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMiniMapComponentDiscoverableVisibility GetVisibilityForPlayer(const AFortPlayerController* PlayerController) const;
    
};
