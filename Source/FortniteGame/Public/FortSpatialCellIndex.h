#pragma once
#include "CoreMinimal.h"
#include "FortSpatialCellIndex.generated.h"

USTRUCT(BlueprintType)
struct FFortSpatialCellIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    FORTNITEGAME_API FFortSpatialCellIndex();
    
    bool operator==(const FFortSpatialCellIndex& Other) const {
        return X == Other.X && Y == Other.Y && Z == Other.Z;
    }
    
    friend uint32 GetTypeHash(const FFortSpatialCellIndex& Value) {
        uint32 Hash = 0;
        Hash = HashCombine(Hash, GetTypeHash(Value.X));
        Hash = HashCombine(Hash, GetTypeHash(Value.Y));
        Hash = HashCombine(Hash, GetTypeHash(Value.Z));
        return Hash;
    }
};
