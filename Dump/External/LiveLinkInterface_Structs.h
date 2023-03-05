#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FLiveLinkCurveElement
{
public:
	FLiveLinkCurveElement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCurveName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetCurveValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCachedSubjectFrame
{
public:
	FCachedSubjectFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLiveLinkSubjectPreset
{
public:
	FLiveLinkSubjectPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectKey GetKey() {
		return memory.read<struct FLiveLinkSubjectKey>(m_addr + 0);
	}
	ULiveLinkRole GetRole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return ULiveLinkRole(ptr_addr);
	}
	struct ULiveLinkSubjectSettings GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct ULiveLinkSubjectSettings(ptr_addr);
	}
	struct ULiveLinkVirtualSubject GetVirtualSubject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ULiveLinkVirtualSubject(ptr_addr);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubjectMetadata
{
public:
	FSubjectMetadata(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FString> GetStringMetadata() {
		return memory.read<struct TMap<struct FName, struct FString>>(m_addr + 0);
	}
	struct FTimecode GetSceneTimecode() {
		return memory.read<struct FTimecode>(m_addr + 80);
	}
	struct FFrameRate GetSceneFramerate() {
		return memory.read<struct FFrameRate>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkSubjectName
{
public:
	FLiveLinkSubjectName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkSourceHandle
{
public:
	FLiveLinkSourceHandle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLiveLinkSubjectKey
{
public:
	FLiveLinkSubjectKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetSource() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FLiveLinkSubjectName GetSubjectName() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkBaseBlueprintData
{
public:
	FLiveLinkBaseBlueprintData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSubjectFrameHandle
{
public:
	FSubjectFrameHandle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLiveLinkCameraFrameData
{
public:
	FLiveLinkCameraFrameData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFieldOfView() {
		return memory.read<float>(m_addr + 208);
	}
	float GetAspectRatio() {
		return memory.read<float>(m_addr + 212);
	}
	float GetFocalLength() {
		return memory.read<float>(m_addr + 216);
	}
	float GetAperture() {
		return memory.read<float>(m_addr + 220);
	}
	float GetFocusDistance() {
		return memory.read<float>(m_addr + 224);
	}
	enum class ELiveLinkCameraProjectionMode GetProjectionMode() {
		return memory.read<enum class ELiveLinkCameraProjectionMode>(m_addr + 228);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkTransform
{
public:
	FLiveLinkTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLiveLinkBasicBlueprintData
{
public:
	FLiveLinkBasicBlueprintData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkBaseStaticData GetStaticData() {
		return memory.read<struct FLiveLinkBaseStaticData>(m_addr + 8);
	}
	struct FLiveLinkBaseFrameData GetFrameData() {
		return memory.read<struct FLiveLinkBaseFrameData>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkBaseFrameData
{
public:
	FLiveLinkBaseFrameData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkWorldTime GetWorldTime() {
		return memory.read<struct FLiveLinkWorldTime>(m_addr + 0);
	}
	struct FLiveLinkMetaData GetMetaData() {
		return memory.read<struct FLiveLinkMetaData>(m_addr + 16);
	}
	struct TArray<float> GetPropertyValues() {
		return memory.read<struct TArray<float>>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkMetaData
{
public:
	FLiveLinkMetaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FString> GetStringMetadata() {
		return memory.read<struct TMap<struct FName, struct FString>>(m_addr + 0);
	}
	struct FQualifiedFrameTime GetSceneTime() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkWorldTime
{
public:
	FLiveLinkWorldTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	double GetTime() {
		return memory.read<double>(m_addr + 0);
	}
	double GetOffset() {
		return memory.read<double>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkTimeCode_Base_DEPRECATED
{
public:
	FLiveLinkTimeCode_Base_DEPRECATED(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSeconds() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFrames() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FLiveLinkFrameRate GetFrameRate() {
		return memory.read<struct FLiveLinkFrameRate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkAnimationFrameData
{
public:
	FLiveLinkAnimationFrameData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTransform> GetTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkBaseStaticData
{
public:
	FLiveLinkBaseStaticData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetPropertyNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkInterpolationSettings
{
public:
	FLiveLinkInterpolationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseInterpolation() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetInterpolationOffset() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkSkeletonStaticData
{
public:
	FLiveLinkSkeletonStaticData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetBoneNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 16);
	}
	struct TArray<int32_t> GetBoneParents() {
		return memory.read<struct TArray<int32_t>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkTime
{
public:
	FLiveLinkTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	double GetWorldTime() {
		return memory.read<double>(m_addr + 0);
	}
	struct FQualifiedFrameTime GetSceneTime() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkFrameRate
{
public:
	FLiveLinkFrameRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLiveLinkCameraBlueprintData
{
public:
	FLiveLinkCameraBlueprintData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkCameraStaticData GetStaticData() {
		return memory.read<struct FLiveLinkCameraStaticData>(m_addr + 8);
	}
	struct FLiveLinkCameraFrameData GetFrameData() {
		return memory.read<struct FLiveLinkCameraFrameData>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkTransformStaticData
{
public:
	FLiveLinkTransformStaticData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsLocationSupported() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetbIsRotationSupported() {
		return memory.read<bool>(m_addr + 17);
	}
	bool GetbIsScaleSupported() {
		return memory.read<bool>(m_addr + 18);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkTransformFrameData
{
public:
	FLiveLinkTransformFrameData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkCameraStaticData
{
public:
	FLiveLinkCameraStaticData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsFieldOfViewSupported() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbIsAspectRatioSupported() {
		return memory.read<bool>(m_addr + 25);
	}
	bool GetbIsFocalLengthSupported() {
		return memory.read<bool>(m_addr + 26);
	}
	bool GetbIsProjectionModeSupported() {
		return memory.read<bool>(m_addr + 27);
	}
	float GetFilmBackWidth() {
		return memory.read<float>(m_addr + 28);
	}
	float GetFilmBackHeight() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetbIsApertureSupported() {
		return memory.read<bool>(m_addr + 36);
	}
	bool GetbIsFocusDistanceSupported() {
		return memory.read<bool>(m_addr + 37);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkCurveConversionSettings
{
public:
	FLiveLinkCurveConversionSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FSoftObjectPath> GetCurveConversionAssetMap() {
		return memory.read<struct TMap<struct FString, struct FSoftObjectPath>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkLightBlueprintData
{
public:
	FLiveLinkLightBlueprintData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkLightStaticData GetStaticData() {
		return memory.read<struct FLiveLinkLightStaticData>(m_addr + 8);
	}
	struct FLiveLinkLightFrameData GetFrameData() {
		return memory.read<struct FLiveLinkLightFrameData>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkLightFrameData
{
public:
	FLiveLinkLightFrameData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTemperature() {
		return memory.read<float>(m_addr + 208);
	}
	float GetIntensity() {
		return memory.read<float>(m_addr + 212);
	}
	struct FColor GetLightColor() {
		return memory.read<struct FColor>(m_addr + 216);
	}
	float GetInnerConeAngle() {
		return memory.read<float>(m_addr + 220);
	}
	float GetOuterConeAngle() {
		return memory.read<float>(m_addr + 224);
	}
	float GetAttenuationRadius() {
		return memory.read<float>(m_addr + 228);
	}
	float GetSourceRadius() {
		return memory.read<float>(m_addr + 232);
	}
	float GetSoftSourceRadius() {
		return memory.read<float>(m_addr + 236);
	}
	float GetSourceLength() {
		return memory.read<float>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkSubjectRepresentation
{
public:
	FLiveLinkSubjectRepresentation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectName GetSubject() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 0);
	}
	ULiveLinkRole GetRole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return ULiveLinkRole(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkLightStaticData
{
public:
	FLiveLinkLightStaticData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsTemperatureSupported() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbIsIntensitySupported() {
		return memory.read<bool>(m_addr + 25);
	}
	bool GetbIsLightColorSupported() {
		return memory.read<bool>(m_addr + 26);
	}
	bool GetbIsInnerConeAngleSupported() {
		return memory.read<bool>(m_addr + 27);
	}
	bool GetbIsOuterConeAngleSupported() {
		return memory.read<bool>(m_addr + 28);
	}
	bool GetbIsAttenuationRadiusSupported() {
		return memory.read<bool>(m_addr + 29);
	}
	bool GetbIsSourceLenghtSupported() {
		return memory.read<bool>(m_addr + 30);
	}
	bool GetbIsSourceRadiusSupported() {
		return memory.read<bool>(m_addr + 31);
	}
	bool GetbIsSoftSourceRadiusSupported() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkSourcePreset
{
public:
	FLiveLinkSourcePreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetGuid() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct ULiveLinkSourceSettings GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ULiveLinkSourceSettings(ptr_addr);
	}
	struct FText GetSourceType() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkRefSkeleton
{
public:
	FLiveLinkRefSkeleton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetBoneNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}
	struct TArray<int32_t> GetBoneParents() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkTimeSynchronizationSettings
{
public:
	FLiveLinkTimeSynchronizationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameRate GetFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 0);
	}
	struct FFrameNumber GetFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkSourceDebugInfo
{
public:
	FLiveLinkSourceDebugInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectName GetSubjectName() {
		return memory.read<struct FLiveLinkSubjectName>(m_addr + 0);
	}
	int32_t GetSnapshotIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetNumberOfBufferAtSnapshot() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkSourceBufferManagementSettings
{
public:
	FLiveLinkSourceBufferManagementSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbValidEngineTimeEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetValidEngineTime() {
		return memory.read<float>(m_addr + 4);
	}
	float GetEngineTimeOffset() {
		return memory.read<float>(m_addr + 8);
	}
	double GetEngineTimeClockOffset() {
		return memory.read<double>(m_addr + 16);
	}
	bool GetbGenerateSubFrame() {
		return memory.read<bool>(m_addr + 24);
	}
	struct FFrameRate GetDetectedFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 28);
	}
	bool GetbUseTimecodeSmoothLatest() {
		return memory.read<bool>(m_addr + 36);
	}
	struct FFrameRate GetSourceTimecodeFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 40);
	}
	bool GetbValidTimecodeFrameEnabled() {
		return memory.read<bool>(m_addr + 48);
	}
	int32_t GetValidTimecodeFrame() {
		return memory.read<int32_t>(m_addr + 52);
	}
	float GetTimecodeFrameOffset() {
		return memory.read<float>(m_addr + 56);
	}
	double GetTimecodeClockOffset() {
		return memory.read<double>(m_addr + 64);
	}
	int32_t GetLatestOffset() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetMaxNumberOfFrameToBuffered() {
		return memory.read<int32_t>(m_addr + 76);
	}
	bool GetbKeepAtLeastOneFrame() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkTransformBlueprintData
{
public:
	FLiveLinkTransformBlueprintData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkTransformStaticData GetStaticData() {
		return memory.read<struct FLiveLinkTransformStaticData>(m_addr + 8);
	}
	struct FLiveLinkTransformFrameData GetFrameData() {
		return memory.read<struct FLiveLinkTransformFrameData>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkFrameData
{
public:
	FLiveLinkFrameData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTransform> GetTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 0);
	}
	struct TArray<struct FLiveLinkCurveElement> GetCurveElements() {
		return memory.read<struct TArray<struct FLiveLinkCurveElement>>(m_addr + 16);
	}
	struct FLiveLinkWorldTime GetWorldTime() {
		return memory.read<struct FLiveLinkWorldTime>(m_addr + 32);
	}
	struct FLiveLinkMetaData GetMetaData() {
		return memory.read<struct FLiveLinkMetaData>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkTimeCode
{
public:
	FLiveLinkTimeCode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};