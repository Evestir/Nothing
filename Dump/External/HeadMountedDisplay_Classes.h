#pragma once 
#include <HeadMountedDisplay_Structs.h>
 
 
 
class UHeadMountedDisplayFunctionLibrary
{
public:
	UHeadMountedDisplayFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UHandKeypointConversion
{
public:
	UHandKeypointConversion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAsyncTask_LoadXRDeviceVisComponent
{
public:
	UAsyncTask_LoadXRDeviceVisComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnModelLoaded() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnLoadFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}
	struct UPrimitiveComponent GetSpawnedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UPrimitiveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMotionControllerComponent
{
public:
	UMotionControllerComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 1136);
	}
	enum class EControllerHand GetHand() {
		return memory.read<enum class EControllerHand>(m_addr + 1140);
	}
	struct FName GetMotionSource() {
		return memory.read<struct FName>(m_addr + 1144);
	}
	char GetbDisableLowLatencyUpdate() {
		return memory.read<char>(m_addr + 1152);
	}
	enum class ETrackingStatus GetCurrentTrackingStatus() {
		return memory.read<enum class ETrackingStatus>(m_addr + 1156);
	}
	bool GetbDisplayDeviceModel() {
		return memory.read<bool>(m_addr + 1157);
	}
	struct FName GetDisplayModelSource() {
		return memory.read<struct FName>(m_addr + 1160);
	}
	struct UStaticMesh GetCustomDisplayMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct UStaticMesh(ptr_addr);
	}
	struct TArray<struct UMaterialInterface> GetDisplayMeshMaterialOverrides() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1176);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct UPrimitiveComponent GetDisplayComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UPrimitiveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UXRAssetFunctionLibrary
{
public:
	UXRAssetFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMotionTrackedDeviceFunctionLibrary
{
public:
	UMotionTrackedDeviceFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UXRLoadingScreenFunctionLibrary
{
public:
	UXRLoadingScreenFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVRNotificationsComponent
{
public:
	UVRNotificationsComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 176);
	}
	struct FMulticastInlineDelegate GetHMDTrackingInitializedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 192);
	}
	struct FMulticastInlineDelegate GetHMDRecenteredDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 208);
	}
	struct FMulticastInlineDelegate GetHMDLostDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 224);
	}
	struct FMulticastInlineDelegate GetHMDReconnectedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 240);
	}
	struct FMulticastInlineDelegate GetHMDConnectCanceledDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 256);
	}
	struct FMulticastInlineDelegate GetHMDPutOnHeadDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 272);
	}
	struct FMulticastInlineDelegate GetHMDRemovedFromHeadDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 288);
	}
	struct FMulticastInlineDelegate GetVRControllerRecenteredDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 304);
	}
	struct FMulticastInlineDelegate GetXRTrackingOriginChangedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 320);
	}
	struct FMulticastInlineDelegate GetXRPlayAreaChangedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 336);
	}

private:
	std::uint64_t m_addr = 0;
};


