#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "BoneSet.generated.h"

USTRUCT(BlueprintType)
struct FBoneSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> Bones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Sockets;
    
    FORTNITEGAME_API FBoneSet();
};
