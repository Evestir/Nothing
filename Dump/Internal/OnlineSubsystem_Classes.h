#pragma once 
#include <OnlineSubsystem_Structs.h>
 
 
 
//Class OnlineSubsystem.NamedInterfaces Size 96
// Inherited 40 bytes 
class UNamedInterfaces : public UObject
{

 public: 
	struct TArray<struct FNamedInterface> NamedInterfaces;  // Offset: 40 Size: 16
	struct TArray<struct FNamedInterfaceDef> NamedInterfaceDefs;  // Offset: 56 Size: 16
	char pad_72[24];  // Offset: 72 Size: 24



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystem.TurnBasedMatchInterface Size 40
// Inherited 40 bytes 
class UTurnBasedMatchInterface : public UInterface
{

 public: 



 // Functions 
 public:
	void OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
	void OnMatchEnded(struct FString Match); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
}; 
 
 


