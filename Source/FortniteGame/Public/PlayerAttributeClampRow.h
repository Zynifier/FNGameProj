#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EPlayerAttributeClampType.h"
#include "Engine/DataTable.h"
#include "PlayerAttributeClampRow.generated.h"

USTRUCT(BlueprintType)
struct FPlayerAttributeClampRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAttributeClampType ClampType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampValue;
    
    FORTNITEGAME_API FPlayerAttributeClampRow();
};
