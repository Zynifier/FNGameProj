#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConversationParticipantComponent.h"
#include "EFortQuestObjectiveStatEvent.h"
#include "GameplayTagContainer.h"
#include "OnConversationEndedDelegate.h"
#include "Templates/SubclassOf.h"
#include "DialogMarkerInteractionStateChangedDelegate.h"
#include "NPCConversationGiftRow.h"
#include "NPCGiftItemInventoryRow.h"
#include "NPCSaleInventoryRow.h"
#include "FortNonPlayerConversationParticipantComponent.generated.h"

class AActor;
class AFortPlayerController;
class UDataTable;
class UFortConversationGiftTypeDefinitions;
class UFortQuestItemDefinition;
class UObject;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortNonPlayerConversationParticipantComponent : public UConversationParticipantComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogMarkerInteractionStateChanged OnDialogMarkerInteractionStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationEnded OnConversationEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag ConversationEntryTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag InteractorParticipantTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag SelfParticipantTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag ServiceProviderIDTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShowNameWhenInRange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShowIndicatorBubble;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShowConversationText;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestObjectiveStatEvent InitiateConversationStatEventType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Gifts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GiftsSeasonDataTableTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortConversationGiftTypeDefinitions* GiftTypeDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GiftTypeDefinitionsSeasonDataAssetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GiftItemInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GiftItemInventorySeasonDataTableTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Services;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SalesInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestsRequireProviderTagMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxQuestsToSupportFromSingleProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideParticipantDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ParticipantDisplayNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> CustomDialogMarkerSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMaxDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDrawDistanceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DialogMarkerIndicatorSoftIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortQuestItemDefinition>> SupportedQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SupportedServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNPCSaleInventoryRow> SupportedSales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNPCConversationGiftRow> SupportedGiftTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNPCGiftItemInventoryRow> SupportedGiftItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> HideUIIndicatorReasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CustomDialogMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortConversationGiftTypeDefinitions* ResolvedGiftTypeDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bServiceDataInitialized;
    
public:
    UFortNonPlayerConversationParticipantComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void AddHideUIIndicatorReason(const FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHideUIIndicatorReason(const FName Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartConversationWith(const AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHideUIIndicatorReasons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StartConversation(const FGameplayTag InConversationEntryTag, AActor* Instigator, AActor* Target) const;
    
};
