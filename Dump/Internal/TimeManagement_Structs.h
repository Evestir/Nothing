#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct TimeManagement.TimedDataInputEvaluationData Size 8
class FTimedDataInputEvaluationData
{

 public: 
	float DistanceToNewestSampleSeconds;  // Offset: 0 Size: 4
	float DistanceToOldestSampleSeconds;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds Size 20
class FConv_QualifiedFrameTimeToSeconds
{

 public: 
	struct FQualifiedFrameTime InFrameTime;  // Offset: 0 Size: 16
	float ReturnValue;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger Size 12
class FMultiply_FrameNumberInteger
{

 public: 
	struct FFrameNumber A;  // Offset: 0 Size: 4
	int32_t B;  // Offset: 4 Size: 4
	struct FFrameNumber ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct TimeManagement.TimedDataChannelSampleTime Size 24
class FTimedDataChannelSampleTime
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber Size 12
class FAdd_FrameNumberFrameNumber
{

 public: 
	struct FFrameNumber A;  // Offset: 0 Size: 4
	struct FFrameNumber B;  // Offset: 4 Size: 4
	struct FFrameNumber ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds Size 12
class FConv_FrameRateToSeconds
{

 public: 
	struct FFrameRate InFrameRate;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger Size 12
class FAdd_FrameNumberInteger
{

 public: 
	struct FFrameNumber A;  // Offset: 0 Size: 4
	int32_t B;  // Offset: 4 Size: 4
	struct FFrameNumber ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate Size 12
class FIsValid_Framerate
{

 public: 
	struct FFrameRate InFrameRate;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger Size 8
class FConv_FrameNumberToInteger
{

 public: 
	struct FFrameNumber InFrameNumber;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString Size 40
class FConv_TimecodeToString
{

 public: 
	struct FTimecode InTimecode;  // Offset: 0 Size: 20
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bForceSignDisplay : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct FString ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger Size 12
class FDivide_FrameNumberInteger
{

 public: 
	struct FFrameNumber A;  // Offset: 0 Size: 4
	int32_t B;  // Offset: 4 Size: 4
	struct FFrameNumber ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode Size 20
class FGetTimecode
{

 public: 
	struct FTimecode ReturnValue;  // Offset: 0 Size: 20



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber Size 12
class FSubtract_FrameNumberFrameNumber
{

 public: 
	struct FFrameNumber A;  // Offset: 0 Size: 4
	struct FFrameNumber B;  // Offset: 4 Size: 4
	struct FFrameNumber ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate Size 8
class FGetTimecodeFrameRate
{

 public: 
	struct FFrameRate ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf Size 20
class FIsValid_MultipleOf
{

 public: 
	struct FFrameRate InFrameRate;  // Offset: 0 Size: 8
	struct FFrameRate OtherFramerate;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate Size 20
class FMultiply_SecondsFrameRate
{

 public: 
	float TimeInSeconds;  // Offset: 0 Size: 4
	struct FFrameRate FrameRate;  // Offset: 4 Size: 8
	struct FFrameTime ReturnValue;  // Offset: 12 Size: 8



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate Size 32
class FSnapFrameTimeToRate
{

 public: 
	struct FFrameTime SourceTime;  // Offset: 0 Size: 8
	struct FFrameRate SourceRate;  // Offset: 8 Size: 8
	struct FFrameRate SnapToRate;  // Offset: 16 Size: 8
	struct FFrameTime ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger Size 12
class FSubtract_FrameNumberInteger
{

 public: 
	struct FFrameNumber A;  // Offset: 0 Size: 4
	int32_t B;  // Offset: 4 Size: 4
	struct FFrameNumber ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime Size 32
class FTransformTime
{

 public: 
	struct FFrameTime SourceTime;  // Offset: 0 Size: 8
	struct FFrameRate SourceRate;  // Offset: 8 Size: 8
	struct FFrameRate DestinationRate;  // Offset: 16 Size: 8
	struct FFrameTime ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 