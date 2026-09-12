#include "FortAudioCurveVector.h"

void UFortAudioCurveVector::InitializeAudioCurveVector() {
}

FVector UFortAudioCurveVector::GetAudioCurveVectorValue(const float InTime) const {
    return FVector{};
}

float UFortAudioCurveVector::GetLargestMaxDistance() const {
    return 0.0f;
}

TArray<FRichCurveEditInfoConst> UFortAudioCurveVector::GetCurves() const {
    TArray<FRichCurveEditInfoConst> Curves;
    Curves.Add(FRichCurveEditInfoConst(&FloatCurves[0], FName(TEXT("X"))));
    Curves.Add(FRichCurveEditInfoConst(&FloatCurves[1], FName(TEXT("Y"))));
    Curves.Add(FRichCurveEditInfoConst(&FloatCurves[2], FName(TEXT("Z"))));
    return Curves;
}

TArray<FRichCurveEditInfo> UFortAudioCurveVector::GetCurves() {
    TArray<FRichCurveEditInfo> Curves;
    Curves.Add(FRichCurveEditInfo(&FloatCurves[0], FName(TEXT("X"))));
    Curves.Add(FRichCurveEditInfo(&FloatCurves[1], FName(TEXT("Y"))));
    Curves.Add(FRichCurveEditInfo(&FloatCurves[2], FName(TEXT("Z"))));
    return Curves;
}

bool UFortAudioCurveVector::IsValidCurve(FRichCurveEditInfo CurveInfo) {
    return CurveInfo.CurveToEdit == &FloatCurves[0] || CurveInfo.CurveToEdit == &FloatCurves[1] || CurveInfo.CurveToEdit == &FloatCurves[2];
}

void UFortAudioCurveVector::ExportCurves(EVectorCurveType CurveType) {
}

void UFortAudioCurveVector::ImportAttenuationCurve(EVectorCurveFloat Element, UPARAM(Ref) FRuntimeFloatCurve& Curve, float MaxDistance) {
}

void UFortAudioCurveVector::ImportFloatCurve(EVectorCurveFloat Element, UCurveFloat* Curve) {
}

void UFortAudioCurveVector::SetActiveCurves(EVectorCurveType CurveType) {
}

UFortAudioCurveVector::UFortAudioCurveVector() {
}
