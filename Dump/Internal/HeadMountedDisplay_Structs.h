#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes Size 8
class FSetClippingPlanes
{

 public: 
	float Near;  // Offset: 0 Size: 4
	float Far;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking Size 16
class FIsDeviceTracking
{

 public: 
	struct FXRDeviceId XRDeviceId;  // Offset: 0 Size: 12
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //DelegateFunction HeadMountedDisplay.XRDeviceOnDisconnectDelegate__DelegateSignature Size 16
class FXRDeviceOnDisconnectDelegate__DelegateSignature
{

 public: 
	struct FString OutReason;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform Size 80
class FGetTrackingOriginTransform
{

 public: 
	enum class EHMDTrackingOrigin Origin;  // Offset: 0 Size: 1
	char pad_1[15];  // Offset: 1 Size: 15
	struct FTransform OutTransform;  // Offset: 16 Size: 48
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool ReturnValue : 1;  // Offset: 64 Size: 1
	char pad_65[15];  // Offset: 65 Size: 15



 // Functions 
 public:
}; 
 
 //ScriptStruct HeadMountedDisplay.XRDeviceId Size 12
class FXRDeviceId
{

 public: 
	struct FName SystemName;  // Offset: 0 Size: 8
	int32_t DeviceID;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HeadMountedDisplay.XRGestureConfig Size 6
class FXRGestureConfig
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bTap : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bHold : 1;  // Offset: 1 Size: 1
	enum class ESpatialInputGestureAxis AxisGesture;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool bNavigationAxisX : 1;  // Offset: 3 Size: 1
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bNavigationAxisY : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool bNavigationAxisZ : 1;  // Offset: 5 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin Size 1
class FSetTrackingOrigin
{

 public: 
	enum class EHMDTrackingOrigin Origin;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction HeadMountedDisplay.XRTimedInputActionDelegate__DelegateSignature Size 16
class FXRTimedInputActionDelegate__DelegateSignature
{

 public: 
	float Value;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FTimespan Time;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected Size 1
class FIsHeadMountedDisplayConnected
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource Size 1
class FSetTrackingSource
{

 public: 
	enum class EControllerHand NewSource;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode Size 1
class FSetSpectatorScreenMode
{

 public: 
	enum class ESpectatorScreenMode Mode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction HeadMountedDisplay.DeviceModelLoadedDelegate__DelegateSignature Size 8
class FDeviceModelLoadedDelegate__DelegateSignature
{

 public: 
	struct UPrimitiveComponent* LoadedComponent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct HeadMountedDisplay.XRMotionControllerData Size 160
class FXRMotionControllerData
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bValid : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FName DeviceName;  // Offset: 4 Size: 8
	struct FGuid ApplicationInstanceID;  // Offset: 12 Size: 16
	enum class EXRVisualType DeviceVisualType;  // Offset: 28 Size: 1
	enum class EControllerHand HandIndex;  // Offset: 29 Size: 1
	enum class ETrackingStatus TrackingStatus;  // Offset: 30 Size: 1
	char pad_31[1];  // Offset: 31 Size: 1
	struct FVector GripPosition;  // Offset: 32 Size: 12
	char pad_44[4];  // Offset: 44 Size: 4
	struct FQuat GripRotation;  // Offset: 48 Size: 16
	struct FVector AimPosition;  // Offset: 64 Size: 12
	char pad_76[4];  // Offset: 76 Size: 4
	struct FQuat AimRotation;  // Offset: 80 Size: 16
	struct TArray<struct FVector> HandKeyPositions;  // Offset: 96 Size: 16
	struct TArray<struct FQuat> HandKeyRotations;  // Offset: 112 Size: 16
	struct TArray<float> HandKeyRadii;  // Offset: 128 Size: 16
	char pad_144_1 : 7;  // Offset: 144 Size: 1
	bool bIsGrasped : 1;  // Offset: 144 Size: 1
	char pad_145[15];  // Offset: 145 Size: 15



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors Size 4
class FGetNumOfTrackingSensors
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate Size 8
class FClearXRTimedInputActionDelegate
{

