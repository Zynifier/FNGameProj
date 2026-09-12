#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CreativeEditablePropertyInterface.h"
#include "FortUserOptionProvider.h"
#include "FortUserOptionProxy.generated.h"

class UPlaylistUserOptionBase;

class UPlaylistUserOptionsFilter;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortUserOptionProxy : public UObject, public IFortUserOptionProvider, public ICreativeEditablePropertyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlaylistUserOptionBase* ItemOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlaylistUserOptionsFilter* OptionFilter;
    
    UFortUserOptionProxy();
    
    // Fix for true pure virtual functions not being implemented
};

