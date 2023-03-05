#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetPostRollFrames
{
public:
	FSetPostRollFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInPostRollFrames() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneChannel
{
public:
	FMovieSceneChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneKeyHandleMap
{
public:
	FMovieSceneKeyHandleMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneBinding
{
public:
	FMovieSceneBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetObjectGuid() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FString GetBindingName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TArray<struct UMovieSceneTrack> GetTracks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct TArray<struct UMovieSceneTrack>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneFloatValue
{
public:
	FMovieSceneFloatValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}
	struct FMovieSceneTangentData GetTangent() {
		return memory.read<struct FMovieSceneTangentData>(m_addr + 4);
	}
	enum class ERichCurveInterpMode GetInterpMode() {
		return memory.read<enum class ERichCurveInterpMode>(m_addr + 24);
	}
	enum class ERichCurveTangentMode GetTangentMode() {
		return memory.read<enum class ERichCurveTangentMode>(m_addr + 25);
	}
	char GetPaddingByte() {
		return memory.read<char>(m_addr + 26);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTangentData
{
public:
	FMovieSceneTangentData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetArriveTangent() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLeaveTangent() {
		return memory.read<float>(m_addr + 4);
	}
	float GetArriveTangentWeight() {
		return memory.read<float>(m_addr + 8);
	}
	float GetLeaveTangentWeight() {
		return memory.read<float>(m_addr + 12);
	}
	enum class ERichCurveTangentWeightMode GetTangentWeightMode() {
		return memory.read<enum class ERichCurveTangentWeightMode>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneFieldEntry_ChildTemplate
{
public:
	FMovieSceneFieldEntry_ChildTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetChildIndex() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	enum class ESectionEvaluationFlags GetFlags() {
		return memory.read<enum class ESectionEvaluationFlags>(m_addr + 2);
	}
	struct FFrameNumber GetForcedTime() {
		return memory.read<struct FFrameNumber>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneByteChannel
{
public:
	FMovieSceneByteChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFrameNumber> GetTimes() {
		return memory.read<struct TArray<struct FFrameNumber>>(m_addr + 8);
	}
	char GetDefaultValue() {
		return memory.read<char>(m_addr + 24);
	}
	bool GetbHasDefaultValue() {
		return memory.read<bool>(m_addr + 25);
	}
	struct TArray<char> GetValues() {
		return memory.read<struct TArray<char>>(m_addr + 32);
	}
	struct UEnum GetEnum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UEnum(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneFloatChannel
{
public:
	FMovieSceneFloatChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERichCurveExtrapolation GetPreInfinityExtrap() {
		return memory.read<enum class ERichCurveExtrapolation>(m_addr + 8);
	}
	enum class ERichCurveExtrapolation GetPostInfinityExtrap() {
		return memory.read<enum class ERichCurveExtrapolation>(m_addr + 9);
	}
	struct TArray<struct FFrameNumber> GetTimes() {
		return memory.read<struct TArray<struct FFrameNumber>>(m_addr + 16);
	}
	struct TArray<struct FMovieSceneFloatValue> GetValues() {
		return memory.read<struct TArray<struct FMovieSceneFloatValue>>(m_addr + 32);
	}
	float GetDefaultValue() {
		return memory.read<float>(m_addr + 48);
	}
	bool GetbHasDefaultValue() {
		return memory.read<bool>(m_addr + 52);
	}
	struct FMovieSceneKeyHandleMap GetKeyHandles() {
		return memory.read<struct FMovieSceneKeyHandleMap>(m_addr + 56);
	}
	struct FFrameRate GetTickResolution() {
		return memory.read<struct FFrameRate>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackInstanceInputComponent
{
public:
	FTrackInstanceInputComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	int32_t GetOutputIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneIntegerChannel
{
public:
	FMovieSceneIntegerChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFrameNumber> GetTimes() {
		return memory.read<struct TArray<struct FFrameNumber>>(m_addr + 8);
	}
	int32_t GetDefaultValue() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetbHasDefaultValue() {
		return memory.read<bool>(m_addr + 28);
	}
	struct TArray<int32_t> GetValues() {
		return memory.read<struct TArray<int32_t>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvalTemplateBase
{
public:
	FMovieSceneEvalTemplateBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTrackLabels
{
public:
	FMovieSceneTrackLabels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetStrings() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvalTemplate
{
public:
	FMovieSceneEvalTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMovieSceneCompletionMode GetCompletionMode() {
		return memory.read<enum class EMovieSceneCompletionMode>(m_addr + 16);
	}
	struct TWeakObjectPtr<UMovieSceneSection> GetSourceSectionPtr() {
		return memory.read<struct TWeakObjectPtr<UMovieSceneSection>>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneBoolChannel
{
public:
	FMovieSceneBoolChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFrameNumber> GetTimes() {
		return memory.read<struct TArray<struct FFrameNumber>>(m_addr + 8);
	}
	bool GetDefaultValue() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbHasDefaultValue() {
		return memory.read<bool>(m_addr + 25);
	}
	struct TArray<bool> GetValues() {
		return memory.read<struct TArray<bool>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneMarkedFrame
{
public:
	FMovieSceneMarkedFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetFrameNumber() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	struct FString GetLabel() {
		return memory.read<struct FString>(m_addr + 8);
	}
	bool GetbIsDeterminismFence() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTrackImplementation
{
public:
	FMovieSceneTrackImplementation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvalTemplatePtr
{
public:
	FMovieSceneEvalTemplatePtr(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieScenePropertyBinding
{
public:
	FMovieScenePropertyBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPropertyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetPropertyPath() {
		return memory.read<struct FName>(m_addr + 8);
	}
	bool GetbCanUseClassLookup() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEntitySystemGraphNodes
{
public:
	FMovieSceneEntitySystemGraphNodes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieScenePropertySectionTemplate
{
public:
	FMovieScenePropertySectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieScenePropertySectionData GetPropertyData() {
		return memory.read<struct FMovieScenePropertySectionData>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieScenePropertySectionData
{
public:
	FMovieScenePropertySectionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPropertyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FString GetPropertyPath() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSectionGroup
{
public:
	FMovieSceneSectionGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct TWeakObjectPtr<UMovieSceneSection>> GetSections() {
		return memory.read<struct TArray<struct TWeakObjectPtr<UMovieSceneSection>>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequencePlaybackSettings
{
public:
	FMovieSceneSequencePlaybackSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbAutoPlay() {
		return memory.read<char>(m_addr + 0);
	}
	struct FMovieSceneSequenceLoopCount GetLoopCount() {
		return memory.read<struct FMovieSceneSequenceLoopCount>(m_addr + 4);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 8);
	}
	float GetStartTime() {
		return memory.read<float>(m_addr + 12);
	}
	char GetbRandomStartTime() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbRestoreState() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbDisableMovementInput() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbDisableLookAtInput() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbHidePlayer() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbHideHud() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbDisableCameraCuts() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbPauseAtEnd() {
		return memory.read<char>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequenceLoopCount
{
public:
	FMovieSceneSequenceLoopCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSegmentIdentifier
{
public:
	FMovieSceneSegmentIdentifier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIdentifierIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationFieldEntityKey
{
public:
	FMovieSceneEvaluationFieldEntityKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<UObject> GetEntityOwner() {
		return memory.read<struct TWeakObjectPtr<UObject>>(m_addr + 0);
	}
	uint32_t GetEntityID() {
		return memory.read<uint32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneFieldEntry_EvaluationTrack
{
public:
	FMovieSceneFieldEntry_EvaluationTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEvaluationFieldTrackPtr GetTrackPtr() {
		return memory.read<struct FMovieSceneEvaluationFieldTrackPtr>(m_addr + 0);
	}
	uint16_t GetNumChildren() {
		return memory.read<uint16_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneExpansionState
{
public:
	FMovieSceneExpansionState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbExpanded() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationHookComponent
{
public:
	FMovieSceneEvaluationHookComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IMovieSceneEvaluationHook> GetInterface() {
		return memory.read<struct TScriptInterface<IMovieSceneEvaluationHook>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTrackInstanceComponent
{
public:
	FMovieSceneTrackInstanceComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	UMovieSceneTrackInstance GetTrackInstanceClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UMovieSceneTrackInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FEasingComponentData
{
public:
	FEasingComponentData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetObjectBindings
{
public:
	FGetObjectBindings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetInObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct FMovieSceneObjectBindingID> GetReturnValue() {
		return memory.read<struct TArray<struct FMovieSceneObjectBindingID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationFieldTrackPtr
{
public:
	FMovieSceneEvaluationFieldTrackPtr(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSequenceID GetSequenceID() {
		return memory.read<struct FMovieSceneSequenceID>(m_addr + 0);
	}
	struct FMovieSceneTrackIdentifier GetTrackIdentifier() {
		return memory.read<struct FMovieSceneTrackIdentifier>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneDeterminismData
{
public:
	FMovieSceneDeterminismData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFrameTime> GetFences() {
		return memory.read<struct TArray<struct FFrameTime>>(m_addr + 0);
	}
	bool GetbParentSequenceRequiresLowerFence() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetbParentSequenceRequiresUpperFence() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationFieldEntityMetaData
{
public:
	FMovieSceneEvaluationFieldEntityMetaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOverrideBoundPropertyPath() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FFrameNumber GetForcedTime() {
		return memory.read<struct FFrameNumber>(m_addr + 16);
	}
	enum class ESectionEvaluationFlags GetFlags() {
		return memory.read<enum class ESectionEvaluationFlags>(m_addr + 24);
	}
	char GetbEvaluateInSequencePreRoll() {
		return memory.read<char>(m_addr + 25);
	}
	char GetbEvaluateInSequencePostRoll() {
		return memory.read<char>(m_addr + 25);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneObjectBindingIDs
{
public:
	FMovieSceneObjectBindingIDs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMovieSceneObjectBindingID> GetIDs() {
		return memory.read<struct TArray<struct FMovieSceneObjectBindingID>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationFieldEntityTree
{
public:
	FMovieSceneEvaluationFieldEntityTree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneObjectBindingID
{
public:
	FMovieSceneObjectBindingID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetGuid() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	int32_t GetSequenceID() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetResolveParentIndex() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationOperand
{
public:
	FMovieSceneEvaluationOperand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetObjectBindingId() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FMovieSceneSequenceID GetSequenceID() {
		return memory.read<struct FMovieSceneSequenceID>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEditorData
{
public:
	FMovieSceneEditorData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FMovieSceneExpansionState> GetExpansionStates() {
		return memory.read<struct TMap<struct FString, struct FMovieSceneExpansionState>>(m_addr + 0);
	}
	struct TArray<struct FString> GetPinnedNodes() {
		return memory.read<struct TArray<struct FString>>(m_addr + 80);
	}
	double GetViewStart() {
		return memory.read<double>(m_addr + 96);
	}
	double GetViewEnd() {
		return memory.read<double>(m_addr + 104);
	}
	double GetWorkStart() {
		return memory.read<double>(m_addr + 112);
	}
	double GetWorkEnd() {
		return memory.read<double>(m_addr + 120);
	}
	struct TSet<struct FFrameNumber> GetMarkedFrames() {
		return memory.read<struct TSet<struct FFrameNumber>>(m_addr + 128);
	}
	struct FFloatRange GetWorkingRange() {
		return memory.read<struct FFloatRange>(m_addr + 208);
	}
	struct FFloatRange GetViewRange() {
		return memory.read<struct FFloatRange>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTimecodeSource
{
public:
	FMovieSceneTimecodeSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimecode GetTimecode() {
		return memory.read<struct FTimecode>(m_addr + 0);
	}
	struct FFrameNumber GetDeltaFrame() {
		return memory.read<struct FFrameNumber>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneBindingOverrideData
{
public:
	FMovieSceneBindingOverrideData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetObjectBindingId() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}
	struct TWeakObjectPtr<UObject> GetObject() {
		return memory.read<struct TWeakObjectPtr<UObject>>(m_addr + 24);
	}
	bool GetbOverridesDefault() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTrackEvalOptions
{
public:
	FMovieSceneTrackEvalOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbCanEvaluateNearestSection() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbEvalNearestSection() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbEvaluateInPreroll() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbEvaluateInPostroll() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbEvaluateNearestSection() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOptionalMovieSceneBlendType
{
public:
	FOptionalMovieSceneBlendType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMovieSceneBlendType GetBlendType() {
		return memory.read<enum class EMovieSceneBlendType>(m_addr + 0);
	}
	bool GetbIsValid() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneCompiledSequenceFlagStruct
{
public:
	FMovieSceneCompiledSequenceFlagStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbParentSequenceRequiresLowerFence() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbParentSequenceRequiresUpperFence() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequenceCompilerMaskStruct
{
public:
	FMovieSceneSequenceCompilerMaskStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbHierarchy() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbEvaluationTemplate() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbEvaluationTemplateField() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbEntityComponentField() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsLocked
{
public:
	FSetIsLocked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInIsLocked() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEntitySystemGraph
{
public:
	FMovieSceneEntitySystemGraph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEntitySystemGraphNodes Getnodes() {
		return memory.read<struct FMovieSceneEntitySystemGraphNodes>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEntitySystemGraphNode
{
public:
	FMovieSceneEntitySystemGraphNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneEntitySystem GetSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UMovieSceneEntitySystem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneFrameRange
{
public:
	FMovieSceneFrameRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FIsPaused
{
public:
	FIsPaused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequenceInstanceData
{
public:
	FMovieSceneSequenceInstanceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEmptyStruct
{
public:
	FMovieSceneEmptyStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTrackInstanceEntry
{
public:
	FMovieSceneTrackInstanceEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetBoundObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UMovieSceneTrackInstance GetTrackInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneTrackInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationField
{
public:
	FMovieSceneEvaluationField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMovieSceneFrameRange> GetRanges() {
		return memory.read<struct TArray<struct FMovieSceneFrameRange>>(m_addr + 0);
	}
	struct TArray<struct FMovieSceneEvaluationGroup> GetGroups() {
		return memory.read<struct TArray<struct FMovieSceneEvaluationGroup>>(m_addr + 16);
	}
	struct TArray<struct FMovieSceneEvaluationMetaData> GetMetaData() {
		return memory.read<struct TArray<struct FMovieSceneEvaluationMetaData>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationMetaData
{
public:
	FMovieSceneEvaluationMetaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMovieSceneSequenceID> GetActiveSequences() {
		return memory.read<struct TArray<struct FMovieSceneSequenceID>>(m_addr + 0);
	}
	struct TArray<struct FMovieSceneOrderedEvaluationKey> GetActiveEntities() {
		return memory.read<struct TArray<struct FMovieSceneOrderedEvaluationKey>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneOrderedEvaluationKey
{
public:
	FMovieSceneOrderedEvaluationKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEvaluationKey GetKey() {
		return memory.read<struct FMovieSceneEvaluationKey>(m_addr + 0);
	}
	uint16_t GetSetupIndex() {
		return memory.read<uint16_t>(m_addr + 12);
	}
	uint16_t GetTearDownIndex() {
		return memory.read<uint16_t>(m_addr + 14);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationFieldSegmentPtr
{
public:
	FMovieSceneEvaluationFieldSegmentPtr(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSegmentIdentifier GetSegmentID() {
		return memory.read<struct FMovieSceneSegmentIdentifier>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationKey
{
public:
	FMovieSceneEvaluationKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSequenceID GetSequenceID() {
		return memory.read<struct FMovieSceneSequenceID>(m_addr + 0);
	}
	struct FMovieSceneTrackIdentifier GetTrackIdentifier() {
		return memory.read<struct FMovieSceneTrackIdentifier>(m_addr + 4);
	}
	uint32_t GetSectionIndex() {
		return memory.read<uint32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTrackIdentifier
{
public:
	FMovieSceneTrackIdentifier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetValue() {
		return memory.read<uint32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationHookEventContainer
{
public:
	FMovieSceneEvaluationHookEventContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMovieSceneEvaluationHookEvent> Getevents() {
		return memory.read<struct TArray<struct FMovieSceneEvaluationHookEvent>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationTemplate
{
public:
	FMovieSceneEvaluationTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> GetTracks() {
		return memory.read<struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack>>(m_addr + 0);
	}
	struct FGuid GetSequenceSignature() {
		return memory.read<struct FGuid>(m_addr + 160);
	}
	struct FMovieSceneEvaluationTemplateSerialNumber GetTemplateSerialNumber() {
		return memory.read<struct FMovieSceneEvaluationTemplateSerialNumber>(m_addr + 176);
	}
	struct FMovieSceneTemplateGenerationLedger GetTemplateLedger() {
		return memory.read<struct FMovieSceneTemplateGenerationLedger>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequenceID
{
public:
	FMovieSceneSequenceID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetValue() {
		return memory.read<uint32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationGroup
{
public:
	FMovieSceneEvaluationGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> GetLUTIndices() {
		return memory.read<struct TArray<struct FMovieSceneEvaluationGroupLUTIndex>>(m_addr + 0);
	}
	struct TArray<struct FMovieSceneFieldEntry_EvaluationTrack> GetTrackLUT() {
		return memory.read<struct TArray<struct FMovieSceneFieldEntry_EvaluationTrack>>(m_addr + 16);
	}
	struct TArray<struct FMovieSceneFieldEntry_ChildTemplate> GetSectionLUT() {
		return memory.read<struct TArray<struct FMovieSceneFieldEntry_ChildTemplate>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationFieldSharedEntityMetaData
{
public:
	FMovieSceneEvaluationFieldSharedEntityMetaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetObjectBindingId() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationGroupLUTIndex
{
public:
	FMovieSceneEvaluationGroupLUTIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumInitPtrs() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNumEvalPtrs() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEntityComponentField
{
public:
	FMovieSceneEntityComponentField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEvaluationFieldEntityTree GetPersistentEntityTree() {
		return memory.read<struct FMovieSceneEvaluationFieldEntityTree>(m_addr + 0);
	}
	struct FMovieSceneEvaluationFieldEntityTree GetOneShotEntityTree() {
		return memory.read<struct FMovieSceneEvaluationFieldEntityTree>(m_addr + 96);
	}
	struct TArray<struct FMovieSceneEvaluationFieldEntity> GetEntities() {
		return memory.read<struct TArray<struct FMovieSceneEvaluationFieldEntity>>(m_addr + 192);
	}
	struct TArray<struct FMovieSceneEvaluationFieldEntityMetaData> GetEntityMetaData() {
		return memory.read<struct TArray<struct FMovieSceneEvaluationFieldEntityMetaData>>(m_addr + 208);
	}
	struct TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> GetSharedMetaData() {
		return memory.read<struct TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData>>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationFieldEntity
{
public:
	FMovieSceneEvaluationFieldEntity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEvaluationFieldEntityKey GetKey() {
		return memory.read<struct FMovieSceneEvaluationFieldEntityKey>(m_addr + 0);
	}
	int32_t GetSharedMetaDataIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationInstanceKey
{
public:
	FMovieSceneEvaluationInstanceKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationHookEvent
{
public:
	FMovieSceneEvaluationHookEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEvaluationHookComponent GetHook() {
		return memory.read<struct FMovieSceneEvaluationHookComponent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTemplateGenerationLedger
{
public:
	FMovieSceneTemplateGenerationLedger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneTrackIdentifier GetLastTrackIdentifier() {
		return memory.read<struct FMovieSceneTrackIdentifier>(m_addr + 0);
	}
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> GetTrackSignatureToTrackIdentifier() {
		return memory.read<struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier>>(m_addr + 8);
	}
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> GetSubSectionRanges() {
		return memory.read<struct TMap<struct FGuid, struct FMovieSceneFrameRange>>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationTemplateSerialNumber
{
public:
	FMovieSceneEvaluationTemplateSerialNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetValue() {
		return memory.read<uint32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEvaluationTrack
{
public:
	FMovieSceneEvaluationTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetObjectBindingId() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	uint16_t GetEvaluationPriority() {
		return memory.read<uint16_t>(m_addr + 16);
	}
	enum class EEvaluationMethod GetEvaluationMethod() {
		return memory.read<enum class EEvaluationMethod>(m_addr + 18);
	}
	struct TWeakObjectPtr<UMovieSceneTrack> GetSourceTrack() {
		return memory.read<struct TWeakObjectPtr<UMovieSceneTrack>>(m_addr + 20);
	}
	struct TArray<struct FMovieSceneEvalTemplatePtr> GetChildTemplates() {
		return memory.read<struct TArray<struct FMovieSceneEvalTemplatePtr>>(m_addr + 32);
	}
	struct FMovieSceneTrackImplementationPtr GetTrackTemplate() {
		return memory.read<struct FMovieSceneTrackImplementationPtr>(m_addr + 48);
	}
	struct FName GetEvaluationGroup() {
		return memory.read<struct FName>(m_addr + 104);
	}
	char GetbEvaluateInPreroll() {
		return memory.read<char>(m_addr + 112);
	}
	char GetbEvaluateInPostroll() {
		return memory.read<char>(m_addr + 112);
	}
	char GetbTearDownPriority() {
		return memory.read<char>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTimeTransform
{
public:
	FMovieSceneTimeTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeScale() {
		return memory.read<float>(m_addr + 0);
	}
	struct FFrameTime GetOffset() {
		return memory.read<struct FFrameTime>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTrackImplementationPtr
{
public:
	FMovieSceneTrackImplementationPtr(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSubSectionData
{
public:
	FMovieSceneSubSectionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<UMovieSceneSubSection> GetSection() {
		return memory.read<struct TWeakObjectPtr<UMovieSceneSubSection>>(m_addr + 0);
	}
	struct FGuid GetObjectBindingId() {
		return memory.read<struct FGuid>(m_addr + 8);
	}
	enum class ESectionEvaluationFlags GetFlags() {
		return memory.read<enum class ESectionEvaluationFlags>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneRootEvaluationTemplateInstance
{
public:
	FMovieSceneRootEvaluationTemplateInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<UMovieSceneSequence> GetWeakRootSequence() {
		return memory.read<struct TWeakObjectPtr<UMovieSceneSequence>>(m_addr + 0);
	}
	struct UMovieSceneCompiledDataManager GetCompiledDataManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneCompiledDataManager(ptr_addr);
	}
	struct UMovieSceneEntitySystemLinker GetEntitySystemLinker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UMovieSceneEntitySystemLinker(ptr_addr);
	}
	struct TMap<struct FMovieSceneSequenceID, struct UObject> GetDirectorInstances() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TMap<struct FMovieSceneSequenceID, struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneKeyStruct
{
public:
	FMovieSceneKeyStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneKeyTimeStruct
{
public:
	FMovieSceneKeyTimeStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetTime() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGeneratedMovieSceneKeyStruct
{
public:
	FGeneratedMovieSceneKeyStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneObjectPathChannel
{
public:
	FMovieSceneObjectPathChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetPropertyClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UObject(ptr_addr);
	}
	struct TArray<struct FFrameNumber> GetTimes() {
		return memory.read<struct TArray<struct FFrameNumber>>(m_addr + 16);
	}
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> GetValues() {
		return memory.read<struct TArray<struct FMovieSceneObjectPathChannelKeyValue>>(m_addr + 32);
	}
	struct FMovieSceneObjectPathChannelKeyValue GetDefaultValue() {
		return memory.read<struct FMovieSceneObjectPathChannelKeyValue>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSubSequenceTreeEntry
{
public:
	FMovieSceneSubSequenceTreeEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneObjectPathChannelKeyValue
{
public:
	FMovieSceneObjectPathChannelKeyValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UObject> GetSoftPtr() {
		return memory.read<struct TSoftObjectPtr<UObject>>(m_addr + 0);
	}
	struct UObject GetHardPtr() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieScenePossessable
{
public:
	FMovieScenePossessable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetTags() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}
	struct FGuid GetGuid() {
		return memory.read<struct FGuid>(m_addr + 16);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	UObject GetPossessedObjectClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UObject(ptr_addr);
	}
	struct FGuid GetParentGuid() {
		return memory.read<struct FGuid>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTick
{
public:
	FOnTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInPlayRate() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneEasingSettings
{
public:
	FMovieSceneEasingSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetAutoEaseInDuration() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetAutoEaseOutDuration() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TScriptInterface<IMovieSceneEasingFunction> GetEaseIn() {
		return memory.read<struct TScriptInterface<IMovieSceneEasingFunction>>(m_addr + 8);
	}
	bool GetbManualEaseIn() {
		return memory.read<bool>(m_addr + 24);
	}
	int32_t GetManualEaseInDuration() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct TScriptInterface<IMovieSceneEasingFunction> GetEaseOut() {
		return memory.read<struct TScriptInterface<IMovieSceneEasingFunction>>(m_addr + 32);
	}
	bool GetbManualEaseOut() {
		return memory.read<bool>(m_addr + 48);
	}
	int32_t GetManualEaseOutDuration() {
		return memory.read<int32_t>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSectionEvalOptions
{
public:
	FMovieSceneSectionEvalOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbCanEditCompletionMode() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EMovieSceneCompletionMode GetCompletionMode() {
		return memory.read<enum class EMovieSceneCompletionMode>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSectionParameters
{
public:
	FMovieSceneSectionParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	bool GetbCanLoop() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FFrameNumber GetEndFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}
	struct FFrameNumber GetFirstLoopStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 12);
	}
	float GetTimeScale() {
		return memory.read<float>(m_addr + 16);
	}
	int32_t GetHierarchicalBias() {
		return memory.read<int32_t>(m_addr + 20);
	}
	float GetStartOffset() {
		return memory.read<float>(m_addr + 24);
	}
	float GetPrerollTime() {
		return memory.read<float>(m_addr + 28);
	}
	float GetPostrollTime() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSegment
{
public:
	FMovieSceneSegment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSectionEvaluationData
{
public:
	FSectionEvaluationData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetImplIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FFrameNumber GetForcedTime() {
		return memory.read<struct FFrameNumber>(m_addr + 4);
	}
	enum class ESectionEvaluationFlags GetFlags() {
		return memory.read<enum class ESectionEvaluationFlags>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequenceHierarchy
{
public:
	FMovieSceneSequenceHierarchy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSequenceHierarchyNode GetRootNode() {
		return memory.read<struct FMovieSceneSequenceHierarchyNode>(m_addr + 0);
	}
	struct FMovieSceneSubSequenceTree GetTree() {
		return memory.read<struct FMovieSceneSubSequenceTree>(m_addr + 24);
	}
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> GetSubSequences() {
		return memory.read<struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData>>(m_addr + 120);
	}
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> GetHierarchy() {
		return memory.read<struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode>>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDisableCameraCuts
{
public:
	FGetDisableCameraCuts(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRowIndex
{
public:
	FGetRowIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequenceHierarchyNode
{
public:
	FMovieSceneSequenceHierarchyNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSequenceID GetparentId() {
		return memory.read<struct FMovieSceneSequenceID>(m_addr + 0);
	}
	struct TArray<struct FMovieSceneSequenceID> GetChildren() {
		return memory.read<struct TArray<struct FMovieSceneSequenceID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSubSequenceData
{
public:
	FMovieSceneSubSequenceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftObjectPath GetSequence() {
		return memory.read<struct FSoftObjectPath>(m_addr + 0);
	}
	struct FMovieSceneSequenceTransform GetOuterToInnerTransform() {
		return memory.read<struct FMovieSceneSequenceTransform>(m_addr + 24);
	}
	struct FMovieSceneSequenceTransform GetRootToSequenceTransform() {
		return memory.read<struct FMovieSceneSequenceTransform>(m_addr + 56);
	}
	struct FFrameRate GetTickResolution() {
		return memory.read<struct FFrameRate>(m_addr + 88);
	}
	struct FMovieSceneSequenceID GetDeterministicSequenceID() {
		return memory.read<struct FMovieSceneSequenceID>(m_addr + 96);
	}
	struct FMovieSceneFrameRange GetParentPlayRange() {
		return memory.read<struct FMovieSceneFrameRange>(m_addr + 100);
	}
	struct FFrameNumber GetParentStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 116);
	}
	struct FFrameNumber GetParentEndFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 120);
	}
	struct FFrameNumber GetParentFirstLoopStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 124);
	}
	bool GetbCanLoop() {
		return memory.read<bool>(m_addr + 128);
	}
	struct FMovieSceneFrameRange GetPlayRange() {
		return memory.read<struct FMovieSceneFrameRange>(m_addr + 132);
	}
	struct FMovieSceneFrameRange GetFullPlayRange() {
		return memory.read<struct FMovieSceneFrameRange>(m_addr + 148);
	}
	struct FMovieSceneFrameRange GetUnwarpedPlayRange() {
		return memory.read<struct FMovieSceneFrameRange>(m_addr + 164);
	}
	struct FMovieSceneFrameRange GetPreRollRange() {
		return memory.read<struct FMovieSceneFrameRange>(m_addr + 180);
	}
	struct FMovieSceneFrameRange GetPostRollRange() {
		return memory.read<struct FMovieSceneFrameRange>(m_addr + 196);
	}
	int16_t GetHierarchicalBias() {
		return memory.read<int16_t>(m_addr + 212);
	}
	bool GetbHasHierarchicalEasing() {
		return memory.read<bool>(m_addr + 214);
	}
	struct FMovieSceneSequenceInstanceDataPtr GetInstanceData() {
		return memory.read<struct FMovieSceneSequenceInstanceDataPtr>(m_addr + 216);
	}
	struct FGuid GetSubSectionSignature() {
		return memory.read<struct FGuid>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequenceInstanceDataPtr
{
public:
	FMovieSceneSequenceInstanceDataPtr(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequenceTransform
{
public:
	FMovieSceneSequenceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneTimeTransform GetLinearTransform() {
		return memory.read<struct FMovieSceneTimeTransform>(m_addr + 0);
	}
	struct TArray<struct FMovieSceneNestedSequenceTransform> GetNestedTransforms() {
		return memory.read<struct TArray<struct FMovieSceneNestedSequenceTransform>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneNestedSequenceTransform
{
public:
	FMovieSceneNestedSequenceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneTimeTransform GetLinearTransform() {
		return memory.read<struct FMovieSceneTimeTransform>(m_addr + 0);
	}
	struct FMovieSceneTimeWarping GetWarping() {
		return memory.read<struct FMovieSceneTimeWarping>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOverlapPriority
{
public:
	FGetOverlapPriority(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTimeWarping
{
public:
	FMovieSceneTimeWarping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetStart() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	struct FFrameNumber GetEnd() {
		return memory.read<struct FFrameNumber>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSubSequenceTree
{
public:
	FMovieSceneSubSequenceTree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequencePlaybackParams
{
public:
	FMovieSceneSequencePlaybackParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameTime GetFrame() {
		return memory.read<struct FFrameTime>(m_addr + 0);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 8);
	}
	struct FString GetMarkedFrame() {
		return memory.read<struct FString>(m_addr + 16);
	}
	enum class EMovieScenePositionType GetPositionType() {
		return memory.read<enum class EMovieScenePositionType>(m_addr + 32);
	}
	enum class EUpdatePositionMethod GetUpdateMethod() {
		return memory.read<enum class EUpdatePositionMethod>(m_addr + 33);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequenceReplProperties
{
public:
	FMovieSceneSequenceReplProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameTime GetLastKnownPosition() {
		return memory.read<struct FFrameTime>(m_addr + 0);
	}
	enum class EMovieScenePlayerStatus GetLastKnownStatus() {
		return memory.read<enum class EMovieScenePlayerStatus>(m_addr + 8);
	}
	int32_t GetLastKnownNumLoops() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSequenceActorPointers
{
public:
	FMovieSceneSequenceActorPointers(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetSequenceActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct TScriptInterface<IMovieSceneSequenceActor> GetSequenceActorInterface() {
		return memory.read<struct TScriptInterface<IMovieSceneSequenceActor>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneWarpCounter
{
public:
	FMovieSceneWarpCounter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<uint32_t> GetWarpCounts() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPostRollFrames
{
public:
	FGetPostRollFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneSpawnable
{
public:
	FMovieSceneSpawnable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetSpawnTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	struct TArray<struct FName> GetTags() {
		return memory.read<struct TArray<struct FName>>(m_addr + 48);
	}
	bool GetbContinuouslyRespawn() {
		return memory.read<bool>(m_addr + 64);
	}
	bool GetbNetAddressableName() {
		return memory.read<bool>(m_addr + 65);
	}
	bool GetbEvaluateTracksWhenNotSpawned() {
		return memory.read<bool>(m_addr + 66);
	}
	struct FGuid GetGuid() {
		return memory.read<struct FGuid>(m_addr + 68);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct UObject GetObjectTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct FGuid> GetChildPossessables() {
		return memory.read<struct TArray<struct FGuid>>(m_addr + 112);
	}
	enum class ESpawnOwnership GetOwnership() {
		return memory.read<enum class ESpawnOwnership>(m_addr + 128);
	}
	struct FName GetLevelName() {
		return memory.read<struct FName>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};class FTestMovieSceneEvalTemplate
{
public:
	FTestMovieSceneEvalTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTrackDisplayOptions
{
public:
	FMovieSceneTrackDisplayOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbShowVerticalFrames() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTrackEvaluationField
{
public:
	FMovieSceneTrackEvaluationField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMovieSceneTrackEvaluationFieldEntry> GetEntries() {
		return memory.read<struct TArray<struct FMovieSceneTrackEvaluationFieldEntry>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTrackEvaluationFieldEntry
{
public:
	FMovieSceneTrackEvaluationFieldEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	struct FFrameNumberRange GetRange() {
		return memory.read<struct FFrameNumberRange>(m_addr + 8);
	}
	struct FFrameNumber GetForcedTime() {
		return memory.read<struct FFrameNumber>(m_addr + 24);
	}
	enum class ESectionEvaluationFlags GetFlags() {
		return memory.read<enum class ESectionEvaluationFlags>(m_addr + 28);
	}
	int16_t GetLegacySortOrder() {
		return memory.read<int16_t>(m_addr + 30);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTrackInstanceInput
{
public:
	FMovieSceneTrackInstanceInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlendType
{
public:
	FGetBlendType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOptionalMovieSceneBlendType GetReturnValue() {
		return memory.read<struct FOptionalMovieSceneBlendType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCompletionMode
{
public:
	FGetCompletionMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMovieSceneCompletionMode GetReturnValue() {
		return memory.read<enum class EMovieSceneCompletionMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPreRollFrames
{
public:
	FGetPreRollFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsActive
{
public:
	FIsActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsLocked
{
public:
	FIsLocked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlendType
{
public:
	FSetBlendType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMovieSceneBlendType GetInBlendType() {
		return memory.read<enum class EMovieSceneBlendType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCompletionMode
{
public:
	FSetCompletionMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMovieSceneCompletionMode GetInCompletionMode() {
		return memory.read<enum class EMovieSceneCompletionMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FJumpToFrame
{
public:
	FJumpToFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameTime GetNewPosition() {
		return memory.read<struct FFrameTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsActive
{
public:
	FSetIsActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInIsActive() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOverlapPriority
{
public:
	FSetOverlapPriority(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewPriority() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPreRollFrames
{
public:
	FSetPreRollFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInPreRollFrames() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRowIndex
{
public:
	FSetRowIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewRowIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindBindingByTag
{
public:
	FFindBindingByTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInBindingName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FMovieSceneObjectBindingID GetReturnValue() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindBindingsByTag
{
public:
	FFindBindingsByTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInBindingName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FMovieSceneObjectBindingID> GetReturnValue() {
		return memory.read<struct TArray<struct FMovieSceneObjectBindingID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoundObjects
{
public:
	FGetBoundObjects(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetObjectBinding() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}
	struct TArray<struct UObject> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentTime
{
public:
	FGetCurrentTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQualifiedFrameTime GetReturnValue() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDuration
{
public:
	FGetDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQualifiedFrameTime GetReturnValue() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEndTime
{
public:
	FGetEndTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQualifiedFrameTime GetReturnValue() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFrameDuration
{
public:
	FGetFrameDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFrameRate
{
public:
	FGetFrameRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameRate GetReturnValue() {
		return memory.read<struct FFrameRate>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlayRate
{
public:
	FGetPlayRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSequence
{
public:
	FGetSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStartTime
{
public:
	FGetStartTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQualifiedFrameTime GetReturnValue() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPlaying
{
public:
	FIsPlaying(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsReversed
{
public:
	FIsReversed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FJumpToMarkedFrame
{
public:
	FJumpToMarkedFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInLabel() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FJumpToSeconds
{
public:
	FJumpToSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeInSeconds() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayLooping
{
public:
	FPlayLooping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumLoops() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayTo
{
public:
	FPlayTo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSequencePlaybackParams GetPlaybackParams() {
		return memory.read<struct FMovieSceneSequencePlaybackParams>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayToFrame
{
public:
	FPlayToFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameTime GetNewPosition() {
		return memory.read<struct FFrameTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayToMarkedFrame
{
public:
	FPlayToMarkedFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInLabel() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayToSeconds
{
public:
	FPlayToSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeInSeconds() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRPC_ExplicitServerUpdateEvent
{
public:
	FRPC_ExplicitServerUpdateEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUpdatePositionMethod GetMethod() {
		return memory.read<enum class EUpdatePositionMethod>(m_addr + 0);
	}
	struct FFrameTime GetRelevantTime() {
		return memory.read<struct FFrameTime>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRPC_OnStopEvent
{
public:
	FRPC_OnStopEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameTime GetStoppedTime() {
		return memory.read<struct FFrameTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScrubToFrame
{
public:
	FScrubToFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameTime GetNewPosition() {
		return memory.read<struct FFrameTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScrubToMarkedFrame
{
public:
	FScrubToMarkedFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInLabel() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FScrubToSeconds
{
public:
	FScrubToSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeInSeconds() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDisableCameraCuts
{
public:
	FSetDisableCameraCuts(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInDisableCameraCuts() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFrameRange
{
public:
	FSetFrameRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetStartFrame() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetDuration() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetSubFrames() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFrameRate
{
public:
	FSetFrameRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameRate GetFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaybackPosition
{
public:
	FSetPlaybackPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSequencePlaybackParams GetPlaybackParams() {
		return memory.read<struct FMovieSceneSequencePlaybackParams>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlayRate
{
public:
	FSetPlayRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPlayRate() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTimeRange
{
public:
	FSetTimeRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStartTime() {
		return memory.read<float>(m_addr + 0);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSequence
{
public:
	FSetSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRequestCurrentTime
{
public:
	FOnRequestCurrentTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQualifiedFrameTime GetInCurrentTime() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 0);
	}
	float GetInPlayRate() {
		return memory.read<float>(m_addr + 16);
	}
	struct FFrameTime GetReturnValue() {
		return memory.read<struct FFrameTime>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStartPlaying
{
public:
	FOnStartPlaying(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQualifiedFrameTime GetInStartTime() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStopPlaying
{
public:
	FOnStopPlaying(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQualifiedFrameTime GetInStopTime() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEvaluate
{
public:
	FOnEvaluate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInterp() {
		return memory.read<float>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};