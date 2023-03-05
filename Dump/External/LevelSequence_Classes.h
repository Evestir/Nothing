#pragma once 
#include <LevelSequence_Structs.h>
 
 
 
class UDefaultLevelSequenceInstanceData
{
public:
	UDefaultLevelSequenceInstanceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTransformOriginActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct AActor(ptr_addr);
	}
	struct FTransform GetTransformOrigin() {
		return memory.read<struct FTransform>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelSequenceDirector
{
public:
	ULevelSequenceDirector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevelSequencePlayer GetPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ULevelSequencePlayer(ptr_addr);
	}
	int32_t GetSubSequenceID() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetMovieScenePlayerIndex() {
		return memory.read<int32_t>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelSequencePlayer
{
public:
	ULevelSequencePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnCameraCut() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1256);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALevelSequenceActor
{
public:
	ALevelSequenceActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSequencePlaybackSettings GetPlaybackSettings() {
		return memory.read<struct FMovieSceneSequencePlaybackSettings>(m_addr + 568);
	}
	struct ULevelSequencePlayer GetSequencePlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct ULevelSequencePlayer(ptr_addr);
	}
	struct FSoftObjectPath GetLevelSequence() {
		return memory.read<struct FSoftObjectPath>(m_addr + 600);
	}
	struct FLevelSequenceCameraSettings GetCameraSettings() {
		return memory.read<struct FLevelSequenceCameraSettings>(m_addr + 624);
	}
	struct ULevelSequenceBurnInOptions GetBurnInOptions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct ULevelSequenceBurnInOptions(ptr_addr);
	}
	struct UMovieSceneBindingOverrides GetBindingOverrides() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UMovieSceneBindingOverrides(ptr_addr);
	}
	char GetbAutoPlay() {
		return memory.read<char>(m_addr + 648);
	}
	char GetbOverrideInstanceData() {
		return memory.read<char>(m_addr + 648);
	}
	char GetbReplicatePlayback() {
		return memory.read<char>(m_addr + 648);
	}
	struct UObject GetDefaultInstanceData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UObject(ptr_addr);
	}
	struct ULevelSequenceBurnIn GetBurnInInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct ULevelSequenceBurnIn(ptr_addr);
	}
	bool GetbShowBurnin() {
		return memory.read<bool>(m_addr + 672);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelSequenceAnimSequenceLink
{
public:
	ULevelSequenceAnimSequenceLink(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLevelSequenceAnimSequenceLinkItem> GetAnimSequenceLinks() {
		return memory.read<struct TArray<struct FLevelSequenceAnimSequenceLinkItem>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimSequenceLevelSequenceLink
{
public:
	UAnimSequenceLevelSequenceLink(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetSkelTrackGuid() {
		return memory.read<struct FGuid>(m_addr + 40);
	}
	struct FSoftObjectPath GetPathToLevelSequence() {
		return memory.read<struct FSoftObjectPath>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelSequenceMetaData
{
public:
	ULevelSequenceMetaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULevelSequenceBurnInInitSettings
{
public:
	ULevelSequenceBurnInInitSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ALevelSequenceMediaController
{
public:
	ALevelSequenceMediaController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ALevelSequenceActor GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct ALevelSequenceActor(ptr_addr);
	}
	struct UMediaComponent GetMediaComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UMediaComponent(ptr_addr);
	}
	float GetServerStartTimeSeconds() {
		return memory.read<float>(m_addr + 568);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelSequence
{
public:
	ULevelSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieScene GetMovieScene() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UMovieScene(ptr_addr);
	}
	struct FLevelSequenceObjectReferenceMap GetObjectReferences() {
		return memory.read<struct FLevelSequenceObjectReferenceMap>(m_addr + 112);
	}
	struct FLevelSequenceBindingReferences GetBindingReferences() {
		return memory.read<struct FLevelSequenceBindingReferences>(m_addr + 192);
	}
	struct TMap<struct FString, struct FLevelSequenceObject> GetPossessedObjects() {
		return memory.read<struct TMap<struct FString, struct FLevelSequenceObject>>(m_addr + 352);
	}
	UObject GetDirectorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 432);
		return UObject(ptr_addr);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 440);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelSequenceBurnInOptions
{
public:
	ULevelSequenceBurnInOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseBurnIn() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FSoftClassPath GetBurnInClass() {
		return memory.read<struct FSoftClassPath>(m_addr + 48);
	}
	struct ULevelSequenceBurnInInitSettings GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct ULevelSequenceBurnInInitSettings(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelSequenceBurnIn
{
public:
	ULevelSequenceBurnIn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLevelSequencePlayerSnapshot GetFrameInformation() {
		return memory.read<struct FLevelSequencePlayerSnapshot>(m_addr + 608);
	}
	struct ALevelSequenceActor GetLevelSequenceActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct ALevelSequenceActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULegacyLevelSequenceDirectorBlueprint
{
public:
	ULegacyLevelSequenceDirectorBlueprint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULevelSequenceProjectSettings
{
public:
	ULevelSequenceProjectSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDefaultLockEngineToDisplayRate() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FString GetDefaultDisplayRate() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetDefaultTickResolution() {
		return memory.read<struct FString>(m_addr + 80);
	}
	enum class EUpdateClockSource GetDefaultClockSource() {
		return memory.read<enum class EUpdateClockSource>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


