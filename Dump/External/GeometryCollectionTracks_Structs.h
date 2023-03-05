#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FMovieSceneGeometryCollectionParams
{
public:
	FMovieSceneGeometryCollectionParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftObjectPath GetGeometryCollectionCache() {
		return memory.read<struct FSoftObjectPath>(m_addr + 8);
	}
	struct FFrameNumber GetStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 32);
	}
	struct FFrameNumber GetEndFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 36);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneGeometryCollectionSectionTemplate
{
public:
	FMovieSceneGeometryCollectionSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneGeometryCollectionSectionTemplateParameters GetParams() {
		return memory.read<struct FMovieSceneGeometryCollectionSectionTemplateParameters>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneGeometryCollectionSectionTemplateParameters
{
public:
	FMovieSceneGeometryCollectionSectionTemplateParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetSectionStartTime() {
		return memory.read<struct FFrameNumber>(m_addr + 48);
	}
	struct FFrameNumber GetSectionEndTime() {
		return memory.read<struct FFrameNumber>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};