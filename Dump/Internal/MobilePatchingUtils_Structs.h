#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed Size 4
class FGetDownloadSpeed
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction MobilePatchingUtils.OnContentInstallFailed__DelegateSignature Size 32
class FOnContentInstallFailed__DelegateSignature
{

 public: 
	struct FText ErrorText;  // Offset: 0 Size: 24
	int32_t ErrorCode;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction MobilePatchingUtils.OnRequestContentSucceeded__DelegateSignature Size 8
class FOnRequestContentSucceeded__DelegateSignature
{

 public: 
	struct UMobilePendingContent* MobilePendingContent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction MobilePatchingUtils.OnRequestContentFailed__DelegateSignature Size 32
class FOnRequestContentFailed__DelegateSignature
{

 public: 
	struct FText ErrorText;  // Offset: 0 Size: 24
	int32_t ErrorCode;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize Size 4
class FGetDownloadSize
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace Size 4
class FGetDiskFreeSpace
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobileInstalledContent.Mount Size 32
class FMount
{

 public: 
	int32_t PakOrder;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString MountPoint;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize Size 4
class FGetInstalledContentSize
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText Size 24
class FGetDownloadStatusText
{

 public: 
	struct FText ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress Size 4
class FGetInstallProgress
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent Size 80
class FRequestContent
{

 public: 
	struct FString RemoteManifestURL;  // Offset: 0 Size: 16
	struct FString CloudURL;  // Offset: 16 Size: 16
	struct FString InstallDirectory;  // Offset: 32 Size: 16
	struct FDelegate OnSucceeded;  // Offset: 48 Size: 16
	struct FDelegate OnFailed;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize Size 4
class FGetTotalDownloadedSize
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace Size 4
class FGetRequiredDiskSpace
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobilePendingContent.StartInstall Size 32
class FStartInstall
{

 public: 
	struct FDelegate OnSucceeded;  // Offset: 0 Size: 16
	struct FDelegate OnFailed;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName Size 16
class FGetActiveDeviceProfileName
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent Size 24
class FGetInstalledContent
{

 public: 
	struct FString InstallDirectory;  // Offset: 0 Size: 16
	struct UMobileInstalledContent* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames Size 16
class FGetSupportedPlatformNames
{

 public: 
	struct TArray<struct FString> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection Size 1
class FHasActiveWiFiConnection
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 