#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSimulationStageMetaData
{
public:
	FSimulationStageMetaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSimulationStageName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetIterationSource() {
		return memory.read<struct FName>(m_addr + 8);
	}
	char GetbSpawnOnly() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbWritesParticles() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbPartialParticleUpdate() {
		return memory.read<char>(m_addr + 16);
	}
	struct TArray<struct FName> GetOutputDestinations() {
		return memory.read<struct TArray<struct FName>>(m_addr + 24);
	}
	int32_t GetMinStage() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetMaxStage() {
		return memory.read<int32_t>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDataInterfaceGPUParamInfo
{
public:
	FNiagaraDataInterfaceGPUParamInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDataInterfaceHLSLSymbol() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetDIClassName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GetGeneratedFunctions() {
		return memory.read<struct TArray<struct FNiagaraDataInterfaceGeneratedFunction>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDataInterfaceGeneratedFunction
{
public:
	FNiagaraDataInterfaceGeneratedFunction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNiagaraCompileEvent
{
public:
	FNiagaraCompileEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class FNiagaraCompileEventSeverity GetSeverity() {
		return memory.read<enum class FNiagaraCompileEventSeverity>(m_addr + 0);
	}
	struct FString GetMessage() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetShortDescription() {
		return memory.read<struct FString>(m_addr + 24);
	}
	bool GetbDismissable() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FGuid GetNodeGuid() {
		return memory.read<struct FGuid>(m_addr + 44);
	}
	struct FGuid GetPinGuid() {
		return memory.read<struct FGuid>(m_addr + 60);
	}
	struct TArray<struct FGuid> GetStackGuids() {
		return memory.read<struct TArray<struct FGuid>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};