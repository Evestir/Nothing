#pragma once 
#include <HeadMountedDisplay_Structs.h>
 
 
 
//Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary Size 40
// Inherited 40 bytes 
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
	void SetXRTimedInputActionDelegate(struct FName& ActionName, struct FDelegate& InDelegate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
	void SetXRDisconnectDelegate(struct FDelegate& InDisconnectedDelegate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
	void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	void SetSpectatorScreenTexture(struct UTexture* InTexture); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	void SetClippingPlanes(float Near, float Far); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector Options); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	bool IsSpectatorScreenModeControllable(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	bool IsInLowPersistenceMode(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	bool IsHeadMountedDisplayEnabled(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	bool IsHeadMountedDisplayConnected(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	bool IsDeviceTracking(struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	bool HasValidTrackingPosition(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	int32_t GetXRSystemFlags(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
	float GetWorldToMetersScale(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	void GetVRFocusState(bool& bUseFocus, bool& bHasFocus); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	struct FString GetVersionString(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
	struct FTransform GetTrackingToWorldTransform(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	bool GetTrackingOriginTransform(enum class EHMDTrackingOrigin Origin, struct FTransform& OutTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform
	enum class EHMDTrackingOrigin GetTrackingOrigin(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	float GetScreenPercentage(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	bool GetPlayAreaRect(struct FTransform& OutTransform, struct FVector2D& OutRect); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect
	struct FVector2D GetPlayAreaBounds(enum class EHMDTrackingOrigin Origin); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
	float GetPixelDensity(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	int32_t GetNumOfTrackingSensors(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	void GetMotionControllerData(struct UObject* WorldContext, enum class EControllerHand Hand, struct FXRMotionControllerData& MotionControllerData); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
	enum class EHMDWornState GetHMDWornState(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	struct FName GetHMDDeviceName(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	void GetHMDData(struct UObject* WorldContext, struct FXRHMDData& HMDData); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
	void GetDeviceWorldPose(struct UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	void GetDevicePose(struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	bool GetControllerTransformForTime(struct UObject* WorldContext, int32_t ControllerIndex, struct FName MotionSource, struct FTimespan Time, bool& bTimeWasUsed, struct FRotator& Orientation, struct FVector& position, bool& bProvidedLinearVelocity, struct FVector& LinearVelocity, bool& bProvidedAngularVelocity, struct FVector& AngularVelocityRadPerSec, bool& bProvidedLinearAcceleration, struct FVector& LinearAcceleration); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
	struct TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, enum class EXRTrackedDeviceType DeviceType); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	void EnableLowPersistenceMode(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	bool EnableHMD(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	void DisconnectRemoteXRDevice(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
	enum class EXRDeviceConnectionResult ConnectRemoteXRDevice(struct FString IpAddress, int32_t BitRate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
	bool ConfigureGestures(struct FXRGestureConfig& GestureConfig); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
	void ClearXRTimedInputActionDelegate(struct FName& ActionPath); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
	void CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	void BreakKey(struct FKey InKey, struct FString& InteractionProfile, enum class EControllerHand& Hand, struct FName& MotionSource, struct FString& Indentifier, struct FString& Component); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
}; 
 
 


//Class HeadMountedDisplay.HandKeypointConversion Size 40
// Inherited 40 bytes 
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	int32_t Conv_HandKeypointToInt32(enum class EHandKeypoint Input); // Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
}; 
 
 


//Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent Size 96
// Inherited 48 bytes 
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{

 public: 
	struct FMulticastInlineDelegate OnModelLoaded;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnLoadFailure;  // Offset: 64 Size: 16
	char pad_80[8];  // Offset: 80 Size: 8
	struct UPrimitiveComponent* SpawnedComponent;  // Offset: 88 Size: 8



 // Functions 
 public:
	struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
}; 
 
 


//Class HeadMountedDisplay.MotionControllerComponent Size 1328
// Inherited 1136 bytes 
class UMotionControllerComponent : public UPrimitiveComponent
{

 public: 
	int32_t PlayerIndex;  // Offset: 1136 Size: 4
	enum class EControllerHand Hand;  // Offset: 1140 Size: 1
	char pad_1141[3];  // Offset: 1141 Size: 3
	struct FName MotionSource;  // Offset: 1144 Size: 8
	char bDisableLowLatencyUpdate : 1;  // Offset: 1152 Size: 1
	char pad_1152_1 : 7;  // Offset: 1152 Size: 1
	char pad_1153[4];  // Offset: 1153 Size: 4
	enum class ETrackingStatus CurrentTrackingStatus;  // Offset: 1156 Size: 1
	char pad_1157_1 : 7;  // Offset: 1157 Size: 1
	bool bDisplayDeviceModel : 1;  // Offset: 1157 Size: 1
	char pad_1158[2];  // Offset: 1158 Size: 2
	struct FName DisplayModelSource;  // Offset: 1160 Size: 8
	struct UStaticMesh* CustomDisplayMesh;  // Offset: 1168 Size: 8
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides;  // Offset: 1176 Size: 16
	char pad_1192[104];  // Offset: 1192 Size: 104
	struct UPrimitiveComponent* DisplayComponent;  // Offset: 1296 Size: 8
	char pad_1304[24];  // Offset: 1304 Size: 24



 // Functions 
 public:
	void SetTrackingSource(enum class EControllerHand NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	void SetTrackingMotionSource(struct FName NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	void SetShowDeviceModel(bool bShowControllerModel); // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh); // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	void OnMotionControllerUpdated(); // Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	bool IsTracked(); // Function HeadMountedDisplay.MotionControllerComponent.IsTracked
	enum class EControllerHand GetTrackingSource(); // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	float GetParameterValue(struct FName InName, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	struct FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
}; 
 
 


//Class HeadMountedDisplay.XRAssetFunctionLibrary Size 40
// Inherited 40 bytes 
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	struct UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
}; 
 
 


//Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary Size 40
// Inherited 40 bytes 
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	bool IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	bool IsMotionTrackedDeviceCountManagementNecessary(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	bool IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	int32_t GetMotionTrackingEnabledControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	int32_t GetMaximumMotionTrackedControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	struct FName GetActiveTrackingSystemName(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	struct TArray<struct FName> EnumerateMotionSources(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	bool EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	bool EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	void DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	void DisableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	void DisableMotionTrackingOfAllControllers(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
}; 
 
 


//Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary Size 40
// Inherited 40 bytes 
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void ShowLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	void SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	void HideLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	void ClearLoadingScreenSplashes(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	void AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
}; 
 
 


//Class HeadMountedDisplay.VRNotificationsComponent Size 352
// Inherited 176 bytes 
class UVRNotificationsComponent : public UActorComponent
{

 public: 
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;  // Offset: 176 Size: 16
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate;  // Offset: 192 Size: 16
	struct FMulticastInlineDelegate HMDRecenteredDelegate;  // Offset: 208 Size: 16
	struct FMulticastInlineDelegate HMDLostDelegate;  // Offset: 224 Size: 16
	struct FMulticastInlineDelegate HMDReconnectedDelegate;  // Offset: 240 Size: 16
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate;  // Offset: 256 Size: 16
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate;  // Offset: 272 Size: 16
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate;  // Offset: 288 Size: 16
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate;  // Offset: 304 Size: 16
	struct FMulticastInlineDelegate XRTrackingOriginChangedDelegate;  // Offset: 320 Size: 16
	struct FMulticastInlineDelegate XRPlayAreaChangedDelegate;  // Offset: 336 Size: 16



 // Functions 
 public:
}; 
 
 


