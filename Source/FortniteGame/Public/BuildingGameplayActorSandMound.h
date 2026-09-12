#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGameplayActor.h"
#include "BuildingGameplayActorSandMound.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABuildingGameplayActorSandMound : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator TargetMeshRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MoundMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MoundMID;
    
    ABuildingGameplayActorSandMound();
    
};
