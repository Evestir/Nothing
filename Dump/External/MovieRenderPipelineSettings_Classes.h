#pragma once 
#include <MovieRenderPipelineSettings_Structs.h>
 
 
 
class UMoviePipelineBurnInSetting
{
public:
	UMoviePipelineBurnInSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftClassPath GetBurnInClass() {
		return memory.read<struct FSoftClassPath>(m_addr + 72);
	}
	bool GetbCompositeOntoFinalImage() {
		return memory.read<bool>(m_addr + 96);
	}
	struct UTextureRenderTarget2D GetRenderTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	struct UMoviePipelineBurnInWidget GetBurnInWidgetInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UMoviePipelineBurnInWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineBurnInWidget
{
public:
	UMoviePipelineBurnInWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineConsoleVariableSetting
{
public:
	UMoviePipelineConsoleVariableSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, float> GetConsoleVariables() {
		return memory.read<struct TMap<struct FString, float>>(m_addr + 72);
	}
	struct TArray<struct FString> GetStartConsoleCommands() {
		return memory.read<struct TArray<struct FString>>(m_addr + 152);
	}
	struct TArray<struct FString> GetEndConsoleCommands() {
		return memory.read<struct TArray<struct FString>>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineWidgetRenderer
{
public:
	UMoviePipelineWidgetRenderer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbCompositeOntoFinalImage() {
		return memory.read<bool>(m_addr + 72);
	}
	struct UTextureRenderTarget2D GetRenderTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UTextureRenderTarget2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


