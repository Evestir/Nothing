#pragma once 
#include <EyeTracker_Structs.h>
 
 
 
//Class EyeTracker.EyeTrackerFunctionLibrary Size 40
// Inherited 40 bytes 
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void SetEyeTrackedPlayer(struct APlayerController* PlayerController); // Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	bool IsStereoGazeDataAvailable(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	bool IsEyeTrackerConnected(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	bool GetStereoGazeData(struct FEyeTrackerStereoGazeData& OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	bool GetGazeData(struct FEyeTrackerGazeData& OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
}; 
 
 


