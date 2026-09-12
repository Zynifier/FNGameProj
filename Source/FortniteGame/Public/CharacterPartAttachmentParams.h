#pragma once
#include "CoreMinimal.h"
#include "AttachToComponentParams.h"
#include "ECharacterPartAttachmentTargetType.h"
#include "CharacterPartAttachmentParams.generated.h"

USTRUCT(BlueprintType)
struct FCharacterPartAttachmentParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterPartAttachmentTargetType AttachmentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttachToComponentParams AttachmentRules;
    
    FORTNITEGAME_API FCharacterPartAttachmentParams();
};
