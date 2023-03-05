#pragma once 
#include <LiveLinkMovieScene_Structs.h>
 
 
 
class UMovieSceneLiveLinkSubSectionAnimation
{
public:
	UMovieSceneLiveLinkSubSectionAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneLiveLinkSubSection
{
public:
	UMovieSceneLiveLinkSubSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubSectionData GetSubSectionData() {
		return memory.read<struct FLiveLinkSubSectionData>(m_addr + 40);
	}
	ULiveLinkRole GetSubjectRole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return ULiveLinkRole(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneLiveLinkSection
{
public:
	UMovieSceneLiveLinkSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectPreset GetSubjectPreset() {
		return memory.read<struct FLiveLinkSubjectPreset>(m_addr + 232);
	}
	struct TArray<bool> GetChannelMask() {
		return memory.read<struct TArray<bool>>(m_addr + 288);
	}
	struct TArray<struct UMovieSceneLiveLinkSubSection> GetSubSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct TArray<struct UMovieSceneLiveLinkSubSection>(ptr_addr);
	}
	struct FName GetSubjectName() {
		return memory.read<struct FName>(m_addr + 336);
	}
	struct FLiveLinkFrameData GetTemplateToPush() {
		return memory.read<struct FLiveLinkFrameData>(m_addr + 344);
	}
	struct FLiveLinkRefSkeleton GetRefSkeleton() {
		return memory.read<struct FLiveLinkRefSkeleton>(m_addr + 488);
	}
	struct TArray<struct FName> GetCurveNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 520);
	}
	struct TArray<struct FMovieSceneFloatChannel> GetPropertyFloatChannels() {
		return memory.read<struct TArray<struct FMovieSceneFloatChannel>>(m_addr + 536);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneLiveLinkSubSectionBasicRole
{
public:
	UMovieSceneLiveLinkSubSectionBasicRole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneLiveLinkTrack
{
public:
	UMovieSceneLiveLinkTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	ULiveLinkRole GetTrackRole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return ULiveLinkRole(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneLiveLinkSubSectionProperties
{
public:
	UMovieSceneLiveLinkSubSectionProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


