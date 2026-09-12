#pragma once
#include "CoreMinimal.h"
#include "ConversationContext.h"
#include "ConversationTaskNode.h"
#include "GameplayTagContainer.h"
#include "FortConversationTaskNode.generated.h"

class AActor;
class UConversationParticipantComponent;

class UObject;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode : public UConversationTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NodeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> DefaultDisplayAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> SoftTaskIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> ChoiceSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> HoverChoiceSound;
    
public:
    UFortConversationTaskNode();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UConversationParticipantComponent* GetParticipantComponentPlayer(const FConversationContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UConversationParticipantComponent* GetParticipantComponentNPC(const FConversationContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    AActor* GetParticipantActorPlayer(const FConversationContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    AActor* GetParticipantActorNPC(const FConversationContext& Context) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<USoundBase> GetChoiceSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<USoundBase> GetHoverChoiceSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UObject> GetTaskIcon() const;
    
};

