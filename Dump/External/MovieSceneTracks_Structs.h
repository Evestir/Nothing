#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FAddScalarParameterKey
{
public:
	FAddScalarParameterKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FFrameNumber GetInTime() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}
	float GetInValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneParameterSectionTemplate
{
public:
	FMovieSceneParameterSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FScalarParameterNameAndCurve> GetScalars() {
		return memory.read<struct TArray<struct FScalarParameterNameAndCurve>>(m_addr + 32);
	}
	struct TArray<struct FBoolParameterNameAndCurve> GetBools() {
		return memory.read<struct TArray<struct FBoolParameterNameAndCurve>>(m_addr + 48);
	}
	struct TArray<struct FVector2DParameterNameAndCurves> GetVector2Ds() {
		return memory.read<struct TArray<struct FVector2DParameterNameAndCurves>>(m_addr + 64);
	}
	struct TArray<struct FVectorParameterNameAndCurves> GetVectors() {
		return memory.read<struct TArray<struct FVectorParameterNameAndCurves>>(m_addr + 80);
	}
	struct TArray<struct FColorParameterNameAndCurves> GetColors() {
		return memory.read<struct TArray<struct FColorParameterNameAndCurves>>(m_addr + 96);
	}
	struct TArray<struct FTransformParameterNameAndCurves> GetTransforms() {
		return memory.read<struct TArray<struct FTransformParameterNameAndCurves>>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneMaterialParameterCollectionTemplate
{
public:
	FMovieSceneMaterialParameterCollectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialParameterCollection GetMPC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct UMaterialParameterCollection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSound
{
public:
	FGetSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_GetTransformOrigin
{
public:
	FBP_GetTransformOrigin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformParameterNameAndCurves
{
public:
	FTransformParameterNameAndCurves(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FMovieSceneFloatChannel GetTranslation[3]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 8);
	}
	struct FMovieSceneFloatChannel GetRotation[3]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 488);
	}
	struct FMovieSceneFloatChannel GetScale[3]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 968);
	}

private:
	std::uint64_t m_addr = 0;
};class FColorParameterNameAndCurves
{
public:
	FColorParameterNameAndCurves(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FMovieSceneFloatChannel GetRedCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 8);
	}
	struct FMovieSceneFloatChannel GetGreenCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 168);
	}
	struct FMovieSceneFloatChannel GetBlueCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 328);
	}
	struct FMovieSceneFloatChannel GetAlphaCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 488);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneStringPropertySectionTemplate
{
public:
	FMovieSceneStringPropertySectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneStringChannel GetStringCurve() {
		return memory.read<struct FMovieSceneStringChannel>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieScene3DScaleKeyStruct
{
public:
	FMovieScene3DScaleKeyStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FFrameNumber GetTime() {
		return memory.read<struct FFrameNumber>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTransformMask
{
public:
	FMovieSceneTransformMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetMask() {
		return memory.read<uint32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBoolParameterNameAndCurve
{
public:
	FBoolParameterNameAndCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FMovieSceneBoolChannel GetParameterCurve() {
		return memory.read<struct FMovieSceneBoolChannel>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FScalarParameterNameAndCurve
{
public:
	FScalarParameterNameAndCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FMovieSceneFloatChannel GetParameterCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FVectorParameterNameAndCurves
{
public:
	FVectorParameterNameAndCurves(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FMovieSceneFloatChannel GetXCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 8);
	}
	struct FMovieSceneFloatChannel GetYCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 168);
	}
	struct FMovieSceneFloatChannel GetZCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneActorReferenceSectionTemplate
{
public:
	FMovieSceneActorReferenceSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieScenePropertySectionData GetPropertyData() {
		return memory.read<struct FMovieScenePropertySectionData>(m_addr + 32);
	}
	struct FMovieSceneActorReferenceData GetActorReferenceData() {
		return memory.read<struct FMovieSceneActorReferenceData>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FVector2DParameterNameAndCurves
{
public:
	FVector2DParameterNameAndCurves(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FMovieSceneFloatChannel GetXCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 8);
	}
	struct FMovieSceneFloatChannel GetYCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneAudioSectionTemplate
{
public:
	FMovieSceneAudioSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneAudioSection GetAudioSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UMovieSceneAudioSection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneStringChannel
{
public:
	FMovieSceneStringChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFrameNumber> GetTimes() {
		return memory.read<struct TArray<struct FFrameNumber>>(m_addr + 8);
	}
	struct TArray<struct FString> GetValues() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}
	struct FString GetDefaultValue() {
		return memory.read<struct FString>(m_addr + 40);
	}
	bool GetbHasDefaultValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveVector2DParameter
{
public:
	FRemoveVector2DParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieScene3DPathSectionTemplate
{
public:
	FMovieScene3DPathSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetPathBindingID() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 32);
	}
	struct FMovieSceneFloatChannel GetTimingCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 56);
	}
	enum class MovieScene3DPathSection_Axis GetFrontAxisEnum() {
		return memory.read<enum class MovieScene3DPathSection_Axis>(m_addr + 216);
	}
	enum class MovieScene3DPathSection_Axis GetUpAxisEnum() {
		return memory.read<enum class MovieScene3DPathSection_Axis>(m_addr + 217);
	}
	char GetbFollow() {
		return memory.read<char>(m_addr + 220);
	}
	char GetbReverse() {
		return memory.read<char>(m_addr + 220);
	}
	char GetbForceUpright() {
		return memory.read<char>(m_addr + 220);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieScene3DTransformKeyStruct
{
public:
	FMovieScene3DTransformKeyStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 20);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FFrameNumber GetTime() {
		return memory.read<struct FFrameNumber>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneCameraShakeSectionData
{
public:
	FMovieSceneCameraShakeSectionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UCameraShakeBase GetShakeClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UCameraShakeBase(ptr_addr);
	}
	float GetPlayScale() {
		return memory.read<float>(m_addr + 8);
	}
	enum class ECameraShakePlaySpace GetPlaySpace() {
		return memory.read<enum class ECameraShakePlaySpace>(m_addr + 12);
	}
	struct FRotator GetUserDefinedPlaySpace() {
		return memory.read<struct FRotator>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieScene3DRotationKeyStruct
{
public:
	FMovieScene3DRotationKeyStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 8);
	}
	struct FFrameNumber GetTime() {
		return memory.read<struct FFrameNumber>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneVectorKeyStructBase
{
public:
	FMovieSceneVectorKeyStructBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetTime() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetShotDisplayName
{
public:
	FSetShotDisplayName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInShotDisplayName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEventPtrs
{
public:
	FMovieSceneEventPtrs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFunction GetFunction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFunction(ptr_addr);
	}
	struct TFieldPath<FNone> GetBoundObjectProperty() {
		return memory.read<struct TFieldPath<FNone>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieScene3DLocationKeyStruct
{
public:
	FMovieScene3DLocationKeyStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FFrameNumber GetTime() {
		return memory.read<struct FFrameNumber>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneVector2DKeyStruct
{
public:
	FMovieSceneVector2DKeyStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetVector() {
		return memory.read<struct FVector2D>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneActorReferenceData
{
public:
	FMovieSceneActorReferenceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFrameNumber> GetKeyTimes() {
		return memory.read<struct TArray<struct FFrameNumber>>(m_addr + 8);
	}
	struct FMovieSceneActorReferenceKey GetDefaultValue() {
		return memory.read<struct FMovieSceneActorReferenceKey>(m_addr + 24);
	}
	struct TArray<struct FMovieSceneActorReferenceKey> GetKeyValues() {
		return memory.read<struct TArray<struct FMovieSceneActorReferenceKey>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneActorReferenceKey
{
public:
	FMovieSceneActorReferenceKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetObject() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}
	struct FName GetComponentName() {
		return memory.read<struct FName>(m_addr + 24);
	}
	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSkeletalAnimRootMotionTrackParams
{
public:
	FMovieSceneSkeletalAnimRootMotionTrackParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEventSectionData
{
public:
	FMovieSceneEventSectionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFrameNumber> GetTimes() {
		return memory.read<struct TArray<struct FFrameNumber>>(m_addr + 8);
	}
	struct TArray<struct FEventPayload> GetKeyValues() {
		return memory.read<struct TArray<struct FEventPayload>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneCameraAnimSectionData
{
public:
	FMovieSceneCameraAnimSectionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraAnim GetCameraAnim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCameraAnim(ptr_addr);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 8);
	}
	float GetPlayScale() {
		return memory.read<float>(m_addr + 12);
	}
	float GetBlendInTime() {
		return memory.read<float>(m_addr + 16);
	}
	float GetBlendOutTime() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetbLooping() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneParticleSectionTemplate
{
public:
	FMovieSceneParticleSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneParticleChannel GetParticleKeys() {
		return memory.read<struct FMovieSceneParticleChannel>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneCameraAnimSectionTemplate
{
public:
	FMovieSceneCameraAnimSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneCameraAnimSectionData GetSourceData() {
		return memory.read<struct FMovieSceneCameraAnimSectionData>(m_addr + 32);
	}
	struct FFrameNumber GetSectionStartTime() {
		return memory.read<struct FFrameNumber>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneComponentMaterialSectionTemplate
{
public:
	FMovieSceneComponentMaterialSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaterialIndex() {
		return memory.read<int32_t>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventPayload
{
public:
	FEventPayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEventName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FMovieSceneEventParameters GetParameters() {
		return memory.read<struct FMovieSceneEventParameters>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneCameraShakeSourceShakeSectionTemplate
{
public:
	FMovieSceneCameraShakeSourceShakeSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneCameraShakeSectionData GetSourceData() {
		return memory.read<struct FMovieSceneCameraShakeSectionData>(m_addr + 32);
	}
	struct FFrameNumber GetSectionStartTime() {
		return memory.read<struct FFrameNumber>(m_addr + 64);
	}
	struct FFrameNumber GetSectionEndTime() {
		return memory.read<struct FFrameNumber>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvent
{
public:
	FMovieSceneEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEventPtrs GetPtrs() {
		return memory.read<struct FMovieSceneEventPtrs>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneCameraShakeSourceTriggerChannel
{
public:
	FMovieSceneCameraShakeSourceTriggerChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFrameNumber> GetKeyTimes() {
		return memory.read<struct TArray<struct FFrameNumber>>(m_addr + 8);
	}
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> GetKeyValues() {
		return memory.read<struct TArray<struct FMovieSceneCameraShakeSourceTrigger>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneCameraShakeSourceTrigger
{
public:
	FMovieSceneCameraShakeSourceTrigger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UCameraShakeBase GetShakeClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UCameraShakeBase(ptr_addr);
	}
	float GetPlayScale() {
		return memory.read<float>(m_addr + 8);
	}
	enum class ECameraShakePlaySpace GetPlaySpace() {
		return memory.read<enum class ECameraShakePlaySpace>(m_addr + 12);
	}
	struct FRotator GetUserDefinedPlaySpace() {
		return memory.read<struct FRotator>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEventPayloadVariable
{
public:
	FMovieSceneEventPayloadVariable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneCameraShakeSourceTriggerSectionTemplate
{
public:
	FMovieSceneCameraShakeSourceTriggerSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFrameNumber> GetTriggerTimes() {
		return memory.read<struct TArray<struct FFrameNumber>>(m_addr + 32);
	}
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> GetTriggerValues() {
		return memory.read<struct TArray<struct FMovieSceneCameraShakeSourceTrigger>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneCameraShakeSectionTemplate
{
public:
	FMovieSceneCameraShakeSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneCameraShakeSectionData GetSourceData() {
		return memory.read<struct FMovieSceneCameraShakeSectionData>(m_addr + 32);
	}
	struct FFrameNumber GetSectionStartTime() {
		return memory.read<struct FFrameNumber>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneColorKeyStruct
{
public:
	FMovieSceneColorKeyStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 8);
	}
	struct FFrameNumber GetTime() {
		return memory.read<struct FFrameNumber>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneColorSectionTemplate
{
public:
	FMovieSceneColorSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetCurves[4]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 56);
	}
	enum class EMovieSceneBlendType GetBlendType() {
		return memory.read<enum class EMovieSceneBlendType>(m_addr + 696);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSkeletalAnimationParams
{
public:
	FMovieSceneSkeletalAnimationParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimSequenceBase GetAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct FFrameNumber GetFirstLoopStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}
	struct FFrameNumber GetStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 12);
	}
	struct FFrameNumber GetEndFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 16);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 20);
	}
	char GetbReverse() {
		return memory.read<char>(m_addr + 24);
	}
	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 28);
	}
	struct FMovieSceneFloatChannel Getweight() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 40);
	}
	bool GetbSkipAnimNotifiers() {
		return memory.read<bool>(m_addr + 200);
	}
	bool GetbForceCustomMode() {
		return memory.read<bool>(m_addr + 201);
	}
	float GetStartOffset() {
		return memory.read<float>(m_addr + 204);
	}
	float GetEndOffset() {
		return memory.read<float>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEventChannel
{
public:
	FMovieSceneEventChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFrameNumber> GetKeyTimes() {
		return memory.read<struct TArray<struct FFrameNumber>>(m_addr + 8);
	}
	struct TArray<struct FMovieSceneEvent> GetKeyValues() {
		return memory.read<struct TArray<struct FMovieSceneEvent>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEventParameters
{
public:
	FMovieSceneEventParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEventTriggerData
{
public:
	FMovieSceneEventTriggerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEventPtrs GetPtrs() {
		return memory.read<struct FMovieSceneEventPtrs>(m_addr + 0);
	}
	struct FGuid GetObjectBindingId() {
		return memory.read<struct FGuid>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEventSectionTemplate
{
public:
	FMovieSceneEventSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEventSectionData GetEventData() {
		return memory.read<struct FMovieSceneEventSectionData>(m_addr + 32);
	}
	char GetbFireEventsWhenForwards() {
		return memory.read<char>(m_addr + 168);
	}
	char GetbFireEventsWhenBackwards() {
		return memory.read<char>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneFadeSectionTemplate
{
public:
	FMovieSceneFadeSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetFadeCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 32);
	}
	struct FLinearColor GetFadeColor() {
		return memory.read<struct FLinearColor>(m_addr + 192);
	}
	char GetbFadeAudio() {
		return memory.read<char>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneBoolPropertySectionTemplate
{
public:
	FMovieSceneBoolPropertySectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneBoolChannel GetBoolCurve() {
		return memory.read<struct FMovieSceneBoolChannel>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneObjectPropertyTemplate
{
public:
	FMovieSceneObjectPropertyTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectPathChannel GetObjectChannel() {
		return memory.read<struct FMovieSceneObjectPathChannel>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetConstraintBindingID
{
public:
	FGetConstraintBindingID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetReturnValue() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneParticleParameterSectionTemplate
{
public:
	FMovieSceneParticleParameterSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSetCameraBindingID
{
public:
	FSetCameraBindingID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetInCameraBindingID() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneParticleChannel
{
public:
	FMovieSceneParticleChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieScenePrimitiveMaterialTemplate
{
public:
	FMovieScenePrimitiveMaterialTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaterialIndex() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct FMovieSceneObjectPathChannel GetMaterialChannel() {
		return memory.read<struct FMovieSceneObjectPathChannel>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSkeletalAnimationSectionTemplate
{
public:
	FMovieSceneSkeletalAnimationSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSkeletalAnimationSectionTemplateParameters GetParams() {
		return memory.read<struct FMovieSceneSkeletalAnimationSectionTemplateParameters>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSkeletalAnimationSectionTemplateParameters
{
public:
	FMovieSceneSkeletalAnimationSectionTemplateParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetSectionStartTime() {
		return memory.read<struct FFrameNumber>(m_addr + 216);
	}
	struct FFrameNumber GetSectionEndTime() {
		return memory.read<struct FFrameNumber>(m_addr + 220);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSlomoSectionTemplate
{
public:
	FMovieSceneSlomoSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetSlomoCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FLevelVisibilityComponentData
{
public:
	FLevelVisibilityComponentData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneLevelVisibilitySection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneLevelVisibilitySection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneVector4KeyStruct
{
public:
	FMovieSceneVector4KeyStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector4 GetVector() {
		return memory.read<struct FVector4>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneVectorKeyStruct
{
public:
	FMovieSceneVectorKeyStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetVector() {
		return memory.read<struct FVector>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneVisibilitySectionTemplate
{
public:
	FMovieSceneVisibilitySectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSetConstraintBindingID
{
public:
	FSetConstraintBindingID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetInConstraintBindingID() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStartOffset
{
public:
	FGetStartOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetReturnValue() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSound
{
public:
	FSetSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundBase GetInSound() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStartOffset
{
public:
	FSetStartOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetInStartOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCameraBindingID
{
public:
	FGetCameraBindingID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetReturnValue() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetShotDisplayName
{
public:
	FGetShotDisplayName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLevelNames
{
public:
	FGetLevelNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetReturnValue() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVisibility
{
public:
	FGetVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELevelVisibility GetReturnValue() {
		return memory.read<enum class ELevelVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLevelNames
{
public:
	FSetLevelNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetInLevelNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVisibility
{
public:
	FSetVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELevelVisibility GetInVisibility() {
		return memory.read<enum class ELevelVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddBoolParameterKey
{
public:
	FAddBoolParameterKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FFrameNumber GetInTime() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}
	bool GetInValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddColorParameterKey
{
public:
	FAddColorParameterKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FFrameNumber GetInTime() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}
	struct FLinearColor GetInValue() {
		return memory.read<struct FLinearColor>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddTransformParameterKey
{
public:
	FAddTransformParameterKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FFrameNumber GetInTime() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}
	struct FTransform GetInValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddVector2DParameterKey
{
public:
	FAddVector2DParameterKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FFrameNumber GetInTime() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}
	struct FVector2D GetInValue() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddVectorParameterKey
{
public:
	FAddVectorParameterKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FFrameNumber GetInTime() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}
	struct FVector GetInValue() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameterNames
{
public:
	FGetParameterNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct FName> GetParameterNames() {
		return memory.read<struct TSet<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveBoolParameter
{
public:
	FRemoveBoolParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveColorParameter
{
public:
	FRemoveColorParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveScalarParameter
{
public:
	FRemoveScalarParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveTransformParameter
{
public:
	FRemoveTransformParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveVectorParameter
{
public:
	FRemoveVectorParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};