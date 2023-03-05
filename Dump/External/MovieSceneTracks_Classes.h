#pragma once 
#include <MovieSceneTracks_Structs.h>
 
 
 
class UMovieSceneAudioTrack
{
public:
	UMovieSceneAudioTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetAudioSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraShakeEvaluator
{
public:
	UMovieSceneCameraShakeEvaluator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneColorTrack
{
public:
	UMovieSceneColorTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsSlateColor() {
		return memory.read<bool>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScene3DAttachSection
{
public:
	UMovieScene3DAttachSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetAttachSocketName() {
		return memory.read<struct FName>(m_addr + 280);
	}
	struct FName GetAttachComponentName() {
		return memory.read<struct FName>(m_addr + 288);
	}
	enum class EAttachmentRule GetAttachmentLocationRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 296);
	}
	enum class EAttachmentRule GetAttachmentRotationRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 297);
	}
	enum class EAttachmentRule GetAttachmentScaleRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 298);
	}
	enum class EDetachmentRule GetDetachmentLocationRule() {
		return memory.read<enum class EDetachmentRule>(m_addr + 299);
	}
	enum class EDetachmentRule GetDetachmentRotationRule() {
		return memory.read<enum class EDetachmentRule>(m_addr + 300);
	}
	enum class EDetachmentRule GetDetachmentScaleRule() {
		return memory.read<enum class EDetachmentRule>(m_addr + 301);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneInitialValueSystem
{
public:
	UMovieSceneInitialValueSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneFadeTrack
{
public:
	UMovieSceneFadeTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneIntegerSection
{
public:
	UMovieSceneIntegerSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneIntegerChannel GetIntegerCurve() {
		return memory.read<struct FMovieSceneIntegerChannel>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePropertyTrack
{
public:
	UMovieScenePropertyTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSectionToKey() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UMovieSceneSection(ptr_addr);
	}
	struct FMovieScenePropertyBinding GetPropertyBinding() {
		return memory.read<struct FMovieScenePropertyBinding>(m_addr + 152);
	}
	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScene3DTransformSection
{
public:
	UMovieScene3DTransformSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneTransformMask GetTransformMask() {
		return memory.read<struct FMovieSceneTransformMask>(m_addr + 240);
	}
	struct FMovieSceneFloatChannel GetTranslation[3]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 248);
	}
	struct FMovieSceneFloatChannel GetRotation[3]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 728);
	}
	struct FMovieSceneFloatChannel GetScale[3]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 1208);
	}
	struct FMovieSceneFloatChannel GetManualWeight() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 1688);
	}
	bool GetbUseQuaternionInterpolation() {
		return memory.read<bool>(m_addr + 1848);
	}

private:
	std::uint64_t m_addr = 0;
};


