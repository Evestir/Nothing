#pragma once 
#include <TimeManagement_Structs.h>
 
 
 
//Class TimeManagement.FixedFrameRateCustomTimeStep Size 40
// Inherited 40 bytes 
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class TimeManagement.TimeSynchronizationSource Size 48
// Inherited 40 bytes 
class UTimeSynchronizationSource : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bUseForSynchronization : 1;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	int32_t FrameOffset;  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 


//Class TimeManagement.GenlockedCustomTimeStep Size 40
// Inherited 40 bytes 
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class TimeManagement.GenlockedFixedRateCustomTimeStep Size 72
// Inherited 40 bytes 
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{

 public: 
	struct FFrameRate FrameRate;  // Offset: 40 Size: 8
	char pad_48[24];  // Offset: 48 Size: 24



 // Functions 
 public:
}; 
 
 


//Class TimeManagement.GenlockedTimecodeProvider Size 88
// Inherited 48 bytes 
class UGenlockedTimecodeProvider : public UTimecodeProvider
{

 public: 
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bUseGenlockToCount : 1;  // Offset: 48 Size: 1
	char pad_49[39];  // Offset: 49 Size: 39



 // Functions 
 public:
}; 
 
 


//Class TimeManagement.TimeManagementBlueprintLibrary Size 40
// Inherited 40 bytes 
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct FFrameTime TransformTime(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& DestinationRate); // Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	struct FFrameTime SnapFrameTimeToRate(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& SnapToRate); // Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	bool IsValid_MultipleOf(struct FFrameRate& InFrameRate, struct FFrameRate& OtherFramerate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	bool IsValid_Framerate(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	struct FFrameRate GetTimecodeFrameRate(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	struct FTimecode GetTimecode(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	struct FString Conv_TimecodeToString(struct FTimecode& InTimecode, bool bForceSignDisplay); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	float Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	int32_t Conv_FrameNumberToInteger(struct FFrameNumber& InFrameNumber); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
}; 
 
 


