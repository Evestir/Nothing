#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission Size 24
class FCheckPermission
{

 public: 
	struct FString permission;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //DelegateFunction AndroidPermission.AndroidPermissionDynamicDelegate__DelegateSignature Size 32
class FAndroidPermissionDynamicDelegate__DelegateSignature
{

 public: 
	struct TArray<struct FString> Permissions;  // Offset: 0 Size: 16
	struct TArray<bool> GrantResults;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions Size 24
class FAcquirePermissions
{

 public: 
	struct TArray<struct FString> Permissions;  // Offset: 0 Size: 16
	struct UAndroidPermissionCallbackProxy* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 