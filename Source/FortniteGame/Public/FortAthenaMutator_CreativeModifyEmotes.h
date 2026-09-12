#pragma once
#include "CoreMinimal.h"
#include "EmoteActionBinding.h"
#include "FortAthenaMutator.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator_CreativeModifyEmotes.generated.h"

class AFortVolume;
class APlayerState;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_CreativeModifyEmotes : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    AFortAthenaMutator_CreativeModifyEmotes();
    
    UFUNCTION(BlueprintCallable)
    void AddBlockedEmote(const FString& EmoteToBlock, AFortVolume* VolumeToModify);
    
    UFUNCTION(BlueprintCallable)
    void AddBlockedEmoteTag(const FGameplayTag& TagToBlock, AFortVolume* VolumeToModify);
    
    UFUNCTION(BlueprintCallable)
    void AddEmotesForPlayer(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void AddEmotesToPlayersInVolume(AFortVolume* VolumeToModify);
    
    UFUNCTION(BlueprintCallable)
    bool AddEmoteToCategory(const FString& EmoteTemplateID, const FName CategoryName, AFortVolume* VolumeToModify, FEmoteActionBinding& OutCreatedEmote);
    
    UFUNCTION(BlueprintCallable)
    bool AddUniqueEmoteCategory(const FName CategoryName, const FText& CategoryTitle, const FText& CategoryTitleMultipage, const bool bExclusive, AFortVolume* VolumeToModify);
    
    UFUNCTION(BlueprintCallable)
    void AddVolumeToModify(AFortVolume* NewVolumeToModify);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnteredVolume(APlayerState* PlayerState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerExitedVolume(APlayerState* PlayerState, AFortVolume* Volume);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveBlockedEmote(const FString& EmoteToRemove, AFortVolume* VolumeToModify);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlockedEmoteTag(const FGameplayTag& TagToRemove, AFortVolume* VolumeToModify);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEmoteCategory(const FName CategoryName, AFortVolume* VolumeToModify);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEmoteFromCategory(const FEmoteActionBinding& EmoteToRemove, const FName CategoryName, AFortVolume* VolumeToModify);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEmotesFromPlayerState(APlayerState* PlayerState, const TArray<FName>& CategoriesToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVolumeToModify(AFortVolume* VolumeToRemove);
    
};
