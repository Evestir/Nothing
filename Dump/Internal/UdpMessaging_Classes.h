#pragma once 
#include <UdpMessaging_Structs.h>
 
 
 
//Class UdpMessaging.UdpMessagingSettings Size 168
// Inherited 40 bytes 
class UUdpMessagingSettings : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool EnabledByDefault : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool EnableTransport : 1;  // Offset: 41 Size: 1
	char pad_42_1 : 7;  // Offset: 42 Size: 1
	bool bAutoRepair : 1;  // Offset: 42 Size: 1
	char pad_43[1];  // Offset: 43 Size: 1
	float MaxSendRate;  // Offset: 44 Size: 4
	uint32_t AutoRepairAttemptLimit;  // Offset: 48 Size: 4
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	bool bStopServiceWhenAppDeactivates : 1;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3
	struct FString UnicastEndpoint;  // Offset: 56 Size: 16
	struct FString MulticastEndpoint;  // Offset: 72 Size: 16
	enum class EUdpMessageFormat MessageFormat;  // Offset: 88 Size: 1
	char MulticastTimeToLive;  // Offset: 89 Size: 1
	char pad_90[6];  // Offset: 90 Size: 6
	struct TArray<struct FString> StaticEndpoints;  // Offset: 96 Size: 16
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool EnableTunnel : 1;  // Offset: 112 Size: 1
	char pad_113[7];  // Offset: 113 Size: 7
	struct FString TunnelUnicastEndpoint;  // Offset: 120 Size: 16
	struct FString TunnelMulticastEndpoint;  // Offset: 136 Size: 16
	struct TArray<struct FString> RemoteTunnelEndpoints;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


