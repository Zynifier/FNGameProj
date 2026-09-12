#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MediaRegionLockCanPlayContentInRegionCompleteDelegate.h"
#include "MediaRegionLockLocaleCompleteDelegate.h"
#include "UObject/NoExportTypes.h"
#include "MeshRegionLockData_Bool.h"
#include "MeshRegionLockData_DateTime.h"
#include "MeshRegionLockData_Float.h"
#include "MeshRegionLockData_Int.h"
#include "MeshRegionLockData_Int64.h"
#include "MeshRegionLockData_String.h"
#include "MeshRegionLockData_Tracker.h"
#include "FortMediaRegionLockComponent.generated.h"

class AFortPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMediaRegionLockComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaRegionLockLocaleComplete OnMediaRegionLockLocaleComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaRegionLockCanPlayContentInRegionComplete OnRegionLockCanPlayContentInRegionComplete;
    
    UFortMediaRegionLockComponent();
    
    UFUNCTION(BlueprintCallable)
    void GetLocale(const AFortPlayerController* FortPC);
    
    UFUNCTION(BlueprintCallable)
    void GetRegionLockApproval(const AFortPlayerController* FortPC, const FString& UseURL, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetEventCallback(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    static void MeshAddRegionTrackerValue(UPARAM(Ref) FMeshRegionLockData_Tracker& InTracker, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static void MeshAddRegionValue_Bool(const bool bInBool, UPARAM(Ref) TArray<FMeshRegionLockData_Bool>& inArray, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static void MeshAddRegionValue_DateTime(const FDateTime InDateTime, UPARAM(Ref) TArray<FMeshRegionLockData_DateTime>& inArray, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static void MeshAddRegionValue_Float(const float InFloat, UPARAM(Ref) TArray<FMeshRegionLockData_Float>& inArray, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static void MeshAddRegionValue_Int(const int32 inInt, UPARAM(Ref) TArray<FMeshRegionLockData_Int>& inArray, const FString& InRegionData);
    
    UFUNCTION()
    static void MeshAddRegionValue_Int64(const int64 InInt64, UPARAM(Ref) TArray<FMeshRegionLockData_Int64>& inArray, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static void MeshAddRegionValue_String(const FString& inString, UPARAM(Ref) TArray<FMeshRegionLockData_String>& inArray, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static bool MeshGetRegionValue_Bool(const FString& InFind, UPARAM(Ref) TArray<FMeshRegionLockData_Bool>& inArray, FMeshRegionLockData_Bool& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static bool MeshGetRegionValue_DateTime(const FString& InFind, UPARAM(Ref) TArray<FMeshRegionLockData_DateTime>& inArray, FMeshRegionLockData_DateTime& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static bool MeshGetRegionValue_Float(const FString& InFind, UPARAM(Ref) TArray<FMeshRegionLockData_Float>& inArray, FMeshRegionLockData_Float& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static bool MeshGetRegionValue_Int(const FString& InFind, UPARAM(Ref) TArray<FMeshRegionLockData_Int>& inArray, FMeshRegionLockData_Int& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static bool MeshGetRegionValue_Int64(const FString& InFind, UPARAM(Ref) TArray<FMeshRegionLockData_Int64>& inArray, FMeshRegionLockData_Int64& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static bool MeshGetRegionValue_String(const FString& InFind, UPARAM(Ref) TArray<FMeshRegionLockData_String>& inArray, FMeshRegionLockData_String& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static bool MeshRemoveRegionTrackerValue(UPARAM(Ref) FMeshRegionLockData_Tracker& InTracker, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static void MeshRemoveRegionValue_Bool(UPARAM(Ref) TArray<FMeshRegionLockData_Bool>& inArray, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static void MeshRemoveRegionValue_DateTime(UPARAM(Ref) TArray<FMeshRegionLockData_DateTime>& inArray, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static void MeshRemoveRegionValue_Float(UPARAM(Ref) TArray<FMeshRegionLockData_Float>& inArray, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static void MeshRemoveRegionValue_Int(UPARAM(Ref) TArray<FMeshRegionLockData_Int>& inArray, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static void MeshRemoveRegionValue_Int64(UPARAM(Ref) TArray<FMeshRegionLockData_Int64>& inArray, const FString& InRegionData);
    
    UFUNCTION(BlueprintCallable)
    static void MeshRemoveRegionValue_String(UPARAM(Ref) TArray<FMeshRegionLockData_String>& inArray, const FString& InRegionData);
    
};
