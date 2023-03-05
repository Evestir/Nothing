#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FARSharedWorldReplicationState
{
public:
	FARSharedWorldReplicationState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPreviewImageOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetARWorldOffset() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSupportedVideoFormats
{
public:
	FGetSupportedVideoFormats(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARSessionType GetSessionType() {
		return memory.read<enum class EARSessionType>(m_addr + 0);
	}
	struct TArray<struct FARVideoFormat> GetReturnValue() {
		return memory.read<struct TArray<struct FARVideoFormat>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCheckGeoTrackingAvailability
{
public:
	FCheckGeoTrackingAvailability(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackablePlaneDelegate__DelegateSignature
{
public:
	FTrackablePlaneDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARPlaneGeometry GetTrackedPlane() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARPlaneGeometry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnARTrackingStateChanged__DelegateSignature
{
public:
	FOnARTrackingStateChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARTrackingState GetNewTrackingState() {
		return memory.read<enum class EARTrackingState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackableEnvProbeDelegate__DelegateSignature
{
public:
	FTrackableEnvProbeDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAREnvironmentCaptureProbe GetTrackedEnvProbe() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAREnvironmentCaptureProbe(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGeoLocationAtWorldPosition
{
public:
	FGetGeoLocationAtWorldPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetWorldPosition() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct UGetGeoLocationAsyncTaskBlueprintProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UGetGeoLocationAsyncTaskBlueprintProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGeoLocationDelegate__DelegateSignature
{
public:
	FGetGeoLocationDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLongitude() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLatitude() {
		return memory.read<float>(m_addr + 4);
	}
	float GetAltitude() {
		return memory.read<float>(m_addr + 8);
	}
	struct FString GetError() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnARTransformUpdated__DelegateSignature
{
public:
	FOnARTransformUpdated__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetOldToNewTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FARSaveWorldPin__DelegateSignature
{
public:
	FARSaveWorldPin__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetSavedWorld() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientUpdateARWorldData
{
public:
	FClientUpdateARWorldData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<char> GetBuffer() {
		return memory.read<struct TArray<char>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerDestroyARActor
{
public:
	FServerDestroyARActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AARActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AARActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCalculateAlignmentTransform
{
public:
	FCalculateAlignmentTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransformInFirstCoordinateSystem() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	struct FTransform GetTransformInSecondCoordinateSystem() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	struct FTransform GetAlignmentTransform() {
		return memory.read<struct FTransform>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FARImageUpdatePayload
{
public:
	FARImageUpdatePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARSessionPayload GetSessionPayload() {
		return memory.read<struct FARSessionPayload>(m_addr + 0);
	}
	struct FTransform GetWorldTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct UARCandidateImage GetDetectedImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UARCandidateImage(ptr_addr);
	}
	struct FVector2D GetEstimatedSize() {
		return memory.read<struct FVector2D>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FARSessionPayload
{
public:
	FARSessionPayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetConfigFlags() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UMaterialInterface GetDefaultMeshMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetDefaultWireframeMeshMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FARGetCandidateObjectPin__DelegateSignature
{
public:
	FARGetCandidateObjectPin__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARCandidateObject GetSavedObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARCandidateObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackableDelegate__DelegateSignature
{
public:
	FTrackableDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARTrackedGeometry GetTrackedGeometry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARTrackedGeometry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLongitude
{
public:
	FGetLongitude(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FARSessionStatus
{
public:
	FARSessionStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAdditionalInfo() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EARSessionStatus Getstatus() {
		return memory.read<enum class EARSessionStatus>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGeoTrackingAvailabilityDelegate__DelegateSignature
{
public:
	FGeoTrackingAvailabilityDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsAvailable() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FString GetError() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCheckGeoTrackingAvailabilityAtLocation
{
public:
	FCheckGeoTrackingAvailabilityAtLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetLongitude() {
		return memory.read<float>(m_addr + 8);
	}
	float GetLatitude() {
		return memory.read<float>(m_addr + 12);
	}
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllTracked2DPoses
{
public:
	FGetAllTracked2DPoses(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FARPose2D> GetReturnValue() {
		return memory.read<struct TArray<struct FARPose2D>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDebugDrawTrackedGeometry
{
public:
	FDebugDrawTrackedGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARTrackedGeometry GetTrackedGeometry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARTrackedGeometry(ptr_addr);
	}
	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}
	float GetOutlineThickness() {
		return memory.read<float>(m_addr + 32);
	}
	float GetPersistForSeconds() {
		return memory.read<float>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FARFaceUpdatePayload
{
public:
	FARFaceUpdatePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARSessionPayload GetSessionPayload() {
		return memory.read<struct FARSessionPayload>(m_addr + 0);
	}
	struct FVector GetLeftEyePosition() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetRightEyePosition() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	struct FVector GetLookAtTarget() {
		return memory.read<struct FVector>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FARMeshUpdatePayload
{
public:
	FARMeshUpdatePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARSessionPayload GetSessionPayload() {
		return memory.read<struct FARSessionPayload>(m_addr + 0);
	}
	struct FTransform GetWorldTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	enum class EARObjectClassification GetObjectClassification() {
		return memory.read<enum class EARObjectClassification>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPointCloud
{
public:
	FGetPointCloud(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetReturnValue() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInstanceARActorSpawnedDelegate__DelegateSignature
{
public:
	FInstanceARActorSpawnedDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UObject(ptr_addr);
	}
	struct FGuid GetNativeID() {
		return memory.read<struct FGuid>(m_addr + 8);
	}
	struct AARActor GetSpawnedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct AARActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FARGeoAnchorUpdatePayload
{
public:
	FARGeoAnchorUpdatePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARSessionPayload GetSessionPayload() {
		return memory.read<struct FARSessionPayload>(m_addr + 0);
	}
	struct FTransform GetWorldTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	float GetLongitude() {
		return memory.read<float>(m_addr + 80);
	}
	float GetLatitude() {
		return memory.read<float>(m_addr + 84);
	}
	float GetAltitudeMeters() {
		return memory.read<float>(m_addr + 88);
	}
	enum class EARAltitudeSource GetAltitudeSource() {
		return memory.read<enum class EARAltitudeSource>(m_addr + 92);
	}
	struct FString GetAnchorName() {
		return memory.read<struct FString>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FInstanceARActorToBeDestroyedDelegate__DelegateSignature
{
public:
	FInstanceARActorToBeDestroyedDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AARActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AARActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackedGeometry
{
public:
	FGetTrackedGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARTrackedGeometry GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARTrackedGeometry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSpawnARActor
{
public:
	FServerSpawnARActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UObject(ptr_addr);
	}
	struct FGuid GetNativeID() {
		return memory.read<struct FGuid>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackablePointDelegate__DelegateSignature
{
public:
	FTrackablePointDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARTrackedPoint GetTrackedPoint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARTrackedPoint(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllTrackedPoints
{
public:
	FGetAllTrackedPoints(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UARTrackedPoint> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UARTrackedPoint>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFaceComponentDebugMode
{
public:
	FSetFaceComponentDebugMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EFaceComponentDebugMode GetNewDebugMode() {
		return memory.read<enum class EFaceComponentDebugMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackableImageDelegate__DelegateSignature
{
public:
	FTrackableImageDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARTrackedImage GetTrackedImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARTrackedImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackableFaceDelegate__DelegateSignature
{
public:
	FTrackableFaceDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARFaceGeometry GetTrackedFace() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARFaceGeometry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FARCameraIntrinsics
{
public:
	FARCameraIntrinsics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FIntPoint GetImageResolution() {
		return memory.read<struct FIntPoint>(m_addr + 0);
	}
	struct FVector2D GetFocalLength() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FVector2D GetPrincipalPoint() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackableObjectDelegate__DelegateSignature
{
public:
	FTrackableObjectDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARTrackedObject GetTrackedObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARTrackedObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackedGeometryGroup
{
public:
	FTrackedGeometryGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AARActor GetARActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AARActor(ptr_addr);
	}
	struct UARComponent GetARComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UARComponent(ptr_addr);
	}
	struct UARTrackedGeometry GetTrackedGeometry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UARTrackedGeometry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackedPoseData
{
public:
	FGetTrackedPoseData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARPose3D GetReturnValue() {
		return memory.read<struct FARPose3D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FARObjectUpdatePayload
{
public:
	FARObjectUpdatePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetWorldTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAREnvironmentProbeUpdatePayload
{
public:
	FAREnvironmentProbeUpdatePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetWorldTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FARSkeletonDefinition
{
public:
	FARSkeletonDefinition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumJoints() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FName> GetJointNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 8);
	}
	struct TArray<int32_t> GetParentIndices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FARPoseUpdatePayload
{
public:
	FARPoseUpdatePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetWorldTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	struct TArray<struct FTransform> GetJointTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllGeometriesByClass
{
public:
	FGetAllGeometriesByClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UARTrackedGeometry GetGeometryClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UARTrackedGeometry(ptr_addr);
	}
	struct TArray<struct UARTrackedGeometry> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UARTrackedGeometry>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindTrackedPointsByName
{
public:
	FFindTrackedPointsByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPointName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct UARTrackedPoint> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UARTrackedPoint>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FARQRCodeUpdatePayload
{
public:
	FARQRCodeUpdatePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARSessionPayload GetSessionPayload() {
		return memory.read<struct FARSessionPayload>(m_addr + 0);
	}
	struct FTransform GetWorldTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FVector GetExtents() {
		return memory.read<struct FVector>(m_addr + 80);
	}
	struct FString GetQRCode() {
		return memory.read<struct FString>(m_addr + 96);
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
};class FARPointUpdatePayload
{
public:
	FARPointUpdatePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FARPlaneUpdatePayload
{
public:
	FARPlaneUpdatePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARSessionPayload GetSessionPayload() {
		return memory.read<struct FARSessionPayload>(m_addr + 0);
	}
	struct FTransform GetWorldTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FVector GetCenter() {
		return memory.read<struct FVector>(m_addr + 80);
	}
	struct FVector GetExtents() {
		return memory.read<struct FVector>(m_addr + 92);
	}
	struct TArray<struct FVector> GetBoundaryVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 104);
	}
	enum class EARObjectClassification GetObjectClassification() {
		return memory.read<enum class EARObjectClassification>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FARTraceResult
{
public:
	FARTraceResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistanceFromCamera() {
		return memory.read<float>(m_addr + 0);
	}
	enum class EARLineTraceChannels GetTraceChannel() {
		return memory.read<enum class EARLineTraceChannels>(m_addr + 4);
	}
	struct FTransform GetLocalTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct UARTrackedGeometry GetTrackedGeometry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UARTrackedGeometry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FARVideoFormat
{
public:
	FARVideoFormat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetFPS() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FARPose3D
{
public:
	FARPose3D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARSkeletonDefinition GetSkeletonDefinition() {
		return memory.read<struct FARSkeletonDefinition>(m_addr + 0);
	}
	struct TArray<struct FTransform> GetJointTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 40);
	}
	struct TArray<bool> GetIsJointTracked() {
		return memory.read<struct TArray<bool>>(m_addr + 56);
	}
	enum class EARJointTransformSpace GetJointTransformSpace() {
		return memory.read<enum class EARJointTransformSpace>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FARPose2D
{
public:
	FARPose2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARSkeletonDefinition GetSkeletonDefinition() {
		return memory.read<struct FARSkeletonDefinition>(m_addr + 0);
	}
	struct TArray<struct FVector2D> GetJointLocations() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 40);
	}
	struct TArray<bool> GetIsJointTracked() {
		return memory.read<struct TArray<bool>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddARComponent
{
public:
	FAddARComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UARComponent GetInComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UARComponent(ptr_addr);
	}
	struct FGuid GetNativeID() {
		return memory.read<struct FGuid>(m_addr + 8);
	}
	struct UARComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UARComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddManualEnvironmentCaptureProbe
{
public:
	FAddManualEnvironmentCaptureProbe(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetExtent() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSubsumedBy
{
public:
	FGetSubsumedBy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARPlaneGeometry GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARPlaneGeometry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddRuntimeCandidateImage
{
public:
	FAddRuntimeCandidateImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARSessionConfig GetSessionConfig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARSessionConfig(ptr_addr);
	}
	struct UTexture2D GetCandidateTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTexture2D(ptr_addr);
	}
	struct FString GetFriendlyName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	float GetPhysicalWidth() {
		return memory.read<float>(m_addr + 32);
	}
	struct UARCandidateImage GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UARCandidateImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllTrackedImages
{
public:
	FGetAllTrackedImages(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UARTrackedImage> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UARTrackedImage>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddTrackedPointWithName
{
public:
	FAddTrackedPointWithName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetWorldTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	struct FString GetPointName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	bool GetbDeletePointsWithSameName() {
		return memory.read<bool>(m_addr + 64);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 65);
	}

private:
	std::uint64_t m_addr = 0;
};class FCalculateClosestIntersection
{
public:
	FCalculateClosestIntersection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetStartPoints() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}
	struct TArray<struct FVector> GetEndPoints() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 16);
	}
	struct FVector GetClosestIntersection() {
		return memory.read<struct FVector>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FDebugDrawPin
{
public:
	FDebugDrawPin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARPin GetARPin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARPin(ptr_addr);
	}
	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 32);
	}
	float GetPersistForSeconds() {
		return memory.read<float>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAlignmentTransform
{
public:
	FGetAlignmentTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllGeometries
{
public:
	FGetAllGeometries(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UARTrackedGeometry> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UARTrackedGeometry>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllTrackedEnvironmentCaptureProbes
{
public:
	FGetAllTrackedEnvironmentCaptureProbes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAREnvironmentCaptureProbe> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UAREnvironmentCaptureProbe>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllPins
{
public:
	FGetAllPins(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UARPin> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UARPin>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSceneReconstructionSupported
{
public:
	FIsSceneReconstructionSupported(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARSessionType GetSessionType() {
		return memory.read<enum class EARSessionType>(m_addr + 0);
	}
	enum class EARSceneReconstruction GetSceneReconstructionMethod() {
		return memory.read<enum class EARSceneReconstruction>(m_addr + 1);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetARTexture
{
public:
	FGetARTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARTextureType GetTextureType() {
		return memory.read<enum class EARTextureType>(m_addr + 0);
	}
	struct UARTexture GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UARTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllTrackedPlanes
{
public:
	FGetAllTrackedPlanes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UARPlaneGeometry> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UARPlaneGeometry>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDebugDraw
{
public:
	FDebugDraw(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWorld(ptr_addr);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 8);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 24);
	}
	float GetPersistForSeconds() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllTrackedPoses
{
public:
	FGetAllTrackedPoses(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UARTrackedPose> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UARTrackedPose>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetARWorldScale
{
public:
	FGetARWorldScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDetectedObject
{
public:
	FGetDetectedObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARCandidateObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARCandidateObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadARPinsFromLocalStore
{
public:
	FLoadARPinsFromLocalStore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct UARPin> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TMap<struct FName, struct UARPin>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetARSessionStatus
{
public:
	FGetARSessionStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARSessionStatus GetReturnValue() {
		return memory.read<struct FARSessionStatus>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCameraDepth
{
public:
	FGetCameraDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARTextureCameraDepth GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARTextureCameraDepth(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCameraImage
{
public:
	FGetCameraImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARTextureCameraImage GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARTextureCameraImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCameraIntrinsics
{
public:
	FGetCameraIntrinsics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARCameraIntrinsics GetOutCameraIntrinsics() {
		return memory.read<struct FARCameraIntrinsics>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentLightEstimate
{
public:
	FGetCurrentLightEstimate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARLightEstimate GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARLightEstimate(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCandidateObjectList
{
public:
	FSetCandidateObjectList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UARCandidateObject> GetInCandidateObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UARCandidateObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumberOfTrackedFacesSupported
{
public:
	FGetNumberOfTrackedFacesSupported(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPersonSegmentationDepthImage
{
public:
	FGetPersonSegmentationDepthImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARTexture GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetObjectClassificationAtLocation
{
public:
	FGetObjectClassificationAtLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetInWorldLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	enum class EARObjectClassification GetOutClassification() {
		return memory.read<enum class EARObjectClassification>(m_addr + 12);
	}
	struct FVector GetOutClassificationLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	float GetMaxLocationDiff() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPersonSegmentationImage
{
public:
	FGetPersonSegmentationImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARTexture GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveUpdate
{
public:
	FReceiveUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARGeoAnchorUpdatePayload GetPayload() {
		return memory.read<struct FARGeoAnchorUpdatePayload>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSessionConfig
{
public:
	FGetSessionConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARSessionConfig GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARSessionConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackingQuality
{
public:
	FGetTrackingQuality(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARTrackingQuality GetReturnValue() {
		return memory.read<enum class EARTrackingQuality>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackingQualityReason
{
public:
	FGetTrackingQualityReason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARTrackingQualityReason GetReturnValue() {
		return memory.read<enum class EARTrackingQualityReason>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWorldMappingStatus
{
public:
	FGetWorldMappingStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARWorldMappingState GetReturnValue() {
		return memory.read<enum class EARWorldMappingState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsARPinLocalStoreReady
{
public:
	FIsARPinLocalStoreReady(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsARPinLocalStoreSupported
{
public:
	FIsARPinLocalStoreSupported(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsARSupported
{
public:
	FIsARSupported(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSessionTrackingFeatureSupported
{
public:
	FIsSessionTrackingFeatureSupported(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARSessionType GetSessionType() {
		return memory.read<enum class EARSessionType>(m_addr + 0);
	}
	enum class EARSessionTrackingFeature GetSessionTrackingFeature() {
		return memory.read<enum class EARSessionTrackingFeature>(m_addr + 1);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSessionTypeSupported
{
public:
	FIsSessionTypeSupported(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARSessionType GetSessionType() {
		return memory.read<enum class EARSessionType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FLineTraceTrackedObjects
{
public:
	FLineTraceTrackedObjects(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetScreenCoord() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	bool GetbTestFeaturePoints() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetbTestGroundPlane() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetbTestPlaneExtents() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetbTestPlaneBoundaryPolygon() {
		return memory.read<bool>(m_addr + 11);
	}
	struct TArray<struct FARTraceResult> GetReturnValue() {
		return memory.read<struct TArray<struct FARTraceResult>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLineTraceTrackedObjects3D
{
public:
	FLineTraceTrackedObjects3D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetStart() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetEnd() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	bool GetbTestFeaturePoints() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbTestGroundPlane() {
		return memory.read<bool>(m_addr + 25);
	}
	bool GetbTestPlaneExtents() {
		return memory.read<bool>(m_addr + 26);
	}
	bool GetbTestPlaneBoundaryPolygon() {
		return memory.read<bool>(m_addr + 27);
	}
	struct TArray<struct FARTraceResult> GetReturnValue() {
		return memory.read<struct TArray<struct FARTraceResult>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FPinComponent
{
public:
	FPinComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetComponentToPin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USceneComponent(ptr_addr);
	}
	struct FTransform GetPinToWorldTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct UARTrackedGeometry GetTrackedGeometry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UARTrackedGeometry(ptr_addr);
	}
	struct FName GetDebugName() {
		return memory.read<struct FName>(m_addr + 72);
	}
	struct UARPin GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UARPin(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPinComponentToARPin
{
public:
	FPinComponentToARPin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetComponentToPin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USceneComponent(ptr_addr);
	}
	struct UARPin GetPin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UARPin(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPinComponentToTraceResult
{
public:
	FPinComponentToTraceResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetComponentToPin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USceneComponent(ptr_addr);
	}
	struct FARTraceResult GetTraceResult() {
		return memory.read<struct FARTraceResult>(m_addr + 16);
	}
	struct FName GetDebugName() {
		return memory.read<struct FName>(m_addr + 112);
	}
	struct UARPin GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UARPin(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWorldMapData
{
public:
	FSetWorldMapData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetWorldMapData() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaneDetectionMode
{
public:
	FGetPlaneDetectionMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARPlaneDetectionMode GetReturnValue() {
		return memory.read<enum class EARPlaneDetectionMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveARPinFromLocalStore
{
public:
	FRemoveARPinFromLocalStore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInSaveName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemovePin
{
public:
	FRemovePin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARPin GetPinToRemove() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARPin(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FResizeXRCamera
{
public:
	FResizeXRCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FIntPoint GetInSize() {
		return memory.read<struct FIntPoint>(m_addr + 0);
	}
	struct FIntPoint GetReturnValue() {
		return memory.read<struct FIntPoint>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTraceChannel
{
public:
	FGetTraceChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARTraceResult GetTraceResult() {
		return memory.read<struct FARTraceResult>(m_addr + 0);
	}
	enum class EARLineTraceChannels GetReturnValue() {
		return memory.read<enum class EARLineTraceChannels>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveARPinToLocalStore
{
public:
	FSaveARPinToLocalStore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInSaveName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UARPin GetInPin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UARPin(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAlignmentTransform
{
public:
	FSetAlignmentTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetInAlignmentTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetARWorldOriginLocationAndRotation
{
public:
	FSetARWorldOriginLocationAndRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetOriginLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FRotator GetOriginRotation() {
		return memory.read<struct FRotator>(m_addr + 12);
	}
	bool GetbIsTransformInWorldSpace() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbMaintainUpDirection() {
		return memory.read<bool>(m_addr + 25);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetARWorldScale
{
public:
	FSetARWorldScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInWorldScale() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetImageComponentDebugMode
{
public:
	FSetImageComponentDebugMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EImageComponentDebugMode GetNewDebugMode() {
		return memory.read<enum class EImageComponentDebugMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnabledXRCamera
{
public:
	FSetEnabledXRCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbOnOff() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxNumSimultaneousImagesTracked
{
public:
	FGetMaxNumSimultaneousImagesTracked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartARSession
{
public:
	FStartARSession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARSessionConfig GetSessionConfig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARSessionConfig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FToggleARCapture
{
public:
	FToggleARCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbOnOff() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EARCaptureType GetCaptureType() {
		return memory.read<enum class EARCaptureType>(m_addr + 1);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnpinComponent
{
public:
	FUnpinComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetComponentToUnpin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FShouldEnableCameraTracking
{
public:
	FShouldEnableCameraTracking(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDistanceFromCamera
{
public:
	FGetDistanceFromCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARTraceResult GetTraceResult() {
		return memory.read<struct FARTraceResult>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLocalToTrackingTransform
{
public:
	FGetLocalToTrackingTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetExtent
{
public:
	FGetExtent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLocalToWorldTransform
{
public:
	FGetLocalToWorldTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInstallARService
{
public:
	FInstallARService(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 8);
	}
	enum class EARServiceInstallRequestResult GetOutInstallResult() {
		return memory.read<enum class EARServiceInstallRequestResult>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLocalTransform
{
public:
	FGetLocalTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARTraceResult GetTraceResult() {
		return memory.read<struct FARTraceResult>(m_addr + 0);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FARSaveWorld
{
public:
	FARSaveWorld(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UARSaveWorldAsyncTaskBlueprintProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UARSaveWorldAsyncTaskBlueprintProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FARGetCandidateObject
{
public:
	FARGetCandidateObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetExtent() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct UARGetCandidateObjectAsyncTaskBlueprintProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UARGetCandidateObjectAsyncTaskBlueprintProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMRMesh
{
public:
	FGetMRMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMRMeshComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMRMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNativeID
{
public:
	FSetNativeID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetNativeID() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetObjectClassificationDebugColors
{
public:
	FGetObjectClassificationDebugColors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EARObjectClassification, struct FLinearColor> GetReturnValue() {
		return memory.read<struct TMap<enum class EARObjectClassification, struct FLinearColor>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveAdd
{
public:
	FReceiveAdd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARGeoAnchorUpdatePayload GetPayload() {
		return memory.read<struct FARGeoAnchorUpdatePayload>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerUpdatePayload
{
public:
	FServerUpdatePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARGeoAnchorUpdatePayload GetNewPayload() {
		return memory.read<struct FARGeoAnchorUpdatePayload>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetObjectClassificationDebugColors
{
public:
	FSetObjectClassificationDebugColors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EARObjectClassification, struct FLinearColor> GetInColors() {
		return memory.read<struct TMap<enum class EARObjectClassification, struct FLinearColor>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaneComponentDebugMode
{
public:
	FSetPlaneComponentDebugMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPlaneComponentDebugMode GetNewDebugMode() {
		return memory.read<enum class EPlaneComponentDebugMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetQRCodeComponentDebugMode
{
public:
	FSetQRCodeComponentDebugMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EQRCodeComponentDebugMode GetNewDebugMode() {
		return memory.read<enum class EQRCodeComponentDebugMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPoseComponentDebugMode
{
public:
	FSetPoseComponentDebugMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPoseComponentDebugMode GetNewDebugMode() {
		return memory.read<enum class EPoseComponentDebugMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGeoAnchorComponentDebugMode
{
public:
	FSetGeoAnchorComponentDebugMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGeoAnchorComponentDebugMode GetNewDebugMode() {
		return memory.read<enum class EGeoAnchorComponentDebugMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCheckARServiceAvailability
{
public:
	FCheckARServiceAvailability(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 8);
	}
	enum class EARServiceAvailability GetOutAvailability() {
		return memory.read<enum class EARServiceAvailability>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAmbientColorTemperatureKelvin
{
public:
	FGetAmbientColorTemperatureKelvin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetARDependencyHandler
{
public:
	FGetARDependencyHandler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARDependencyHandler GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARDependencyHandler(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEnvironmentCaptureProbeType
{
public:
	FGetEnvironmentCaptureProbeType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAREnvironmentCaptureProbeType GetReturnValue() {
		return memory.read<enum class EAREnvironmentCaptureProbeType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGeoTrackingSupport
{
public:
	FGetGeoTrackingSupport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARGeoTrackingSupport GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARGeoTrackingSupport(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestARSessionPermission
{
public:
	FRequestARSessionPermission(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UARSessionConfig GetSessionConfig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UARSessionConfig(ptr_addr);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 16);
	}
	enum class EARServicePermissionRequestResult GetOutPermissionResult() {
		return memory.read<enum class EARServicePermissionRequestResult>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartARSessionLatent
{
public:
	FStartARSessionLatent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UARSessionConfig GetSessionConfig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UARSessionConfig(ptr_addr);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddGeoAnchorAtLocation
{
public:
	FAddGeoAnchorAtLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLongitude() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLatitude() {
		return memory.read<float>(m_addr + 4);
	}
	struct FString GetOptionalAnchorName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddGeoAnchorAtLocationWithAltitude
{
public:
	FAddGeoAnchorAtLocationWithAltitude(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLongitude() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLatitude() {
		return memory.read<float>(m_addr + 4);
	}
	float GetAltitudeMeters() {
		return memory.read<float>(m_addr + 8);
	}
	struct FString GetOptionalAnchorName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGeoTrackingAccuracy
{
public:
	FGetGeoTrackingAccuracy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARGeoTrackingAccuracy GetReturnValue() {
		return memory.read<enum class EARGeoTrackingAccuracy>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGeoTrackingState
{
public:
	FGetGeoTrackingState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARGeoTrackingState GetReturnValue() {
		return memory.read<enum class EARGeoTrackingState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLastUpdateFrameNumber
{
public:
	FGetLastUpdateFrameNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGeoTrackingStateReason
{
public:
	FGetGeoTrackingStateReason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARGeoTrackingStateReason GetReturnValue() {
		return memory.read<enum class EARGeoTrackingStateReason>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAltitudeSource
{
public:
	FGetAltitudeSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARAltitudeSource GetReturnValue() {
		return memory.read<enum class EARAltitudeSource>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAmbientIntensityLumens
{
public:
	FGetAmbientIntensityLumens(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAmbientColor
{
public:
	FGetAmbientColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDebugName
{
public:
	FGetDebugName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPinnedComponent
{
public:
	FGetPinnedComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackingState
{
public:
	FGetTrackingState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARTrackingState GetReturnValue() {
		return memory.read<enum class EARTrackingState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddCandidateImage
{
public:
	FAddCandidateImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARCandidateImage GetNewCandidateImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARCandidateImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddCandidateObject
{
public:
	FAddCandidateObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARCandidateObject GetCandidateObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARCandidateObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasSpatialMeshUsageFlag
{
public:
	FHasSpatialMeshUsageFlag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARSpatialMeshUsageFlags GetInFlag() {
		return memory.read<enum class EARSpatialMeshUsageFlags>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCandidateImageList
{
public:
	FGetCandidateImageList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UARCandidateImage> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UARCandidateImage>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCandidateObjectList
{
public:
	FGetCandidateObjectList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UARCandidateObject> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UARCandidateObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDesiredVideoFormat
{
public:
	FGetDesiredVideoFormat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARVideoFormat GetReturnValue() {
		return memory.read<struct FARVideoFormat>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEnabledSessionTrackingFeature
{
public:
	FGetEnabledSessionTrackingFeature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARSessionTrackingFeature GetReturnValue() {
		return memory.read<enum class EARSessionTrackingFeature>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetObjectClassification
{
public:
	FGetObjectClassification(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARObjectClassification GetReturnValue() {
		return memory.read<enum class EARObjectClassification>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFaceTrackingDirection
{
public:
	FGetFaceTrackingDirection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARFaceTrackingDirection GetReturnValue() {
		return memory.read<enum class EARFaceTrackingDirection>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFaceTrackingUpdate
{
public:
	FGetFaceTrackingUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARFaceTrackingUpdate GetReturnValue() {
		return memory.read<enum class EARFaceTrackingUpdate>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFrameSyncMode
{
public:
	FGetFrameSyncMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARFrameSyncMode GetReturnValue() {
		return memory.read<enum class EARFrameSyncMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLightEstimationMode
{
public:
	FGetLightEstimationMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARLightEstimationMode GetReturnValue() {
		return memory.read<enum class EARLightEstimationMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSessionTrackingFeatureToEnable
{
public:
	FSetSessionTrackingFeatureToEnable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARSessionTrackingFeature GetInSessionTrackingFeature() {
		return memory.read<enum class EARSessionTrackingFeature>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSceneReconstructionMethod
{
public:
	FGetSceneReconstructionMethod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARSceneReconstruction GetReturnValue() {
		return memory.read<enum class EARSceneReconstruction>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSessionType
{
public:
	FGetSessionType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARSessionType GetReturnValue() {
		return memory.read<enum class EARSessionType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWorldAlignment
{
public:
	FGetWorldAlignment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARWorldAlignment GetReturnValue() {
		return memory.read<enum class EARWorldAlignment>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWorldMapData
{
public:
	FGetWorldMapData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetReturnValue() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDesiredVideoFormat
{
public:
	FSetDesiredVideoFormat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARVideoFormat GetNewFormat() {
		return memory.read<struct FARVideoFormat>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnableAutoFocus
{
public:
	FSetEnableAutoFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbNewValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFaceTrackingDirection
{
public:
	FSetFaceTrackingDirection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARFaceTrackingDirection GetInDirection() {
		return memory.read<enum class EARFaceTrackingDirection>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFaceTrackingUpdate
{
public:
	FSetFaceTrackingUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARFaceTrackingUpdate GetInUpdate() {
		return memory.read<enum class EARFaceTrackingUpdate>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetResetCameraTracking
{
public:
	FSetResetCameraTracking(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbNewValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetResetTrackedObjects
{
public:
	FSetResetTrackedObjects(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbNewValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSceneReconstructionMethod
{
public:
	FSetSceneReconstructionMethod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARSceneReconstruction GetInSceneReconstructionMethod() {
		return memory.read<enum class EARSceneReconstruction>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientUpdatePreviewImageData
{
public:
	FClientUpdatePreviewImageData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<char> GetBuffer() {
		return memory.read<struct TArray<char>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FShouldEnableAutoFocus
{
public:
	FShouldEnableAutoFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShouldRenderCameraOverlay
{
public:
	FShouldRenderCameraOverlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShouldResetCameraTracking
{
public:
	FShouldResetCameraTracking(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShouldResetTrackedObjects
{
public:
	FShouldResetTrackedObjects(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetARSharedWorldGameState
{
public:
	FGetARSharedWorldGameState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AARSharedWorldGameState GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AARSharedWorldGameState(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetARSharedWorldData
{
public:
	FSetARSharedWorldData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetARWorldData() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPreviewImageData
{
public:
	FSetPreviewImageData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetImageData() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientInitSharedWorld
{
public:
	FClientInitSharedWorld(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPreviewImageSize() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetARWorldDataSize() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnvironmentCaptureProbe
{
public:
	FSetEnvironmentCaptureProbe(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAREnvironmentCaptureProbe GetInCaptureProbe() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAREnvironmentCaptureProbe(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLastUpdateTimestamp
{
public:
	FGetLastUpdateTimestamp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetName
{
public:
	FGetName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUnderlyingMesh
{
public:
	FGetUnderlyingMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMRMeshComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMRMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoundaryPolygonInLocalSpace
{
public:
	FGetBoundaryPolygonInLocalSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetReturnValue() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCenter
{
public:
	FGetCenter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOrientation
{
public:
	FGetOrientation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARCandidateImageOrientation GetReturnValue() {
		return memory.read<enum class EARCandidateImageOrientation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDetectedImage
{
public:
	FGetDetectedImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARCandidateImage GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UARCandidateImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEstimateSize
{
public:
	FGetEstimateSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlendShapes
{
public:
	FGetBlendShapes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EARFaceBlendShape, float> GetReturnValue() {
		return memory.read<struct TMap<enum class EARFaceBlendShape, float>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlendShapeValue
{
public:
	FGetBlendShapeValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARFaceBlendShape GetBlendShape() {
		return memory.read<enum class EARFaceBlendShape>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLocalSpaceEyeTransform
{
public:
	FGetLocalSpaceEyeTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAREye GetEye() {
		return memory.read<enum class EAREye>(m_addr + 0);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWorldSpaceEyeTransform
{
public:
	FGetWorldSpaceEyeTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAREye GetEye() {
		return memory.read<enum class EAREye>(m_addr + 0);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEnvironmentCaptureTexture
{
public:
	FGetEnvironmentCaptureTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAREnvironmentCaptureProbeTexture GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAREnvironmentCaptureProbeTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAltitudeMeters
{
public:
	FGetAltitudeMeters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLatitude
{
public:
	FGetLatitude(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCandidateTexture
{
public:
	FGetCandidateTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFriendlyName
{
public:
	FGetFriendlyName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPhysicalHeight
{
public:
	FGetPhysicalHeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPhysicalWidth
{
public:
	FGetPhysicalWidth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoundingBox
{
public:
	FGetBoundingBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBox GetReturnValue() {
		return memory.read<struct FBox>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCandidateObjectData
{
public:
	FGetCandidateObjectData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetReturnValue() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBoundingBox
{
public:
	FSetBoundingBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBox GetInBoundingBox() {
		return memory.read<struct FBox>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCandidateObjectData
{
public:
	FSetCandidateObjectData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetInCandidateObject() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFriendlyName
{
public:
	FSetFriendlyName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetNewName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};