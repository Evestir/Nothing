#pragma once 
#include <MovieRenderPipelineCore_Structs.h>
 
 
 
//Class MovieRenderPipelineCore.MoviePipeline Size 736
// Inherited 40 bytes 
class UMoviePipeline : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnMoviePipelineFinishedDelegate;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnMoviePipelineWorkFinishedDelegate;  // Offset: 56 Size: 16
	struct FMulticastInlineDelegate OnMoviePipelineShotWorkFinishedDelegate;  // Offset: 72 Size: 16
	struct UMoviePipelineCustomTimeStep* CustomTimeStep;  // Offset: 88 Size: 8
	char pad_96[16];  // Offset: 96 Size: 16
	struct UEngineCustomTimeStep* CachedPrevCustomTimeStep;  // Offset: 112 Size: 8
	struct ULevelSequence* TargetSequence;  // Offset: 120 Size: 8
	struct ALevelSequenceActor* LevelSequenceActor;  // Offset: 128 Size: 8
	struct UMovieRenderDebugWidget* DebugWidget;  // Offset: 136 Size: 8
	struct UTexture* PreviewTexture;  // Offset: 144 Size: 8
	char pad_152[520];  // Offset: 152 Size: 520
	UMovieRenderDebugWidget* DebugWidgetClass;  // Offset: 672 Size: 8
	struct UMoviePipelineExecutorJob* CurrentJob;  // Offset: 680 Size: 8
	char pad_688[48];  // Offset: 688 Size: 48



 // Functions 
 public:
	void Shutdown(bool bError); // Function MovieRenderPipelineCore.MoviePipeline.Shutdown
	void RequestShutdown(bool bIsError); // Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown
	void OnMoviePipelineFinishedImpl(); // Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
	bool IsShutdownRequested(); // Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
	void Initialize(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipeline.Initialize
	struct UTexture* GetPreviewTexture(); // Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
	struct UMoviePipelineMasterConfig* GetPipelineMasterConfig(); // Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting Size 104
// Inherited 72 bytes 
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{

 public: 
	int32_t SpatialSampleCount;  // Offset: 72 Size: 4
	int32_t TemporalSampleCount;  // Offset: 76 Size: 4
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bOverrideAntiAliasing : 1;  // Offset: 80 Size: 1
	enum class EAntiAliasingMethod AntiAliasingMethod;  // Offset: 81 Size: 1
	char pad_82[2];  // Offset: 82 Size: 2
	int32_t RenderWarmUpCount;  // Offset: 84 Size: 4
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	bool bUseCameraCutForWarmUp : 1;  // Offset: 88 Size: 1
	char pad_89[3];  // Offset: 89 Size: 3
	int32_t EngineWarmUpCount;  // Offset: 92 Size: 4
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bRenderWarmUpFrames : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor Size 360
// Inherited 304 bytes 
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{

 public: 
	char pad_304_1 : 7;  // Offset: 304 Size: 1
	bool bUseCurrentLevel : 1;  // Offset: 304 Size: 1
	char pad_305[55];  // Offset: 305 Size: 55



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep Size 48
// Inherited 40 bytes 
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineExecutorBase Size 264
// Inherited 40 bytes 
class UMoviePipelineExecutorBase : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnExecutorFinishedDelegate;  // Offset: 40 Size: 16
	char pad_56[24];  // Offset: 56 Size: 24
	struct FMulticastInlineDelegate OnExecutorErroredDelegate;  // Offset: 80 Size: 16
	char pad_96[32];  // Offset: 96 Size: 32
	struct FMulticastInlineDelegate SocketMessageRecievedDelegate;  // Offset: 128 Size: 16
	struct FMulticastInlineDelegate HTTPResponseRecievedDelegate;  // Offset: 144 Size: 16
	UMovieRenderDebugWidget* DebugWidgetClass;  // Offset: 160 Size: 8
	struct FString UserData;  // Offset: 168 Size: 16
	UMoviePipeline* TargetPipelineClass;  // Offset: 184 Size: 8
	char pad_192[72];  // Offset: 192 Size: 72



 // Functions 
 public:
	void SetStatusProgress(float InProgress); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
	void SetStatusMessage(struct FString InStatus); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
	void SetMoviePipelineClass(UObject* InPipelineClass); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
	bool SendSocketMessage(struct FString InMessage); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
	int32_t SendHTTPRequest(struct FString InURL, struct FString InVerb, struct FString InMessage, struct TMap<struct FString, struct FString>& InHeaders); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
	void OnExecutorFinishedImpl(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
	void OnExecutorErroredImpl(struct UMoviePipeline* ErroredPipeline, bool bFatal, struct FText ErrorReason); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
	void OnBeginFrame(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
	bool IsSocketConnected(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
	bool IsRendering(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
	float GetStatusProgress(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
	struct FString GetStatusMessage(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
	void Execute(struct UMoviePipelineQueue* InPipelineQueue); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
	void DisconnectSocket(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
	bool ConnectSocket(struct FString InHostName, int32_t InPort); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
	void CancelCurrentJob(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
	void CancelAllJobs(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineSetting Size 72
// Inherited 40 bytes 
class UMoviePipelineSetting : public UObject
{

 public: 
	struct TWeakObjectPtr<UMoviePipeline> CachedPipeline;  // Offset: 40 Size: 8
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bEnabled : 1;  // Offset: 48 Size: 1
	char pad_49[23];  // Offset: 49 Size: 23



 // Functions 
 public:
	void BuildNewProcessCommandLine(struct FString& InOutUnrealURLParams, struct FString& InOutCommandLineArgs); // Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineHighResSetting Size 96
// Inherited 72 bytes 
class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{

 public: 
	int32_t TileCount;  // Offset: 72 Size: 4
	float TextureSharpnessBias;  // Offset: 76 Size: 4
	float OverlapRatio;  // Offset: 80 Size: 4
	char pad_84_1 : 7;  // Offset: 84 Size: 1
	bool bOverrideSubSurfaceScattering : 1;  // Offset: 84 Size: 1
	char pad_85[3];  // Offset: 85 Size: 3
	int32_t BurleySampleCount;  // Offset: 88 Size: 4
	char pad_92[4];  // Offset: 92 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineDebugSettings Size 88
// Inherited 72 bytes 
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{

 public: 
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool bWriteAllSamples : 1;  // Offset: 72 Size: 1
	char pad_73_1 : 7;  // Offset: 73 Size: 1
	bool bCaptureFramesWithRenderDoc : 1;  // Offset: 73 Size: 1
	char pad_74[2];  // Offset: 74 Size: 2
	int32_t CaptureFrame;  // Offset: 76 Size: 4
	char pad_80[8];  // Offset: 80 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary Size 40
// Inherited 40 bytes 
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void UpdateJobShotListFromSequence(struct ULevelSequence* InSequence, struct UMoviePipelineExecutorJob* InJob, bool& bShotsChanged); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
	int32_t ResolveVersionNumber(struct FMoviePipelineFilenameResolveParams InParams); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
	void ResolveFilenameFormatArguments(struct FString InFormatString, struct FMoviePipelineFilenameResolveParams& InParams, struct FString& OutFinalPath, struct FMoviePipelineFormatArgs& OutMergedFormatArgs); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
	enum class EMovieRenderPipelineState GetPipelineState(struct UMoviePipeline* InPipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
	void GetOverallSegmentCounts(struct UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
	void GetOverallOutputFrames(struct UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
	struct FTimecode GetMasterTimecode(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
	struct FFrameNumber GetMasterFrameNumber(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
	struct FString GetMapPackageName(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
	struct FText GetJobName(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
	struct FDateTime GetJobInitializationTime(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
	struct FText GetJobAuthor(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
	bool GetEstimatedTimeRemaining(struct UMoviePipeline* InPipeline, struct FTimespan& OutEstimate); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
	struct FIntPoint GetEffectiveOutputResolution(struct UMoviePipelineMasterConfig* InMasterConfig, struct UMoviePipelineExecutorShot* InPipelineExecutorShot); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
	struct FTimecode GetCurrentShotTimecode(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
	struct FFrameNumber GetCurrentShotFrameNumber(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
	struct FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
	enum class EMovieRenderShotState GetCurrentSegmentState(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
	void GetCurrentSegmentName(struct UMoviePipeline* InMoviePipeline, struct FText& OutOuterName, struct FText& OutInnerName); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
	float GetCurrentFocusDistance(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
	float GetCurrentFocalLength(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
	float GetCurrentAperture(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
	float GetCompletionPercentage(struct UMoviePipeline* InPipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
	struct UMoviePipelineSetting* FindOrGetDefaultSettingForShot(UMoviePipelineSetting* InSettingType, struct UMoviePipelineMasterConfig* InMasterConfig, struct UMoviePipelineExecutorShot* InShot); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
	struct UMovieSceneSequence* DuplicateSequence(struct UObject* Outer, struct UMovieSceneSequence* InSequence); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineRenderPass Size 72
// Inherited 72 bytes 
class UMoviePipelineRenderPass : public UMoviePipelineSetting
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineCameraSetting Size 80
// Inherited 72 bytes 
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{

 public: 
	enum class EMoviePipelineShutterTiming ShutterTiming;  // Offset: 72 Size: 1
	char pad_73[3];  // Offset: 73 Size: 3
	float OverscanPercentage;  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder Size 136
// Inherited 72 bytes 
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{

 public: 
	struct FString FileNameFormatOverride;  // Offset: 72 Size: 16
	enum class EMoviePipelineEncodeQuality Quality;  // Offset: 88 Size: 1
	char pad_89[7];  // Offset: 89 Size: 7
	struct FString AdditionalCommandLineArgs;  // Offset: 96 Size: 16
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bDeleteSourceFiles : 1;  // Offset: 112 Size: 1
	char pad_113_1 : 7;  // Offset: 113 Size: 1
	bool bSkipEncodeOnRenderCanceled : 1;  // Offset: 113 Size: 1
	char pad_114[22];  // Offset: 114 Size: 22



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineColorSetting Size 176
// Inherited 72 bytes 
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{

 public: 
	struct FOpenColorIODisplayConfiguration OCIOConfiguration;  // Offset: 72 Size: 96
	char pad_168_1 : 7;  // Offset: 168 Size: 1
	bool bDisableToneCurve : 1;  // Offset: 168 Size: 1
	char pad_169[7];  // Offset: 169 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings Size 256
// Inherited 56 bytes 
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{

 public: 
	struct FString ExecutablePath;  // Offset: 56 Size: 16
	struct FText CodecHelpText;  // Offset: 72 Size: 24
	struct FString VideoCodec;  // Offset: 96 Size: 16
	struct FString AudioCodec;  // Offset: 112 Size: 16
	struct FString OutputFileExtension;  // Offset: 128 Size: 16
	struct FString CommandLineFormat;  // Offset: 144 Size: 16
	struct FString VideoInputStringFormat;  // Offset: 160 Size: 16
	struct FString AudioInputStringFormat;  // Offset: 176 Size: 16
	struct FString EncodeSettings_Low;  // Offset: 192 Size: 16
	struct FString EncodeSettings_Med;  // Offset: 208 Size: 16
	struct FString EncodeSettings_High;  // Offset: 224 Size: 16
	struct FString EncodeSettings_Epic;  // Offset: 240 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineConfigBase Size 80
// Inherited 40 bytes 
class UMoviePipelineConfigBase : public UObject
{

 public: 
	struct FString DisplayName;  // Offset: 40 Size: 16
	struct TArray<struct UMoviePipelineSetting*> Settings;  // Offset: 56 Size: 16
	char pad_72[8];  // Offset: 72 Size: 8



 // Functions 
 public:
	void RemoveSetting(struct UMoviePipelineSetting* InSetting); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
	struct TArray<struct UMoviePipelineSetting*> GetUserSettings(); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
	struct TArray<struct UMoviePipelineSetting*> FindSettingsByClass(UMoviePipelineSetting* InClass, bool bIncludeDisabledSettings); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
	struct UMoviePipelineSetting* FindSettingByClass(UMoviePipelineSetting* InClass, bool bIncludeDisabledSettings); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
	struct UMoviePipelineSetting* FindOrAddSettingByClass(UMoviePipelineSetting* InClass, bool bIncludeDisabledSettings); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
	void CopyFrom(struct UMoviePipelineConfigBase* InConfig); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineOutputBase Size 72
// Inherited 72 bytes 
class UMoviePipelineOutputBase : public UMoviePipelineSetting
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter Size 128
// Inherited 72 bytes 
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{

 public: 
	char pad_72[8];  // Offset: 72 Size: 8
	struct FString FileNameFormatOverride;  // Offset: 80 Size: 16
	enum class FCPXMLExportDataSource DataSource;  // Offset: 96 Size: 1
	char pad_97[31];  // Offset: 97 Size: 31



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineGameMode Size 704
// Inherited 704 bytes 
class AMoviePipelineGameMode : public AGameModeBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting Size 264
// Inherited 72 bytes 
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{

 public: 
	AGameModeBase* GameModeOverride;  // Offset: 72 Size: 8
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bCinematicQualitySettings : 1;  // Offset: 80 Size: 1
	enum class EMoviePipelineTextureStreamingMethod TextureStreaming;  // Offset: 81 Size: 1
	char pad_82_1 : 7;  // Offset: 82 Size: 1
	bool bUseLODZero : 1;  // Offset: 82 Size: 1
	char pad_83_1 : 7;  // Offset: 83 Size: 1
	bool bDisableHLODs : 1;  // Offset: 83 Size: 1
	char pad_84_1 : 7;  // Offset: 84 Size: 1
	bool bUseHighQualityShadows : 1;  // Offset: 84 Size: 1
	char pad_85[3];  // Offset: 85 Size: 3
	int32_t ShadowDistanceScale;  // Offset: 88 Size: 4
	float ShadowRadiusThreshold;  // Offset: 92 Size: 4
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bOverrideViewDistanceScale : 1;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	int32_t ViewDistanceScale;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bFlushGrassStreaming : 1;  // Offset: 104 Size: 1
	char pad_105[159];  // Offset: 105 Size: 159



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting Size 72
// Inherited 72 bytes 
class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase Size 304
// Inherited 264 bytes 
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{

 public: 
	struct UMoviePipelineQueue* Queue;  // Offset: 264 Size: 8
	struct UMoviePipeline* ActiveMoviePipeline;  // Offset: 272 Size: 8
	char pad_280[24];  // Offset: 280 Size: 24



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings Size 104
// Inherited 56 bytes 
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{

 public: 
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bCloseEditor : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7
	struct FString AdditionalCommandLineArguments;  // Offset: 64 Size: 16
	struct FString InheritedCommandLineArguments;  // Offset: 80 Size: 16
	int32_t InitialDelayFrameCount;  // Offset: 96 Size: 4
	char pad_100[4];  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineMasterConfig Size 184
// Inherited 80 bytes 
class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase
{

 public: 
	struct TMap<struct FString, struct UMoviePipelineShotConfig*> PerShotConfigMapping;  // Offset: 80 Size: 80
	struct UMoviePipelineOutputSetting* OutputSetting;  // Offset: 160 Size: 8
	struct TArray<struct UMoviePipelineSetting*> TransientSettings;  // Offset: 168 Size: 16



 // Functions 
 public:
	void InitializeTransientSettings(); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings
	struct TArray<struct UMoviePipelineSetting*> GetTransientSettings(); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings
	struct FFrameRate GetEffectiveFrameRate(struct ULevelSequence* InSequence); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate
	struct TArray<struct UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineOutputSetting Size 176
// Inherited 72 bytes 
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{

 public: 
	struct FDirectoryPath OutputDirectory;  // Offset: 72 Size: 16
	struct FString FileNameFormat;  // Offset: 88 Size: 16
	struct FIntPoint OutputResolution;  // Offset: 104 Size: 8
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bUseCustomFrameRate : 1;  // Offset: 112 Size: 1
	char pad_113[3];  // Offset: 113 Size: 3
	struct FFrameRate OutputFrameRate;  // Offset: 116 Size: 8
	char pad_124[4];  // Offset: 124 Size: 4
	char pad_128_1 : 7;  // Offset: 128 Size: 1
	bool bOverrideExistingOutput : 1;  // Offset: 128 Size: 1
	char pad_129[3];  // Offset: 129 Size: 3
	int32_t HandleFrameCount;  // Offset: 132 Size: 4
	int32_t OutputFrameStep;  // Offset: 136 Size: 4
	char pad_140_1 : 7;  // Offset: 140 Size: 1
	bool bUseCustomPlaybackRange : 1;  // Offset: 140 Size: 1
	char pad_141[3];  // Offset: 141 Size: 3
	int32_t CustomStartFrame;  // Offset: 144 Size: 4
	int32_t CustomEndFrame;  // Offset: 148 Size: 4
	int32_t VersionNumber;  // Offset: 152 Size: 4
	char pad_156_1 : 7;  // Offset: 156 Size: 1
	bool bAutoVersion : 1;  // Offset: 156 Size: 1
	char pad_157[3];  // Offset: 157 Size: 3
	int32_t ZeroPadFrameNumbers;  // Offset: 160 Size: 4
	int32_t FrameNumberOffset;  // Offset: 164 Size: 4
	char pad_168_1 : 7;  // Offset: 168 Size: 1
	bool bFlushDiskWritesPerShot : 1;  // Offset: 168 Size: 1
	char pad_169[7];  // Offset: 169 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor Size 288
// Inherited 264 bytes 
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{

 public: 
	UMoviePipelinePythonHostExecutor* ExecutorClass;  // Offset: 264 Size: 8
	struct UMoviePipelineQueue* PipelineQueue;  // Offset: 272 Size: 8
	struct UWorld* LastLoadedWorld;  // Offset: 280 Size: 8



 // Functions 
 public:
	void OnMapLoad(struct UWorld* InWorld); // Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
	struct UWorld* GetLastLoadedWorld(); // Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
	void ExecuteDelayed(struct UMoviePipelineQueue* InPipelineQueue); // Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineExecutorShot Size 304
// Inherited 40 bytes 
class UMoviePipelineExecutorShot : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bEnabled : 1;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7
	struct FString OuterName;  // Offset: 48 Size: 16
	struct FString InnerName;  // Offset: 64 Size: 16
	char pad_80[152];  // Offset: 80 Size: 152
	float Progress;  // Offset: 232 Size: 4
	char pad_236[4];  // Offset: 236 Size: 4
	struct FString StatusMessage;  // Offset: 240 Size: 16
	struct UMoviePipelineShotConfig* ShotOverrideConfig;  // Offset: 256 Size: 8
	struct TSoftObjectPtr<UMoviePipelineShotConfig> ShotOverridePresetOrigin;  // Offset: 264 Size: 40



 // Functions 
 public:
	bool ShouldRender(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
	void SetStatusProgress(float InProgress); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
	void SetStatusMessage(struct FString InStatus); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
	void SetShotOverridePresetOrigin(struct UMoviePipelineShotConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
	void SetShotOverrideConfiguration(struct UMoviePipelineShotConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
	float GetStatusProgress(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
	struct FString GetStatusMessage(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
	struct UMoviePipelineShotConfig* GetShotOverridePresetOrigin(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
	struct UMoviePipelineShotConfig* GetShotOverrideConfiguration(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
	struct UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(UMoviePipelineShotConfig* InConfigType); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineExecutorJob Size 224
// Inherited 40 bytes 
class UMoviePipelineExecutorJob : public UObject
{

 public: 
	struct FString JobName;  // Offset: 40 Size: 16
	struct FSoftObjectPath Sequence;  // Offset: 56 Size: 24
	struct FSoftObjectPath Map;  // Offset: 80 Size: 24
	struct FString Author;  // Offset: 104 Size: 16
	struct TArray<struct UMoviePipelineExecutorShot*> ShotInfo;  // Offset: 120 Size: 16
	struct FString UserData;  // Offset: 136 Size: 16
	struct FString StatusMessage;  // Offset: 152 Size: 16
	float StatusProgress;  // Offset: 168 Size: 4
	char pad_172_1 : 7;  // Offset: 172 Size: 1
	bool bIsConsumed : 1;  // Offset: 172 Size: 1
	char pad_173[3];  // Offset: 173 Size: 3
	struct UMoviePipelineMasterConfig* Configuration;  // Offset: 176 Size: 8
	struct TSoftObjectPtr<UMoviePipelineMasterConfig> PresetOrigin;  // Offset: 184 Size: 40



 // Functions 
 public:
	void SetStatusProgress(float InProgress); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
	void SetStatusMessage(struct FString InStatus); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
	void SetSequence(struct FSoftObjectPath InSequence); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
	void SetPresetOrigin(struct UMoviePipelineMasterConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
	void SetConsumed(bool bInConsumed); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
	void SetConfiguration(struct UMoviePipelineMasterConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
	void OnDuplicated(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
	bool IsConsumed(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
	float GetStatusProgress(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
	struct FString GetStatusMessage(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
	struct UMoviePipelineMasterConfig* GetPresetOrigin(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
	struct UMoviePipelineMasterConfig* GetConfiguration(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineQueue Size 64
// Inherited 40 bytes 
class UMoviePipelineQueue : public UObject
{

 public: 
	struct TArray<struct UMoviePipelineExecutorJob*> Jobs;  // Offset: 40 Size: 16
	char pad_56[8];  // Offset: 56 Size: 8



 // Functions 
 public:
	struct TArray<struct UMoviePipelineExecutorJob*> GetJobs(); // Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
	struct UMoviePipelineExecutorJob* DuplicateJob(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
	void DeleteJob(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
	void CopyFrom(struct UMoviePipelineQueue* InQueue); // Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
	struct UMoviePipelineExecutorJob* AllocateNewJob(UMoviePipelineExecutorJob* InJobType); // Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase Size 136
// Inherited 72 bytes 
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{

 public: 
	char pad_72[64];  // Offset: 72 Size: 64



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem Size 64
// Inherited 48 bytes 
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{

 public: 
	struct UMoviePipelineExecutorBase* ActiveExecutor;  // Offset: 48 Size: 8
	struct UMoviePipelineQueue* CurrentQueue;  // Offset: 56 Size: 8



 // Functions 
 public:
	void RenderQueueWithExecutorInstance(struct UMoviePipelineExecutorBase* InExecutor); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
	struct UMoviePipelineExecutorBase* RenderQueueWithExecutor(UMoviePipelineExecutorBase* InExecutorType); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
	bool IsRendering(); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
	struct UMoviePipelineQueue* GetQueue(); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
	struct UMoviePipelineExecutorBase* GetActiveExecutor(); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
}; 
 
 


//Class MovieRenderPipelineCore.MoviePipelineShotConfig Size 80
// Inherited 80 bytes 
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineCore.MovieRenderDebugWidget Size 608
// Inherited 608 bytes 
class UMovieRenderDebugWidget : public UUserWidget
{

 public: 



 // Functions 
 public:
	void OnInitializedForPipeline(struct UMoviePipeline* ForPipeline); // Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
}; 
 
 


