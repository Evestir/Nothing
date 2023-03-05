#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage Size 16
class FGetStatusMessage
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieRenderPipelineCore.MoviePipelineShotOutputData Size 88
class FMoviePipelineShotOutputData
{

 public: 
	struct TWeakObjectPtr<UMoviePipelineExecutorShot> Shot;  // Offset: 0 Size: 8
	struct TMap<struct FMoviePipelinePassIdentifier, struct FMoviePipelineRenderPassOutputData> RenderPassData;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics Size 40
class FMoviePipelineSegmentWorkMetrics
{

 public: 
	struct FString SegmentName;  // Offset: 0 Size: 16
	int32_t OutputFrameIndex;  // Offset: 16 Size: 4
	int32_t TotalOutputFrameCount;  // Offset: 20 Size: 4
	int32_t OutputSubSampleIndex;  // Offset: 24 Size: 4
	int32_t TotalSubSampleCount;  // Offset: 28 Size: 4
	int32_t EngineWarmUpFrameIndex;  // Offset: 32 Size: 4
	int32_t TotalEngineWarmUpFrameCount;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieRenderPipelineCore.MoviePipelineOutputData Size 40
class FMoviePipelineOutputData
{

 public: 
	struct UMoviePipeline* Pipeline;  // Offset: 0 Size: 8
	struct UMoviePipelineExecutorJob* Job;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bSuccess : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct TArray<struct FMoviePipelineShotOutputData> ShotData;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction MovieRenderPipelineCore.MoviePipelineFinished__DelegateSignature Size 16
class FMoviePipelineFinished__DelegateSignature
{

 public: 
	struct UMoviePipeline* MoviePipeline;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bFatalError : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime Size 16
class FGetJobInitializationTime
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	struct FDateTime ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction MovieRenderPipelineCore.OnMoviePipelineExecutorErrored__DelegateSignature Size 48
class FOnMoviePipelineExecutorErrored__DelegateSignature
{

 public: 
	struct UMoviePipelineExecutorBase* PipelineExecutor;  // Offset: 0 Size: 8
	struct UMoviePipeline* PipelineWithError;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIsFatal : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FText ErrorText;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction MovieRenderPipelineCore.MoviePipelineWorkFinished__DelegateSignature Size 40
class FMoviePipelineWorkFinished__DelegateSignature
{

 public: 
	struct FMoviePipelineOutputData Results;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber Size 16
class FGetMasterFrameNumber
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	struct FFrameNumber ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieRenderPipelineCore.MoviePipelinePassIdentifier Size 16
class FMoviePipelinePassIdentifier
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass Size 24
class FFindSettingByClass
{

 public: 
	UMoviePipelineSetting* InClass;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bIncludeDisabledSettings : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct UMoviePipelineSetting* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics Size 48
class FGetCurrentSegmentWorkMetrics
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	struct FMoviePipelineSegmentWorkMetrics ReturnValue;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob Size 16
class FDuplicateJob
{

 public: 
	struct UMoviePipelineExecutorJob* InJob;  // Offset: 0 Size: 8
	struct UMoviePipelineExecutorJob* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieRenderPipelineCore.MoviePipelineRenderPassOutputData Size 16
class FMoviePipelineRenderPassOutputData
{

 public: 
	struct TArray<struct FString> FilePaths;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieRenderPipelineCore.MoviePipelineFilenameResolveParams Size 256
class FMoviePipelineFilenameResolveParams
{

