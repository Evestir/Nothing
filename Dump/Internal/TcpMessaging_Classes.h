#pragma once 
#include <TcpMessaging_Structs.h>
 
 
 
//Class TcpMessaging.TcpMessagingSettings Size 88
// Inherited 40 bytes 
class UTcpMessagingSettings : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool EnableTransport : 1;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7
	struct FString ListenEndpoint;  // Offset: 48 Size: 16
	struct TArray<struct FString> ConnectToEndpoints;  // Offset: 64 Size: 16
	int32_t ConnectionRetryDelay;  // Offset: 80 Size: 4
	char pad_84_1 : 7;  // Offset: 84 Size: 1
	bool bStopServiceWhenAppDeactivates : 1;  // Offset: 84 Size: 1
	char pad_85[3];  // Offset: 85 Size: 3



 // Functions 
 public:
}; 
 
 


