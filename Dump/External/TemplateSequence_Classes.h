#pragma once 
#include <TemplateSequence_Structs.h>
 
 
 
class UTemplateSequence
{
public:
	UTemplateSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieScene GetMovieScene() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UMovieScene(ptr_addr);
	}
	struct TSoftClassPtr<UObject> GetBoundActorClass() {
		return memory.read<struct TSoftClassPtr<UObject>>(m_addr + 104);
	}
	struct TSoftObjectPtr<AActor> GetBoundPreviewActor() {
		return memory.read<struct TSoftObjectPtr<AActor>>(m_addr + 144);
	}
	struct TMap<struct FGuid, struct FName> GetBoundActorComponents() {
		return memory.read<struct TMap<struct FGuid, struct FName>>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};


class USequenceCameraShakePattern
{
public:
	USequenceCameraShakePattern(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraAnimationSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UCameraAnimationSequence(ptr_addr);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 48);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 52);
	}
	float GetBlendInTime() {
		return memory.read<float>(m_addr + 56);
	}
	float GetBlendOutTime() {
		return memory.read<float>(m_addr + 60);
	}
	float GetRandomSegmentDuration() {
		return memory.read<float>(m_addr + 64);
	}
	bool GetbRandomSegment() {
		return memory.read<bool>(m_addr + 68);
	}
	struct USequenceCameraShakeSequencePlayer GetPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct USequenceCameraShakeSequencePlayer(ptr_addr);
	}
	struct USequenceCameraShakeCameraStandIn GetCameraStandIn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct USequenceCameraShakeCameraStandIn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCameraAnimationSequence
{
public:
	UCameraAnimationSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ATemplateSequenceActor
{
public:
	ATemplateSequenceActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSequencePlaybackSettings GetPlaybackSettings() {
		return memory.read<struct FMovieSceneSequencePlaybackSettings>(m_addr + 560);
	}
	struct UTemplateSequencePlayer GetSequencePlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UTemplateSequencePlayer(ptr_addr);
	}
	struct FSoftObjectPath GetTemplateSequence() {
		return memory.read<struct FSoftObjectPath>(m_addr + 592);
	}
	struct FTemplateSequenceBindingOverrideData GetBindingOverride() {
		return memory.read<struct FTemplateSequenceBindingOverrideData>(m_addr + 616);
	}

private:
	std::uint64_t m_addr = 0;
};


class USequenceCameraShakeCameraStandIn
{
public:
	USequenceCameraShakeCameraStandIn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFieldOfView() {
		return memory.read<float>(m_addr + 48);
	}
	char GetbConstrainAspectRatio() {
		return memory.read<char>(m_addr + 52);
	}
	float GetAspectRatio() {
		return memory.read<float>(m_addr + 56);
	}
	struct FPostProcessSettings GetPostProcessSettings() {
		return memory.read<struct FPostProcessSettings>(m_addr + 64);
	}
	float GetPostProcessBlendWeight() {
		return memory.read<float>(m_addr + 1552);
	}
	struct FCameraFilmbackSettings GetFilmback() {
		return memory.read<struct FCameraFilmbackSettings>(m_addr + 1556);
	}
	struct FCameraLensSettings GetLensSettings() {
		return memory.read<struct FCameraLensSettings>(m_addr + 1568);
	}
	struct FCameraFocusSettings GetFocusSettings() {
		return memory.read<struct FCameraFocusSettings>(m_addr + 1592);
	}
	float GetCurrentFocalLength() {
		return memory.read<float>(m_addr + 1680);
	}
	float GetCurrentAperture() {
		return memory.read<float>(m_addr + 1684);
	}
	float GetCurrentFocusDistance() {
		return memory.read<float>(m_addr + 1688);
	}

private:
	std::uint64_t m_addr = 0;
};


class USequenceCameraShakeSequencePlayer
{
public:
	USequenceCameraShakeSequencePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetBoundObjectOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UObject(ptr_addr);
	}
	struct UMovieSceneSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct FMovieSceneRootEvaluationTemplateInstance GetRootTemplateInstance() {
		return memory.read<struct FMovieSceneRootEvaluationTemplateInstance>(m_addr + 736);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTemplateSequencePlayer
{
public:
	UTemplateSequencePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTemplateSequenceSection
{
public:
	UTemplateSequenceSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTemplateSectionPropertyScale> GetPropertyScales() {
		return memory.read<struct TArray<struct FTemplateSectionPropertyScale>>(m_addr + 368);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTemplateSequenceSystem
{
public:
	UTemplateSequenceSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTemplateSequencePropertyScalingInstantiatorSystem
{
public:
	UTemplateSequencePropertyScalingInstantiatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTemplateSequencePropertyScalingEvaluatorSystem
{
public:
	UTemplateSequencePropertyScalingEvaluatorSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTemplateSequenceTrack
{
public:
	UTemplateSequenceTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