 public: 
	int32_t FrameNumber;  // Offset: 0 Size: 4
	int32_t FrameNumberShot;  // Offset: 4 Size: 4
	int32_t FrameNumberRel;  // Offset: 8 Size: 4
	int32_t FrameNumberShotRel;  // Offset: 12 Size: 4
	struct FString CameraNameOverride;  // Offset: 16 Size: 16
	struct FString ShotNameOverride;  // Offset: 32 Size: 16
	int32_t ZeroPadFrameNumberCount;  // Offset: 48 Size: 4
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	bool bForceRelativeFrameNumbers : 1;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3
	struct TMap<struct FString, struct FString> FileNameFormatOverrides;  // Offset: 56 Size: 80
	struct TMap<struct FString, struct FString> FileMetadata;  // Offset: 136 Size: 80
	struct FDateTime InitializationTime;  // Offset: 216 Size: 8
	int32_t InitializationVersion;  // Offset: 224 Size: 4
	char pad_228[4];  // Offset: 228 Size: 4
	struct UMoviePipelineExecutorJob* Job;  // Offset: 232 Size: 8
	struct UMoviePipelineExecutorShot* ShotOverride;  // Offset: 240 Size: 8
	int32_t AdditionalFrameNumberOffset;  // Offset: 248 Size: 4
	char pad_252[4];  // Offset: 252 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction MovieRenderPipelineCore.OnMoviePipelineExecutorFinished__DelegateSignature Size 16
class FOnMoviePipelineExecutorFinished__DelegateSignature
{

 public: 
	struct UMoviePipelineExecutorBase* PipelineExecutor;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bSuccess : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //DelegateFunction MovieRenderPipelineCore.MoviePipelineSocketMessageRecieved__DelegateSignature Size 16
class FMoviePipelineSocketMessageRecieved__DelegateSignature
{

 public: 
	struct FString Message;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName Size 56
class FGetCurrentSegmentName
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	struct FText OutOuterName;  // Offset: 8 Size: 24
	struct FText OutInnerName;  // Offset: 32 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction MovieRenderPipelineCore.MoviePipelineHttpResponseRecieved__DelegateSignature Size 24
class FMoviePipelineHttpResponseRecieved__DelegateSignature
{

 public: 
	int32_t RequestIndex;  // Offset: 0 Size: 4
	int32_t ResponseCode;  // Offset: 4 Size: 4
	struct FString Message;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieRenderPipelineCore.MoviePipelineFormatArgs Size 168
class FMoviePipelineFormatArgs
{

 public: 
	struct TMap<struct FString, struct FString> FilenameArguments;  // Offset: 0 Size: 80
	struct TMap<struct FString, struct FString> FileMetadata;  // Offset: 80 Size: 80
	struct UMoviePipelineExecutorJob* InJob;  // Offset: 160 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining Size 24
class FGetEstimatedTimeRemaining
{

 public: 
	struct UMoviePipeline* InPipeline;  // Offset: 0 Size: 8
	struct FTimespan OutEstimate;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieRenderPipelineCore.MoviePipelineCameraCutInfo Size 152
class FMoviePipelineCameraCutInfo
{

 public: 
	char pad_0[152];  // Offset: 0 Size: 152



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig Size 8
class FGetPipelineMasterConfig
{

 public: 
	struct UMoviePipelineMasterConfig* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute Size 8
class FExecute
{

 public: 
	struct UMoviePipelineQueue* InPipelineQueue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture Size 8
class FGetPreviewTexture
{

 public: 
	struct UTexture* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipeline.Initialize Size 8
class FInitialize
{

 public: 
	struct UMoviePipelineExecutorJob* InJob;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested Size 1
class FIsShutdownRequested
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown Size 1
class FRequestShutdown
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsError : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected Size 1
class FIsSocketConnected
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting Size 8
class FRemoveSetting
{

 public: 
	struct UMoviePipelineSetting* InSetting;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine Size 32
class FBuildNewProcessCommandLine
{

 public: 
	struct FString InOutUnrealURLParams;  // Offset: 0 Size: 16
	struct FString InOutCommandLineArgs;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipeline.Shutdown Size 1
class FShutdown
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bError : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence Size 24
class FDuplicateSequence
{

 public: 
	struct UObject* Outer;  // Offset: 0 Size: 8
	struct UMovieSceneSequence* InSequence;  // Offset: 8 Size: 8
	struct UMovieSceneSequence* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot Size 32
class FFindOrGetDefaultSettingForShot
{

 public: 
	UMoviePipelineSetting* InSettingType;  // Offset: 0 Size: 8
	struct UMoviePipelineMasterConfig* InMasterConfig;  // Offset: 8 Size: 8
	struct UMoviePipelineExecutorShot* InShot;  // Offset: 16 Size: 8
	struct UMoviePipelineSetting* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode Size 32
class FGetMasterTimecode
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	struct FTimecode ReturnValue;  // Offset: 8 Size: 20
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage Size 16
class FGetCompletionPercentage
{

