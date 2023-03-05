#pragma once 
#include <GeometryCollectionTracks_Structs.h>
 
 
 
class UMovieSceneGeometryCollectionSection
{
public:
	UMovieSceneGeometryCollectionSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneGeometryCollectionParams GetParams() {
		return memory.read<struct FMovieSceneGeometryCollectionParams>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneGeometryCollectionTrack
{
public:
	UMovieSceneGeometryCollectionTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetAnimationSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


