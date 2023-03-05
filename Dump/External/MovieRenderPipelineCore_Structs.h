#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetStatusMessage
{
public:
	FGetStatusMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelineShotOutputData
{
public:
	FMoviePipelineShotOutputData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<UMoviePipelineExecutorShot> GetShot() {
		return memory.read<struct TWeakObjectPtr<UMoviePipelineExecutorShot>>(m_addr + 0);
	}
	struct TMap<struct FMoviePipelinePassIdentifier, struct FMoviePipelineRenderPassOutputData> GetRenderPassData() {
		return memory.read<struct TMap<struct FMoviePipelinePassIdentifier, struct FMoviePipelineRenderPassOutputData>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelineSegmentWorkMetrics
{
public:
	FMoviePipelineSegmentWorkMetrics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSegmentName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetOutputFrameIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetTotalOutputFrameCount() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetOutputSubSampleIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetTotalSubSampleCount() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t GetEngineWarmUpFrameIndex() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetTotalEngineWarmUpFrameCount() {
		return memory.read<int32_t>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelineOutputData
{
public:
	FMoviePipelineOutputData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetPipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	struct UMoviePipelineExecutorJob GetJob() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMoviePipelineExecutorJob(ptr_addr);
	}
	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 16);
	}
	struct TArray<struct FMoviePipelineShotOutputData> GetShotData() {
		return memory.read<struct TArray<struct FMoviePipelineShotOutputData>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelineFinished__DelegateSignature
{
public:
	FMoviePipelineFinished__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	bool GetbFatalError() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetJobInitializationTime
{
public:
	FGetJobInitializationTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	struct FDateTime GetReturnValue() {
		return memory.read<struct FDateTime>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMoviePipelineExecutorErrored__DelegateSignature
{
public:
	FOnMoviePipelineExecutorErrored__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineExecutorBase GetPipelineExecutor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineExecutorBase(ptr_addr);
	}
	struct UMoviePipeline GetPipelineWithError() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMoviePipeline(ptr_addr);
	}
	bool GetbIsFatal() {
		return memory.read<bool>(m_addr + 16);
	}
	struct FText GetErrorText() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelineWorkFinished__DelegateSignature
{
public:
	FMoviePipelineWorkFinished__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMoviePipelineOutputData GetResults() {
		return memory.read<struct FMoviePipelineOutputData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMasterFrameNumber
{
public:
	FGetMasterFrameNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	struct FFrameNumber GetReturnValue() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelinePassIdentifier
{
public:
	FMoviePipelinePassIdentifier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindSettingByClass
{
public:
	FFindSettingByClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UMoviePipelineSetting GetInClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UMoviePipelineSetting(ptr_addr);
	}
	bool GetbIncludeDisabledSettings() {
		return memory.read<bool>(m_addr + 8);
	}
	struct UMoviePipelineSetting GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMoviePipelineSetting(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentSegmentWorkMetrics
{
public:
	FGetCurrentSegmentWorkMetrics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	struct FMoviePipelineSegmentWorkMetrics GetReturnValue() {
		return memory.read<struct FMoviePipelineSegmentWorkMetrics>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDuplicateJob
{
public:
	FDuplicateJob(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineExecutorJob GetInJob() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineExecutorJob(ptr_addr);
	}
	struct UMoviePipelineExecutorJob GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMoviePipelineExecutorJob(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelineRenderPassOutputData
{
public:
	FMoviePipelineRenderPassOutputData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetFilePaths() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelineFilenameResolveParams
{
public:
	FMoviePipelineFilenameResolveParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetFrameNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFrameNumberShot() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetFrameNumberRel() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetFrameNumberShotRel() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct FString GetCameraNameOverride() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetShotNameOverride() {
		return memory.read<struct FString>(m_addr + 32);
	}
	int32_t GetZeroPadFrameNumberCount() {
		return memory.read<int32_t>(m_addr + 48);
	}
	bool GetbForceRelativeFrameNumbers() {
		return memory.read<bool>(m_addr + 52);
	}
	struct TMap<struct FString, struct FString> GetFileNameFormatOverrides() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 56);
	}
	struct TMap<struct FString, struct FString> GetFileMetadata() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 136);
	}
	struct FDateTime GetInitializationTime() {
		return memory.read<struct FDateTime>(m_addr + 216);
	}
	int32_t GetInitializationVersion() {
		return memory.read<int32_t>(m_addr + 224);
	}
	struct UMoviePipelineExecutorJob GetJob() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UMoviePipelineExecutorJob(ptr_addr);
	}
	struct UMoviePipelineExecutorShot GetShotOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UMoviePipelineExecutorShot(ptr_addr);
	}
	int32_t GetAdditionalFrameNumberOffset() {
		return memory.read<int32_t>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMoviePipelineExecutorFinished__DelegateSignature
{
public:
	FOnMoviePipelineExecutorFinished__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineExecutorBase GetPipelineExecutor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineExecutorBase(ptr_addr);
	}
	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelineSocketMessageRecieved__DelegateSignature
{
public:
	FMoviePipelineSocketMessageRecieved__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMessage() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentSegmentName
{
public:
	FGetCurrentSegmentName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	struct FText GetOutOuterName() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct FText GetOutInnerName() {
		return memory.read<struct FText>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelineHttpResponseRecieved__DelegateSignature
{
public:
	FMoviePipelineHttpResponseRecieved__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRequestIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetResponseCode() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FString GetMessage() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelineFormatArgs
{
public:
	FMoviePipelineFormatArgs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FString> GetFilenameArguments() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 0);
	}
	struct TMap<struct FString, struct FString> GetFileMetadata() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 80);
	}
	struct UMoviePipelineExecutorJob GetInJob() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UMoviePipelineExecutorJob(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEstimatedTimeRemaining
{
public:
	FGetEstimatedTimeRemaining(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInPipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	struct FTimespan GetOutEstimate() {
		return memory.read<struct FTimespan>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoviePipelineCameraCutInfo
{
public:
	FMoviePipelineCameraCutInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetPipelineMasterConfig
{
public:
	FGetPipelineMasterConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineMasterConfig GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineMasterConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecute
{
public:
	FExecute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineQueue GetInPipelineQueue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineQueue(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPreviewTexture
{
public:
	FGetPreviewTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitialize
{
public:
	FInitialize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineExecutorJob GetInJob() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineExecutorJob(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsShutdownRequested
{
public:
	FIsShutdownRequested(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestShutdown
{
public:
	FRequestShutdown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsError() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSocketConnected
{
public:
	FIsSocketConnected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveSetting
{
public:
	FRemoveSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineSetting GetInSetting() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineSetting(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBuildNewProcessCommandLine
{
public:
	FBuildNewProcessCommandLine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInOutUnrealURLParams() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInOutCommandLineArgs() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FShutdown
{
public:
	FShutdown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbError() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDuplicateSequence
{
public:
	FDuplicateSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetOuter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UMovieSceneSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMovieSceneSequence(ptr_addr);
	}
	struct UMovieSceneSequence GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMovieSceneSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindOrGetDefaultSettingForShot
{
public:
	FFindOrGetDefaultSettingForShot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UMoviePipelineSetting GetInSettingType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UMoviePipelineSetting(ptr_addr);
	}
	struct UMoviePipelineMasterConfig GetInMasterConfig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMoviePipelineMasterConfig(ptr_addr);
	}
	struct UMoviePipelineExecutorShot GetInShot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMoviePipelineExecutorShot(ptr_addr);
	}
	struct UMoviePipelineSetting GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UMoviePipelineSetting(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMasterTimecode
{
public:
	FGetMasterTimecode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	struct FTimecode GetReturnValue() {
		return memory.read<struct FTimecode>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCompletionPercentage
{
public:
	FGetCompletionPercentage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInPipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FResolveVersionNumber
{
public:
	FResolveVersionNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMoviePipelineFilenameResolveParams GetInParams() {
		return memory.read<struct FMoviePipelineFilenameResolveParams>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentAperture
{
public:
	FGetCurrentAperture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentFocalLength
{
public:
	FGetCurrentFocalLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindOrAddSettingByClass
{
public:
	FFindOrAddSettingByClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UMoviePipelineSetting GetInClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UMoviePipelineSetting(ptr_addr);
	}
	bool GetbIncludeDisabledSettings() {
		return memory.read<bool>(m_addr + 8);
	}
	struct UMoviePipelineSetting GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMoviePipelineSetting(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentFocusDistance
{
public:
	FGetCurrentFocusDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStatusProgress
{
public:
	FGetStatusProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentSegmentState
{
public:
	FGetCurrentSegmentState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	enum class EMovieRenderShotState GetReturnValue() {
		return memory.read<enum class EMovieRenderShotState>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentShotFrameNumber
{
public:
	FGetCurrentShotFrameNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	struct FFrameNumber GetReturnValue() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FConnectSocket
{
public:
	FConnectSocket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInHostName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetInPort() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentShotTimecode
{
public:
	FGetCurrentShotTimecode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	struct FTimecode GetReturnValue() {
		return memory.read<struct FTimecode>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEffectiveOutputResolution
{
public:
	FGetEffectiveOutputResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineMasterConfig GetInMasterConfig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineMasterConfig(ptr_addr);
	}
	struct UMoviePipelineExecutorShot GetInPipelineExecutorShot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMoviePipelineExecutorShot(ptr_addr);
	}
	struct FIntPoint GetReturnValue() {
		return memory.read<struct FIntPoint>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUserSettings
{
public:
	FGetUserSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMoviePipelineSetting> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UMoviePipelineSetting>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetJobAuthor
{
public:
	FGetJobAuthor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetJobName
{
public:
	FGetJobName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMapPackageName
{
public:
	FGetMapPackageName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineExecutorJob GetInJob() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineExecutorJob(ptr_addr);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOverallOutputFrames
{
public:
	FGetOverallOutputFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	int32_t GetOutCurrentIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetOutTotalCount() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendSocketMessage
{
public:
	FSendSocketMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInMessage() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOverallSegmentCounts
{
public:
	FGetOverallSegmentCounts(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	int32_t GetOutCurrentIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetOutTotalCount() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPipelineState
{
public:
	FGetPipelineState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetInPipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	enum class EMovieRenderPipelineState GetReturnValue() {
		return memory.read<enum class EMovieRenderPipelineState>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FResolveFilenameFormatArguments
{
public:
	FResolveFilenameFormatArguments(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInFormatString() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FMoviePipelineFilenameResolveParams GetInParams() {
		return memory.read<struct FMoviePipelineFilenameResolveParams>(m_addr + 16);
	}
	struct FString GetOutFinalPath() {
		return memory.read<struct FString>(m_addr + 272);
	}
	struct FMoviePipelineFormatArgs GetOutMergedFormatArgs() {
		return memory.read<struct FMoviePipelineFormatArgs>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateJobShotListFromSequence
{
public:
	FUpdateJobShotListFromSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevelSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULevelSequence(ptr_addr);
	}
	struct UMoviePipelineExecutorJob GetInJob() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMoviePipelineExecutorJob(ptr_addr);
	}
	bool GetbShotsChanged() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCopyFrom
{
public:
	FCopyFrom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineQueue GetInQueue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineQueue(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindSettingsByClass
{
public:
	FFindSettingsByClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UMoviePipelineSetting GetInClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UMoviePipelineSetting(ptr_addr);
	}
	bool GetbIncludeDisabledSettings() {
		return memory.read<bool>(m_addr + 8);
	}
	struct TArray<struct UMoviePipelineSetting> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UMoviePipelineSetting>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsRendering
{
public:
	FIsRendering(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStatusProgress
{
public:
	FSetStatusProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInProgress() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnExecutorErroredImpl
{
public:
	FOnExecutorErroredImpl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetErroredPipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}
	bool GetbFatal() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FText GetErrorReason() {
		return memory.read<struct FText>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendHTTPRequest
{
public:
	FSendHTTPRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInURL() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInVerb() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetInMessage() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct TMap<struct FString, struct FString> GetInHeaders() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 48);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMoviePipelineClass
{
public:
	FSetMoviePipelineClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetInPipelineClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStatusMessage
{
public:
	FSetStatusMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInStatus() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllSettings
{
public:
	FGetAllSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIncludeDisabledSettings() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbIncludeTransientSettings() {
		return memory.read<bool>(m_addr + 1);
	}
	struct TArray<struct UMoviePipelineSetting> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UMoviePipelineSetting>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEffectiveFrameRate
{
public:
	FGetEffectiveFrameRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevelSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULevelSequence(ptr_addr);
	}
	struct FFrameRate GetReturnValue() {
		return memory.read<struct FFrameRate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTransientSettings
{
public:
	FGetTransientSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMoviePipelineSetting> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UMoviePipelineSetting>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteDelayed
{
public:
	FExecuteDelayed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineQueue GetInPipelineQueue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineQueue(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLastLoadedWorld
{
public:
	FGetLastLoadedWorld(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWorld(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMapLoad
{
public:
	FOnMapLoad(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetInWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWorld(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAllocateNewShotOverrideConfig
{
public:
	FAllocateNewShotOverrideConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UMoviePipelineShotConfig GetInConfigType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UMoviePipelineShotConfig(ptr_addr);
	}
	struct UMoviePipelineShotConfig GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMoviePipelineShotConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetShotOverrideConfiguration
{
public:
	FGetShotOverrideConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineShotConfig GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineShotConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetShotOverridePresetOrigin
{
public:
	FGetShotOverridePresetOrigin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineShotConfig GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineShotConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetShotOverrideConfiguration
{
public:
	FSetShotOverrideConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineShotConfig GetInPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineShotConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetShotOverridePresetOrigin
{
public:
	FSetShotOverridePresetOrigin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineShotConfig GetInPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineShotConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FShouldRender
{
public:
	FShouldRender(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetConfiguration
{
public:
	FGetConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineMasterConfig GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineMasterConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPresetOrigin
{
public:
	FGetPresetOrigin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineMasterConfig GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineMasterConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsConsumed
{
public:
	FIsConsumed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetConfiguration
{
public:
	FSetConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineMasterConfig GetInPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineMasterConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetConsumed
{
public:
	FSetConsumed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInConsumed() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPresetOrigin
{
public:
	FSetPresetOrigin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineMasterConfig GetInPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineMasterConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSequence
{
public:
	FSetSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftObjectPath GetInSequence() {
		return memory.read<struct FSoftObjectPath>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAllocateNewJob
{
public:
	FAllocateNewJob(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UMoviePipelineExecutorJob GetInJobType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UMoviePipelineExecutorJob(ptr_addr);
	}
	struct UMoviePipelineExecutorJob GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMoviePipelineExecutorJob(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteJob
{
public:
	FDeleteJob(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineExecutorJob GetInJob() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineExecutorJob(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetJobs
{
public:
	FGetJobs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMoviePipelineExecutorJob> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UMoviePipelineExecutorJob>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActiveExecutor
{
public:
	FGetActiveExecutor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineExecutorBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineExecutorBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetQueue
{
public:
	FGetQueue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineQueue GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineQueue(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRenderQueueWithExecutor
{
public:
	FRenderQueueWithExecutor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UMoviePipelineExecutorBase GetInExecutorType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UMoviePipelineExecutorBase(ptr_addr);
	}
	struct UMoviePipelineExecutorBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMoviePipelineExecutorBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRenderQueueWithExecutorInstance
{
public:
	FRenderQueueWithExecutorInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineExecutorBase GetInExecutor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipelineExecutorBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnInitializedForPipeline
{
public:
	FOnInitializedForPipeline(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetForPipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};