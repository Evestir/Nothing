#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FMovieSceneGeometryCacheParams
{
public:
	FMovieSceneGeometryCacheParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGeometryCache GetGeometryCacheAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGeometryCache(ptr_addr);
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
	float GetStartOffset() {
		return memory.read<float>(m_addr + 28);
	}
	float GetEndOffset() {
		return memory.read<float>(m_addr + 32);
	}
	struct FSoftObjectPath GetGeometryCache() {
		return memory.read<struct FSoftObjectPath>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneGeometryCacheSectionTemplate
{
public:
	FMovieSceneGeometryCacheSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneGeometryCacheSectionTemplateParameters GetParams() {
		return memory.read<struct FMovieSceneGeometryCacheSectionTemplateParameters>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneGeometryCacheSectionTemplateParameters
{
public:
	FMovieSceneGeometryCacheSectionTemplateParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetSectionStartTime() {
		return memory.read<struct FFrameNumber>(m_addr + 64);
	}
	struct FFrameNumber GetSectionEndTime() {
		return memory.read<struct FFrameNumber>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};