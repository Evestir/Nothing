#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct SessionMessages.SessionServiceLogUnsubscribe Size 1
class FSessionServiceLogUnsubscribe
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct SessionMessages.SessionServicePong Size 144
class FSessionServicePong
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Authorized : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString BuildDate;  // Offset: 8 Size: 16
	struct FString DeviceName;  // Offset: 24 Size: 16
	struct FGuid InstanceId;  // Offset: 40 Size: 16
	struct FString InstanceName;  // Offset: 56 Size: 16
	struct FString PlatformName;  // Offset: 72 Size: 16
	struct FGuid SessionId;  // Offset: 88 Size: 16
	struct FString SessionName;  // Offset: 104 Size: 16
	struct FString SessionOwner;  // Offset: 120 Size: 16
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool Standalone : 1;  // Offset: 136 Size: 1
	char pad_137[7];  // Offset: 137 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct SessionMessages.SessionServiceLog Size 56
class FSessionServiceLog
{

 public: 
	struct FName Category;  // Offset: 0 Size: 8
	struct FString Data;  // Offset: 8 Size: 16
	struct FGuid InstanceId;  // Offset: 24 Size: 16
	double TimeSeconds;  // Offset: 40 Size: 8
	char Verbosity;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct SessionMessages.SessionServiceLogSubscribe Size 1
class FSessionServiceLogSubscribe
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct SessionMessages.SessionServicePing Size 16
class FSessionServicePing
{

 public: 
	struct FString userName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 