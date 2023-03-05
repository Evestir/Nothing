#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived Size 112
class FOnPixelsReceived
{

 public: 
	struct FCapturedPixels Pixels;  // Offset: 0 Size: 16
	struct FCapturedPixelsID ID;  // Offset: 16 Size: 80
	struct FFrameMetrics FrameMetrics;  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics Size 16
class FGetCurrentFrameMetrics
{

 public: 
	struct FFrameMetrics ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses Size 16
class FCompositionGraphCapturePasses
{

 public: 
	struct TArray<struct FString> Value;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneCapture.CaptureResolution Size 8
class FCaptureResolution
{

 public: 
	int32_t ResX;  // Offset: 0 Size: 4
	int32_t ResY;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneCapture.FrameMetrics Size 16
class FFrameMetrics
{

 public: 
	float TotalElapsedTime;  // Offset: 0 Size: 4
	float FrameDelta;  // Offset: 4 Size: 4
	int32_t FrameNumber;  // Offset: 8 Size: 4
	int32_t NumDroppedFrames;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings Size 112
class FMovieSceneCaptureSettings
{

 public: 
	struct FDirectoryPath OutputDirectory;  // Offset: 0 Size: 16
	AGameModeBase* GameModeOverride;  // Offset: 16 Size: 8
	struct FString OutputFormat;  // Offset: 24 Size: 16
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bOverwriteExisting : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bUseRelativeFrameNumbers : 1;  // Offset: 41 Size: 1
	char pad_42[2];  // Offset: 42 Size: 2
	int32_t HandleFrames;  // Offset: 44 Size: 4
	struct FString MovieExtension;  // Offset: 48 Size: 16
	char ZeroPadFrameNumbers;  // Offset: 64 Size: 1
	char pad_65[3];  // Offset: 65 Size: 3
	struct FFrameRate FrameRate;  // Offset: 68 Size: 8
	char pad_76_1 : 7;  // Offset: 76 Size: 1
	bool bUseCustomFrameRate : 1;  // Offset: 76 Size: 1
	char pad_77[3];  // Offset: 77 Size: 3
	struct FFrameRate CustomFrameRate;  // Offset: 80 Size: 8
	struct FCaptureResolution Resolution;  // Offset: 88 Size: 8
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bEnableTextureStreaming : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bCinematicEngineScalability : 1;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bCinematicMode : 1;  // Offset: 98 Size: 1
	char pad_99_1 : 7;  // Offset: 99 Size: 1
	bool bAllowMovement : 1;  // Offset: 99 Size: 1
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bAllowTurning : 1;  // Offset: 100 Size: 1
	char pad_101_1 : 7;  // Offset: 101 Size: 1
	bool bShowPlayer : 1;  // Offset: 101 Size: 1
	char pad_102_1 : 7;  // Offset: 102 Size: 1
	bool bShowHUD : 1;  // Offset: 102 Size: 1
	char pad_103_1 : 7;  // Offset: 103 Size: 1
	bool bUsePathTracer : 1;  // Offset: 103 Size: 1
	int32_t PathTracerSamplePerPixel;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing Size 1
class FIsCapturing
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneCapture.CapturedPixels Size 16
class FCapturedPixels
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneCapture.CapturedPixelsID Size 80
class FCapturedPixelsID
{

 public: 
	struct TMap<struct FName, struct FName> Identifiers;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState Size 1
class FGetState
{

 public: 
	enum class EMovieSceneCaptureProtocolState ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol Size 8
class FGetAudioCaptureProtocol
{

 public: 
	struct UMovieSceneCaptureProtocolBase* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol Size 8
class FGetImageCaptureProtocol
{

 public: 
	struct UMovieSceneCaptureProtocolBase* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType Size 8
class FSetAudioCaptureProtocolType
{

 public: 
	UMovieSceneCaptureProtocolBase* ProtocolType;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType Size 8
class FSetImageCaptureProtocolType
{

 public: 
	UMovieSceneCaptureProtocolBase* ProtocolType;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol Size 8
class FFindAudioCaptureProtocol
{

 public: 
	struct UMovieSceneAudioCaptureProtocolBase* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol Size 8
class FFindImageCaptureProtocol
{

 public: 
	struct UMovieSceneImageCaptureProtocolBase* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime Size 4
class FGetCaptureElapsedTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber Size 4
class FGetCaptureFrameNumber
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup Size 1
class FOnSetup
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress Size 1
class FIsCaptureInProgress
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename Size 32
class FGenerateFilename
{

 public: 
	struct FFrameMetrics InFrameMetrics;  // Offset: 0 Size: 16
	struct FString ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize Size 1
class FOnCanFinalize
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels Size 80
class FStartCapturingFinalPixels
{

 public: 
	struct FCapturedPixelsID StreamID;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer Size 88
class FResolveBuffer
{

 public: 
	struct UTexture* Buffer;  // Offset: 0 Size: 8
	struct FCapturedPixelsID BufferID;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer Size 104
class FGenerateFilenameForBuffer
{

 public: 
	struct UTexture* Buffer;  // Offset: 0 Size: 8
	struct FCapturedPixelsID StreamID;  // Offset: 8 Size: 80
	struct FString ReturnValue;  // Offset: 88 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame Size 16
class FGenerateFilenameForCurrentFrame
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk Size 120
class FWriteImageToDisk
{

 public: 
	struct FCapturedPixels PixelData;  // Offset: 0 Size: 16
	struct FCapturedPixelsID StreamID;  // Offset: 16 Size: 80
	struct FFrameMetrics FrameMetrics;  // Offset: 96 Size: 16
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bCopyImageData : 1;  // Offset: 112 Size: 1
	char pad_113[7];  // Offset: 113 Size: 7



 // Functions 
 public:
}; 
 
 