 public: 
	struct UMoviePipeline* InPipeline;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber Size 264
class FResolveVersionNumber
{

 public: 
	struct FMoviePipelineFilenameResolveParams InParams;  // Offset: 0 Size: 256
	int32_t ReturnValue;  // Offset: 256 Size: 4
	char pad_260[4];  // Offset: 260 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture Size 16
class FGetCurrentAperture
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength Size 16
class FGetCurrentFocalLength
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass Size 24
class FFindOrAddSettingByClass
{

 public: 
	UMoviePipelineSetting* InClass;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bIncludeDisabledSettings : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct UMoviePipelineSetting* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance Size 16
class FGetCurrentFocusDistance
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress Size 4
class FGetStatusProgress
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState Size 16
class FGetCurrentSegmentState
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	enum class EMovieRenderShotState ReturnValue;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber Size 16
class FGetCurrentShotFrameNumber
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	struct FFrameNumber ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket Size 24
class FConnectSocket
{

 public: 
	struct FString InHostName;  // Offset: 0 Size: 16
	int32_t InPort;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool ReturnValue : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode Size 32
class FGetCurrentShotTimecode
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	struct FTimecode ReturnValue;  // Offset: 8 Size: 20
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution Size 24
class FGetEffectiveOutputResolution
{

 public: 
	struct UMoviePipelineMasterConfig* InMasterConfig;  // Offset: 0 Size: 8
	struct UMoviePipelineExecutorShot* InPipelineExecutorShot;  // Offset: 8 Size: 8
	struct FIntPoint ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings Size 16
class FGetUserSettings
{

 public: 
	struct TArray<struct UMoviePipelineSetting*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor Size 32
class FGetJobAuthor
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	struct FText ReturnValue;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName Size 32
class FGetJobName
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	struct FText ReturnValue;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName Size 24
class FGetMapPackageName
{

 public: 
	struct UMoviePipelineExecutorJob* InJob;  // Offset: 0 Size: 8
	struct FString ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames Size 16
class FGetOverallOutputFrames
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	int32_t OutCurrentIndex;  // Offset: 8 Size: 4
	int32_t OutTotalCount;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage Size 24
class FSendSocketMessage
{

 public: 
	struct FString InMessage;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts Size 16
class FGetOverallSegmentCounts
{

 public: 
	struct UMoviePipeline* InMoviePipeline;  // Offset: 0 Size: 8
	int32_t OutCurrentIndex;  // Offset: 8 Size: 4
	int32_t OutTotalCount;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState Size 16
class FGetPipelineState
{

 public: 
	struct UMoviePipeline* InPipeline;  // Offset: 0 Size: 8
	enum class EMovieRenderPipelineState ReturnValue;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments Size 456
class FResolveFilenameFormatArguments
{

 public: 
	struct FString InFormatString;  // Offset: 0 Size: 16
	struct FMoviePipelineFilenameResolveParams InParams;  // Offset: 16 Size: 256
	struct FString OutFinalPath;  // Offset: 272 Size: 16
	struct FMoviePipelineFormatArgs OutMergedFormatArgs;  // Offset: 288 Size: 168



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence Size 24
class FUpdateJobShotListFromSequence
{

 public: 
	struct ULevelSequence* InSequence;  // Offset: 0 Size: 8
	struct UMoviePipelineExecutorJob* InJob;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bShotsChanged : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom Size 8
class FCopyFrom
{

 public: 
	struct UMoviePipelineQueue* InQueue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass Size 32
class FFindSettingsByClass
{

 public: 
	UMoviePipelineSetting* InClass;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bIncludeDisabledSettings : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct TArray<struct UMoviePipelineSetting*> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering Size 1
class FIsRendering
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress Size 4
class FSetStatusProgress
{

 public: 
	float InProgress;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl Size 40
class FOnExecutorErroredImpl
{

