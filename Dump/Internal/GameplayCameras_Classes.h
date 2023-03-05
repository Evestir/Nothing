#pragma once 
#include <GameplayCameras_Structs.h>
 
 
 
//Class GameplayCameras.WaveOscillatorCameraShakePattern Size 216
// Inherited 56 bytes 
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{

 public: 
	float LocationAmplitudeMultiplier;  // Offset: 56 Size: 4
	float LocationFrequencyMultiplier;  // Offset: 60 Size: 4
	struct FWaveOscillator X;  // Offset: 64 Size: 12
	struct FWaveOscillator Y;  // Offset: 76 Size: 12
	struct FWaveOscillator Z;  // Offset: 88 Size: 12
	float RotationAmplitudeMultiplier;  // Offset: 100 Size: 4
	float RotationFrequencyMultiplier;  // Offset: 104 Size: 4
	struct FWaveOscillator Pitch;  // Offset: 108 Size: 12
	struct FWaveOscillator Yaw;  // Offset: 120 Size: 12
	struct FWaveOscillator Roll;  // Offset: 132 Size: 12
	struct FWaveOscillator FOV;  // Offset: 144 Size: 12
	char pad_156[60];  // Offset: 156 Size: 60



 // Functions 
 public:
}; 
 
 


//Class GameplayCameras.TestCameraShake Size 176
// Inherited 176 bytes 
class UTestCameraShake : public UCameraShakeBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator Size 40
// Inherited 40 bytes 
class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class GameplayCameras.SimpleCameraShakePattern Size 56
// Inherited 40 bytes 
class USimpleCameraShakePattern : public UCameraShakePattern
{

 public: 
	float Duration;  // Offset: 40 Size: 4
	float BlendInTime;  // Offset: 44 Size: 4
	float BlendOutTime;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 


//Class GameplayCameras.MatineeCameraShake Size 432
// Inherited 176 bytes 
class UMatineeCameraShake : public UCameraShakeBase
{

 public: 
	float OscillationDuration;  // Offset: 168 Size: 4
	float OscillationBlendInTime;  // Offset: 172 Size: 4
	float OscillationBlendOutTime;  // Offset: 176 Size: 4
	struct FROscillator RotOscillation;  // Offset: 180 Size: 36
	struct FVOscillator LocOscillation;  // Offset: 216 Size: 36
	struct FFOscillator FOVOscillation;  // Offset: 252 Size: 12
	float AnimPlayRate;  // Offset: 264 Size: 4
	float AnimScale;  // Offset: 268 Size: 4
	float AnimBlendInTime;  // Offset: 272 Size: 4
	float AnimBlendOutTime;  // Offset: 276 Size: 4
	float RandomAnimSegmentDuration;  // Offset: 280 Size: 4
	struct UCameraAnim* Anim;  // Offset: 288 Size: 8
	struct UCameraAnimationSequence* AnimSequence;  // Offset: 296 Size: 8
	char bRandomAnimSegment : 1;  // Offset: 304 Size: 1
	float OscillatorTimeRemaining;  // Offset: 308 Size: 4
	struct UCameraAnimInst* AnimInst;  // Offset: 312 Size: 8
	char pad_320_1 : 7;  // Offset: 320 Size: 1
	char pad_321[64];  // Offset: 321 Size: 64
	struct USequenceCameraShakePattern* SequenceShakePattern;  // Offset: 384 Size: 8
	char pad_392[40];  // Offset: 392 Size: 40



 // Functions 
 public:
	struct UMatineeCameraShake* StartMatineeCameraShakeFromSource(struct APlayerCameraManager* PlayerCameraManager, UMatineeCameraShake* ShakeClass, struct UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
	struct UMatineeCameraShake* StartMatineeCameraShake(struct APlayerCameraManager* PlayerCameraManager, UMatineeCameraShake* ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
	void ReceiveStopShake(bool bImmediately); // Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
	void ReceivePlayShake(float Scale); // Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
	bool ReceiveIsFinished(); // Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
}; 
 
 


//Class GameplayCameras.ConstantCameraShakePattern Size 80
// Inherited 56 bytes 
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{

 public: 
	struct FVector LocationOffset;  // Offset: 56 Size: 12
	struct FRotator RotationOffset;  // Offset: 68 Size: 12



 // Functions 
 public:
}; 
 
 


//Class GameplayCameras.CompositeCameraShakePattern Size 72
// Inherited 40 bytes 
class UCompositeCameraShakePattern : public UCameraShakePattern
{

 public: 
	struct TArray<struct UCameraShakePattern*> ChildPatterns;  // Offset: 40 Size: 16
	char pad_56[16];  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 


//Class GameplayCameras.MatineeCameraShakePattern Size 40
// Inherited 40 bytes 
class UMatineeCameraShakePattern : public UCameraShakePattern
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class GameplayCameras.DefaultCameraShakeBase Size 176
// Inherited 176 bytes 
class UDefaultCameraShakeBase : public UCameraShakeBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class GameplayCameras.MatineeCameraShakeFunctionLibrary Size 40
// Inherited 40 bytes 
class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct UMatineeCameraShake* Conv_MatineeCameraShake(struct UCameraShakeBase* CameraShake); // Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
}; 
 
 


//Class GameplayCameras.PerlinNoiseCameraShakePattern Size 184
// Inherited 56 bytes 
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{

 public: 
	float LocationAmplitudeMultiplier;  // Offset: 56 Size: 4
	float LocationFrequencyMultiplier;  // Offset: 60 Size: 4
	struct FPerlinNoiseShaker X;  // Offset: 64 Size: 8
	struct FPerlinNoiseShaker Y;  // Offset: 72 Size: 8
	struct FPerlinNoiseShaker Z;  // Offset: 80 Size: 8
	float RotationAmplitudeMultiplier;  // Offset: 88 Size: 4
	float RotationFrequencyMultiplier;  // Offset: 92 Size: 4
	struct FPerlinNoiseShaker Pitch;  // Offset: 96 Size: 8
	struct FPerlinNoiseShaker Yaw;  // Offset: 104 Size: 8
	struct FPerlinNoiseShaker Roll;  // Offset: 112 Size: 8
	struct FPerlinNoiseShaker FOV;  // Offset: 120 Size: 8
	char pad_128[56];  // Offset: 128 Size: 56



 // Functions 
 public:
}; 
 
 


