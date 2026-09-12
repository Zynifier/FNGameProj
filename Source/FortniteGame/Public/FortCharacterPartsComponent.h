#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFortCustomPartType.h"
#include "PartStackEntry.h"
#include "FortCharacterPartsComponent.generated.h"

class UCustomCharacterPart;
class UFortCustomizationAssetLoader;
class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortCharacterPartsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCustomizationAssetLoader* CustomizationAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> CharacterPartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponentBudgeted*> SkeletalMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPartStackEntry> CharacterPartStack;
    
public:
    UFortCharacterPartsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool ApplyParts(const TArray<UCustomCharacterPart*>& Parts);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterParts(TArray<UCustomCharacterPart*> PreviousParts);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveAllParts();
    
    UFUNCTION(BlueprintCallable)
    bool RemovePart(EFortCustomPartType PartType);
    
    UFUNCTION(BlueprintCallable)
    bool RestoreParts();
    
};
