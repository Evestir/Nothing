#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FLiveLinkTickSignature__DelegateSignature
{
public:
	FLiveLinkTickSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSourceType
{
public:
	FGetSourceType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSourceHandle GetSourceHandle() {
		return memory.read<struct FLiveLinkSourceHandle>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkRetargetAssetReference
{
public:
	FLiveLinkRetargetAssetReference(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAnimNode_LiveLinkPose
{
public:
	FAnimNode_LiveLinkPose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetInputPose() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}
	struct FLiveLinkSubjectName GetLiveLinkSubjectName() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 32);
	}
	ULiveLinkRetargetAsset GetRetargetAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return ULiveLinkRetargetAsset(ptr_addr);
	}
	struct ULiveLinkRetargetAsset GetCurrentRetargetAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct ULiveLinkRetargetAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyToClient
{
public:
	FApplyToClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConnectToProvider
{
public:
	FConnectToProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FProviderPollResult GetProvider() {
		return memory.read<struct FProviderPollResult>(m_addr + 0);
	}
	struct FLiveLinkSourceHandle GetSourceHandle() {
		return memory.read<struct FLiveLinkSourceHandle>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSubjectData
{
public:
	FGetSubjectData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSubjectName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkInstanceProxy
{
public:
	FLiveLinkInstanceProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAnimNode_LiveLinkPose GetPoseNode() {
		return memory.read<struct FAnimNode_LiveLinkPose>(m_addr + 1904);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSourceMachineName
{
public:
	FGetSourceMachineName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSourceHandle GetSourceHandle() {
		return memory.read<struct FLiveLinkSourceHandle>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChildren
{
public:
	FGetChildren(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkTransform GetLiveLinkTransform() {
		return memory.read<struct FLiveLinkTransform>(m_addr + 0);
	}
	struct TArray<struct FLiveLinkTransform> GetChildren() {
		return memory.read<struct TArray<struct FLiveLinkTransform>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkRoleProjectSetting
{
public:
	FLiveLinkRoleProjectSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	ULiveLinkRole GetRole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return ULiveLinkRole(ptr_addr);
	}
	ULiveLinkSubjectSettings GetSettingClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return ULiveLinkSubjectSettings(ptr_addr);
	}
	ULiveLinkFrameInterpolationProcessor GetFrameInterpolationProcessor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return ULiveLinkFrameInterpolationProcessor(ptr_addr);
	}
	struct TArray<ULiveLinkFramePreProcessor> GetFramePreProcessors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct TArray<ULiveLinkFramePreProcessor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformName
{
public:
	FTransformName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkTransform GetLiveLinkTransform() {
		return memory.read<struct FLiveLinkTransform>(m_addr + 0);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FProviderPollResult
{
public:
	FProviderPollResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetMachineName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	double GetMachineTimeOffset() {
		return memory.read<double>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSourceStillValid
{
public:
	FIsSourceStillValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSourceHandle GetSourceHandle() {
		return memory.read<struct FLiveLinkSourceHandle>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FChildCount
{
public:
	FChildCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkTransform GetLiveLinkTransform() {
		return memory.read<struct FLiveLinkTransform>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FComponentSpaceTransform
{
public:
	FComponentSpaceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkTransform GetLiveLinkTransform() {
		return memory.read<struct FLiveLinkTransform>(m_addr + 0);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FParentBoneSpaceTransform
{
public:
	FParentBoneSpaceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkTransform GetLiveLinkTransform() {
		return memory.read<struct FLiveLinkTransform>(m_addr + 0);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRootTransform
{
public:
	FGetRootTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 0);
	}
	struct FLiveLinkTransform GetLiveLinkTransform() {
		return memory.read<struct FLiveLinkTransform>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FEvaluateLiveLinkFrame
{
public:
	FEvaluateLiveLinkFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectRepresentation GetSubjectRepresentation() {
		return memory.read<struct FLiveLinkSubjectRepresentation>(m_addr + 0);
	}
	struct FLiveLinkBaseBlueprintData GetOutBlueprintData() {
		return memory.read<struct FLiveLinkBaseBlueprintData>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSubject
{
public:
	FSetSubject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectName GetSubjectName() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEvaluateLiveLinkFrameWithSpecificRole
{
public:
	FEvaluateLiveLinkFrameWithSpecificRole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectName GetSubjectName() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 0);
	}
	ULiveLinkRole GetRole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return ULiveLinkRole(ptr_addr);
	}
	struct FLiveLinkBaseBlueprintData GetOutBlueprintData() {
		return memory.read<struct FLiveLinkBaseBlueprintData>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FEvaluateLiveLinkFrameAtSceneTime
{
public:
	FEvaluateLiveLinkFrameAtSceneTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectName GetSubjectName() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 0);
	}
	ULiveLinkRole GetRole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return ULiveLinkRole(ptr_addr);
	}
	struct FTimecode GetSceneTime() {
		return memory.read<struct FTimecode>(m_addr + 16);
	}
	struct FLiveLinkBaseBlueprintData GetOutBlueprintData() {
		return memory.read<struct FLiveLinkBaseBlueprintData>(m_addr + 40);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsLiveLinkSubjectEnabled
{
public:
	FIsLiveLinkSubjectEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectName GetSubjectName() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLiveLinkEnabledSubjectNames
{
public:
	FGetLiveLinkEnabledSubjectNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIncludeVirtualSubject() {
		return memory.read<bool>(m_addr + 0);
	}
	struct TArray<struct FLiveLinkSubjectName> GetReturnValue() {
		return memory.read<struct TArray<struct FLiveLinkSubjectName>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FEvaluateLiveLinkFrameAtWorldTimeOffset
{
public:
	FEvaluateLiveLinkFrameAtWorldTimeOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectName GetSubjectName() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 0);
	}
	ULiveLinkRole GetRole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return ULiveLinkRole(ptr_addr);
	}
	float GetWorldTimeOffset() {
		return memory.read<float>(m_addr + 16);
	}
	struct FLiveLinkBaseBlueprintData GetOutBlueprintData() {
		return memory.read<struct FLiveLinkBaseBlueprintData>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnimationFrameData
{
public:
	FGetAnimationFrameData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 0);
	}
	struct FLiveLinkAnimationFrameData GetAnimationFrameData() {
		return memory.read<struct FLiveLinkAnimationFrameData>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSubjectDataAtWorldTime
{
public:
	FGetSubjectDataAtWorldTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSubjectName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetWorldTime() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 12);
	}
	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnimationStaticData
{
public:
	FGetAnimationStaticData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 0);
	}
	struct FLiveLinkSkeletonStaticData GetAnimationStaticData() {
		return memory.read<struct FLiveLinkSkeletonStaticData>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParent
{
public:
	FGetParent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkTransform GetLiveLinkTransform() {
		return memory.read<struct FLiveLinkTransform>(m_addr + 0);
	}
	struct FLiveLinkTransform GetParent() {
		return memory.read<struct FLiveLinkTransform>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBasicData
{
public:
	FGetBasicData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 0);
	}
	struct FLiveLinkBasicBlueprintData GetBasicBlueprintData() {
		return memory.read<struct FLiveLinkBasicBlueprintData>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPropertyValue
{
public:
	FGetPropertyValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkBasicBlueprintData GetBasicData() {
		return memory.read<struct FLiveLinkBasicBlueprintData>(m_addr + 0);
	}
	struct FName GetPropertyName() {
		return memory.read<struct FName>(m_addr + 184);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 192);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 196);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurves
{
public:
	FGetCurves(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 0);
	}
	struct TMap<struct FName, float> GetCurves() {
		return memory.read<struct TMap<struct FName, float>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLiveLinkSubjectRole
{
public:
	FGetLiveLinkSubjectRole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectName GetSubjectName() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 0);
	}
	ULiveLinkRole GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return ULiveLinkRole(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemapCurveElements
{
public:
	FRemapCurveElements(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, float> GetCurveItems() {
		return memory.read<struct TMap<struct FName, float>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLiveLinkSubjects
{
public:
	FGetLiveLinkSubjects(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIncludeDisabledSubject() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbIncludeVirtualSubject() {
		return memory.read<bool>(m_addr + 1);
	}
	struct TArray<struct FLiveLinkSubjectKey> GetReturnValue() {
		return memory.read<struct TArray<struct FLiveLinkSubjectKey>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMetadata
{
public:
	FGetMetadata(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 0);
	}
	struct FSubjectMetadata GetMetaData() {
		return memory.read<struct FSubjectMetadata>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSourceStatus
{
public:
	FGetSourceStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSourceHandle GetSourceHandle() {
		return memory.read<struct FLiveLinkSourceHandle>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpecificLiveLinkSubjectRole
{
public:
	FGetSpecificLiveLinkSubjectRole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectKey GetSubjectKey() {
		return memory.read<struct FLiveLinkSubjectKey>(m_addr + 0);
	}
	ULiveLinkRole GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return ULiveLinkRole(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLiveLinkSubjectEnabled
{
public:
	FSetLiveLinkSubjectEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectKey GetSubjectKey() {
		return memory.read<struct FLiveLinkSubjectKey>(m_addr + 0);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTransformByIndex
{
public:
	FGetTransformByIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 0);
	}
	int32_t GetTransformIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	struct FLiveLinkTransform GetLiveLinkTransform() {
		return memory.read<struct FLiveLinkTransform>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTransformByName
{
public:
	FGetTransformByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 0);
	}
	struct FName GetTransformName() {
		return memory.read<struct FName>(m_addr + 24);
	}
	struct FLiveLinkTransform GetLiveLinkTransform() {
		return memory.read<struct FLiveLinkTransform>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasParent
{
public:
	FHasParent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkTransform GetLiveLinkTransform() {
		return memory.read<struct FLiveLinkTransform>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSpecificLiveLinkSubjectEnabled
{
public:
	FIsSpecificLiveLinkSubjectEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectKey GetSubjectKey() {
		return memory.read<struct FLiveLinkSubjectKey>(m_addr + 0);
	}
	bool GetbForThisFrame() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 25);
	}

private:
	std::uint64_t m_addr = 0;
};class FNumberOfTransforms
{
public:
	FNumberOfTransforms(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveSource
{
public:
	FRemoveSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSourceHandle GetSourceHandle() {
		return memory.read<struct FLiveLinkSourceHandle>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformNames
{
public:
	FTransformNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 0);
	}
	struct TArray<struct FName> GetTransformNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateVirtualSubjectFrameData_Internal
{
public:
	FUpdateVirtualSubjectFrameData_Internal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkBaseFrameData GetInStruct() {
		return memory.read<struct FLiveLinkBaseFrameData>(m_addr + 0);
	}
	bool GetbInShouldStampCurrentTime() {
		return memory.read<bool>(m_addr + 160);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 161);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateVirtualSubjectStaticData_Internal
{
public:
	FUpdateVirtualSubjectStaticData_Internal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkBaseStaticData GetInStruct() {
		return memory.read<struct FLiveLinkBaseStaticData>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddToClient
{
public:
	FAddToClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbRecreatePresets() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAvailableSubjectNames
{
public:
	FGetAvailableSubjectNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetSubjectNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSubjectDataAtSceneTime
{
public:
	FGetSubjectDataAtSceneTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSubjectName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FTimecode GetSceneTime() {
		return memory.read<struct FTimecode>(m_addr + 8);
	}
	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FSubjectFrameHandle GetSubjectFrameHandle() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRetargetAsset
{
public:
	FSetRetargetAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	ULiveLinkRetargetAsset GetRetargetAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return ULiveLinkRetargetAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FConstructMessageBusFinder
{
public:
	FConstructMessageBusFinder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULiveLinkMessageBusFinder GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULiveLinkMessageBusFinder(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAvailableProviders
{
public:
	FGetAvailableProviders(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 8);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 32);
	}
	struct TArray<struct FProviderPollResult> GetAvailableProviders() {
		return memory.read<struct TArray<struct FProviderPollResult>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRemappedBoneName
{
public:
	FGetRemappedBoneName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBoneName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRemappedCurveName
{
public:
	FGetRemappedCurveName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCurveName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};