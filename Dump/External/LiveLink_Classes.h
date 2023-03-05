#pragma once 
#include <LiveLink_Structs.h>
 
 
 
class ULiveLinkRetargetAsset
{
public:
	ULiveLinkRetargetAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkAnimationFrameInterpolationProcessor
{
public:
	ULiveLinkAnimationFrameInterpolationProcessor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkBasicFrameInterpolationProcessor
{
public:
	ULiveLinkBasicFrameInterpolationProcessor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInterpolatePropertyValues() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkBlueprintLibrary
{
public:
	ULiveLinkBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkAnimationAxisSwitchPreProcessor
{
public:
	ULiveLinkAnimationAxisSwitchPreProcessor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkAnimationRoleToTransform
{
public:
	ULiveLinkAnimationRoleToTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBoneName() {
		return memory.read<struct FName>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkTimecodeProvider
{
public:
	ULiveLinkTimecodeProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectKey GetSubjectKey() {
		return memory.read<struct FLiveLinkSubjectKey>(m_addr + 48);
	}
	enum class ELiveLinkTimecodeProviderEvaluationType GetEvaluation() {
		return memory.read<enum class ELiveLinkTimecodeProviderEvaluationType>(m_addr + 72);
	}
	bool GetbOverrideFrameRate() {
		return memory.read<bool>(m_addr + 76);
	}
	struct FFrameRate GetOverrideFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 80);
	}
	int32_t GetBufferSize() {
		return memory.read<int32_t>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkAnimationVirtualSubject
{
public:
	ULiveLinkAnimationVirtualSubject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbAppendSubjectNameToBones() {
		return memory.read<bool>(m_addr + 353);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkTransformAxisSwitchPreProcessor
{
public:
	ULiveLinkTransformAxisSwitchPreProcessor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveLinkAxis GetFrontAxis() {
		return memory.read<enum class ELiveLinkAxis>(m_addr + 40);
	}
	enum class ELiveLinkAxis GetRightAxis() {
		return memory.read<enum class ELiveLinkAxis>(m_addr + 41);
	}
	enum class ELiveLinkAxis GetUpAxis() {
		return memory.read<enum class ELiveLinkAxis>(m_addr + 42);
	}
	bool GetbUseOffsetPosition() {
		return memory.read<bool>(m_addr + 43);
	}
	bool GetbUseOffsetOrientation() {
		return memory.read<bool>(m_addr + 44);
	}
	struct FVector GetOffsetPosition() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FRotator GetOffsetOrientation() {
		return memory.read<struct FRotator>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkBlueprintVirtualSubject
{
public:
	ULiveLinkBlueprintVirtualSubject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkComponent
{
public:
	ULiveLinkComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnLiveLinkUpdated() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkMessageBusSourceFactory
{
public:
	ULiveLinkMessageBusSourceFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkDrivenComponent
{
public:
	ULiveLinkDrivenComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectName GetSubjectName() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 176);
	}
	struct FName GetActorTransformBone() {
		return memory.read<struct FName>(m_addr + 184);
	}
	bool GetbModifyActorTransform() {
		return memory.read<bool>(m_addr + 192);
	}
	bool GetbSetRelativeLocation() {
		return memory.read<bool>(m_addr + 193);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkInstance
{
public:
	ULiveLinkInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULiveLinkRetargetAsset GetCurrentRetargetAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct ULiveLinkRetargetAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkMessageBusFinder
{
public:
	ULiveLinkMessageBusFinder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkMessageBusSourceSettings
{
public:
	ULiveLinkMessageBusSourceSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkPreset
{
public:
	ULiveLinkPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLiveLinkSourcePreset> GetSources() {
		return memory.read<struct TArray<struct FLiveLinkSourcePreset>>(m_addr + 40);
	}
	struct TArray<struct FLiveLinkSubjectPreset> GetSubjects() {
		return memory.read<struct TArray<struct FLiveLinkSubjectPreset>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkRemapAsset
{
public:
	ULiveLinkRemapAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkSettings
{
public:
	ULiveLinkSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLiveLinkRoleProjectSetting> GetDefaultRoleSettings() {
		return memory.read<struct TArray<struct FLiveLinkRoleProjectSetting>>(m_addr + 40);
	}
	ULiveLinkFrameInterpolationProcessor GetFrameInterpolationProcessor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return ULiveLinkFrameInterpolationProcessor(ptr_addr);
	}
	struct TSoftObjectPtr<ULiveLinkPreset> GetDefaultLiveLinkPreset() {
		return memory.read<struct TSoftObjectPtr<ULiveLinkPreset>>(m_addr + 64);
	}
	struct FDirectoryPath GetPresetSaveDir() {
		return memory.read<struct FDirectoryPath>(m_addr + 104);
	}
	float GetClockOffsetCorrectionStep() {
		return memory.read<float>(m_addr + 120);
	}
	enum class ELiveLinkSourceMode GetDefaultMessageBusSourceMode() {
		return memory.read<enum class ELiveLinkSourceMode>(m_addr + 124);
	}
	double GetMessageBusPingRequestFrequency() {
		return memory.read<double>(m_addr + 128);
	}
	double GetMessageBusHeartbeatFrequency() {
		return memory.read<double>(m_addr + 136);
	}
	double GetMessageBusHeartbeatTimeout() {
		return memory.read<double>(m_addr + 144);
	}
	double GetMessageBusTimeBeforeRemovingInactiveSource() {
		return memory.read<double>(m_addr + 152);
	}
	double GetTimeWithoutFrameToBeConsiderAsInvalid() {
		return memory.read<double>(m_addr + 160);
	}
	struct FLinearColor GetValidColor() {
		return memory.read<struct FLinearColor>(m_addr + 168);
	}
	struct FLinearColor GetInvalidColor() {
		return memory.read<struct FLinearColor>(m_addr + 184);
	}
	char GetTextSizeSource() {
		return memory.read<char>(m_addr + 200);
	}
	char GetTextSizeSubject() {
		return memory.read<char>(m_addr + 201);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkTimeSynchronizationSource
{
public:
	ULiveLinkTimeSynchronizationSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectName GetSubjectName() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkVirtualSubjectSourceSettings
{
public:
	ULiveLinkVirtualSubjectSourceSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSourceName() {
		return memory.read<struct FName>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


