#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function GooglePAD.GooglePADFunctionLibrary.CancelDownload Size 24
class FCancelDownload
{

 public: 
	struct TArray<struct FString> AssetPacks;  // Offset: 0 Size: 16
	enum class EGooglePADErrorCode ReturnValue;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus Size 2
class FGetShowCellularDataConfirmationStatus
{

 public: 
	enum class EGooglePADCellularDataConfirmStatus status;  // Offset: 0 Size: 1
	enum class EGooglePADErrorCode ReturnValue;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload Size 8
class FGetTotalBytesToDownload
{

 public: 
	int32_t State;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded Size 8
class FGetBytesDownloaded
{

 public: 
	int32_t State;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState Size 4
class FReleaseDownloadState
{

 public: 
	int32_t State;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation Size 24
class FGetAssetPackLocation
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	int32_t Location;  // Offset: 16 Size: 4
	enum class EGooglePADErrorCode ReturnValue;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath Size 24
class FGetAssetsPath
{

 public: 
	int32_t Location;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod Size 8
class FGetStorageMethod
{

 public: 
	int32_t Location;  // Offset: 0 Size: 4
	enum class EGooglePADStorageMethod ReturnValue;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus Size 8
class FGetDownloadStatus
{

 public: 
	int32_t State;  // Offset: 0 Size: 4
	enum class EGooglePADDownloadStatus ReturnValue;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState Size 24
class FGetDownloadState
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	int32_t State;  // Offset: 16 Size: 4
	enum class EGooglePADErrorCode ReturnValue;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation Size 4
class FReleaseAssetPackLocation
{

 public: 
	int32_t Location;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.RequestDownload Size 24
class FRequestDownload
{

 public: 
	struct TArray<struct FString> AssetPacks;  // Offset: 0 Size: 16
	enum class EGooglePADErrorCode ReturnValue;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.RequestInfo Size 24
class FRequestInfo
{

 public: 
	struct TArray<struct FString> AssetPacks;  // Offset: 0 Size: 16
	enum class EGooglePADErrorCode ReturnValue;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval Size 24
class FRequestRemoval
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	enum class EGooglePADErrorCode ReturnValue;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation Size 1
class FShowCellularDataConfirmation
{

 public: 
	enum class EGooglePADErrorCode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 