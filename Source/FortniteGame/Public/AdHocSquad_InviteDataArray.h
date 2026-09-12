#pragma once
#include "CoreMinimal.h"
#include "AdHocSquad_InviteData.h"
#include "Engine/NetSerialization.h"
#include "AdHocSquad_InviteDataArray.generated.h"

USTRUCT(BlueprintType)
struct FAdHocSquad_InviteDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAdHocSquad_InviteData> Entries;
    
    FORTNITEGAME_API FAdHocSquad_InviteDataArray();
};
