#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct EngineMessages.EngineServiceNotification Size 24
class FEngineServiceNotification
{

 public: 
	struct FString Text;  // Offset: 0 Size: 16
	double TimeSeconds;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct EngineMessages.EngineServiceTerminate Size 16
class FEngineServiceTerminate
{

 public: 
	struct FString userName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EngineMessages.EngineServiceAuthGrant Size 32
class FEngineServiceAuthGrant
{

 public: 
	struct FString userName;  // Offset: 0 Size: 16
	struct FString UserToGrant;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EngineMessages.EngineServiceExecuteCommand Size 32
class FEngineServiceExecuteCommand
{

 public: 
	struct FString Command;  // Offset: 0 Size: 16
	struct FString userName;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EngineMessages.EngineServicePing Size 1
class FEngineServicePing
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct EngineMessages.EngineServiceAuthDeny Size 32
class FEngineServiceAuthDeny
{

 public: 
	struct FString userName;  // Offset: 0 Size: 16
	struct FString UserToDeny;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EngineMessages.EngineServicePong Size 80
class FEngineServicePong
{

 public: 
	struct FString CurrentLevel;  // Offset: 0 Size: 16
	int32_t EngineVersion;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool HasBegunPlay : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct FGuid InstanceId;  // Offset: 24 Size: 16
	struct FString InstanceType;  // Offset: 40 Size: 16
	struct FGuid SessionId;  // Offset: 56 Size: 16
	float WorldTimeSeconds;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 