 public: 
	struct FName ActionPath;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct HeadMountedDisplay.XRHMDData Size 64
class FXRHMDData
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bValid : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FName DeviceName;  // Offset: 4 Size: 8
	struct FGuid ApplicationInstanceID;  // Offset: 12 Size: 16
	enum class ETrackingStatus TrackingStatus;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct FVector position;  // Offset: 32 Size: 12
	char pad_44[4];  // Offset: 44 Size: 4
	struct FQuat Rotation;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent Size 16
class FEnableMotionTrackingForComponent
{

 public: 
	struct UMotionControllerComponent* MotionControllerComponent;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey Size 88
class FBreakKey
{

 public: 
	struct FKey InKey;  // Offset: 0 Size: 24
	struct FString InteractionProfile;  // Offset: 24 Size: 16
	enum class EControllerHand Hand;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	struct FName MotionSource;  // Offset: 44 Size: 8
	char pad_52[4];  // Offset: 52 Size: 4
	struct FString Indentifier;  // Offset: 56 Size: 16
	struct FString Component;  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh Size 8
class FSetCustomDisplayMesh
{

 public: 
	struct UStaticMesh* NewDisplayMesh;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue Size 16
class FGetParameterValue
{

 public: 
	struct FName InName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bValueFound : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	float ReturnValue;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD Size 48
class FCalibrateExternalTrackingToHMD
{

 public: 
	struct FTransform ExternalTrackingTransform;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures Size 7
class FConfigureGestures
{

 public: 
	struct FXRGestureConfig GestureConfig;  // Offset: 0 Size: 6
	char pad_6_1 : 7;  // Offset: 6 Size: 1
	bool ReturnValue : 1;  // Offset: 6 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage Size 4
class FGetScreenPercentage
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice Size 24
class FConnectRemoteXRDevice
{

 public: 
	struct FString IpAddress;  // Offset: 0 Size: 16
	int32_t BitRate;  // Offset: 16 Size: 4
	enum class EXRDeviceConnectionResult ReturnValue;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD Size 2
class FEnableHMD
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool ReturnValue : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform Size 64
class FGetTrackingToWorldTransform
{

 public: 
	struct UObject* WorldContext;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8
	struct FTransform ReturnValue;  // Offset: 16 Size: 48



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode Size 1
class FEnableLowPersistenceMode
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters Size 60
class FGetTrackingSensorParameters
{

 public: 
	struct FVector Origin;  // Offset: 0 Size: 12
	struct FRotator Rotation;  // Offset: 12 Size: 12
	float LeftFOV;  // Offset: 24 Size: 4
	float RightFOV;  // Offset: 28 Size: 4
	float TopFOV;  // Offset: 32 Size: 4
	float BottomFOV;  // Offset: 36 Size: 4
	float Distance;  // Offset: 40 Size: 4
	float NearPlane;  // Offset: 44 Size: 4
	float FarPlane;  // Offset: 48 Size: 4
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	bool IsActive : 1;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3
	int32_t Index;  // Offset: 56 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices Size 32
class FEnumerateTrackedDevices
{

 public: 
	struct FName SystemId;  // Offset: 0 Size: 8
	enum class EXRTrackedDeviceType DeviceType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct TArray<struct FXRDeviceId> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime Size 112
class FGetControllerTransformForTime
{

 public: 
	struct UObject* WorldContext;  // Offset: 0 Size: 8
	int32_t ControllerIndex;  // Offset: 8 Size: 4
	struct FName MotionSource;  // Offset: 12 Size: 8
	char pad_20[4];  // Offset: 20 Size: 4
	struct FTimespan Time;  // Offset: 24 Size: 8
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bTimeWasUsed : 1;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3
	struct FRotator Orientation;  // Offset: 36 Size: 12
	struct FVector position;  // Offset: 48 Size: 12
	char pad_60_1 : 7;  // Offset: 60 Size: 1
	bool bProvidedLinearVelocity : 1;  // Offset: 60 Size: 1
	char pad_61[3];  // Offset: 61 Size: 3
	struct FVector LinearVelocity;  // Offset: 64 Size: 12
	char pad_76_1 : 7;  // Offset: 76 Size: 1
	bool bProvidedAngularVelocity : 1;  // Offset: 76 Size: 1
	char pad_77[3];  // Offset: 77 Size: 3
	struct FVector AngularVelocityRadPerSec;  // Offset: 80 Size: 12
	char pad_92_1 : 7;  // Offset: 92 Size: 1
	bool bProvidedLinearAcceleration : 1;  // Offset: 92 Size: 1
	char pad_93[3];  // Offset: 93 Size: 3
	struct FVector LinearAcceleration;  // Offset: 96 Size: 12
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool ReturnValue : 1;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData Size 80
class FGetHMDData
{

