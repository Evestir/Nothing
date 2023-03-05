#pragma once 
#include <TakeMovieScene_Structs.h>
 
 
 
class UMovieSceneTakeSection
{
public:
	UMovieSceneTakeSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneIntegerChannel GetHoursCurve() {
		return memory.read<struct FMovieSceneIntegerChannel>(m_addr + 232);
	}
	struct FMovieSceneIntegerChannel GetMinutesCurve() {
		return memory.read<struct FMovieSceneIntegerChannel>(m_addr + 376);
	}
	struct FMovieSceneIntegerChannel GetSecondsCurve() {
		return memory.read<struct FMovieSceneIntegerChannel>(m_addr + 520);
	}
	struct FMovieSceneIntegerChannel GetFramesCurve() {
		return memory.read<struct FMovieSceneIntegerChannel>(m_addr + 664);
	}
	struct FMovieSceneFloatChannel GetSubFramesCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 808);
	}
	struct FMovieSceneStringChannel GetSlate() {
		return memory.read<struct FMovieSceneStringChannel>(m_addr + 968);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneTakeSettings
{
public:
	UMovieSceneTakeSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetHoursName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetMinutesName() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetSecondsName() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FString GetFramesName() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetSubFramesName() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString GetSlateName() {
		return memory.read<struct FString>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneTakeTrack
{
public:
	UMovieSceneTakeTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


