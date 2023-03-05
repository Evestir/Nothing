#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage Size 144
class FLiveLinkSubjectFrameMessage
{

 public: 
	struct FName SubjectName;  // Offset: 0 Size: 8
	struct TArray<struct FTransform> Transforms;  // Offset: 8 Size: 16
	struct TArray<struct FLiveLinkCurveElement> Curves;  // Offset: 24 Size: 16
	struct FLiveLinkMetaData MetaData;  // Offset: 40 Size: 96
	double Time;  // Offset: 136 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage Size 64
class FLiveLinkPongMessage
{

 public: 
	struct FString ProviderName;  // Offset: 0 Size: 16
	struct FString MachineName;  // Offset: 16 Size: 16
	struct FGuid PollRequest;  // Offset: 32 Size: 16
	int32_t LiveLinkVersion;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4
	double CreationPlatformTime;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage Size 1
class FLiveLinkHeartbeatMessage
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage Size 40
class FLiveLinkSubjectDataMessage
{

 public: 
	struct FLiveLinkRefSkeleton RefSkeleton;  // Offset: 0 Size: 32
	struct FName SubjectName;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject Size 8
class FLiveLinkClearSubject
{

 public: 
	struct FName SubjectName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage Size 20
class FLiveLinkPingMessage
{

 public: 
	struct FGuid PollRequest;  // Offset: 0 Size: 16
	int32_t LiveLinkVersion;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage Size 4
class FLiveLinkConnectMessage
{

 public: 
	int32_t LiveLinkVersion;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 