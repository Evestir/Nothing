#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct GameplayCameras.FOscillator Size 12
class FFOscillator
{

 public: 
	float Amplitude;  // Offset: 0 Size: 4
	float Frequency;  // Offset: 4 Size: 4
	enum class EInitialOscillatorOffset InitialOffset;  // Offset: 8 Size: 1
	enum class EOscillatorWaveform Waveform;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayCameras.VOscillator Size 36
class FVOscillator
{

 public: 
	struct FFOscillator X;  // Offset: 0 Size: 12
	struct FFOscillator Y;  // Offset: 12 Size: 12
	struct FFOscillator Z;  // Offset: 24 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayCameras.PerlinNoiseShaker Size 8
class FPerlinNoiseShaker
{

 public: 
	float Amplitude;  // Offset: 0 Size: 4
	float Frequency;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayCameras.ROscillator Size 36
class FROscillator
{

 public: 
	struct FFOscillator Pitch;  // Offset: 0 Size: 12
	struct FFOscillator Yaw;  // Offset: 12 Size: 12
	struct FFOscillator Roll;  // Offset: 24 Size: 12



 // Functions 
 public:
}; 
 
 //Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake Size 16
class FConv_MatineeCameraShake
{

 public: 
	struct UCameraShakeBase* CameraShake;  // Offset: 0 Size: 8
	struct UMatineeCameraShake* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayCameras.WaveOscillator Size 12
class FWaveOscillator
{

 public: 
	float Amplitude;  // Offset: 0 Size: 4
	float Frequency;  // Offset: 4 Size: 4
	enum class EInitialWaveOscillatorOffsetType InitialOffsetType;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake Size 3312
class FBlueprintUpdateCameraShake
{

 public: 
	float DeltaTime;  // Offset: 0 Size: 4
	float Alpha;  // Offset: 4 Size: 4
	char pad_8[8];  // Offset: 8 Size: 8
	struct FMinimalViewInfo POV;  // Offset: 16 Size: 1648
	struct FMinimalViewInfo ModifiedPOV;  // Offset: 1664 Size: 1648



 // Functions 
 public:
}; 
 
 //Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished Size 1
class FReceiveIsFinished
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function GameplayCameras.MatineeCameraShake.ReceivePlayShake Size 4
class FReceivePlayShake
{

 public: 
	float Scale;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function GameplayCameras.MatineeCameraShake.ReceiveStopShake Size 1
class FReceiveStopShake
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bImmediately : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake Size 48
class FStartMatineeCameraShake
{

 public: 
	struct APlayerCameraManager* PlayerCameraManager;  // Offset: 0 Size: 8
	UMatineeCameraShake* ShakeClass;  // Offset: 8 Size: 8
	float Scale;  // Offset: 16 Size: 4
	enum class ECameraShakePlaySpace PlaySpace;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct FRotator UserPlaySpaceRot;  // Offset: 24 Size: 12
	char pad_36[4];  // Offset: 36 Size: 4
	struct UMatineeCameraShake* ReturnValue;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource Size 56
class FStartMatineeCameraShakeFromSource
{

 public: 
	struct APlayerCameraManager* PlayerCameraManager;  // Offset: 0 Size: 8
	UMatineeCameraShake* ShakeClass;  // Offset: 8 Size: 8
	struct UCameraShakeSourceComponent* SourceComponent;  // Offset: 16 Size: 8
	float Scale;  // Offset: 24 Size: 4
	enum class ECameraShakePlaySpace PlaySpace;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct FRotator UserPlaySpaceRot;  // Offset: 32 Size: 12
	char pad_44[4];  // Offset: 44 Size: 4
	struct UMatineeCameraShake* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 