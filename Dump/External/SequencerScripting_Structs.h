#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSequencerBindingProxy
{
public:
	FSequencerBindingProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetBindingID() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMovieSceneSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetArriveTangent
{
public:
	FGetArriveTangent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveChildFolder
{
public:
	FRemoveChildFolder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetTargetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct UMovieSceneFolder GetFolderToRemove() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneFolder(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FComputeEffectiveRange
{
public:
	FComputeEffectiveRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetReturnValue() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUniqueTrackName
{
public:
	FGetUniqueTrackName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieScenePropertyTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieScenePropertyTrack(ptr_addr);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFolderName
{
public:
	FGetFolderName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSequencerScriptingRange
{
public:
	FSequencerScriptingRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbHasStart() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbHasEnd() {
		return memory.read<char>(m_addr + 0);
	}
	int32_t GetInclusiveStart() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetExclusiveEnd() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FFrameRate GetInternalRate() {
		return memory.read<struct FFrameRate>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveBindingContents
{
public:
	FMoveBindingContents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetSourceBindingId() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	struct FSequencerBindingProxy GetDestinationBindingId() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddTrack
{
public:
	FAddTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	UMovieSceneTrack GetTrackType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return UMovieSceneTrack(ptr_addr);
	}
	struct UMovieSceneTrack GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UMovieSceneTrack(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChildObjectBinding
{
public:
	FAddChildObjectBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct FSequencerBindingProxy GetInObjectBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChildPossessables
{
public:
	FGetChildPossessables(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	struct TArray<struct FSequencerBindingProxy> GetReturnValue() {
		return memory.read<struct TArray<struct FSequencerBindingProxy>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaybackStart
{
public:
	FSetPlaybackStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	int32_t GetStartFrame() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTime
{
public:
	FGetTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESequenceTimeUnit GetTimeUnit() {
		return memory.read<enum class ESequenceTimeUnit>(m_addr + 0);
	}
	struct FFrameTime GetReturnValue() {
		return memory.read<struct FFrameTime>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindTracksByExactType
{
public:
	FFindTracksByExactType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	UMovieSceneTrack GetTrackType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return UMovieSceneTrack(ptr_addr);
	}
	struct TArray<struct UMovieSceneTrack> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct TArray<struct UMovieSceneTrack>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLeaveTangentWeight
{
public:
	FGetLeaveTangentWeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChildMasterTrack
{
public:
	FAddChildMasterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct UMovieSceneTrack GetInMasterTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneTrack(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParent
{
public:
	FGetParent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	struct FSequencerBindingProxy GetReturnValue() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindTracksByType
{
public:
	FFindTracksByType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	UMovieSceneTrack GetTrackType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return UMovieSceneTrack(ptr_addr);
	}
	struct TArray<struct UMovieSceneTrack> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct TArray<struct UMovieSceneTrack>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMarkedFrame
{
public:
	FSetMarkedFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	int32_t GetInMarkIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FFrameNumber GetInFrameNumber() {
		return memory.read<struct FFrameNumber>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDisplayName
{
public:
	FGetDisplayName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneTrack(ptr_addr);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetId
{
public:
	FGetId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	struct FGuid GetReturnValue() {
		return memory.read<struct FGuid>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPortableBindingID
{
public:
	FGetPortableBindingID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetMasterSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct UMovieSceneSequence GetDestinationSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 16);
	}
	struct FMovieSceneObjectBindingID GetReturnValue() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInterpolationMode
{
public:
	FSetInterpolationMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERichCurveInterpMode GetInNewValue() {
		return memory.read<enum class ERichCurveInterpMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveKey
{
public:
	FRemoveKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneScriptingKey GetKey() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneScriptingKey(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveTrack
{
public:
	FRemoveTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	struct UMovieSceneTrack GetTrackToRemove() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UMovieSceneTrack(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFolderName
{
public:
	FSetFolderName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct FName GetInFolderName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetName
{
public:
	FGetName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetObjectTemplate
{
public:
	FGetObjectTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFolderColor
{
public:
	FSetFolderColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct FColor GetInFolderColor() {
		return memory.read<struct FColor>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEndSeconds
{
public:
	FGetEndSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPropertyNameAndPath
{
public:
	FSetPropertyNameAndPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieScenePropertyTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieScenePropertyTrack(ptr_addr);
	}
	struct FName GetInPropertyName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FString GetInPropertyPath() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValid
{
public:
	FIsValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPossessedObjectClass
{
public:
	FGetPossessedObjectClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveStart
{
public:
	FRemoveStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddEventRepeaterSection
{
public:
	FAddEventRepeaterSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneEventTrack GetInTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneEventTrack(ptr_addr);
	}
	struct UMovieSceneEventRepeaterSection GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneEventRepeaterSection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveChildObjectBinding
{
public:
	FRemoveChildObjectBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct FSequencerBindingProxy GetInObjectBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTracks
{
public:
	FGetTracks(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	struct TArray<struct UMovieSceneTrack> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct TArray<struct UMovieSceneTrack>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemove
{
public:
	FRemove(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInterpolationMode
{
public:
	FGetInterpolationMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERichCurveInterpMode GetReturnValue() {
		return memory.read<enum class ERichCurveInterpMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDisplayName
{
public:
	FSetDisplayName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneTrack(ptr_addr);
	}
	struct FText GetInName() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDefault
{
public:
	FGetDefault(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChildFolders
{
public:
	FGetChildFolders(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct TArray<struct UMovieSceneFolder> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UMovieSceneFolder>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetName
{
public:
	FSetName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	struct FString GetInName() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddKey
{
public:
	FAddKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetInTime() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	struct FString GetNewValue() {
		return memory.read<struct FString>(m_addr + 8);
	}
	float GetSubFrame() {
		return memory.read<float>(m_addr + 24);
	}
	enum class ESequenceTimeUnit GetTimeUnit() {
		return memory.read<enum class ESequenceTimeUnit>(m_addr + 28);
	}
	struct UMovieSceneScriptingStringKey GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UMovieSceneScriptingStringKey(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParent
{
public:
	FSetParent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	struct FSequencerBindingProxy GetInParentBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddEventTriggerSection
{
public:
	FAddEventTriggerSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneEventTrack GetInTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneEventTrack(ptr_addr);
	}
	struct UMovieSceneEventTriggerSection GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneEventTriggerSection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChildFolder
{
public:
	FAddChildFolder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetTargetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct UMovieSceneFolder GetFolderToAdd() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneFolder(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChildMasterTracks
{
public:
	FGetChildMasterTracks(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct TArray<struct UMovieSceneTrack> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UMovieSceneTrack>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChildObjectBindings
{
public:
	FGetChildObjectBindings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct TArray<struct FSequencerBindingProxy> GetReturnValue() {
		return memory.read<struct TArray<struct FSequencerBindingProxy>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveEnd
{
public:
	FRemoveEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFolderColor
{
public:
	FGetFolderColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct FColor GetReturnValue() {
		return memory.read<struct FColor>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTime
{
public:
	FSetTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetNewFrameNumber() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	float GetSubFrame() {
		return memory.read<float>(m_addr + 4);
	}
	enum class ESequenceTimeUnit GetTimeUnit() {
		return memory.read<enum class ESequenceTimeUnit>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveChildMasterTrack
{
public:
	FRemoveChildMasterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFolder GetFolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneFolder(ptr_addr);
	}
	struct UMovieSceneTrack GetInMasterTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneTrack(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetKeys
{
public:
	FGetKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneScriptingKey> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UMovieSceneScriptingKey>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSortMarkedFrames
{
public:
	FSortMarkedFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetObjectPropertyClass
{
public:
	FGetObjectPropertyClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneObjectPropertyTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneObjectPropertyTrack(ptr_addr);
	}
	UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPropertyName
{
public:
	FGetPropertyName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieScenePropertyTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieScenePropertyTrack(ptr_addr);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPropertyPath
{
public:
	FGetPropertyPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieScenePropertyTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieScenePropertyTrack(ptr_addr);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetObjectPropertyClass
{
public:
	FSetObjectPropertyClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneObjectPropertyTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneObjectPropertyTrack(ptr_addr);
	}
	UObject GetPropertyClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValue
{
public:
	FGetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValue
{
public:
	FSetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInNewValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDefault
{
public:
	FSetDefault(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInDefaultValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasDefault
{
public:
	FHasDefault(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEvaluateKeys
{
public:
	FEvaluateKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}
	struct FFrameRate GetFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 20);
	}
	struct TArray<float> GetReturnValue() {
		return memory.read<struct TArray<float>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetArriveTangentWeight
{
public:
	FSetArriveTangentWeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInNewValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumKeys
{
public:
	FGetNumKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetArriveTangentWeight
{
public:
	FGetArriveTangentWeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTangentMode
{
public:
	FSetTangentMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERichCurveTangentMode GetInNewValue() {
		return memory.read<enum class ERichCurveTangentMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLeaveTangent
{
public:
	FGetLeaveTangent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTangentMode
{
public:
	FGetTangentMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERichCurveTangentMode GetReturnValue() {
		return memory.read<enum class ERichCurveTangentMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTangentWeightMode
{
public:
	FGetTangentWeightMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERichCurveTangentWeightMode GetReturnValue() {
		return memory.read<enum class ERichCurveTangentWeightMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMarkedFrames
{
public:
	FGetMarkedFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct TArray<struct FMovieSceneMarkedFrame> GetReturnValue() {
		return memory.read<struct TArray<struct FMovieSceneMarkedFrame>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetArriveTangent
{
public:
	FSetArriveTangent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInNewValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLeaveTangent
{
public:
	FSetLeaveTangent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInNewValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLeaveTangentWeight
{
public:
	FSetLeaveTangentWeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInNewValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTangentWeightMode
{
public:
	FSetTangentWeightMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERichCurveTangentWeightMode GetInNewValue() {
		return memory.read<enum class ERichCurveTangentWeightMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPostInfinityExtrapolation
{
public:
	FGetPostInfinityExtrapolation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERichCurveExtrapolation GetReturnValue() {
		return memory.read<enum class ERichCurveExtrapolation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPreInfinityExtrapolation
{
public:
	FGetPreInfinityExtrapolation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERichCurveExtrapolation GetReturnValue() {
		return memory.read<enum class ERichCurveExtrapolation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPostInfinityExtrapolation
{
public:
	FSetPostInfinityExtrapolation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERichCurveExtrapolation GetInExtrapolation() {
		return memory.read<enum class ERichCurveExtrapolation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPreInfinityExtrapolation
{
public:
	FSetPreInfinityExtrapolation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERichCurveExtrapolation GetInExtrapolation() {
		return memory.read<enum class ERichCurveExtrapolation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindChannelsByType
{
public:
	FFindChannelsByType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	UMovieSceneScriptingChannel GetChannelType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UMovieSceneScriptingChannel(ptr_addr);
	}
	struct TArray<struct UMovieSceneScriptingChannel> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UMovieSceneScriptingChannel>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChannels
{
public:
	FGetChannels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	struct TArray<struct UMovieSceneScriptingChannel> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UMovieSceneScriptingChannel>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEndFrame
{
public:
	FGetEndFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEndFrameSeconds
{
public:
	FGetEndFrameSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpawnables
{
public:
	FGetSpawnables(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct TArray<struct FSequencerBindingProxy> GetReturnValue() {
		return memory.read<struct TArray<struct FSequencerBindingProxy>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParentSequenceFrame
{
public:
	FGetParentSequenceFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSubSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSubSection(ptr_addr);
	}
	int32_t GetInFrame() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct UMovieSceneSequence GetParentSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMovieSceneSequence(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStartFrame
{
public:
	FGetStartFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMovieScene
{
public:
	FGetMovieScene(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct UMovieScene GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieScene(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStartFrameSeconds
{
public:
	FGetStartFrameSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasEndFrame
{
public:
	FHasEndFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEndFrameBounded
{
public:
	FSetEndFrameBounded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	bool GetbIsBounded() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasStartFrame
{
public:
	FHasStartFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEndFrame
{
public:
	FSetEndFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}
	int32_t GetEnd() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEndFrameSeconds
{
public:
	FSetEndFrameSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	float GetEndTime() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRange
{
public:
	FSetRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	int32_t GetStartFrame() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetEndFrame() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRangeSeconds
{
public:
	FSetRangeSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	float GetStartTime() {
		return memory.read<float>(m_addr + 8);
	}
	float GetEndTime() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStartFrame
{
public:
	FSetStartFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}
	int32_t GetStart() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetColorTint
{
public:
	FSetColorTint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneTrack(ptr_addr);
	}
	struct FColor GetColorTint() {
		return memory.read<struct FColor>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStartFrameBounded
{
public:
	FSetStartFrameBounded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	bool GetbIsBounded() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStartFrameSeconds
{
public:
	FSetStartFrameSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSection(ptr_addr);
	}
	float GetStartTime() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddMarkedFrame
{
public:
	FAddMarkedFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FMovieSceneMarkedFrame GetInMarkedFrame() {
		return memory.read<struct FMovieSceneMarkedFrame>(m_addr + 8);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddMasterTrack
{
public:
	FAddMasterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	UMovieSceneTrack GetTrackType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UMovieSceneTrack(ptr_addr);
	}
	struct UMovieSceneTrack GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMovieSceneTrack(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddPossessable
{
public:
	FAddPossessable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct UObject GetObjectToPossess() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	struct FSequencerBindingProxy GetReturnValue() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddRootFolderToSequence
{
public:
	FAddRootFolderToSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FString GetNewFolderName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct UMovieSceneFolder GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UMovieSceneFolder(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddSpawnableFromClass
{
public:
	FAddSpawnableFromClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	UObject GetClassToSpawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UObject(ptr_addr);
	}
	struct FSequencerBindingProxy GetReturnValue() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaybackEndSeconds
{
public:
	FSetPlaybackEndSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetEndTime() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddSpawnableFromInstance
{
public:
	FAddSpawnableFromInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct UObject GetObjectToSpawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	struct FSequencerBindingProxy GetReturnValue() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLocateBoundObjects
{
public:
	FLocateBoundObjects(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 8);
	}
	struct UObject GetContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct UObject> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteMarkedFrame
{
public:
	FDeleteMarkedFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	int32_t GetDeleteIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteMarkedFrames
{
public:
	FDeleteMarkedFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindBindingById
{
public:
	FFindBindingById(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FGuid GetBindingID() {
		return memory.read<struct FGuid>(m_addr + 8);
	}
	struct FSequencerBindingProxy GetReturnValue() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindBindingByName
{
public:
	FFindBindingByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FSequencerBindingProxy GetReturnValue() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindMarkedFrameByFrameNumber
{
public:
	FFindMarkedFrameByFrameNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FFrameNumber GetInFrameNumber() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindMarkedFrameByLabel
{
public:
	FFindMarkedFrameByLabel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FString GetInLabel() {
		return memory.read<struct FString>(m_addr + 8);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindMasterTracksByExactType
{
public:
	FFindMasterTracksByExactType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	UMovieSceneTrack GetTrackType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UMovieSceneTrack(ptr_addr);
	}
	struct TArray<struct UMovieSceneTrack> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UMovieSceneTrack>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindMasterTracksByType
{
public:
	FFindMasterTracksByType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	UMovieSceneTrack GetTrackType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UMovieSceneTrack(ptr_addr);
	}
	struct TArray<struct UMovieSceneTrack> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UMovieSceneTrack>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindNextMarkedFrame
{
public:
	FFindNextMarkedFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FFrameNumber GetInFrameNumber() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}
	bool GetbForward() {
		return memory.read<bool>(m_addr + 12);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBindingID
{
public:
	FGetBindingID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 0);
	}
	struct FMovieSceneObjectBindingID GetReturnValue() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasStart
{
public:
	FHasStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBindings
{
public:
	FGetBindings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct TArray<struct FSequencerBindingProxy> GetReturnValue() {
		return memory.read<struct TArray<struct FSequencerBindingProxy>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetClockSource
{
public:
	FGetClockSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	enum class EUpdateClockSource GetReturnValue() {
		return memory.read<enum class EUpdateClockSource>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDisplayRate
{
public:
	FGetDisplayRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FFrameRate GetReturnValue() {
		return memory.read<struct FFrameRate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEvaluationType
{
public:
	FGetEvaluationType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	enum class EMovieSceneEvaluationType GetReturnValue() {
		return memory.read<enum class EMovieSceneEvaluationType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMasterTracks
{
public:
	FGetMasterTracks(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct TArray<struct UMovieSceneTrack> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UMovieSceneTrack>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaybackEnd
{
public:
	FGetPlaybackEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaybackEndSeconds
{
public:
	FGetPlaybackEndSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaybackStartSeconds
{
public:
	FGetPlaybackStartSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaybackRange
{
public:
	FGetPlaybackRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FSequencerScriptingRange GetReturnValue() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaybackStart
{
public:
	FGetPlaybackStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPossessables
{
public:
	FGetPossessables(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct TArray<struct FSequencerBindingProxy> GetReturnValue() {
		return memory.read<struct TArray<struct FSequencerBindingProxy>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRootFoldersInSequence
{
public:
	FGetRootFoldersInSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct TArray<struct UMovieSceneFolder> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UMovieSceneFolder>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeRange
{
public:
	FMakeRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	int32_t GetStartFrame() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetDuration() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct FSequencerScriptingRange GetReturnValue() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTickResolution
{
public:
	FGetTickResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FFrameRate GetReturnValue() {
		return memory.read<struct FFrameRate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimecodeSource
{
public:
	FGetTimecodeSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FTimecode GetReturnValue() {
		return memory.read<struct FTimecode>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetViewRangeEnd
{
public:
	FGetViewRangeEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetViewRangeStart
{
public:
	FGetViewRangeStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWorkRangeEnd
{
public:
	FGetWorkRangeEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWorkRangeStart
{
public:
	FGetWorkRangeStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsReadOnly
{
public:
	FIsReadOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeBindingID
{
public:
	FMakeBindingID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetMasterSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FSequencerBindingProxy GetInBinding() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 8);
	}
	enum class EMovieSceneObjectBindingSpace GetSpace() {
		return memory.read<enum class EMovieSceneObjectBindingSpace>(m_addr + 32);
	}
	struct FMovieSceneObjectBindingID GetReturnValue() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeRangeSeconds
{
public:
	FMakeRangeSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetStartTime() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 12);
	}
	struct FSequencerScriptingRange GetReturnValue() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveMasterTrack
{
public:
	FRemoveMasterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct UMovieSceneTrack GetMasterTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneTrack(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FResolveBindingID
{
public:
	FResolveBindingID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetMasterSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FMovieSceneObjectBindingID GetInObjectBindingID() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 8);
	}
	struct FSequencerBindingProxy GetReturnValue() {
		return memory.read<struct FSequencerBindingProxy>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetClockSource
{
public:
	FSetClockSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	enum class EUpdateClockSource GetInClockSource() {
		return memory.read<enum class EUpdateClockSource>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDisplayRate
{
public:
	FSetDisplayRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FFrameRate GetDisplayRate() {
		return memory.read<struct FFrameRate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEvaluationType
{
public:
	FSetEvaluationType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	enum class EMovieSceneEvaluationType GetInEvaluationType() {
		return memory.read<enum class EMovieSceneEvaluationType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaybackStartSeconds
{
public:
	FSetPlaybackStartSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetStartTime() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaybackEnd
{
public:
	FSetPlaybackEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	int32_t GetEndFrame() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetReadOnly
{
public:
	FSetReadOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	bool GetbInReadOnly() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTickResolution
{
public:
	FSetTickResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FFrameRate GetTickResolution() {
		return memory.read<struct FFrameRate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTickResolutionDirectly
{
public:
	FSetTickResolutionDirectly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FFrameRate GetTickResolution() {
		return memory.read<struct FFrameRate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetViewRangeEnd
{
public:
	FSetViewRangeEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetEndTimeInSeconds() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetViewRangeStart
{
public:
	FSetViewRangeStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetStartTimeInSeconds() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWorkRangeEnd
{
public:
	FSetWorkRangeEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetEndTimeInSeconds() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWorkRangeStart
{
public:
	FSetWorkRangeStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneSequence(ptr_addr);
	}
	float GetStartTimeInSeconds() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddSection
{
public:
	FAddSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneTrack(ptr_addr);
	}
	struct UMovieSceneSection GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneSection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetColorTint
{
public:
	FGetColorTint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneTrack(ptr_addr);
	}
	struct FColor GetReturnValue() {
		return memory.read<struct FColor>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSections
{
public:
	FGetSections(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneTrack(ptr_addr);
	}
	struct TArray<struct UMovieSceneSection> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSectionToKey
{
public:
	FGetSectionToKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneTrack(ptr_addr);
	}
	struct UMovieSceneSection GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneSection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSortingOrder
{
public:
	FGetSortingOrder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneTrack(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveSection
{
public:
	FRemoveSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneTrack(ptr_addr);
	}
	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneSection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSectionToKey
{
public:
	FSetSectionToKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneTrack(ptr_addr);
	}
	struct UMovieSceneSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneSection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSortingOrder
{
public:
	FSetSortingOrder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneTrack(ptr_addr);
	}
	int32_t GetSortingOrder() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumChannelsUsed
{
public:
	FGetNumChannelsUsed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneVectorTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneVectorTrack(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNumChannelsUsed
{
public:
	FSetNumChannelsUsed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneVectorTrack GetTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneVectorTrack(ptr_addr);
	}
	int32_t GetInNumChannelsUsed() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStartSeconds
{
public:
	FGetStartSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasEnd
{
public:
	FHasEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEndSeconds
{
public:
	FSetEndSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}
	float GetEnd() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStartSeconds
{
public:
	FSetStartSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSequencerScriptingRange GetRange() {
		return memory.read<struct FSequencerScriptingRange>(m_addr + 0);
	}
	float GetStart() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};