#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "FortAthenaAISpawnerDataComponent_ConversationBase.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_AIBotConversation.generated.h"

class UAthenaSpecialActorComponent;
class UFortAthenaNPCLoopStateComponent;
class UFortNPCConversationParticipantComponent;
class UFortTandemCharacterData;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAISpawnerDataComponent_AIBotConversation : public UFortAthenaAISpawnerDataComponent_ConversationBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortNPCConversationParticipantComponent> ConversationComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConversationEntryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InteractorParticipantTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SelfParticipantTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EnterBTTaskConversationIfPlayerAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EnterBTTaskConversationIfPlayerAroundDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTandemCharacterData* CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConversationInteractionCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ConversationInteractionBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ConversationInteractionBoxOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpawnOutOfTheLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RespawnOutsideTheLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaNPCLoopStateComponent> NPCLoopStateComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseSpecialActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaSpecialActorComponent> SpecialActorComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BlockSpecialActorUntilOutsideTheLoop;
    
public:
    UFortAthenaAISpawnerDataComponent_AIBotConversation();
    
};
