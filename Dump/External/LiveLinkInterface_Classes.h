#pragma once 
#include <LiveLinkInterface_Structs.h>
 
 
 
class ULiveLinkVirtualSubject
{
public:
	ULiveLinkVirtualSubject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	ULiveLinkRole GetRole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return ULiveLinkRole(ptr_addr);
	}
	struct TArray<struct FLiveLinkSubjectName> GetSubjects() {
		return memory.read<struct TArray<struct FLiveLinkSubjectName>>(m_addr + 56);
	}
	struct TArray<struct ULiveLinkFrameTranslator> GetFrameTranslators() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct TArray<struct ULiveLinkFrameTranslator>(ptr_addr);
	}
	bool GetbRebroadcastSubject() {
		return memory.read<bool>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkSourceFactory
{
public:
	ULiveLinkSourceFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkFrameInterpolationProcessor
{
public:
	ULiveLinkFrameInterpolationProcessor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkFrameTranslator
{
public:
	ULiveLinkFrameTranslator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkCameraRole
{
public:
	ULiveLinkCameraRole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkFramePreProcessor
{
public:
	ULiveLinkFramePreProcessor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkSourceSettings
{
public:
	ULiveLinkSourceSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveLinkSourceMode GetMode() {
		return memory.read<enum class ELiveLinkSourceMode>(m_addr + 40);
	}
	struct FLiveLinkSourceBufferManagementSettings GetBufferSettings() {
		return memory.read<struct FLiveLinkSourceBufferManagementSettings>(m_addr + 48);
	}
	struct FString GetConnectionString() {
		return memory.read<struct FString>(m_addr + 136);
	}
	ULiveLinkSourceFactory GetFactory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return ULiveLinkSourceFactory(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkRole
{
public:
	ULiveLinkRole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkBasicRole
{
public:
	ULiveLinkBasicRole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkLightRole
{
public:
	ULiveLinkLightRole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkAnimationRole
{
public:
	ULiveLinkAnimationRole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkTransformRole
{
public:
	ULiveLinkTransformRole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkController
{
public:
	ULiveLinkController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkCurveRemapSettings
{
public:
	ULiveLinkCurveRemapSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkCurveConversionSettings GetCurveConversionSettings() {
		return memory.read<struct FLiveLinkCurveConversionSettings>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkSubjectSettings
{
public:
	ULiveLinkSubjectSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct ULiveLinkFramePreProcessor> GetPreProcessors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct ULiveLinkFramePreProcessor>(ptr_addr);
	}
	struct ULiveLinkFrameInterpolationProcessor GetInterpolationProcessor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct ULiveLinkFrameInterpolationProcessor(ptr_addr);
	}
	struct TArray<struct ULiveLinkFrameTranslator> GetTranslators() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct TArray<struct ULiveLinkFrameTranslator>(ptr_addr);
	}
	ULiveLinkRole GetRole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return ULiveLinkRole(ptr_addr);
	}
	struct FFrameRate GetFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 88);
	}
	bool GetbRebroadcastSubject() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


