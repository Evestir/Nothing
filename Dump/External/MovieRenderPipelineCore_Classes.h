#pragma once 
#include <MovieRenderPipelineCore_Structs.h>
 
 
 
class UMoviePipeline
{
public:
	UMoviePipeline(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnMoviePipelineFinishedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnMoviePipelineWorkFinishedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}
	struct FMulticastInlineDelegate GetOnMoviePipelineShotWorkFinishedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 72);
	}
	struct UMoviePipelineCustomTimeStep GetCustomTimeStep() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UMoviePipelineCustomTimeStep(ptr_addr);
	}
	struct UEngineCustomTimeStep GetCachedPrevCustomTimeStep() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UEngineCustomTimeStep(ptr_addr);
	}
	struct ULevelSequence GetTargetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct ULevelSequence(ptr_addr);
	}
	struct ALevelSequenceActor GetLevelSequenceActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct ALevelSequenceActor(ptr_addr);
	}
	struct UMovieRenderDebugWidget GetDebugWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UMovieRenderDebugWidget(ptr_addr);
	}
	struct UTexture GetPreviewTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UTexture(ptr_addr);
	}
	UMovieRenderDebugWidget GetDebugWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return UMovieRenderDebugWidget(ptr_addr);
	}
	struct UMoviePipelineExecutorJob GetCurrentJob() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UMoviePipelineExecutorJob(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineAntiAliasingSetting
{
public:
	UMoviePipelineAntiAliasingSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSpatialSampleCount() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetTemporalSampleCount() {
		return memory.read<int32_t>(m_addr + 76);
	}
	bool GetbOverrideAntiAliasing() {
		return memory.read<bool>(m_addr + 80);
	}
	enum class EAntiAliasingMethod GetAntiAliasingMethod() {
		return memory.read<enum class EAntiAliasingMethod>(m_addr + 81);
	}
	int32_t GetRenderWarmUpCount() {
		return memory.read<int32_t>(m_addr + 84);
	}
	bool GetbUseCameraCutForWarmUp() {
		return memory.read<bool>(m_addr + 88);
	}
	int32_t GetEngineWarmUpCount() {
		return memory.read<int32_t>(m_addr + 92);
	}
	bool GetbRenderWarmUpFrames() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineInProcessExecutor
{
public:
	UMoviePipelineInProcessExecutor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseCurrentLevel() {
		return memory.read<bool>(m_addr + 304);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineCustomTimeStep
{
public:
	UMoviePipelineCustomTimeStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineExecutorBase
{
public:
	UMoviePipelineExecutorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnExecutorFinishedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnExecutorErroredDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 80);
	}
	struct FMulticastInlineDelegate GetSocketMessageRecievedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 128);
	}
	struct FMulticastInlineDelegate GetHTTPResponseRecievedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 144);
	}
	UMovieRenderDebugWidget GetDebugWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return UMovieRenderDebugWidget(ptr_addr);
	}
	struct FString GetUserData() {
		return memory.read<struct FString>(m_addr + 168);
	}
	UMoviePipeline GetTargetPipelineClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return UMoviePipeline(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineSetting
{
public:
	UMoviePipelineSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<UMoviePipeline> GetCachedPipeline() {
		return memory.read<struct TWeakObjectPtr<UMoviePipeline>>(m_addr + 40);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineHighResSetting
{
public:
	UMoviePipelineHighResSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTileCount() {
		return memory.read<int32_t>(m_addr + 72);
	}
	float GetTextureSharpnessBias() {
		return memory.read<float>(m_addr + 76);
	}
	float GetOverlapRatio() {
		return memory.read<float>(m_addr + 80);
	}
	bool GetbOverrideSubSurfaceScattering() {
		return memory.read<bool>(m_addr + 84);
	}
	int32_t GetBurleySampleCount() {
		return memory.read<int32_t>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineDebugSettings
{
public:
	UMoviePipelineDebugSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWriteAllSamples() {
		return memory.read<bool>(m_addr + 72);
	}
	bool GetbCaptureFramesWithRenderDoc() {
		return memory.read<bool>(m_addr + 73);
	}
	int32_t GetCaptureFrame() {
		return memory.read<int32_t>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineBlueprintLibrary
{
public:
	UMoviePipelineBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineRenderPass
{
public:
	UMoviePipelineRenderPass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineCameraSetting
{
public:
	UMoviePipelineCameraSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMoviePipelineShutterTiming GetShutterTiming() {
		return memory.read<enum class EMoviePipelineShutterTiming>(m_addr + 72);
	}
	float GetOverscanPercentage() {
		return memory.read<float>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineCommandLineEncoder
{
public:
	UMoviePipelineCommandLineEncoder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFileNameFormatOverride() {
		return memory.read<struct FString>(m_addr + 72);
	}
	enum class EMoviePipelineEncodeQuality GetQuality() {
		return memory.read<enum class EMoviePipelineEncodeQuality>(m_addr + 88);
	}
	struct FString GetAdditionalCommandLineArgs() {
		return memory.read<struct FString>(m_addr + 96);
	}
	bool GetbDeleteSourceFiles() {
		return memory.read<bool>(m_addr + 112);
	}
	bool GetbSkipEncodeOnRenderCanceled() {
		return memory.read<bool>(m_addr + 113);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineColorSetting
{
public:
	UMoviePipelineColorSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOpenColorIODisplayConfiguration GetOCIOConfiguration() {
		return memory.read<struct FOpenColorIODisplayConfiguration>(m_addr + 72);
	}
	bool GetbDisableToneCurve() {
		return memory.read<bool>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineCommandLineEncoderSettings
{
public:
	UMoviePipelineCommandLineEncoderSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetExecutablePath() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FText GetCodecHelpText() {
		return memory.read<struct FText>(m_addr + 72);
	}
	struct FString GetVideoCodec() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetAudioCodec() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetOutputFileExtension() {
		return memory.read<struct FString>(m_addr + 128);
	}
	struct FString GetCommandLineFormat() {
		return memory.read<struct FString>(m_addr + 144);
	}
	struct FString GetVideoInputStringFormat() {
		return memory.read<struct FString>(m_addr + 160);
	}
	struct FString GetAudioInputStringFormat() {
		return memory.read<struct FString>(m_addr + 176);
	}
	struct FString GetEncodeSettings_Low() {
		return memory.read<struct FString>(m_addr + 192);
	}
	struct FString GetEncodeSettings_Med() {
		return memory.read<struct FString>(m_addr + 208);
	}
	struct FString GetEncodeSettings_High() {
		return memory.read<struct FString>(m_addr + 224);
	}
	struct FString GetEncodeSettings_Epic() {
		return memory.read<struct FString>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineConfigBase
{
public:
	UMoviePipelineConfigBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDisplayName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct TArray<struct UMoviePipelineSetting> GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UMoviePipelineSetting>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineOutputBase
{
public:
	UMoviePipelineOutputBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineFCPXMLExporter
{
public:
	UMoviePipelineFCPXMLExporter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFileNameFormatOverride() {
		return memory.read<struct FString>(m_addr + 80);
	}
	enum class FCPXMLExportDataSource GetDataSource() {
		return memory.read<enum class FCPXMLExportDataSource>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class AMoviePipelineGameMode
{
public:
	AMoviePipelineGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineGameOverrideSetting
{
public:
	UMoviePipelineGameOverrideSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	AGameModeBase GetGameModeOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return AGameModeBase(ptr_addr);
	}
	bool GetbCinematicQualitySettings() {
		return memory.read<bool>(m_addr + 80);
	}
	enum class EMoviePipelineTextureStreamingMethod GetTextureStreaming() {
		return memory.read<enum class EMoviePipelineTextureStreamingMethod>(m_addr + 81);
	}
	bool GetbUseLODZero() {
		return memory.read<bool>(m_addr + 82);
	}
	bool GetbDisableHLODs() {
		return memory.read<bool>(m_addr + 83);
	}
	bool GetbUseHighQualityShadows() {
		return memory.read<bool>(m_addr + 84);
	}
	int32_t GetShadowDistanceScale() {
		return memory.read<int32_t>(m_addr + 88);
	}
	float GetShadowRadiusThreshold() {
		return memory.read<float>(m_addr + 92);
	}
	bool GetbOverrideViewDistanceScale() {
		return memory.read<bool>(m_addr + 96);
	}
	int32_t GetViewDistanceScale() {
		return memory.read<int32_t>(m_addr + 100);
	}
	bool GetbFlushGrassStreaming() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineViewFamilySetting
{
public:
	UMoviePipelineViewFamilySetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineLinearExecutorBase
{
public:
	UMoviePipelineLinearExecutorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineQueue GetQueue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UMoviePipelineQueue(ptr_addr);
	}
	struct UMoviePipeline GetActiveMoviePipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct UMoviePipeline(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineInProcessExecutorSettings
{
public:
	UMoviePipelineInProcessExecutorSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbCloseEditor() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FString GetAdditionalCommandLineArguments() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetInheritedCommandLineArguments() {
		return memory.read<struct FString>(m_addr + 80);
	}
	int32_t GetInitialDelayFrameCount() {
		return memory.read<int32_t>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineMasterConfig
{
public:
	UMoviePipelineMasterConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct UMoviePipelineShotConfig> GetPerShotConfigMapping() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TMap<struct FString, struct UMoviePipelineShotConfig>(ptr_addr);
	}
	struct UMoviePipelineOutputSetting GetOutputSetting() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UMoviePipelineOutputSetting(ptr_addr);
	}
	struct TArray<struct UMoviePipelineSetting> GetTransientSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct TArray<struct UMoviePipelineSetting>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineOutputSetting
{
public:
	UMoviePipelineOutputSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDirectoryPath GetOutputDirectory() {
		return memory.read<struct FDirectoryPath>(m_addr + 72);
	}
	struct FString GetFileNameFormat() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FIntPoint GetOutputResolution() {
		return memory.read<struct FIntPoint>(m_addr + 104);
	}
	bool GetbUseCustomFrameRate() {
		return memory.read<bool>(m_addr + 112);
	}
	struct FFrameRate GetOutputFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 116);
	}
	bool GetbOverrideExistingOutput() {
		return memory.read<bool>(m_addr + 128);
	}
	int32_t GetHandleFrameCount() {
		return memory.read<int32_t>(m_addr + 132);
	}
	int32_t GetOutputFrameStep() {
		return memory.read<int32_t>(m_addr + 136);
	}
	bool GetbUseCustomPlaybackRange() {
		return memory.read<bool>(m_addr + 140);
	}
	int32_t GetCustomStartFrame() {
		return memory.read<int32_t>(m_addr + 144);
	}
	int32_t GetCustomEndFrame() {
		return memory.read<int32_t>(m_addr + 148);
	}
	int32_t GetVersionNumber() {
		return memory.read<int32_t>(m_addr + 152);
	}
	bool GetbAutoVersion() {
		return memory.read<bool>(m_addr + 156);
	}
	int32_t GetZeroPadFrameNumbers() {
		return memory.read<int32_t>(m_addr + 160);
	}
	int32_t GetFrameNumberOffset() {
		return memory.read<int32_t>(m_addr + 164);
	}
	bool GetbFlushDiskWritesPerShot() {
		return memory.read<bool>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelinePythonHostExecutor
{
public:
	UMoviePipelinePythonHostExecutor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UMoviePipelinePythonHostExecutor GetExecutorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return UMoviePipelinePythonHostExecutor(ptr_addr);
	}
	struct UMoviePipelineQueue GetPipelineQueue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct UMoviePipelineQueue(ptr_addr);
	}
	struct UWorld GetLastLoadedWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 280);
		return struct UWorld(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineExecutorShot
{
public:
	UMoviePipelineExecutorShot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FString GetOuterName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetInnerName() {
		return memory.read<struct FString>(m_addr + 64);
	}
	float GetProgress() {
		return memory.read<float>(m_addr + 232);
	}
	struct FString GetStatusMessage() {
		return memory.read<struct FString>(m_addr + 240);
	}
	struct UMoviePipelineShotConfig GetShotOverrideConfig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct UMoviePipelineShotConfig(ptr_addr);
	}
	struct TSoftObjectPtr<UMoviePipelineShotConfig> GetShotOverridePresetOrigin() {
		return memory.read<struct TSoftObjectPtr<UMoviePipelineShotConfig>>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineExecutorJob
{
public:
	UMoviePipelineExecutorJob(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetJobName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FSoftObjectPath GetSequence() {
		return memory.read<struct FSoftObjectPath>(m_addr + 56);
	}
	struct FSoftObjectPath GetMap() {
		return memory.read<struct FSoftObjectPath>(m_addr + 80);
	}
	struct FString GetAuthor() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct TArray<struct UMoviePipelineExecutorShot> GetShotInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct TArray<struct UMoviePipelineExecutorShot>(ptr_addr);
	}
	struct FString GetUserData() {
		return memory.read<struct FString>(m_addr + 136);
	}
	struct FString GetStatusMessage() {
		return memory.read<struct FString>(m_addr + 152);
	}
	float GetStatusProgress() {
		return memory.read<float>(m_addr + 168);
	}
	bool GetbIsConsumed() {
		return memory.read<bool>(m_addr + 172);
	}
	struct UMoviePipelineMasterConfig GetConfiguration() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UMoviePipelineMasterConfig(ptr_addr);
	}
	struct TSoftObjectPtr<UMoviePipelineMasterConfig> GetPresetOrigin() {
		return memory.read<struct TSoftObjectPtr<UMoviePipelineMasterConfig>>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineQueue
{
public:
	UMoviePipelineQueue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMoviePipelineExecutorJob> GetJobs() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UMoviePipelineExecutorJob>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineVideoOutputBase
{
public:
	UMoviePipelineVideoOutputBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineQueueEngineSubsystem
{
public:
	UMoviePipelineQueueEngineSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipelineExecutorBase GetActiveExecutor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UMoviePipelineExecutorBase(ptr_addr);
	}
	struct UMoviePipelineQueue GetCurrentQueue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UMoviePipelineQueue(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoviePipelineShotConfig
{
public:
	UMoviePipelineShotConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieRenderDebugWidget
{
public:
	UMovieRenderDebugWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


