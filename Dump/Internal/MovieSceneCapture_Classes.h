#pragma once 
#include <MovieSceneCapture_Structs.h>
 
 
 
//Class MovieSceneCapture.MovieSceneCaptureEnvironment Size 40
// Inherited 40 bytes 
class UMovieSceneCaptureEnvironment : public UObject
{

 public: 



 // Functions 
 public:
	bool IsCaptureInProgress(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	int32_t GetCaptureFrameNumber(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	float GetCaptureElapsedTime(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	struct UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	struct UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
}; 
 
 


//Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase Size 88
// Inherited 88 bytes 
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.ImageSequenceProtocol_EXR Size 232
// Inherited 216 bytes 
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{

 public: 
	char pad_216_1 : 7;  // Offset: 216 Size: 1
	bool bCompressed : 1;  // Offset: 216 Size: 1
	enum class EHDRCaptureGamut CaptureGamut;  // Offset: 217 Size: 1
	char pad_218[14];  // Offset: 218 Size: 14



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.MovieSceneCaptureProtocolBase Size 88
// Inherited 40 bytes 
class UMovieSceneCaptureProtocolBase : public UObject
{

 public: 
	char pad_40[40];  // Offset: 40 Size: 40
	enum class EMovieSceneCaptureProtocolState State;  // Offset: 80 Size: 1
	char pad_81[7];  // Offset: 81 Size: 7



 // Functions 
 public:
	bool IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	enum class EMovieSceneCaptureProtocolState GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
}; 
 
 


//Class MovieSceneCapture.NullAudioCaptureProtocol Size 88
// Inherited 88 bytes 
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol Size 144
// Inherited 88 bytes 
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{

 public: 
	struct FString Filename;  // Offset: 88 Size: 16
	char pad_104[40];  // Offset: 104 Size: 40



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.ImageSequenceProtocol_JPG Size 224
// Inherited 224 bytes 
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase Size 88
// Inherited 88 bytes 
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.ImageSequenceProtocol Size 216
// Inherited 104 bytes 
class UImageSequenceProtocol : public UFrameGrabberProtocol
{

 public: 
	char pad_104[112];  // Offset: 104 Size: 112



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.CompositionGraphCaptureProtocol Size 192
// Inherited 88 bytes 
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{

 public: 
	struct FCompositionGraphCapturePasses IncludeRenderPasses;  // Offset: 88 Size: 16
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bCaptureFramesInHDR : 1;  // Offset: 104 Size: 1
	char pad_105[3];  // Offset: 105 Size: 3
	int32_t HDRCompressionQuality;  // Offset: 108 Size: 4
	enum class EHDRCaptureGamut CaptureGamut;  // Offset: 112 Size: 1
	char pad_113[7];  // Offset: 113 Size: 7
	struct FSoftObjectPath PostProcessingMaterial;  // Offset: 120 Size: 24
	char pad_144_1 : 7;  // Offset: 144 Size: 1
	bool bDisableScreenPercentage : 1;  // Offset: 144 Size: 1
	char pad_145[7];  // Offset: 145 Size: 7
	struct UMaterialInterface* PostProcessingMaterialPtr;  // Offset: 152 Size: 8
	char pad_160[32];  // Offset: 160 Size: 32



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.FrameGrabberProtocol Size 104
// Inherited 88 bytes 
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{

 public: 
	char pad_88[16];  // Offset: 88 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.CompressedImageSequenceProtocol Size 224
// Inherited 216 bytes 
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{

 public: 
	int32_t CompressionQuality;  // Offset: 216 Size: 4
	char pad_220[4];  // Offset: 220 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.ImageSequenceProtocol_BMP Size 216
// Inherited 216 bytes 
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.ImageSequenceProtocol_PNG Size 224
// Inherited 224 bytes 
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.MovieSceneCaptureInterface Size 40
// Inherited 40 bytes 
class UMovieSceneCaptureInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.MovieSceneCapture Size 544
// Inherited 40 bytes 
class UMovieSceneCapture : public UObject
{

 public: 
	char pad_40[16];  // Offset: 40 Size: 16
	struct FSoftClassPath ImageCaptureProtocolType;  // Offset: 56 Size: 24
	struct FSoftClassPath AudioCaptureProtocolType;  // Offset: 80 Size: 24
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol;  // Offset: 104 Size: 8
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol;  // Offset: 112 Size: 8
	struct FMovieSceneCaptureSettings Settings;  // Offset: 120 Size: 112
	char pad_232_1 : 7;  // Offset: 232 Size: 1
	bool bUseSeparateProcess : 1;  // Offset: 232 Size: 1
	char pad_233_1 : 7;  // Offset: 233 Size: 1
	bool bCloseEditorWhenCaptureStarts : 1;  // Offset: 233 Size: 1
	char pad_234[6];  // Offset: 234 Size: 6
	struct FString AdditionalCommandLineArguments;  // Offset: 240 Size: 16
	struct FString InheritedCommandLineArguments;  // Offset: 256 Size: 16
	char pad_272[272];  // Offset: 272 Size: 272



 // Functions 
 public:
	void SetImageCaptureProtocolType(UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	void SetAudioCaptureProtocolType(UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	struct UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	struct UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
}; 
 
 


//Class MovieSceneCapture.LevelCapture Size 576
// Inherited 544 bytes 
class ULevelCapture : public UMovieSceneCapture
{

 public: 
	char pad_544_1 : 7;  // Offset: 544 Size: 1
	bool bAutoStartCapture : 1;  // Offset: 544 Size: 1
	char pad_545[11];  // Offset: 545 Size: 11
	struct FGuid PrerequisiteActorId;  // Offset: 556 Size: 16
	char pad_572[4];  // Offset: 572 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MovieSceneCapture.UserDefinedCaptureProtocol Size 216
// Inherited 88 bytes 
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{

 public: 
	struct UWorld* World;  // Offset: 88 Size: 8
	char pad_96[120];  // Offset: 96 Size: 120



 // Functions 
 public:
	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	void StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	void ResolveBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	bool OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	void OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	bool OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	struct FFrameMetrics GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	struct FString GenerateFilename(struct FFrameMetrics& InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
}; 
 
 


//Class MovieSceneCapture.UserDefinedImageCaptureProtocol Size 224
// Inherited 216 bytes 
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{

 public: 
	enum class EDesiredImageFormat Format;  // Offset: 216 Size: 1
	char pad_217_1 : 7;  // Offset: 217 Size: 1
	bool bEnableCompression : 1;  // Offset: 217 Size: 1
	char pad_218[2];  // Offset: 218 Size: 2
	int32_t CompressionQuality;  // Offset: 220 Size: 4



 // Functions 
 public:
	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	struct FString GenerateFilenameForBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
}; 
 
 


//Class MovieSceneCapture.VideoCaptureProtocol Size 128
// Inherited 104 bytes 
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{

 public: 
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bUseCompression : 1;  // Offset: 104 Size: 1
	char pad_105[3];  // Offset: 105 Size: 3
	float CompressionQuality;  // Offset: 108 Size: 4
	char pad_112[16];  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 