 public: 
	struct UObject* WorldContext;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8
	struct FXRHMDData HMDData;  // Offset: 16 Size: 64



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose Size 44
class FGetDevicePose
{

 public: 
	struct FXRDeviceId XRDeviceId;  // Offset: 0 Size: 12
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bIsTracked : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	struct FRotator Orientation;  // Offset: 16 Size: 12
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bHasPositionalTracking : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct FVector position;  // Offset: 32 Size: 12



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect Size 64
class FGetPlayAreaRect
{

 public: 
	struct FTransform OutTransform;  // Offset: 0 Size: 48
	struct FVector2D OutRect;  // Offset: 48 Size: 8
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool ReturnValue : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose Size 56
class FGetDeviceWorldPose
{

 public: 
	struct UObject* WorldContext;  // Offset: 0 Size: 8
	struct FXRDeviceId XRDeviceId;  // Offset: 8 Size: 12
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bIsTracked : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct FRotator Orientation;  // Offset: 24 Size: 12
	char pad_36_1 : 7;  // Offset: 36 Size: 1
	bool bHasPositionalTracking : 1;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3
	struct FVector position;  // Offset: 40 Size: 12
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout Size 36
class FSetSpectatorScreenModeTexturePlusEyeLayout
{

 public: 
	struct FVector2D EyeRectMin;  // Offset: 0 Size: 8
	struct FVector2D EyeRectMax;  // Offset: 8 Size: 8
	struct FVector2D TextureRectMin;  // Offset: 16 Size: 8
	struct FVector2D TextureRectMax;  // Offset: 24 Size: 8
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bDrawEyeFirst : 1;  // Offset: 32 Size: 1
	char pad_33_1 : 7;  // Offset: 33 Size: 1
	bool bClearBlack : 1;  // Offset: 33 Size: 1
	char pad_34_1 : 7;  // Offset: 34 Size: 1
	bool bUseAlpha : 1;  // Offset: 34 Size: 1
	char pad_35[1];  // Offset: 35 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName Size 8
class FGetHMDDeviceName
{

 public: 
	struct FName ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition Size 24
class FGetOrientationAndPosition
{

 public: 
	struct FRotator DeviceRotation;  // Offset: 0 Size: 12
	struct FVector DevicePosition;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState Size 1
class FGetHMDWornState
{

 public: 
	enum class EHMDWornState ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource Size 8
class FSetTrackingMotionSource
{

 public: 
	struct FName NewSource;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData Size 176
class FGetMotionControllerData
{

 public: 
	struct UObject* WorldContext;  // Offset: 0 Size: 8
	enum class EControllerHand Hand;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FXRMotionControllerData MotionControllerData;  // Offset: 16 Size: 160



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity Size 4
class FGetPixelDensity
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds Size 12
class FGetPlayAreaBounds
{

 public: 
	enum class EHMDTrackingOrigin Origin;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FVector2D ReturnValue;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters Size 44
class FGetPositionalTrackingCameraParameters
{

 public: 
	struct FVector CameraOrigin;  // Offset: 0 Size: 12
	struct FRotator CameraRotation;  // Offset: 12 Size: 12
	float HFOV;  // Offset: 24 Size: 4
	float VFOV;  // Offset: 28 Size: 4
	float CameraDistance;  // Offset: 32 Size: 4
	float NearPlane;  // Offset: 36 Size: 4
	float FarPlane;  // Offset: 40 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin Size 1
class FGetTrackingOrigin
{

