#pragma once
#include "CoreMinimal.h"
#include "EmoteActionBinding.h"
#include "GameFramework/Volume.h"
#include "FortEmoteVolumePlayerTrackingInfo.h"
#include "FortEmoteVolume.generated.h"

class AFortPlayerController;
class UFortQuestItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortEmoteVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* RequiredQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmoteActionBinding> GrantedEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowGrantingUnownedEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEmoteCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayExclusive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmoteCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EmoteCategoryTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AFortPlayerController*, FFortEmoteVolumePlayerTrackingInfo> TrackedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AFortPlayerController*> PlayersWithEmotes;
    
public:
    AFortEmoteVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEmoteActionBinding> GetGrantedEmotes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRequiredObjectiveName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestItemDefinition* GetRequiredQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerOverlapping(const AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasPlayerGrantedEmotes(const AFortPlayerController* PlayerController) const;
    
};
