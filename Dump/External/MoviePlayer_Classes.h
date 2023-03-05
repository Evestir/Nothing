#pragma once 
#include <MoviePlayer_Structs.h>
 
 
 
class UMoviePlayerSettings
{
public:
	UMoviePlayerSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWaitForMoviesToComplete() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbMoviesAreSkippable() {
		return memory.read<bool>(m_addr + 41);
	}
	struct TArray<struct FString> GetStartupMovies() {
		return memory.read<struct TArray<struct FString>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