 public: 
	struct UMoviePipeline* ErroredPipeline;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bFatal : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FText ErrorReason;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest Size 136
class FSendHTTPRequest
{

 public: 
	struct FString InURL;  // Offset: 0 Size: 16
	struct FString InVerb;  // Offset: 16 Size: 16
	struct FString InMessage;  // Offset: 32 Size: 16
	struct TMap<struct FString, struct FString> InHeaders;  // Offset: 48 Size: 80
	int32_t ReturnValue;  // Offset: 128 Size: 4
	char pad_132[4];  // Offset: 132 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass Size 8
class FSetMoviePipelineClass
{

 public: 
	UObject* InPipelineClass;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage Size 16
class FSetStatusMessage
{

 public: 
	struct FString InStatus;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings Size 24
class FGetAllSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIncludeDisabledSettings : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bIncludeTransientSettings : 1;  // Offset: 1 Size: 1
	char pad_2[6];  // Offset: 2 Size: 6
	struct TArray<struct UMoviePipelineSetting*> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate Size 16
class FGetEffectiveFrameRate
{

 public: 
	struct ULevelSequence* InSequence;  // Offset: 0 Size: 8
	struct FFrameRate ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings Size 16
class FGetTransientSettings
{

 public: 
	struct TArray<struct UMoviePipelineSetting*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed Size 8
class FExecuteDelayed
{

 public: 
	struct UMoviePipelineQueue* InPipelineQueue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld Size 8
class FGetLastLoadedWorld
{

 public: 
	struct UWorld* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad Size 8
class FOnMapLoad
{

 public: 
	struct UWorld* InWorld;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig Size 16
class FAllocateNewShotOverrideConfig
{

 public: 
	UMoviePipelineShotConfig* InConfigType;  // Offset: 0 Size: 8
	struct UMoviePipelineShotConfig* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration Size 8
class FGetShotOverrideConfiguration
{

 public: 
	struct UMoviePipelineShotConfig* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin Size 8
class FGetShotOverridePresetOrigin
{

 public: 
	struct UMoviePipelineShotConfig* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration Size 8
class FSetShotOverrideConfiguration
{

 public: 
	struct UMoviePipelineShotConfig* InPreset;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin Size 8
class FSetShotOverridePresetOrigin
{

 public: 
	struct UMoviePipelineShotConfig* InPreset;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender Size 1
class FShouldRender
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration Size 8
class FGetConfiguration
{

 public: 
	struct UMoviePipelineMasterConfig* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin Size 8
class FGetPresetOrigin
{

 public: 
	struct UMoviePipelineMasterConfig* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed Size 1
class FIsConsumed
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration Size 8
class FSetConfiguration
{

 public: 
	struct UMoviePipelineMasterConfig* InPreset;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed Size 1
class FSetConsumed
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInConsumed : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin Size 8
class FSetPresetOrigin
{

 public: 
	struct UMoviePipelineMasterConfig* InPreset;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence Size 24
class FSetSequence
{

 public: 
	struct FSoftObjectPath InSequence;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob Size 16
class FAllocateNewJob
{

 public: 
	UMoviePipelineExecutorJob* InJobType;  // Offset: 0 Size: 8
	struct UMoviePipelineExecutorJob* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob Size 8
class FDeleteJob
{

 public: 
	struct UMoviePipelineExecutorJob* InJob;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs Size 16
class FGetJobs
{

 public: 
	struct TArray<struct UMoviePipelineExecutorJob*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor Size 8
class FGetActiveExecutor
{

 public: 
	struct UMoviePipelineExecutorBase* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue Size 8
class FGetQueue
{

 public: 
	struct UMoviePipelineQueue* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor Size 16
class FRenderQueueWithExecutor
{

 public: 
	UMoviePipelineExecutorBase* InExecutorType;  // Offset: 0 Size: 8
	struct UMoviePipelineExecutorBase* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance Size 8
class FRenderQueueWithExecutorInstance
{

 public: 
	struct UMoviePipelineExecutorBase* InExecutor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline Size 8
class FOnInitializedForPipeline
{

 public: 
	struct UMoviePipeline* ForPipeline;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 