#pragma once 
#include <ActorSequence_Structs.h>
 
 
 
class UActorSequenceComponent
{
public:
	UActorSequenceComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneSequencePlaybackSettings GetPlaybackSettings() {
		return memory.read<struct FMovieSceneSequencePlaybackSettings>(m_addr + 176);
	}
	struct UActorSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UActorSequence(ptr_addr);
	}
	struct UActorSequencePlayer GetSequencePlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UActorSequencePlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UActorSequence
{
public:
	UActorSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieScene GetMovieScene() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UMovieScene(ptr_addr);
	}
	struct FActorSequenceObjectReferenceMap GetObjectReferences() {
		return memory.read<struct FActorSequenceObjectReferenceMap>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UActorSequencePlayer
{
public:
	UActorSequencePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


