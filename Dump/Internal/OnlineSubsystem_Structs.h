#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo Size 168
class FInAppPurchaseProductInfo
{

 public: 
	struct FString Identifier;  // Offset: 0 Size: 16
	struct FString TransactionIdentifier;  // Offset: 16 Size: 16
	struct FString DisplayName;  // Offset: 32 Size: 16
	struct FString DisplayDescription;  // Offset: 48 Size: 16
	struct FString DisplayPrice;  // Offset: 64 Size: 16
	float RawPrice;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4
	struct FString CurrencyCode;  // Offset: 88 Size: 16
	struct FString CurrencySymbol;  // Offset: 104 Size: 16
	struct FString DecimalSeparator;  // Offset: 120 Size: 16
	struct FString GroupingSeparator;  // Offset: 136 Size: 16
	struct FString ReceiptData;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystem.NamedInterfaceDef Size 24
class FNamedInterfaceDef
{

 public: 
	struct FName InterfaceName;  // Offset: 0 Size: 8
	struct FString InterfaceClassName;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo Size 48
class FInAppPurchaseRestoreInfo
{

 public: 
	struct FString Identifier;  // Offset: 0 Size: 16
	struct FString ReceiptData;  // Offset: 16 Size: 16
	struct FString TransactionIdentifier;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn Size 24
class FOnMatchReceivedTurn
{

 public: 
	struct FString Match;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bDidBecomeActive : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystem.NamedInterface Size 16
class FNamedInterface
{

 public: 
	struct FName InterfaceName;  // Offset: 0 Size: 8
	struct UObject* InterfaceObject;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest Size 24
class FInAppPurchaseProductRequest
{

 public: 
	struct FString ProductIdentifier;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIsConsumable : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded Size 16
class FOnMatchEnded
{

 public: 
	struct FString Match;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 