 public: 
	enum class EHMDTrackingOrigin ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString Size 16
class FGetVersionString
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState Size 2
class FGetVRFocusState
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bUseFocus : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bHasFocus : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex Size 4
class FSetAssociatedPlayerIndex
{

 public: 
	int32_t NewPlayer;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount Size 4
class FGetMaximumMotionTrackedControllerCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition Size 48
class FUpdateExternalTrackingHMDPosition
{

 public: 
	struct FTransform ExternalTrackingTransform;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale Size 16
class FGetWorldToMetersScale
{

 public: 
	struct UObject* WorldContext;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition Size 8
class FResetOrientationAndPosition
{

 public: 
	float Yaw;  // Offset: 0 Size: 4
	enum class EOrientPositionSelector Options;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags Size 4
class FGetXRSystemFlags
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource Size 8
class FSetDisplayModelSource
{

 public: 
	struct FName NewDisplayModelSource;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionControllerComponent.IsTracked Size 1
class FIsTracked
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition Size 1
class FHasValidTrackingPosition
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled Size 1
class FIsHeadMountedDisplayEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer Size 4
class FDisableMotionTrackingOfControllersForPlayer
{

 public: 
	int32_t PlayerIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale Size 16
class FSetWorldToMetersScale
{

 public: 
	struct UObject* WorldContext;  // Offset: 0 Size: 8
	float NewScale;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode Size 1
class FIsInLowPersistenceMode
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent Size 8
class FDisableMotionTrackingForComponent
{

 public: 
	struct UMotionControllerComponent* MotionControllerComponent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable Size 1
class FIsSpectatorScreenModeControllable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash Size 56
class FAddLoadingScreenSplash
{

 public: 
	struct UTexture* Texture;  // Offset: 0 Size: 8
	struct FVector Translation;  // Offset: 8 Size: 12
	struct FRotator Rotation;  // Offset: 20 Size: 12
	struct FVector2D Size;  // Offset: 32 Size: 8
	struct FRotator DeltaRotation;  // Offset: 40 Size: 12
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	bool bClearBeforeAdd : 1;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture Size 8
class FSetSpectatorScreenTexture
{

 public: 
	struct UTexture* InTexture;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate Size 16
class FSetXRDisconnectDelegate
{

 public: 
	struct FDelegate InDisconnectedDelegate;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel Size 1
class FSetShowDeviceModel
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bShowControllerModel : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate Size 24
class FSetXRTimedInputActionDelegate
{

 public: 
	struct FName ActionName;  // Offset: 0 Size: 8
	struct FDelegate InDelegate;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32 Size 8
class FConv_HandKeypointToInt32
{

 public: 
	enum class EHandKeypoint Input;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition Size 20
class FGetHandJointPosition
{

 public: 
	int32_t jointIndex;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bValueFound : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	struct FVector ReturnValue;  // Offset: 8 Size: 12



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource Size 1
class FGetTrackingSource
{

 public: 
	enum class EControllerHand ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice Size 8
class FDisableMotionTrackingOfDevice
{

 public: 
	int32_t PlayerIndex;  // Offset: 0 Size: 4
	enum class EControllerHand Hand;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource Size 12
class FDisableMotionTrackingOfSource
{

 public: 
	int32_t PlayerIndex;  // Offset: 0 Size: 4
	struct FName SourceName;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice Size 8
class FEnableMotionTrackingOfDevice
{

 public: 
	int32_t PlayerIndex;  // Offset: 0 Size: 4
	enum class EControllerHand Hand;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool ReturnValue : 1;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource Size 16
class FEnableMotionTrackingOfSource
{

 public: 
	int32_t PlayerIndex;  // Offset: 0 Size: 4
	struct FName SourceName;  // Offset: 4 Size: 8
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources Size 16
class FEnumerateMotionSources
{

 public: 
	struct TArray<struct FName> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName Size 8
class FGetActiveTrackingSystemName
{

