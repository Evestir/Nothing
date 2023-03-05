#pragma once 
#include <MovieRenderPipelineRenderPasses_Structs.h>
 
 
 
class UMoviePipelineDeferredPassBase
{
public:
	UMoviePipelineDeferredPassBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbAccumulatorIncludesAlpha() {
		return memory.read<bool>(m_addr + 200);
	}
	bool GetbDisableMultisampleEffects() {
		return memory.read<bool>(m_addr + 201);
	}
	bool GetbUse32BitPostProcessMaterials() {
		return memory.read<bool>(m_addr + 202);
	}
	struct TArray<struct FMoviePipelinePostProcessPass> GetAdditionalPostProcessMaterials() {
		return memory.read<struct TArray<struct FMoviePipelinePostProcessPass>>(m_addr + 208);
	}
	bool GetbAddDefaultLayer() {
		return memory.read<bool>(m_addr + 224);
	}
	struct TArray<struct FActorLayer> GetStencilLayers() {
		return memory.read<struct TArray<struct FActorLayer>>(m_addr + 232);
	}
	struct TArray<struct UMaterialInterface> GetActivePostProcessMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct UMaterialInterface GetStencilLayerMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UMaterialInterface(ptr_addr);
	}
	struct TArray<struct UTextureRenderTarget2D> GetTileRenderTargets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct TArray<struct UTextureRenderTarget2D>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineImageSequenceOutputBase
{
public:
	UMoviePipelineImageSequenceOutputBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineImagePassBase
{
public:
	UMoviePipelineImagePassBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineDeferredPass_ReflectionsOnly
{
public:
	UMoviePipelineDeferredPass_ReflectionsOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineDeferredPass_Unlit
{
public:
	UMoviePipelineDeferredPass_Unlit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineDeferredPass_DetailLighting
{
public:
	UMoviePipelineDeferredPass_DetailLighting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineDeferredPass_PathTracer
{
public:
	UMoviePipelineDeferredPass_PathTracer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineDeferredPass_LightingOnly
{
public:
	UMoviePipelineDeferredPass_LightingOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineImageSequenceOutput_EXR
{
public:
	UMoviePipelineImageSequenceOutput_EXR(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EEXRCompressionFormat GetCompression() {
		return memory.read<enum class EEXRCompressionFormat>(m_addr + 104);
	}
	bool GetbMultilayer() {
		return memory.read<bool>(m_addr + 105);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineImageSequenceOutput_BMP
{
public:
	UMoviePipelineImageSequenceOutput_BMP(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineImageSequenceOutput_PNG
{
public:
	UMoviePipelineImageSequenceOutput_PNG(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineImageSequenceOutput_JPG
{
public:
	UMoviePipelineImageSequenceOutput_JPG(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineWaveOutput
{
public:
	UMoviePipelineWaveOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFileNameFormatOverride() {
		return memory.read<struct FString>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


