#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomCharacterPartAnimInstance_Buffet_F.h"
#include "BuffetWaveVectorInput.h"
#include "CustomCharacterPartAnimInstance_Buffet_Shard_F.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UCustomCharacterPartAnimInstance_Buffet_Shard_F : public UCustomCharacterPartAnimInstance_Buffet_F {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector floatA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector floatB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float skirtMidJntConstraintAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuffetWaveVectorInput WaveA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuffetWaveVectorInput WaveB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PawnVelocityZLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PawnYawRotationRateLimit;
    
    UCustomCharacterPartAnimInstance_Buffet_Shard_F();
    
};
