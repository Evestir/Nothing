#pragma once 
#include <MobilePatchingUtils_Structs.h>
 
 
 
//Class MobilePatchingUtils.MobileInstalledContent Size 72
// Inherited 40 bytes 
class UMobileInstalledContent : public UObject
{

 public: 
	char pad_40[32];  // Offset: 40 Size: 32



 // Functions 
 public:
	bool Mount(int32_t PakOrder, struct FString MountPoint); // Function MobilePatchingUtils.MobileInstalledContent.Mount
	float GetInstalledContentSize(); // Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
	float GetDiskFreeSpace(); // Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
}; 
 
 


//Class MobilePatchingUtils.MobilePatchingLibrary Size 40
// Inherited 40 bytes 
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void RequestContent(struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed); // Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	bool HasActiveWiFiConnection(); // Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
	struct TArray<struct FString> GetSupportedPlatformNames(); // Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
	struct UMobileInstalledContent* GetInstalledContent(struct FString InstallDirectory); // Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
	struct FString GetActiveDeviceProfileName(); // Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
}; 
 
 


//Class MobilePatchingUtils.MobilePendingContent Size 136
// Inherited 72 bytes 
class UMobilePendingContent : public UMobileInstalledContent
{

 public: 
	char pad_72[64];  // Offset: 72 Size: 64



 // Functions 
 public:
	void StartInstall(struct FDelegate OnSucceeded, struct FDelegate OnFailed); // Function MobilePatchingUtils.MobilePendingContent.StartInstall
	float GetTotalDownloadedSize(); // Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
	float GetRequiredDiskSpace(); // Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
	float GetInstallProgress(); // Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
	struct FText GetDownloadStatusText(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
	float GetDownloadSpeed(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
	float GetDownloadSize(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
}; 
 
 


