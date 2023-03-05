#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetClippingPlanes
{
public:
	FSetClippingPlanes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNear() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFar() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDeviceTracking
{
public:
	FIsDeviceTracking(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FXRDeviceId GetXRDeviceId() {
		return memory.read<struct FXRDeviceId>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FXRDeviceOnDisconnectDelegate__DelegateSignature
{
public:
	FXRDeviceOnDisconnectDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOutReason() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackingOriginTransform
{
public:
	FGetTrackingOriginTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHMDTrackingOrigin GetOrigin() {
		return memory.read<enum class EHMDTrackingOrigin>(m_addr + 0);
	}
	struct FTransform GetOutTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FXRDeviceId
{
public:
	FXRDeviceId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSystemName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FXRGestureConfig
{
public:
	FXRGestureConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbTap() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbHold() {
		return memory.read<bool>(m_addr + 1);
	}
	enum class ESpatialInputGestureAxis GetAxisGesture() {
		return memory.read<enum class ESpatialInputGestureAxis>(m_addr + 2);
	}
	bool GetbNavigationAxisX() {
		return memory.read<bool>(m_addr + 3);
	}
	bool GetbNavigationAxisY() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetbNavigationAxisZ() {
		return memory.read<bool>(m_addr + 5);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTrackingOrigin
{
public:
	FSetTrackingOrigin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHMDTrackingOrigin GetOrigin() {
		return memory.read<enum class EHMDTrackingOrigin>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FXRTimedInputActionDelegate__DelegateSignature
{
public:
	FXRTimedInputActionDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}
	struct FTimespan GetTime() {
		return memory.read<struct FTimespan>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsHeadMountedDisplayConnected
{
public:
	FIsHeadMountedDisplayConnected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTrackingSource
{
public:
	FSetTrackingSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerHand GetNewSource() {
		return memory.read<enum class EControllerHand>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSpectatorScreenMode
{
public:
	FSetSpectatorScreenMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESpectatorScreenMode GetMode() {
		return memory.read<enum class ESpectatorScreenMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeviceModelLoadedDelegate__DelegateSignature
{
public:
	FDeviceModelLoadedDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetLoadedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FXRMotionControllerData
{
public:
	FXRMotionControllerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbValid() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FName GetDeviceName() {
		return memory.read<struct FName>(m_addr + 4);
	}
	struct FGuid GetApplicationInstanceID() {
		return memory.read<struct FGuid>(m_addr + 12);
	}
	enum class EXRVisualType GetDeviceVisualType() {
		return memory.read<enum class EXRVisualType>(m_addr + 28);
	}
	enum class EControllerHand GetHandIndex() {
		return memory.read<enum class EControllerHand>(m_addr + 29);
	}
	enum class ETrackingStatus GetTrackingStatus() {
		return memory.read<enum class ETrackingStatus>(m_addr + 30);
	}
	struct FVector GetGripPosition() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FQuat GetGripRotation() {
		return memory.read<struct FQuat>(m_addr + 48);
	}
	struct FVector GetAimPosition() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	struct FQuat GetAimRotation() {
		return memory.read<struct FQuat>(m_addr + 80);
	}
	struct TArray<struct FVector> GetHandKeyPositions() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 96);
	}
	struct TArray<struct FQuat> GetHandKeyRotations() {
		return memory.read<struct TArray<struct FQuat>>(m_addr + 112);
	}
	struct TArray<float> GetHandKeyRadii() {
		return memory.read<struct TArray<float>>(m_addr + 128);
	}
	bool GetbIsGrasped() {
		return memory.read<bool>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumOfTrackingSensors
{
public:
	FGetNumOfTrackingSensors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearXRTimedInputActionDelegate
{
public:
	FClearXRTimedInputActionDelegate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetActionPath() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FXRHMDData
{
public:
	FXRHMDData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbValid() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FName GetDeviceName() {
		return memory.read<struct FName>(m_addr + 4);
	}
	struct FGuid GetApplicationInstanceID() {
		return memory.read<struct FGuid>(m_addr + 12);
	}
	enum class ETrackingStatus GetTrackingStatus() {
		return memory.read<enum class ETrackingStatus>(m_addr + 28);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableMotionTrackingForComponent
{
public:
	FEnableMotionTrackingForComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMotionControllerComponent GetMotionControllerComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMotionControllerComponent(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FBreakKey
{
public:
	FBreakKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetInKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}
	struct FString GetInteractionProfile() {
		return memory.read<struct FString>(m_addr + 24);
	}
	enum class EControllerHand GetHand() {
		return memory.read<enum class EControllerHand>(m_addr + 40);
	}
	struct FName GetMotionSource() {
		return memory.read<struct FName>(m_addr + 44);
	}
	struct FString GetIndentifier() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetComponent() {
		return memory.read<struct FString>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCustomDisplayMesh
{
public:
	FSetCustomDisplayMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMesh GetNewDisplayMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UStaticMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameterValue
{
public:
	FGetParameterValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetbValueFound() {
		return memory.read<bool>(m_addr + 8);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FCalibrateExternalTrackingToHMD
{
public:
	FCalibrateExternalTrackingToHMD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetExternalTrackingTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConfigureGestures
{
public:
	FConfigureGestures(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FXRGestureConfig GetGestureConfig() {
		return memory.read<struct FXRGestureConfig>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 6);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetScreenPercentage
{
public:
	FGetScreenPercentage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConnectRemoteXRDevice
{
public:
	FConnectRemoteXRDevice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetIpAddress() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetBitRate() {
		return memory.read<int32_t>(m_addr + 16);
	}
	enum class EXRDeviceConnectionResult GetReturnValue() {
		return memory.read<enum class EXRDeviceConnectionResult>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableHMD
{
public:
	FEnableHMD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackingToWorldTransform
{
public:
	FGetTrackingToWorldTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableLowPersistenceMode
{
public:
	FEnableLowPersistenceMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackingSensorParameters
{
public:
	FGetTrackingSensorParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 12);
	}
	float GetLeftFOV() {
		return memory.read<float>(m_addr + 24);
	}
	float GetRightFOV() {
		return memory.read<float>(m_addr + 28);
	}
	float GetTopFOV() {
		return memory.read<float>(m_addr + 32);
	}
	float GetBottomFOV() {
		return memory.read<float>(m_addr + 36);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 40);
	}
	float GetNearPlane() {
		return memory.read<float>(m_addr + 44);
	}
	float GetFarPlane() {
		return memory.read<float>(m_addr + 48);
	}
	bool GetIsActive() {
		return memory.read<bool>(m_addr + 52);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnumerateTrackedDevices
{
public:
	FEnumerateTrackedDevices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSystemId() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class EXRTrackedDeviceType GetDeviceType() {
		return memory.read<enum class EXRTrackedDeviceType>(m_addr + 8);
	}
	struct TArray<struct FXRDeviceId> GetReturnValue() {
		return memory.read<struct TArray<struct FXRDeviceId>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControllerTransformForTime
{
public:
	FGetControllerTransformForTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	int32_t GetControllerIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FName GetMotionSource() {
		return memory.read<struct FName>(m_addr + 12);
	}
	struct FTimespan GetTime() {
		return memory.read<struct FTimespan>(m_addr + 24);
	}
	bool GetbTimeWasUsed() {
		return memory.read<bool>(m_addr + 32);
	}
	struct FRotator GetOrientation() {
		return memory.read<struct FRotator>(m_addr + 36);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	bool GetbProvidedLinearVelocity() {
		return memory.read<bool>(m_addr + 60);
	}
	struct FVector GetLinearVelocity() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	bool GetbProvidedAngularVelocity() {
		return memory.read<bool>(m_addr + 76);
	}
	struct FVector GetAngularVelocityRadPerSec() {
		return memory.read<struct FVector>(m_addr + 80);
	}
	bool GetbProvidedLinearAcceleration() {
		return memory.read<bool>(m_addr + 92);
	}
	struct FVector GetLinearAcceleration() {
		return memory.read<struct FVector>(m_addr + 96);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHMDData
{
public:
	FGetHMDData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FXRHMDData GetHMDData() {
		return memory.read<struct FXRHMDData>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDevicePose
{
public:
	FGetDevicePose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FXRDeviceId GetXRDeviceId() {
		return memory.read<struct FXRDeviceId>(m_addr + 0);
	}
	bool GetbIsTracked() {
		return memory.read<bool>(m_addr + 12);
	}
	struct FRotator GetOrientation() {
		return memory.read<struct FRotator>(m_addr + 16);
	}
	bool GetbHasPositionalTracking() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlayAreaRect
{
public:
	FGetPlayAreaRect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetOutTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	struct FVector2D GetOutRect() {
		return memory.read<struct FVector2D>(m_addr + 48);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDeviceWorldPose
{
public:
	FGetDeviceWorldPose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FXRDeviceId GetXRDeviceId() {
		return memory.read<struct FXRDeviceId>(m_addr + 8);
	}
	bool GetbIsTracked() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FRotator GetOrientation() {
		return memory.read<struct FRotator>(m_addr + 24);
	}
	bool GetbHasPositionalTracking() {
		return memory.read<bool>(m_addr + 36);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSpectatorScreenModeTexturePlusEyeLayout
{
public:
	FSetSpectatorScreenModeTexturePlusEyeLayout(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetEyeRectMin() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	struct FVector2D GetEyeRectMax() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FVector2D GetTextureRectMin() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}
	struct FVector2D GetTextureRectMax() {
		return memory.read<struct FVector2D>(m_addr + 24);
	}
	bool GetbDrawEyeFirst() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetbClearBlack() {
		return memory.read<bool>(m_addr + 33);
	}
	bool GetbUseAlpha() {
		return memory.read<bool>(m_addr + 34);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHMDDeviceName
{
public:
	FGetHMDDeviceName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOrientationAndPosition
{
public:
	FGetOrientationAndPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetDeviceRotation() {
		return memory.read<struct FRotator>(m_addr + 0);
	}
	struct FVector GetDevicePosition() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHMDWornState
{
public:
	FGetHMDWornState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHMDWornState GetReturnValue() {
		return memory.read<enum class EHMDWornState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTrackingMotionSource
{
public:
	FSetTrackingMotionSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNewSource() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMotionControllerData
{
public:
	FGetMotionControllerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	enum class EControllerHand GetHand() {
		return memory.read<enum class EControllerHand>(m_addr + 8);
	}
	struct FXRMotionControllerData GetMotionControllerData() {
		return memory.read<struct FXRMotionControllerData>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPixelDensity
{
public:
	FGetPixelDensity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlayAreaBounds
{
public:
	FGetPlayAreaBounds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHMDTrackingOrigin GetOrigin() {
		return memory.read<enum class EHMDTrackingOrigin>(m_addr + 0);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPositionalTrackingCameraParameters
{
public:
	FGetPositionalTrackingCameraParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCameraOrigin() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FRotator GetCameraRotation() {
		return memory.read<struct FRotator>(m_addr + 12);
	}
	float GetHFOV() {
		return memory.read<float>(m_addr + 24);
	}
	float GetVFOV() {
		return memory.read<float>(m_addr + 28);
	}
	float GetCameraDistance() {
		return memory.read<float>(m_addr + 32);
	}
	float GetNearPlane() {
		return memory.read<float>(m_addr + 36);
	}
	float GetFarPlane() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackingOrigin
{
public:
	FGetTrackingOrigin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHMDTrackingOrigin GetReturnValue() {
		return memory.read<enum class EHMDTrackingOrigin>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVersionString
{
public:
	FGetVersionString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVRFocusState
{
public:
	FGetVRFocusState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseFocus() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbHasFocus() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAssociatedPlayerIndex
{
public:
	FSetAssociatedPlayerIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewPlayer() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaximumMotionTrackedControllerCount
{
public:
	FGetMaximumMotionTrackedControllerCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateExternalTrackingHMDPosition
{
public:
	FUpdateExternalTrackingHMDPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetExternalTrackingTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWorldToMetersScale
{
public:
	FGetWorldToMetersScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetOrientationAndPosition
{
public:
	FResetOrientationAndPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetYaw() {
		return memory.read<float>(m_addr + 0);
	}
	enum class EOrientPositionSelector GetOptions() {
		return memory.read<enum class EOrientPositionSelector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetXRSystemFlags
{
public:
	FGetXRSystemFlags(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDisplayModelSource
{
public:
	FSetDisplayModelSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNewDisplayModelSource() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsTracked
{
public:
	FIsTracked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasValidTrackingPosition
{
public:
	FHasValidTrackingPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsHeadMountedDisplayEnabled
{
public:
	FIsHeadMountedDisplayEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDisableMotionTrackingOfControllersForPlayer
{
public:
	FDisableMotionTrackingOfControllersForPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWorldToMetersScale
{
public:
	FSetWorldToMetersScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetNewScale() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsInLowPersistenceMode
{
public:
	FIsInLowPersistenceMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDisableMotionTrackingForComponent
{
public:
	FDisableMotionTrackingForComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMotionControllerComponent GetMotionControllerComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMotionControllerComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSpectatorScreenModeControllable
{
public:
	FIsSpectatorScreenModeControllable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddLoadingScreenSplash
{
public:
	FAddLoadingScreenSplash(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}
	struct FVector GetTranslation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 20);
	}
	struct FVector2D GetSize() {
		return memory.read<struct FVector2D>(m_addr + 32);
	}
	struct FRotator GetDeltaRotation() {
		return memory.read<struct FRotator>(m_addr + 40);
	}
	bool GetbClearBeforeAdd() {
		return memory.read<bool>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSpectatorScreenTexture
{
public:
	FSetSpectatorScreenTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetInTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetXRDisconnectDelegate
{
public:
	FSetXRDisconnectDelegate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDelegate GetInDisconnectedDelegate() {
		return memory.read<struct FDelegate>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetShowDeviceModel
{
public:
	FSetShowDeviceModel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShowControllerModel() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetXRTimedInputActionDelegate
{
public:
	FSetXRTimedInputActionDelegate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetActionName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FDelegate GetInDelegate() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_HandKeypointToInt32
{
public:
	FConv_HandKeypointToInt32(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHandKeypoint GetInput() {
		return memory.read<enum class EHandKeypoint>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHandJointPosition
{
public:
	FGetHandJointPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetjointIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbValueFound() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackingSource
{
public:
	FGetTrackingSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerHand GetReturnValue() {
		return memory.read<enum class EControllerHand>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDisableMotionTrackingOfDevice
{
public:
	FDisableMotionTrackingOfDevice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EControllerHand GetHand() {
		return memory.read<enum class EControllerHand>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDisableMotionTrackingOfSource
{
public:
	FDisableMotionTrackingOfSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FName GetSourceName() {
		return memory.read<struct FName>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableMotionTrackingOfDevice
{
public:
	FEnableMotionTrackingOfDevice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EControllerHand GetHand() {
		return memory.read<enum class EControllerHand>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 5);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableMotionTrackingOfSource
{
public:
	FEnableMotionTrackingOfSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FName GetSourceName() {
		return memory.read<struct FName>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnumerateMotionSources
{
public:
	FEnumerateMotionSources(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetReturnValue() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActiveTrackingSystemName
{
public:
	FGetActiveTrackingSystemName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMotionTrackingEnabledControllerCount
{
public:
	FGetMotionTrackingEnabledControllerCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsMotionSourceTracking
{
public:
	FIsMotionSourceTracking(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FName GetSourceName() {
		return memory.read<struct FName>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsMotionTrackedDeviceCountManagementNecessary
{
public:
	FIsMotionTrackedDeviceCountManagementNecessary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsMotionTrackingEnabledForComponent
{
public:
	FIsMotionTrackingEnabledForComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMotionControllerComponent GetMotionControllerComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMotionControllerComponent(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsMotionTrackingEnabledForDevice
{
public:
	FIsMotionTrackingEnabledForDevice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EControllerHand GetHand() {
		return memory.read<enum class EControllerHand>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 5);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsMotionTrackingEnabledForSource
{
public:
	FIsMotionTrackingEnabledForSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FName GetSourceName() {
		return memory.read<struct FName>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsControllerMotionTrackingEnabledByDefault
{
public:
	FSetIsControllerMotionTrackingEnabledByDefault(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddDeviceVisualizationComponentBlocking
{
public:
	FAddDeviceVisualizationComponentBlocking(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FXRDeviceId GetXRDeviceId() {
		return memory.read<struct FXRDeviceId>(m_addr + 8);
	}
	bool GetbManualAttachment() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FTransform GetRelativeTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct UPrimitiveComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UPrimitiveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddNamedDeviceVisualizationComponentBlocking
{
public:
	FAddNamedDeviceVisualizationComponentBlocking(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FName GetSystemName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetDeviceName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	bool GetbManualAttachment() {
		return memory.read<bool>(m_addr + 24);
	}
	struct FTransform GetRelativeTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FXRDeviceId GetXRDeviceId() {
		return memory.read<struct FXRDeviceId>(m_addr + 80);
	}
	struct UPrimitiveComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UPrimitiveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddDeviceVisualizationComponentAsync
{
public:
	FAddDeviceVisualizationComponentAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FXRDeviceId GetXRDeviceId() {
		return memory.read<struct FXRDeviceId>(m_addr + 8);
	}
	bool GetbManualAttachment() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FTransform GetRelativeTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct UPrimitiveComponent GetNewComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UAsyncTask_LoadXRDeviceVisComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UAsyncTask_LoadXRDeviceVisComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddNamedDeviceVisualizationComponentAsync
{
public:
	FAddNamedDeviceVisualizationComponentAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FName GetSystemName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetDeviceName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	bool GetbManualAttachment() {
		return memory.read<bool>(m_addr + 24);
	}
	struct FTransform GetRelativeTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FXRDeviceId GetXRDeviceId() {
		return memory.read<struct FXRDeviceId>(m_addr + 80);
	}
	struct UPrimitiveComponent GetNewComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UAsyncTask_LoadXRDeviceVisComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UAsyncTask_LoadXRDeviceVisComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLoadingScreen
{
public:
	FSetLoadingScreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}
	struct FVector2D GetScale() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FVector GetOffset() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	bool GetbShowLoadingMovie() {
		return memory.read<bool>(m_addr + 28);
	}
	bool GetbShowOnSet() {
		return memory.read<bool>(m_addr + 29);
	}

private:
	std::uint64_t m_addr = 0;
};