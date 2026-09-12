#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaMutator.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator_Valkyrie.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_Valkyrie : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector DefaultSpawnRangeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector DefaultSpawnRangeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LobbySpawnTag;
    
public:
    AFortAthenaMutator_Valkyrie();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};
