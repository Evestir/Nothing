#pragma once 
#include <AudioCapture_Structs.h>
 
 
 
//Class AudioCapture.AudioCaptureFunctionLibrary Size 40
// Inherited 40 bytes 
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
}; 
 
 


//Class AudioCapture.AudioCapture Size 176
// Inherited 168 bytes 
class UAudioCapture : public UAudioGenerator
{

 public: 
	char pad_168[8];  // Offset: 168 Size: 8



 // Functions 
 public:
	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo& OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
}; 
 
 


//Class AudioCapture.AudioCaptureComponent Size 1936
// Inherited 1744 bytes 
class UAudioCaptureComponent : public USynthComponent
{

 public: 
	int32_t JitterLatencyFrames;  // Offset: 1744 Size: 4
	char pad_1748[188];  // Offset: 1748 Size: 188



 // Functions 
 public:
}; 
 
 


