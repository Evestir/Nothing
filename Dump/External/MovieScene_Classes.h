#pragma once 
#include <MovieScene_Structs.h>
 
 
 
class UTestMovieSceneSequence
{
public:
	UTestMovieSceneSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieScene GetMovieScene() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UMovieScene(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSubSection
{
public:
	UMovieSceneSubSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSectionParameters GetParameters() {
		return memory.read<struct FMovieSceneSectionParameters>(m_addr + 232);
	}
	float GetStartOffset() {
		return memory.read<float>(m_addr + 268);
	}
	float GetTimeScale() {
		return memory.read<float>(m_addr + 272);
	}
	float GetPrerollTime() {
		return memory.read<float>(m_addr + 276);
	}
	char GetNetworkMask() {
		return memory.read<char>(m_addr + 280);
	}
	struct UMovieSceneSequence GetSubSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct UMovieSceneSequence(ptr_addr);
	}
	 GetActorToRecord() {
		return memory.read<>(m_addr + 296);
	}
	struct FString GetTargetSequenceName() {
		return memory.read<struct FString>(m_addr + 328);
	}
	struct FDirectoryPath GetTargetPathToRecordTo() {
		return memory.read<struct FDirectoryPath>(m_addr + 344);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTestMovieSceneSubSection
{
public:
	UTestMovieSceneSubSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneTrack
{
public:
	UMovieSceneTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneTrackEvalOptions GetEvalOptions() {
		return memory.read<struct FMovieSceneTrackEvalOptions>(m_addr + 80);
	}
	bool GetbIsEvalDisabled() {
		return memory.read<bool>(m_addr + 85);
	}
	struct TArray<int32_t> GetRowsDisabled() {
		return memory.read<struct TArray<int32_t>>(m_addr + 88);
	}
	struct FGuid GetEvaluationFieldGuid() {
		return memory.read<struct FGuid>(m_addr + 108);
	}
	struct FMovieSceneTrackEvaluationField GetEvaluationField() {
		return memory.read<struct FMovieSceneTrackEvaluationField>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEvaluationHookSystem
{
public:
	UMovieSceneEvaluationHookSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> GetPendingEventsByRootInstance() {
		return memory.read<struct TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSignedObject
{
public:
	UMovieSceneSignedObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetSignature() {
		return memory.read<struct FGuid>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSection
{
public:
	UMovieSceneSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSectionEvalOptions GetEvalOptions() {
		return memory.read<struct FMovieSceneSectionEvalOptions>(m_addr + 80);
	}
	struct FMovieSceneEasingSettings GetEasing() {
		return memory.read<struct FMovieSceneEasingSettings>(m_addr + 88);
	}
	struct FMovieSceneFrameRange GetSectionRange() {
		return memory.read<struct FMovieSceneFrameRange>(m_addr + 144);
	}
	struct FFrameNumber GetPreRollFrames() {
		return memory.read<struct FFrameNumber>(m_addr + 160);
	}
	struct FFrameNumber GetPostRollFrames() {
		return memory.read<struct FFrameNumber>(m_addr + 164);
	}
	int32_t GetRowIndex() {
		return memory.read<int32_t>(m_addr + 168);
	}
	int32_t GetOverlapPriority() {
		return memory.read<int32_t>(m_addr + 172);
	}
	char GetbIsActive() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbIsLocked() {
		return memory.read<char>(m_addr + 176);
	}
	float GetStartTime() {
		return memory.read<float>(m_addr + 180);
	}
	float GetEndTime() {
		return memory.read<float>(m_addr + 184);
	}
	float GetPrerollTime() {
		return memory.read<float>(m_addr + 188);
	}
	float GetPostrollTime() {
		return memory.read<float>(m_addr + 192);
	}
	char GetbIsInfinite() {
		return memory.read<char>(m_addr + 196);
	}
	bool GetbSupportsInfiniteRange() {
		return memory.read<bool>(m_addr + 200);
	}
	struct FOptionalMovieSceneBlendType GetBlendType() {
		return memory.read<struct FOptionalMovieSceneBlendType>(m_addr + 201);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSpawnTrack
{
public:
	UMovieSceneSpawnTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}
	struct FGuid GetObjectGuid() {
		return memory.read<struct FGuid>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNameableTrack
{
public:
	UMovieSceneNameableTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNodeAndChannelMappings
{
public:
	UNodeAndChannelMappings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSequence
{
public:
	UMovieSceneSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneCompiledData GetCompiledData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UMovieSceneCompiledData(ptr_addr);
	}
	enum class EMovieSceneCompletionMode GetDefaultCompletionMode() {
		return memory.read<enum class EMovieSceneCompletionMode>(m_addr + 88);
	}
	bool GetbParentContextsAreSignificant() {
		return memory.read<bool>(m_addr + 89);
	}
	bool GetbPlayableDirectly() {
		return memory.read<bool>(m_addr + 90);
	}
	enum class EMovieSceneSequenceFlags GetSequenceFlags() {
		return memory.read<enum class EMovieSceneSequenceFlags>(m_addr + 91);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSequencePlayer
{
public:
	UMovieSceneSequencePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnPlay() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 608);
	}
	struct FMulticastInlineDelegate GetOnPlayReverse() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 624);
	}
	struct FMulticastInlineDelegate GetOnStop() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 640);
	}
	struct FMulticastInlineDelegate GetOnPause() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 656);
	}
	struct FMulticastInlineDelegate GetOnFinished() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 672);
	}
	enum class EMovieScenePlayerStatus Getstatus() {
		return memory.read<enum class EMovieScenePlayerStatus>(m_addr + 688);
	}
	char GetbReversePlayback() {
		return memory.read<char>(m_addr + 692);
	}
	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FFrameNumber GetStartTime() {
		return memory.read<struct FFrameNumber>(m_addr + 704);
	}
	int32_t GetDurationFrames() {
		return memory.read<int32_t>(m_addr + 708);
	}
	float GetDurationSubFrames() {
		return memory.read<float>(m_addr + 712);
	}
	int32_t GetCurrentNumLoops() {
		return memory.read<int32_t>(m_addr + 716);
	}
	struct FMovieSceneSequencePlaybackSettings GetPlaybackSettings() {
		return memory.read<struct FMovieSceneSequencePlaybackSettings>(m_addr + 720);
	}
	struct FMovieSceneRootEvaluationTemplateInstance GetRootTemplateInstance() {
		return memory.read<struct FMovieSceneRootEvaluationTemplateInstance>(m_addr + 744);
	}
	struct FMovieSceneSequenceReplProperties GetNetSyncProps() {
		return memory.read<struct FMovieSceneSequenceReplProperties>(m_addr + 1080);
	}
	struct TScriptInterface<IMovieScenePlaybackClient> GetPlaybackClient() {
		return memory.read<struct TScriptInterface<IMovieScenePlaybackClient>>(m_addr + 1096);
	}
	struct UMovieSceneSequenceTickManager GetTickManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UMovieSceneSequenceTickManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCompiledDataManager
{
public:
	UMovieSceneCompiledDataManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<int32_t, struct FMovieSceneSequenceHierarchy> GetHierarchies() {
		return memory.read<struct TMap<int32_t, struct FMovieSceneSequenceHierarchy>>(m_addr + 216);
	}
	struct TMap<int32_t, struct FMovieSceneEvaluationTemplate> GetTrackTemplates() {
		return memory.read<struct TMap<int32_t, struct FMovieSceneEvaluationTemplate>>(m_addr + 296);
	}
	struct TMap<int32_t, struct FMovieSceneEvaluationField> GetTrackTemplateFields() {
		return memory.read<struct TMap<int32_t, struct FMovieSceneEvaluationField>>(m_addr + 376);
	}
	struct TMap<int32_t, struct FMovieSceneEntityComponentField> GetEntityComponentFields() {
		return memory.read<struct TMap<int32_t, struct FMovieSceneEntityComponentField>>(m_addr + 456);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEntitySystem
{
public:
	UMovieSceneEntitySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneEntitySystemLinker GetLinker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UMovieSceneEntitySystemLinker(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneDeterminismSource
{
public:
	UMovieSceneDeterminismSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSubTrack
{
public:
	UMovieSceneSubTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneTrackInstanceSystem
{
public:
	UMovieSceneTrackInstanceSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneTrackInstanceInstantiator GetInstantiator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UMovieSceneTrackInstanceInstantiator(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCustomClockSource
{
public:
	UMovieSceneCustomClockSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEntityProvider
{
public:
	UMovieSceneEntityProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTestMovieSceneSubTrack
{
public:
	UTestMovieSceneSubTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSectionArray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEvaluationHook
{
public:
	UMovieSceneEvaluationHook(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePlaybackClient
{
public:
	UMovieScenePlaybackClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTestMovieSceneSection
{
public:
	UTestMovieSceneSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEntitySystemLinker
{
public:
	UMovieSceneEntitySystemLinker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEntitySystemGraph GetSystemGraph() {
		return memory.read<struct FMovieSceneEntitySystemGraph>(m_addr + 664);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEntityInstantiatorSystem
{
public:
	UMovieSceneEntityInstantiatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneTrackTemplateProducer
{
public:
	UMovieSceneTrackTemplateProducer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNodeGroup
{
public:
	UMovieSceneNodeGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTestMovieSceneEvalHookSection
{
public:
	UTestMovieSceneEvalHookSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneGenericBoundObjectInstantiator
{
public:
	UMovieSceneGenericBoundObjectInstantiator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNodeGroupCollection
{
public:
	UMovieSceneNodeGroupCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScene
{
public:
	UMovieScene(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMovieSceneSpawnable> GetSpawnables() {
		return memory.read<struct TArray<struct FMovieSceneSpawnable>>(m_addr + 80);
	}
	struct TArray<struct FMovieScenePossessable> GetPossessables() {
		return memory.read<struct TArray<struct FMovieScenePossessable>>(m_addr + 96);
	}
	struct TArray<struct FMovieSceneBinding> GetObjectBindings() {
		return memory.read<struct TArray<struct FMovieSceneBinding>>(m_addr + 112);
	}
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> GetBindingGroups() {
		return memory.read<struct TMap<struct FName, struct FMovieSceneObjectBindingIDs>>(m_addr + 128);
	}
	struct TArray<struct UMovieSceneTrack> GetMasterTracks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct TArray<struct UMovieSceneTrack>(ptr_addr);
	}
	struct UMovieSceneTrack GetCameraCutTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct UMovieSceneTrack(ptr_addr);
	}
	struct FMovieSceneFrameRange GetSelectionRange() {
		return memory.read<struct FMovieSceneFrameRange>(m_addr + 232);
	}
	struct FMovieSceneFrameRange GetPlaybackRange() {
		return memory.read<struct FMovieSceneFrameRange>(m_addr + 248);
	}
	struct FFrameRate GetTickResolution() {
		return memory.read<struct FFrameRate>(m_addr + 264);
	}
	struct FFrameRate GetDisplayRate() {
		return memory.read<struct FFrameRate>(m_addr + 272);
	}
	enum class EMovieSceneEvaluationType GetEvaluationType() {
		return memory.read<enum class EMovieSceneEvaluationType>(m_addr + 280);
	}
	enum class EUpdateClockSource GetClockSource() {
		return memory.read<enum class EUpdateClockSource>(m_addr + 281);
	}
	struct FSoftObjectPath GetCustomClockSourcePath() {
		return memory.read<struct FSoftObjectPath>(m_addr + 288);
	}
	struct TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames() {
		return memory.read<struct TArray<struct FMovieSceneMarkedFrame>>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneBindingOverrides
{
public:
	UMovieSceneBindingOverrides(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMovieSceneBindingOverrideData> GetBindingData() {
		return memory.read<struct TArray<struct FMovieSceneBindingOverrideData>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneBindingOwnerInterface
{
public:
	UMovieSceneBindingOwnerInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneBlenderSystem
{
public:
	UMovieSceneBlenderSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCachePreAnimatedStateSystem
{
public:
	UMovieSceneCachePreAnimatedStateSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneBoolSection
{
public:
	UMovieSceneBoolSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetDefaultValue() {
		return memory.read<bool>(m_addr + 232);
	}
	struct FMovieSceneBoolChannel GetBoolCurve() {
		return memory.read<struct FMovieSceneBoolChannel>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneFolder
{
public:
	UMovieSceneFolder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetFolderName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	struct TArray<struct UMovieSceneFolder> GetChildFolders() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UMovieSceneFolder>(ptr_addr);
	}
	struct TArray<struct UMovieSceneTrack> GetChildMasterTracks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct TArray<struct UMovieSceneTrack>(ptr_addr);
	}
	struct TArray<struct FString> GetChildObjectBindingStrings() {
		return memory.read<struct TArray<struct FString>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneBoundSceneComponentInstantiator
{
public:
	UMovieSceneBoundSceneComponentInstantiator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSceneComponentImpersonator
{
public:
	UMovieSceneSceneComponentImpersonator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneTrackInstanceInstantiator
{
public:
	UMovieSceneTrackInstanceInstantiator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCompiledData
{
public:
	UMovieSceneCompiledData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneEvaluationTemplate GetEvaluationTemplate() {
		return memory.read<struct FMovieSceneEvaluationTemplate>(m_addr + 40);
	}
	struct FMovieSceneSequenceHierarchy GetHierarchy() {
		return memory.read<struct FMovieSceneSequenceHierarchy>(m_addr + 392);
	}
	struct FMovieSceneEntityComponentField GetEntityComponentField() {
		return memory.read<struct FMovieSceneEntityComponentField>(m_addr + 672);
	}
	struct FMovieSceneEvaluationField GetTrackTemplateField() {
		return memory.read<struct FMovieSceneEvaluationField>(m_addr + 912);
	}
	struct TArray<struct FFrameTime> GetDeterminismFences() {
		return memory.read<struct TArray<struct FFrameTime>>(m_addr + 960);
	}
	struct FGuid GetCompiledSignature() {
		return memory.read<struct FGuid>(m_addr + 976);
	}
	struct FGuid GetCompilerVersion() {
		return memory.read<struct FGuid>(m_addr + 992);
	}
	struct FMovieSceneSequenceCompilerMaskStruct GetAccumulatedMask() {
		return memory.read<struct FMovieSceneSequenceCompilerMaskStruct>(m_addr + 1008);
	}
	struct FMovieSceneSequenceCompilerMaskStruct GetAllocatedMask() {
		return memory.read<struct FMovieSceneSequenceCompilerMaskStruct>(m_addr + 1009);
	}
	enum class EMovieSceneSequenceFlags GetAccumulatedFlags() {
		return memory.read<enum class EMovieSceneSequenceFlags>(m_addr + 1010);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneFloatDecomposer
{
public:
	UMovieSceneFloatDecomposer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSpawnSection
{
public:
	UMovieSceneSpawnSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneBuiltInEasingFunction
{
public:
	UMovieSceneBuiltInEasingFunction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMovieSceneBuiltInEasing GetType() {
		return memory.read<enum class EMovieSceneBuiltInEasing>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTestMovieSceneTrack
{
public:
	UTestMovieSceneTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbHighPassFilter() {
		return memory.read<bool>(m_addr + 152);
	}
	struct TArray<struct UMovieSceneSection> GetSectionArray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEasingExternalCurve
{
public:
	UMovieSceneEasingExternalCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCurveFloat GetCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEasingFunction
{
public:
	UMovieSceneEasingFunction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneEvalTimeSystem
{
public:
	UMovieSceneEvalTimeSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneHookSection
{
public:
	UMovieSceneHookSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbRequiresRangedHook() {
		return memory.read<char>(m_addr + 248);
	}
	char GetbRequiresTriggerHooks() {
		return memory.read<char>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneKeyProxy
{
public:
	UMovieSceneKeyProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneMasterInstantiatorSystem
{
public:
	UMovieSceneMasterInstantiatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScenePreAnimatedStateSystemInterface
{
public:
	UMovieScenePreAnimatedStateSystemInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneRestorePreAnimatedStateSystem
{
public:
	UMovieSceneRestorePreAnimatedStateSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSequenceActor
{
public:
	UMovieSceneSequenceActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSequenceTickManager
{
public:
	UMovieSceneSequenceTickManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMovieSceneSequenceActorPointers> GetSequenceActors() {
		return memory.read<struct TArray<struct FMovieSceneSequenceActorPointers>>(m_addr + 40);
	}
	struct UMovieSceneEntitySystemLinker GetLinker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UMovieSceneEntitySystemLinker(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneSpawnablesSystem
{
public:
	UMovieSceneSpawnablesSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTestMovieSceneEvalHookTrack
{
public:
	UTestMovieSceneEvalHookTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSectionArray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneTrackInstance
{
public:
	UMovieSceneTrackInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetAnimatedObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UObject(ptr_addr);
	}
	bool GetbIsMasterTrackInstance() {
		return memory.read<bool>(m_addr + 48);
	}
	struct UMovieSceneEntitySystemLinker GetLinker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UMovieSceneEntitySystemLinker(ptr_addr);
	}
	struct TArray<struct FMovieSceneTrackInstanceInput> GetInputs() {
		return memory.read<struct TArray<struct FMovieSceneTrackInstanceInput>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


