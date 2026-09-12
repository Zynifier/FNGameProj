#pragma once
#include "CoreMinimal.h"
#include "FortPawnMaterialOverrideState.generated.h"

class UFXSystemComponent;
class UMaterialInterface;
class USceneComponent;

USTRUCT(BlueprintType)
struct FFortPawnMaterialOverrideState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> AppliedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemComponent*> FXComps;
    
    FORTNITEGAME_API FFortPawnMaterialOverrideState();
};
