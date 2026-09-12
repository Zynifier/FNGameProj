#pragma once
#include "CoreMinimal.h"
#include "ConversationContext.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortConversationContextLibrary.generated.h"

class AActor;
class AFortPlayerController;
class UConversationParticipantComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationContextLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortConversationContextLibrary();
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetParticipantActorNPC(const FConversationContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetParticipantActorPlayer(const FConversationContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static UConversationParticipantComponent* GetParticipantComponentNPC(const FConversationContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static UConversationParticipantComponent* GetParticipantComponentPlayer(const FConversationContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static AFortPlayerController* GetParticipantPlayerController(const FConversationContext& Context);
    
};