class UIntegerChannelEvaluatorSystem
{
public:
	UIntegerChannelEvaluatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFloatChannelEvaluatorSystem
{
public:
	UFloatChannelEvaluatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEventTriggerSection
{
public:
	UMovieSceneEventTriggerSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEventChannel GetEventChannel() {
		return memory.read<struct FMovieSceneEventChannel>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneTransformTrack
{
public:
	UMovieSceneTransformTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraAnimTrack
{
public:
	UMovieSceneCameraAnimTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetCameraAnimSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UByteChannelEvaluatorSystem
{
public:
	UByteChannelEvaluatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneVectorSection
{
public:
	UMovieSceneVectorSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetCurves[4]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 240);
	}
	int32_t GetChannelsUsed() {
		return memory.read<int32_t>(m_addr + 880);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEventSectionBase
{
public:
	UMovieSceneEventSectionBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneHierarchicalBiasSystem
{
public:
	UMovieSceneHierarchicalBiasSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneTransformOrigin
{
public:
	UMovieSceneTransformOrigin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraShakeTrack
{
public:
	UMovieSceneCameraShakeTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetCameraShakeSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScene3DPathSection
{
public:
	UMovieScene3DPathSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetTimingCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 272);
	}
	enum class MovieScene3DPathSection_Axis GetFrontAxisEnum() {
		return memory.read<enum class MovieScene3DPathSection_Axis>(m_addr + 432);
	}
	enum class MovieScene3DPathSection_Axis GetUpAxisEnum() {
		return memory.read<enum class MovieScene3DPathSection_Axis>(m_addr + 433);
	}
	char GetbFollow() {
		return memory.read<char>(m_addr + 436);
	}
	char GetbReverse() {
		return memory.read<char>(m_addr + 436);
	}
	char GetbForceUpright() {
		return memory.read<char>(m_addr + 436);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScene3DConstraintSection
{
public:
	UMovieScene3DConstraintSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetConstraintId() {
		return memory.read<struct FGuid>(m_addr + 232);
	}
	struct FMovieSceneObjectBindingID GetConstraintBindingID() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEnumTrack
{
public:
	UMovieSceneEnumTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnum GetEnum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct UEnum(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScene3DConstraintTrack
{
public:
	UMovieScene3DConstraintTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetConstraintSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScene3DAttachTrack
{
public:
	UMovieScene3DAttachTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEulerTransformTrack
{
public:
	UMovieSceneEulerTransformTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneAudioSection
{
public:
	UMovieSceneAudioSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundBase GetSound() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct USoundBase(ptr_addr);
	}
	struct FFrameNumber GetStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 240);
	}
	float GetStartOffset() {
		return memory.read<float>(m_addr + 244);
	}
	float GetAudioStartTime() {
		return memory.read<float>(m_addr + 248);
	}
	float GetAudioDilationFactor() {
		return memory.read<float>(m_addr + 252);
	}
	float GetAudioVolume() {
		return memory.read<float>(m_addr + 256);
	}
	struct FMovieSceneFloatChannel GetSoundVolume() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 264);
	}
	struct FMovieSceneFloatChannel GetPitchMultiplier() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 424);
	}
	struct FMovieSceneActorReferenceData GetAttachActorData() {
		return memory.read<struct FMovieSceneActorReferenceData>(m_addr + 584);
	}
	bool GetbLooping() {
		return memory.read<bool>(m_addr + 760);
	}
	bool GetbSuppressSubtitles() {
		return memory.read<bool>(m_addr + 761);
	}
	bool GetbOverrideAttenuation() {
		return memory.read<bool>(m_addr + 762);
	}
	struct USoundAttenuation GetAttenuationSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct USoundAttenuation(ptr_addr);
	}
	struct FDelegate GetOnQueueSubtitles() {
		return memory.read<struct FDelegate>(m_addr + 776);
	}
	struct FMulticastInlineDelegate GetOnAudioFinished() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 792);
	}
	struct FMulticastInlineDelegate GetOnAudioPlaybackPercent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 808);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScene3DPathTrack
{
public:
	UMovieScene3DPathTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePropertySystem
{
public:
	UMovieScenePropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieScenePropertyInstantiatorSystem GetInstantiatorSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UMovieScenePropertyInstantiatorSystem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePostSpawnEventSystem
{
public:
	UMovieScenePostSpawnEventSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScene3DTransformPropertySystem
{
public:
	UMovieScene3DTransformPropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePostEvalEventSystem
{
public:
	UMovieScenePostEvalEventSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneComponentTransformSystem
{
public:
	UMovieSceneComponentTransformSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraShakeSourceShakeSection
{
public:
	UMovieSceneCameraShakeSourceShakeSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneCameraShakeSectionData GetShakeData() {
		return memory.read<struct FMovieSceneCameraShakeSectionData>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScene3DTransformTrack
{
public:
	UMovieScene3DTransformTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneActorReferenceSection
{
public:
	UMovieSceneActorReferenceSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneActorReferenceData GetActorReferenceData() {
		return memory.read<struct FMovieSceneActorReferenceData>(m_addr + 232);
	}
	struct FIntegralCurve GetActorGuidIndexCurve() {
		return memory.read<struct FIntegralCurve>(m_addr + 408);
	}
	struct TArray<struct FString> GetActorGuidStrings() {
		return memory.read<struct TArray<struct FString>>(m_addr + 536);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneActorReferenceTrack
{
public:
	UMovieSceneActorReferenceTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneBaseValueEvaluatorSystem
{
public:
	UMovieSceneBaseValueEvaluatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneBoolPropertySystem
{
public:
	UMovieSceneBoolPropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneBoolTrack
{
public:
	UMovieSceneBoolTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneBytePropertySystem
{
public:
	UMovieSceneBytePropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneByteSection
{
public:
	UMovieSceneByteSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneByteChannel GetByteCurve() {
		return memory.read<struct FMovieSceneByteChannel>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEventTrack
{
public:
	UMovieSceneEventTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbFireEventsWhenForwards() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbFireEventsWhenBackwards() {
		return memory.read<char>(m_addr + 160);
	}
	enum class EFireEventsAtPosition GetEventPosition() {
		return memory.read<enum class EFireEventsAtPosition>(m_addr + 164);
	}
	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneByteTrack
{
public:
	UMovieSceneByteTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnum GetEnum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct UEnum(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraAnimSection
{
public:
	UMovieSceneCameraAnimSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneCameraAnimSectionData GetAnimData() {
		return memory.read<struct FMovieSceneCameraAnimSectionData>(m_addr + 232);
	}
	struct UCameraAnim GetCameraAnim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UCameraAnim(ptr_addr);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 272);
	}
	float GetPlayScale() {
		return memory.read<float>(m_addr + 276);
	}
	float GetBlendInTime() {
		return memory.read<float>(m_addr + 280);
	}
	float GetBlendOutTime() {
		return memory.read<float>(m_addr + 284);
	}
	bool GetbLooping() {
		return memory.read<bool>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEnumSection
{
public:
	UMovieSceneEnumSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneByteChannel GetEnumCurve() {
		return memory.read<struct FMovieSceneByteChannel>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraCutSection
{
public:
	UMovieSceneCameraCutSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbLockPreviousCamera() {
		return memory.read<bool>(m_addr + 240);
	}
	bool GetbDontResetTAABuffer() {
		return memory.read<bool>(m_addr + 241);
	}
	struct FGuid GetCameraGuid() {
		return memory.read<struct FGuid>(m_addr + 244);
	}
	struct FMovieSceneObjectBindingID GetCameraBindingID() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 260);
	}
	struct FTransform GetInitialCameraCutTransform() {
		return memory.read<struct FTransform>(m_addr + 288);
	}
	bool GetbHasInitialCameraCutTransform() {
		return memory.read<bool>(m_addr + 336);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneComponentAttachmentInvalidatorSystem
{
public:
	UMovieSceneComponentAttachmentInvalidatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraCutTrack
{
public:
	UMovieSceneCameraCutTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbCanBlend() {
		return memory.read<bool>(m_addr + 144);
	}
	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraCutTrackInstance
{
public:
	UMovieSceneCameraCutTrackInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraShakeSection
{
public:
	UMovieSceneCameraShakeSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneCameraShakeSectionData GetShakeData() {
		return memory.read<struct FMovieSceneCameraShakeSectionData>(m_addr + 232);
	}
	UCameraShakeBase GetShakeClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return UCameraShakeBase(ptr_addr);
	}
	float GetPlayScale() {
		return memory.read<float>(m_addr + 272);
	}
	enum class ECameraShakePlaySpace GetPlaySpace() {
		return memory.read<enum class ECameraShakePlaySpace>(m_addr + 276);
	}
	struct FRotator GetUserDefinedPlaySpace() {
		return memory.read<struct FRotator>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCinematicShotTrack
{
public:
	UMovieSceneCinematicShotTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneFloatTrack
{
public:
	UMovieSceneFloatTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraShakeSourceShakeTrack
{
public:
	UMovieSceneCameraShakeSourceShakeTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetCameraShakeSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraShakeSourceTriggerSection
{
public:
	UMovieSceneCameraShakeSourceTriggerSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneCameraShakeSourceTriggerChannel GetChannel() {
		return memory.read<struct FMovieSceneCameraShakeSourceTriggerChannel>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneParticleParameterTrack
{
public:
	UMovieSceneParticleParameterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCameraShakeSourceTriggerTrack
{
public:
	UMovieSceneCameraShakeSourceTriggerTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEventSystem
{
public:
	UMovieSceneEventSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCinematicShotSection
{
public:
	UMovieSceneCinematicShotSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetShotDisplayName() {
		return memory.read<struct FString>(m_addr + 360);
	}
	struct FText GetDisplayName() {
		return memory.read<struct FText>(m_addr + 376);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePiecewiseEnumBlenderSystem
{
public:
	UMovieScenePiecewiseEnumBlenderSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneColorPropertySystem
{
public:
	UMovieSceneColorPropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneColorSection
{
public:
	UMovieSceneColorSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetRedCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 240);
	}
	struct FMovieSceneFloatChannel GetGreenCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 400);
	}
	struct FMovieSceneFloatChannel GetBlueCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 560);
	}
	struct FMovieSceneFloatChannel GetAlphaCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 720);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneComponentAttachmentSystem
{
public:
	UMovieSceneComponentAttachmentSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneComponentMobilitySystem
{
public:
	UMovieSceneComponentMobilitySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneDeferredComponentMovementSystem
{
public:
	UMovieSceneDeferredComponentMovementSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEnumPropertySystem
{
public:
	UMovieSceneEnumPropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEulerTransformPropertySystem
{
public:
	UMovieSceneEulerTransformPropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEventRepeaterSection
{
public:
	UMovieSceneEventRepeaterSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEvent GetEvent() {
		return memory.read<struct FMovieSceneEvent>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEventSection
{
public:
	UMovieSceneEventSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNameCurve Getevents() {
		return memory.read<struct FNameCurve>(m_addr + 232);
	}
	struct FMovieSceneEventSectionData GetEventData() {
		return memory.read<struct FMovieSceneEventSectionData>(m_addr + 352);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePreSpawnEventSystem
{
public:
	UMovieScenePreSpawnEventSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneFadeSection
{
public:
	UMovieSceneFadeSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetFloatCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 232);
	}
	struct FLinearColor GetFadeColor() {
		return memory.read<struct FLinearColor>(m_addr + 392);
	}
	char GetbFadeAudio() {
		return memory.read<char>(m_addr + 408);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneFloatPropertySystem
{
public:
	UMovieSceneFloatPropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneFloatSection
{
public:
	UMovieSceneFloatSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetFloatCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneIntegerPropertySystem
{
public:
	UMovieSceneIntegerPropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneIntegerTrack
{
public:
	UMovieSceneIntegerTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneInterrogatedPropertyInstantiatorSystem
{
public:
	UMovieSceneInterrogatedPropertyInstantiatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneLevelVisibilitySection
{
public:
	UMovieSceneLevelVisibilitySection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELevelVisibility GetVisibility() {
		return memory.read<enum class ELevelVisibility>(m_addr + 240);
	}
	struct TArray<struct FName> GetLevelNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneLevelVisibilitySystem
{
public:
	UMovieSceneLevelVisibilitySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneLevelVisibilityTrack
{
public:
	UMovieSceneLevelVisibilityTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneMaterialTrack
{
public:
	UMovieSceneMaterialTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneMaterialParameterCollectionTrack
{
public:
	UMovieSceneMaterialParameterCollectionTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialParameterCollection GetMPC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UMaterialParameterCollection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneComponentMaterialTrack
{
public:
	UMovieSceneComponentMaterialTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaterialIndex() {
		return memory.read<int32_t>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneMotionVectorSimulationSystem
{
public:
	UMovieSceneMotionVectorSimulationSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneObjectPropertySection
{
public:
	UMovieSceneObjectPropertySection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectPathChannel GetObjectChannel() {
		return memory.read<struct FMovieSceneObjectPathChannel>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneObjectPropertyTrack
{
public:
	UMovieSceneObjectPropertyTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetPropertyClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneParameterSection
{
public:
	UMovieSceneParameterSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBoolParameterNameAndCurve> GetBoolParameterNamesAndCurves() {
		return memory.read<struct TArray<struct FBoolParameterNameAndCurve>>(m_addr + 232);
	}
	struct TArray<struct FScalarParameterNameAndCurve> GetScalarParameterNamesAndCurves() {
		return memory.read<struct TArray<struct FScalarParameterNameAndCurve>>(m_addr + 248);
	}
	struct TArray<struct FVector2DParameterNameAndCurves> GetVector2DParameterNamesAndCurves() {
		return memory.read<struct TArray<struct FVector2DParameterNameAndCurves>>(m_addr + 264);
	}
	struct TArray<struct FVectorParameterNameAndCurves> GetVectorParameterNamesAndCurves() {
		return memory.read<struct TArray<struct FVectorParameterNameAndCurves>>(m_addr + 280);
	}
	struct TArray<struct FColorParameterNameAndCurves> GetColorParameterNamesAndCurves() {
		return memory.read<struct TArray<struct FColorParameterNameAndCurves>>(m_addr + 296);
	}
	struct TArray<struct FTransformParameterNameAndCurves> GetTransformParameterNamesAndCurves() {
		return memory.read<struct TArray<struct FTransformParameterNameAndCurves>>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneParticleSection
{
public:
	UMovieSceneParticleSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneParticleChannel GetParticleKeys() {
		return memory.read<struct FMovieSceneParticleChannel>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneParticleTrack
{
public:
	UMovieSceneParticleTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetParticleSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePiecewiseBoolBlenderSystem
{
public:
	UMovieScenePiecewiseBoolBlenderSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePiecewiseByteBlenderSystem
{
public:
	UMovieScenePiecewiseByteBlenderSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePiecewiseFloatBlenderSystem
{
public:
	UMovieScenePiecewiseFloatBlenderSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePiecewiseIntegerBlenderSystem
{
public:
	UMovieScenePiecewiseIntegerBlenderSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePrimitiveMaterialSection
{
public:
	UMovieScenePrimitiveMaterialSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectPathChannel GetMaterialChannel() {
		return memory.read<struct FMovieSceneObjectPathChannel>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePrimitiveMaterialTrack
{
public:
	UMovieScenePrimitiveMaterialTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaterialIndex() {
		return memory.read<int32_t>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePropertyInstantiatorSystem
{
public:
	UMovieScenePropertyInstantiatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneQuaternionInterpolationRotationSystem
{
public:
	UMovieSceneQuaternionInterpolationRotationSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSkeletalAnimationSection
{
public:
	UMovieSceneSkeletalAnimationSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSkeletalAnimationParams GetParams() {
		return memory.read<struct FMovieSceneSkeletalAnimationParams>(m_addr + 232);
	}
	struct UAnimSequence GetAnimSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 448);
		return struct UAnimSequence(ptr_addr);
	}
	struct UAnimSequenceBase GetAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 456);
		return struct UAnimSequenceBase(ptr_addr);
	}
	float GetStartOffset() {
		return memory.read<float>(m_addr + 464);
	}
	float GetEndOffset() {
		return memory.read<float>(m_addr + 468);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 472);
	}
	char GetbReverse() {
		return memory.read<char>(m_addr + 476);
	}
	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 480);
	}
	struct FVector GetStartLocationOffset() {
		return memory.read<struct FVector>(m_addr + 488);
	}
	struct FRotator GetStartRotationOffset() {
		return memory.read<struct FRotator>(m_addr + 500);
	}
	bool GetbMatchWithPrevious() {
		return memory.read<bool>(m_addr + 512);
	}
	struct FName GetMatchedBoneName() {
		return memory.read<struct FName>(m_addr + 516);
	}
	struct FVector GetMatchedLocationOffset() {
		return memory.read<struct FVector>(m_addr + 524);
	}
	struct FRotator GetMatchedRotationOffset() {
		return memory.read<struct FRotator>(m_addr + 536);
	}
	bool GetbMatchTranslation() {
		return memory.read<bool>(m_addr + 548);
	}
	bool GetbMatchIncludeZHeight() {
		return memory.read<bool>(m_addr + 549);
	}
	bool GetbMatchRotationYaw() {
		return memory.read<bool>(m_addr + 550);
	}
	bool GetbMatchRotationPitch() {
		return memory.read<bool>(m_addr + 551);
	}
	bool GetbMatchRotationRoll() {
		return memory.read<bool>(m_addr + 552);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSkeletalAnimationTrack
{
public:
	UMovieSceneSkeletalAnimationTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetAnimationSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}
	bool GetbUseLegacySectionIndexBlend() {
		return memory.read<bool>(m_addr + 168);
	}
	struct FMovieSceneSkeletalAnimRootMotionTrackParams GetRootMotionParams() {
		return memory.read<struct FMovieSceneSkeletalAnimRootMotionTrackParams>(m_addr + 176);
	}
	bool GetbBlendFirstChildOfRoot() {
		return memory.read<bool>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSlomoSection
{
public:
	UMovieSceneSlomoSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetFloatCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSlomoTrack
{
public:
	UMovieSceneSlomoTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneStringSection
{
public:
	UMovieSceneStringSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneStringChannel GetStringCurve() {
		return memory.read<struct FMovieSceneStringChannel>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneStringTrack
{
public:
	UMovieSceneStringTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneTransformOriginSystem
{
public:
	UMovieSceneTransformOriginSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneVectorPropertySystem
{
public:
	UMovieSceneVectorPropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneVectorTrack
{
public:
	UMovieSceneVectorTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumChannelsUsed() {
		return memory.read<int32_t>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneVisibilityTrack
{
public:
	UMovieSceneVisibilityTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneHierarchicalEasingInstantiatorSystem
{
public:
	UMovieSceneHierarchicalEasingInstantiatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UWeightAndEasingEvaluatorSystem
{
public:
	UWeightAndEasingEvaluatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


