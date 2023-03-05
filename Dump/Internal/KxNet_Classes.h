#pragma once 
#include <KxNet_Structs.h>
 
 
 
//Class KxNet.ServerRequester Size 48
// Inherited 40 bytes 
class UServerRequester : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class KxNet.HttpServerRequester Size 296
// Inherited 48 bytes 
class UHttpServerRequester : public UServerRequester
{

 public: 
	char pad_48[16];  // Offset: 48 Size: 16
	struct UHttpRequester* HttpRequester;  // Offset: 64 Size: 8
	char pad_72[224];  // Offset: 72 Size: 224



 // Functions 
 public:
}; 
 
 


//Class KxNet.ServerConnection Size 176
// Inherited 48 bytes 
class UServerConnection : public UServerRequester
{

 public: 
	char pad_48[48];  // Offset: 48 Size: 48
	struct FReplyPacketRedirector Requests;  // Offset: 96 Size: 80



 // Functions 
 public:
}; 
 
 


//Class KxNet.WebSocketServerConnection Size 280
// Inherited 176 bytes 
class UWebSocketServerConnection : public UServerConnection
{

 public: 
	char pad_176[104];  // Offset: 176 Size: 104



 // Functions 
 public:
}; 
 
 


//Class KxNet.GfsServerConnection Size 304
// Inherited 280 bytes 
class UGfsServerConnection : public UWebSocketServerConnection
{

 public: 
	char pad_280[24];  // Offset: 280 Size: 24



 // Functions 
 public:
}; 
 
 


//Class KxNet.JsonTest Size 248
// Inherited 40 bytes 
class UJsonTest : public UObject
{

 public: 
	struct FJsonTestStruct StructProperty;  // Offset: 40 Size: 184
	struct UJsonTest* ObjectProperty;  // Offset: 224 Size: 8
	struct TArray<struct FString> ArrayProperty;  // Offset: 232 Size: 16



 // Functions 
 public:
}; 
 
 


//Class KxNet.HttpRequester Size 80
// Inherited 40 bytes 
class UHttpRequester : public UObject
{

 public: 
	char pad_40[40];  // Offset: 40 Size: 40



 // Functions 
 public:
}; 
 
 


//Class KxNet.LocalFileCache Size 128
// Inherited 48 bytes 
class ULocalFileCache : public UGameInstanceSubsystem
{

 public: 
	char pad_48[80];  // Offset: 48 Size: 80



 // Functions 
 public:
}; 
 
 


//Class KxNet.KxPacket Size 48
// Inherited 48 bytes 
class UKxPacket : public UKxObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class KxNet.ClientPacket Size 48
// Inherited 48 bytes 
class UClientPacket : public UKxPacket
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class KxNet.PqPacket Size 56
// Inherited 48 bytes 
class UPqPacket : public UClientPacket
{

 public: 
	int32_t ReqId;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 


//Class KxNet.ServerPacket Size 48
// Inherited 48 bytes 
class UServerPacket : public UKxPacket
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class KxNet.PcPacket Size 48
// Inherited 48 bytes 
class UPcPacket : public UServerPacket
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class KxNet.PrPacket Size 72
// Inherited 48 bytes 
class UPrPacket : public UServerPacket
{

 public: 
	int32_t ReqId;  // Offset: 48 Size: 4
	struct FPrResult Result;  // Offset: 52 Size: 4
	struct FString desc;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 


//Class KxNet.PcEcho Size 48
// Inherited 48 bytes 
class UPcEcho : public UPcPacket
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class KxNet.PqEcho Size 56
// Inherited 56 bytes 
class UPqEcho : public UPqPacket
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class KxNet.PrEcho Size 72
// Inherited 72 bytes 
class UPrEcho : public UPrPacket
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class KxNet.PcContinuation Size 72
// Inherited 48 bytes 
class UPcContinuation : public UPcPacket
{

 public: 
	struct FString Token;  // Offset: 48 Size: 16
	int64_t packetId;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 


//Class KxNet.ServerRequest Size 80
// Inherited 40 bytes 
class UServerRequest : public UObject
{

 public: 
	struct UPqPacket* RequestPacket;  // Offset: 40 Size: 8
	struct UPrPacket* ReplyPacket;  // Offset: 48 Size: 8
	char pad_56[24];  // Offset: 56 Size: 24



 // Functions 
 public:
}; 
 
 


//Class KxNet.ReconnectableWebSocketServerConnection Size 496
// Inherited 176 bytes 
class UReconnectableWebSocketServerConnection : public UServerConnection
{

 public: 
	char pad_176[56];  // Offset: 176 Size: 56
	struct UWebSocketServerConnection* WebSocket;  // Offset: 232 Size: 8
	struct UWebSocketServerConnection* ConnectingWebSocket;  // Offset: 240 Size: 8
	char pad_248[248];  // Offset: 248 Size: 248



 // Functions 
 public:
}; 
 
 


//Class KxNet.TcpServerConnection Size 2400
// Inherited 176 bytes 
class UTcpServerConnection : public UServerConnection
{

 public: 
	char pad_176[2224];  // Offset: 176 Size: 2224



 // Functions 
 public:
}; 
 
 


