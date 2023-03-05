#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct EyeTracker.EyeTrackerGazeData Size 52
class FEyeTrackerGazeData
{

 public: 
	struct FVector GazeOrigin;  // Offset: 0 Size: 12
	struct FVector GazeDirection;  // Offset: 12 Size: 12
	struct FVector FixationPoint;  // Offset: 24 Size: 12
	float ConfidenceValue;  // Offset: 36 Size: 4
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bIsLeftEyeBlink : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bIsRightEyeBlink : 1;  // Offset: 41 Size: 1
	char pad_42[2];  // Offset: 42 Size: 2
	float LeftPupilDiameter;  // Offset: 44 Size: 4
	float RightPupilDiameter;  // Offset: 48 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct EyeTracker.EyeTrackerStereoGazeData Size 64
class FEyeTrackerStereoGazeData
{

 public: 
	struct FVector LeftEyeOrigin;  // Offset: 0 Size: 12
	struct FVector LeftEyeDirection;  // Offset: 12 Size: 12
	struct FVector RightEyeOrigin;  // Offset: 24 Size: 12
	struct FVector RightEyeDirection;  // Offset: 36 Size: 12
	struct FVector FixationPoint;  // Offset: 48 Size: 12
	float ConfidenceValue;  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData Size 56
class FGetGazeData
{

 public: 
	struct FEyeTrackerGazeData OutGazeData;  // Offset: 0 Size: 52
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	bool ReturnValue : 1;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3



 // Functions 
 public:
}; 
 
 //Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData Size 68
class FGetStereoGazeData
{

 public: 
	struct FEyeTrackerStereoGazeData OutGazeData;  // Offset: 0 Size: 64
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool ReturnValue : 1;  // Offset: 64 Size: 1
	char pad_65[3];  // Offset: 65 Size: 3



 // Functions 
 public:
}; 
 
 //Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected Size 1
class FIsEyeTrackerConnected
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer Size 8
class FSetEyeTrackedPlayer
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable Size 1
class FIsStereoGazeDataAvailable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 