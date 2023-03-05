#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FMovieSceneLiveLinkSectionTemplate
{
public:
	FMovieSceneLiveLinkSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectPreset GetSubjectPreset() {
		return memory.read<struct FLiveLinkSubjectPreset>(m_addr + 56);
	}
	struct TArray<bool> GetChannelMask() {
		return memory.read<struct TArray<bool>>(m_addr + 112);
	}
	struct TArray<struct FLiveLinkSubSectionData> GetSubSectionsData() {
		return memory.read<struct TArray<struct FLiveLinkSubSectionData>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkPropertyData
{
public:
	FLiveLinkPropertyData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPropertyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FMovieSceneFloatChannel> GetFloatChannel() {
		return memory.read<struct TArray<struct FMovieSceneFloatChannel>>(m_addr + 8);
	}
	struct TArray<struct FMovieSceneStringChannel> GetStringChannel() {
		return memory.read<struct TArray<struct FMovieSceneStringChannel>>(m_addr + 24);
	}
	struct TArray<struct FMovieSceneIntegerChannel> GetIntegerChannel() {
		return memory.read<struct TArray<struct FMovieSceneIntegerChannel>>(m_addr + 40);
	}
	struct TArray<struct FMovieSceneBoolChannel> GetBoolChannel() {
		return memory.read<struct TArray<struct FMovieSceneBoolChannel>>(m_addr + 56);
	}
	struct TArray<struct FMovieSceneByteChannel> GetByteChannel() {
		return memory.read<struct TArray<struct FMovieSceneByteChannel>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkSubSectionData
{
public:
	FLiveLinkSubSectionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLiveLinkPropertyData> GetProperties() {
		return memory.read<struct TArray<struct FLiveLinkPropertyData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};