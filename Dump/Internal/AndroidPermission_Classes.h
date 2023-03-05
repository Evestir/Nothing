#pragma once 
#include <AndroidPermission_Structs.h>
 
 
 
//Class AndroidPermission.AndroidPermissionCallbackProxy Size 72
// Inherited 40 bytes 
class UAndroidPermissionCallbackProxy : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate;  // Offset: 40 Size: 16
	char pad_56[16];  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AndroidPermission.AndroidPermissionFunctionLibrary Size 40
// Inherited 40 bytes 
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	bool CheckPermission(struct FString permission); // Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString>& Permissions); // Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
}; 
 
 


