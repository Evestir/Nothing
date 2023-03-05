#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct AudioCapture.AudioCaptureDeviceInfo Size 16
class FAudioCaptureDeviceInfo
{

 public: 
	struct FName DeviceName;  // Offset: 0 Size: 8
	int32_t NumInputChannels;  // Offset: 8 Size: 4
	int32_t SampleRate;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo Size 20
class FGetAudioCaptureDeviceInfo
{

 public: 
	struct FAudioCaptureDeviceInfo OutInfo;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3



 // Functions 
 public:
}; 
 
 //Function AudioCapture.AudioCapture.IsCapturingAudio Size 1
class FIsCapturingAudio
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture Size 8
class FCreateAudioCapture
{

 public: 
	struct UAudioCapture* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 