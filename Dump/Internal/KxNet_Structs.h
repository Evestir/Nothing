#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct KxNet.PrResult Size 4
class FPrResult
{

 public: 
	int32_t code;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KxNet.JsonTestStruct Size 184
class FJsonTestStruct
{

 public: 
	int32_t BoolProperty;  // Offset: 0 Size: 4
	int32_t IntProperty;  // Offset: 4 Size: 4
	struct FString stringProperty;  // Offset: 8 Size: 16
	struct TMap<struct FString, struct FString> MapProperty;  // Offset: 24 Size: 80
	struct TMap<struct FString, struct FJsonTestStruct2> mapProperty2;  // Offset: 104 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KxNet.JsonTestStruct2 Size 24
class FJsonTestStruct2
{

 public: 
	int32_t IntValue;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString strValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KxNet.ReplyPacketRedirector Size 80
class FReplyPacketRedirector
{

 public: 
	struct TMap<int32_t, struct FPendingPqPacket> PendingPackets;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KxNet.PendingPqPacket Size 48
class FPendingPqPacket
{

 public: 
	int32_t ReqId;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UServerRequest* Request;  // Offset: 8 Size: 8
	char pad_16[32];  // Offset: 16 Size: 32



 // Functions 
 public:
}; 
 
 