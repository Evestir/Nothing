#pragma once 
#include <AnimGraphRuntime_Structs.h>
 
 
 
class USequencerAnimationSupport
{
public:
	USequencerAnimationSupport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimNotify_PlayMontageNotify
{
public:
	UAnimNotify_PlayMontageNotify(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNotifyName() {
		return memory.read<struct FName>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimNotify_PlayMontageNotifyWindow
{
public:
	UAnimNotify_PlayMontageNotifyWindow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNotifyName() {
		return memory.read<struct FName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimSequencerInstance
{
public:
	UAnimSequencerInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UKismetAnimationLibrary
{
public:
	UKismetAnimationLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPlayMontageCallbackProxy
{
public:
	UPlayMontageCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnCompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnBlendOut() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}
	struct FMulticastInlineDelegate GetOnInterrupted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 72);
	}
	struct FMulticastInlineDelegate GetOnNotifyBegin() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 88);
	}
	struct FMulticastInlineDelegate GetOnNotifyEnd() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


