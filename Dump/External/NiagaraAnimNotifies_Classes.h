#pragma once 
#include <NiagaraAnimNotifies_Structs.h>
 
 
 
class UAnimNotify_PlayNiagaraEffect
{
public:
	UAnimNotify_PlayNiagaraEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraSystem GetTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UNiagaraSystem(ptr_addr);
	}
	int32_t GetMirrorDetailLevel() {
		return memory.read<int32_t>(m_addr + 64);
	}
	struct FVector GetLocationOffset() {
		return memory.read<struct FVector>(m_addr + 68);
	}
	struct FRotator GetRotationOffset() {
		return memory.read<struct FRotator>(m_addr + 80);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 92);
	}
	bool GetbAbsoluteScale() {
		return memory.read<bool>(m_addr + 104);
	}
	char GetAttached() {
		return memory.read<char>(m_addr + 144);
	}
	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 148);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimNotifyState_TimedNiagaraEffect
{
public:
	UAnimNotifyState_TimedNiagaraEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraSystem GetTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UNiagaraSystem(ptr_addr);
	}
	int32_t GetMirrorDetailLevel() {
		return memory.read<int32_t>(m_addr + 56);
	}
	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 60);
	}
	struct FVector GetLocationOffset() {
		return memory.read<struct FVector>(m_addr + 68);
	}
	struct FRotator GetRotationOffset() {
		return memory.read<struct FRotator>(m_addr + 80);
	}
	bool GetbDestroyAtEnd() {
		return memory.read<bool>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimNotifyState_TimedNiagaraEffectAdvanced
{
public:
	UAnimNotifyState_TimedNiagaraEffectAdvanced(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