 public: 
	struct FName ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount Size 4
class FGetMotionTrackingEnabledControllerCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking Size 16
class FIsMotionSourceTracking
{

 public: 
	int32_t PlayerIndex;  // Offset: 0 Size: 4
	struct FName SourceName;  // Offset: 4 Size: 8
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary Size 1
class FIsMotionTrackedDeviceCountManagementNecessary
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent Size 16
class FIsMotionTrackingEnabledForComponent
{

 public: 
	struct UMotionControllerComponent* MotionControllerComponent;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice Size 8
class FIsMotionTrackingEnabledForDevice
{

 public: 
	int32_t PlayerIndex;  // Offset: 0 Size: 4
	enum class EControllerHand Hand;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool ReturnValue : 1;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource Size 16
class FIsMotionTrackingEnabledForSource
{

 public: 
	int32_t PlayerIndex;  // Offset: 0 Size: 4
	struct FName SourceName;  // Offset: 4 Size: 8
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault Size 1
class FSetIsControllerMotionTrackingEnabledByDefault
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Enable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking Size 96
class FAddDeviceVisualizationComponentBlocking
{

 public: 
	struct AActor* Target;  // Offset: 0 Size: 8
	struct FXRDeviceId XRDeviceId;  // Offset: 8 Size: 12
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bManualAttachment : 1;  // Offset: 20 Size: 1
	char pad_21[11];  // Offset: 21 Size: 11
	struct FTransform RelativeTransform;  // Offset: 32 Size: 48
	struct UPrimitiveComponent* ReturnValue;  // Offset: 80 Size: 8
	char pad_88[8];  // Offset: 88 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking Size 112
class FAddNamedDeviceVisualizationComponentBlocking
{

 public: 
	struct AActor* Target;  // Offset: 0 Size: 8
	struct FName SystemName;  // Offset: 8 Size: 8
	struct FName DeviceName;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bManualAttachment : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	struct FTransform RelativeTransform;  // Offset: 32 Size: 48
	struct FXRDeviceId XRDeviceId;  // Offset: 80 Size: 12
	char pad_92[4];  // Offset: 92 Size: 4
	struct UPrimitiveComponent* ReturnValue;  // Offset: 96 Size: 8
	char pad_104[8];  // Offset: 104 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync Size 96
class FAddDeviceVisualizationComponentAsync
{

 public: 
	struct AActor* Target;  // Offset: 0 Size: 8
	struct FXRDeviceId XRDeviceId;  // Offset: 8 Size: 12
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bManualAttachment : 1;  // Offset: 20 Size: 1
	char pad_21[11];  // Offset: 21 Size: 11
	struct FTransform RelativeTransform;  // Offset: 32 Size: 48
	struct UPrimitiveComponent* NewComponent;  // Offset: 80 Size: 8
	struct UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;  // Offset: 88 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync Size 112
class FAddNamedDeviceVisualizationComponentAsync
{

 public: 
	struct AActor* Target;  // Offset: 0 Size: 8
	struct FName SystemName;  // Offset: 8 Size: 8
	struct FName DeviceName;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bManualAttachment : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	struct FTransform RelativeTransform;  // Offset: 32 Size: 48
	struct FXRDeviceId XRDeviceId;  // Offset: 80 Size: 12
	char pad_92[4];  // Offset: 92 Size: 4
	struct UPrimitiveComponent* NewComponent;  // Offset: 96 Size: 8
	struct UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;  // Offset: 104 Size: 8



 // Functions 
 public:
}; 
 
 //Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen Size 32
class FSetLoadingScreen
{

 public: 
	struct UTexture* Texture;  // Offset: 0 Size: 8
	struct FVector2D Scale;  // Offset: 8 Size: 8
	struct FVector Offset;  // Offset: 16 Size: 12
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bShowLoadingMovie : 1;  // Offset: 28 Size: 1
	char pad_29_1 : 7;  // Offset: 29 Size: 1
	bool bShowOnSet : 1;  // Offset: 29 Size: 1
	char pad_30[2];  // Offset: 30 Size: 2



 // Functions 
 public:
}; 
 
 