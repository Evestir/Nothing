#pragma once 
#include <AugmentedReality_Structs.h>
 
 
 
class UARFaceGeometry
{
public:
	UARFaceGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLookAtTarget() {
		return memory.read<struct FVector>(m_addr + 248);
	}
	bool GetbIsTracked() {
		return memory.read<bool>(m_addr + 260);
	}
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes() {
		return memory.read<struct TMap<enum class EARFaceBlendShape, float>>(m_addr + 264);
	}
	struct FTransform GetLeftEyeTransform() {
		return memory.read<struct FTransform>(m_addr + 400);
	}
	struct FTransform GetRightEyeTransform() {
		return memory.read<struct FTransform>(m_addr + 448);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARGetCandidateObjectAsyncTaskBlueprintProxy
{
public:
	UARGetCandidateObjectAsyncTaskBlueprintProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 80);
	}
	struct FMulticastInlineDelegate GetOnFailed() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARBlueprintLibrary
{
public:
	UARBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AARActor
{
public:
	AARActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UARTraceResultLibrary
{
public:
	UARTraceResultLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UARBaseAsyncTaskBlueprintProxy
{
public:
	UARBaseAsyncTaskBlueprintProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AARSharedWorldGameMode
{
public:
	AARSharedWorldGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetBufferSizePerChunk() {
		return memory.read<int32_t>(m_addr + 776);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARPlaneComponent
{
public:
	UARPlaneComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARPlaneUpdatePayload GetReplicatedPayload() {
		return memory.read<struct FARPlaneUpdatePayload>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARBasicLightEstimate
{
public:
	UARBasicLightEstimate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAmbientIntensityLumens() {
		return memory.read<float>(m_addr + 40);
	}
	float GetAmbientColorTemperatureKelvin() {
		return memory.read<float>(m_addr + 44);
	}
	struct FLinearColor GetAmbientColor() {
		return memory.read<struct FLinearColor>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGetGeoLocationAsyncTaskBlueprintProxy
{
public:
	UGetGeoLocationAsyncTaskBlueprintProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 80);
	}
	struct FMulticastInlineDelegate GetOnFailed() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARSaveWorldAsyncTaskBlueprintProxy
{
public:
	UARSaveWorldAsyncTaskBlueprintProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 80);
	}
	struct FMulticastInlineDelegate GetOnFailed() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARComponent
{
public:
	UARComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetNativeID() {
		return memory.read<struct FGuid>(m_addr + 520);
	}
	bool GetbUseDefaultReplication() {
		return memory.read<bool>(m_addr + 584);
	}
	struct UMaterialInterface GetDefaultMeshMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetDefaultWireframeMeshMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMRMeshComponent GetMRMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UMRMeshComponent(ptr_addr);
	}
	struct UARTrackedGeometry GetMyTrackedGeometry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UARTrackedGeometry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARPointComponent
{
public:
	UARPointComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARPointUpdatePayload GetReplicatedPayload() {
		return memory.read<struct FARPointUpdatePayload>(m_addr + 648);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARFaceComponent
{
public:
	UARFaceComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARFaceTransformMixing GetTransformSetting() {
		return memory.read<enum class EARFaceTransformMixing>(m_addr + 648);
	}
	bool GetbUpdateVertexNormal() {
		return memory.read<bool>(m_addr + 649);
	}
	bool GetbFaceOutOfScreen() {
		return memory.read<bool>(m_addr + 650);
	}
	struct FARFaceUpdatePayload GetReplicatedPayload() {
		return memory.read<struct FARFaceUpdatePayload>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARObjectComponent
{
public:
	UARObjectComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARObjectUpdatePayload GetReplicatedPayload() {
		return memory.read<struct FARObjectUpdatePayload>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARImageComponent
{
public:
	UARImageComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARImageUpdatePayload GetReplicatedPayload() {
		return memory.read<struct FARImageUpdatePayload>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARQRCodeComponent
{
public:
	UARQRCodeComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARQRCodeUpdatePayload GetReplicatedPayload() {
		return memory.read<struct FARQRCodeUpdatePayload>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARLifeCycleComponent
{
public:
	UARLifeCycleComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnARActorSpawnedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 520);
	}
	struct FMulticastInlineDelegate GetOnARActorToBeDestroyedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 536);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARPoseComponent
{
public:
	UARPoseComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARPoseUpdatePayload GetReplicatedPayload() {
		return memory.read<struct FARPoseUpdatePayload>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAREnvironmentProbeComponent
{
public:
	UAREnvironmentProbeComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAREnvironmentProbeUpdatePayload GetReplicatedPayload() {
		return memory.read<struct FAREnvironmentProbeUpdatePayload>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAROriginActor
{
public:
	AAROriginActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UARMeshComponent
{
public:
	UARMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARMeshUpdatePayload GetReplicatedPayload() {
		return memory.read<struct FARMeshUpdatePayload>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARGeoAnchorComponent
{
public:
	UARGeoAnchorComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARGeoAnchorUpdatePayload GetReplicatedPayload() {
		return memory.read<struct FARGeoAnchorUpdatePayload>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARDependencyHandler
{
public:
	UARDependencyHandler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UARCandidateObject
{
public:
	UARCandidateObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetCandidateObjectData() {
		return memory.read<struct TArray<char>>(m_addr + 48);
	}
	struct FString GetFriendlyName() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FBox GetBoundingBox() {
		return memory.read<struct FBox>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARGeoTrackingSupport
{
public:
	UARGeoTrackingSupport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAREnvironmentCaptureProbe
{
public:
	UAREnvironmentCaptureProbe(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetExtent() {
		return memory.read<struct FVector>(m_addr + 248);
	}
	struct UAREnvironmentCaptureProbeTexture GetEnvironmentCaptureTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UAREnvironmentCaptureProbeTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARTrackedQRCode
{
public:
	UARTrackedQRCode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetQRCode() {
		return memory.read<struct FString>(m_addr + 264);
	}
	int32_t GetVersion() {
		return memory.read<int32_t>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARSessionConfig
{
public:
	UARSessionConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbGenerateMeshDataFromTrackedGeometry() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetbGenerateCollisionForMeshData() {
		return memory.read<bool>(m_addr + 49);
	}
	bool GetbGenerateNavMeshForMeshData() {
		return memory.read<bool>(m_addr + 50);
	}
	bool GetbUseMeshDataForOcclusion() {
		return memory.read<bool>(m_addr + 51);
	}
	bool GetbRenderMeshDataInWireframe() {
		return memory.read<bool>(m_addr + 52);
	}
	bool GetbTrackSceneObjects() {
		return memory.read<bool>(m_addr + 53);
	}
	bool GetbUsePersonSegmentationForOcclusion() {
		return memory.read<bool>(m_addr + 54);
	}
	bool GetbUseSceneDepthForOcclusion() {
		return memory.read<bool>(m_addr + 55);
	}
	bool GetbUseAutomaticImageScaleEstimation() {
		return memory.read<bool>(m_addr + 56);
	}
	bool GetbUseStandardOnboardingUX() {
		return memory.read<bool>(m_addr + 57);
	}
	enum class EARWorldAlignment GetWorldAlignment() {
		return memory.read<enum class EARWorldAlignment>(m_addr + 58);
	}
	enum class EARSessionType GetSessionType() {
		return memory.read<enum class EARSessionType>(m_addr + 59);
	}
	enum class EARPlaneDetectionMode GetPlaneDetectionMode() {
		return memory.read<enum class EARPlaneDetectionMode>(m_addr + 60);
	}
	bool GetbHorizontalPlaneDetection() {
		return memory.read<bool>(m_addr + 61);
	}
	bool GetbVerticalPlaneDetection() {
		return memory.read<bool>(m_addr + 62);
	}
	bool GetbEnableAutoFocus() {
		return memory.read<bool>(m_addr + 63);
	}
	enum class EARLightEstimationMode GetLightEstimationMode() {
		return memory.read<enum class EARLightEstimationMode>(m_addr + 64);
	}
	enum class EARFrameSyncMode GetFrameSyncMode() {
		return memory.read<enum class EARFrameSyncMode>(m_addr + 65);
	}
	bool GetbEnableAutomaticCameraOverlay() {
		return memory.read<bool>(m_addr + 66);
	}
	bool GetbEnableAutomaticCameraTracking() {
		return memory.read<bool>(m_addr + 67);
	}
	bool GetbResetCameraTracking() {
		return memory.read<bool>(m_addr + 68);
	}
	bool GetbResetTrackedObjects() {
		return memory.read<bool>(m_addr + 69);
	}
	struct TArray<struct UARCandidateImage> GetCandidateImages() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct TArray<struct UARCandidateImage>(ptr_addr);
	}
	int32_t GetMaxNumSimultaneousImagesTracked() {
		return memory.read<int32_t>(m_addr + 88);
	}
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType() {
		return memory.read<enum class EAREnvironmentCaptureProbeType>(m_addr + 92);
	}
	struct TArray<char> GetWorldMapData() {
		return memory.read<struct TArray<char>>(m_addr + 96);
	}
	struct TArray<struct UARCandidateObject> GetCandidateObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct TArray<struct UARCandidateObject>(ptr_addr);
	}
	struct FARVideoFormat GetDesiredVideoFormat() {
		return memory.read<struct FARVideoFormat>(m_addr + 128);
	}
	bool GetbUseOptimalVideoFormat() {
		return memory.read<bool>(m_addr + 140);
	}
	enum class EARFaceTrackingDirection GetFaceTrackingDirection() {
		return memory.read<enum class EARFaceTrackingDirection>(m_addr + 141);
	}
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate() {
		return memory.read<enum class EARFaceTrackingUpdate>(m_addr + 142);
	}
	int32_t GetMaxNumberOfTrackedFaces() {
		return memory.read<int32_t>(m_addr + 144);
	}
	struct TArray<char> GetSerializedARCandidateImageDatabase() {
		return memory.read<struct TArray<char>>(m_addr + 152);
	}
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature() {
		return memory.read<enum class EARSessionTrackingFeature>(m_addr + 168);
	}
	enum class EARSceneReconstruction GetSceneReconstructionMethod() {
		return memory.read<enum class EARSceneReconstruction>(m_addr + 169);
	}
	UARPlaneComponent GetPlaneComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return UARPlaneComponent(ptr_addr);
	}
	UARPointComponent GetPointComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return UARPointComponent(ptr_addr);
	}
	UARFaceComponent GetFaceComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return UARFaceComponent(ptr_addr);
	}
	UARImageComponent GetImageComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return UARImageComponent(ptr_addr);
	}
	UARQRCodeComponent GetQRCodeComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return UARQRCodeComponent(ptr_addr);
	}
	UARPoseComponent GetPoseComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return UARPoseComponent(ptr_addr);
	}
	UAREnvironmentProbeComponent GetEnvironmentProbeComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return UAREnvironmentProbeComponent(ptr_addr);
	}
	UARObjectComponent GetObjectComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return UARObjectComponent(ptr_addr);
	}
	UARMeshComponent GetMeshComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return UARMeshComponent(ptr_addr);
	}
	UARGeoAnchorComponent GetGeoAnchorComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return UARGeoAnchorComponent(ptr_addr);
	}
	struct UMaterialInterface GetDefaultMeshMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetDefaultWireframeMeshMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
{
public:
	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 80);
	}
	struct FMulticastInlineDelegate GetOnFailed() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARTrackableNotifyComponent
{
public:
	UARTrackableNotifyComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnAddTrackedGeometry() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 176);
	}
	struct FMulticastInlineDelegate GetOnUpdateTrackedGeometry() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 192);
	}
	struct FMulticastInlineDelegate GetOnRemoveTrackedGeometry() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 208);
	}
	struct FMulticastInlineDelegate GetOnAddTrackedPlane() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 224);
	}
	struct FMulticastInlineDelegate GetOnUpdateTrackedPlane() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 240);
	}
	struct FMulticastInlineDelegate GetOnRemoveTrackedPlane() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 256);
	}
	struct FMulticastInlineDelegate GetOnAddTrackedPoint() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 272);
	}
	struct FMulticastInlineDelegate GetOnUpdateTrackedPoint() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 288);
	}
	struct FMulticastInlineDelegate GetOnRemoveTrackedPoint() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 304);
	}
	struct FMulticastInlineDelegate GetOnAddTrackedImage() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 320);
	}
	struct FMulticastInlineDelegate GetOnUpdateTrackedImage() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 336);
	}
	struct FMulticastInlineDelegate GetOnRemoveTrackedImage() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 352);
	}
	struct FMulticastInlineDelegate GetOnAddTrackedFace() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 368);
	}
	struct FMulticastInlineDelegate GetOnUpdateTrackedFace() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 384);
	}
	struct FMulticastInlineDelegate GetOnRemoveTrackedFace() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 400);
	}
	struct FMulticastInlineDelegate GetOnAddTrackedEnvProbe() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 416);
	}
	struct FMulticastInlineDelegate GetOnUpdateTrackedEnvProbe() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 432);
	}
	struct FMulticastInlineDelegate GetOnRemoveTrackedEnvProbe() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 448);
	}
	struct FMulticastInlineDelegate GetOnAddTrackedObject() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 464);
	}
	struct FMulticastInlineDelegate GetOnUpdateTrackedObject() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 480);
	}
	struct FMulticastInlineDelegate GetOnRemoveTrackedObject() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 496);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARTraceResultDummy
{
public:
	UARTraceResultDummy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UARLightEstimate
{
public:
	UARLightEstimate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UARCandidateImage
{
public:
	UARCandidateImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetCandidateTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UTexture2D(ptr_addr);
	}
	struct FString GetFriendlyName() {
		return memory.read<struct FString>(m_addr + 56);
	}
	float GetWidth() {
		return memory.read<float>(m_addr + 72);
	}
	float GetHeight() {
		return memory.read<float>(m_addr + 76);
	}
	enum class EARCandidateImageOrientation GetOrientation() {
		return memory.read<enum class EARCandidateImageOrientation>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARPin
{
public:
	UARPin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARTrackedGeometry GetTrackedGeometry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UARTrackedGeometry(ptr_addr);
	}
	struct USceneComponent GetPinnedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct USceneComponent(ptr_addr);
	}
	struct FTransform GetLocalToTrackingTransform() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct FTransform GetLocalToAlignedTrackingTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	enum class EARTrackingState GetTrackingState() {
		return memory.read<enum class EARTrackingState>(m_addr + 160);
	}
	struct FMulticastInlineDelegate GetOnARTrackingStateChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 192);
	}
	struct FMulticastInlineDelegate GetOnARTransformUpdated() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class AARSharedWorldGameState
{
public:
	AARSharedWorldGameState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetPreviewImageData() {
		return memory.read<struct TArray<char>>(m_addr + 656);
	}
	struct TArray<char> GetARWorldData() {
		return memory.read<struct TArray<char>>(m_addr + 672);
	}
	int32_t GetPreviewImageBytesTotal() {
		return memory.read<int32_t>(m_addr + 688);
	}
	int32_t GetARWorldBytesTotal() {
		return memory.read<int32_t>(m_addr + 692);
	}
	int32_t GetPreviewImageBytesDelivered() {
		return memory.read<int32_t>(m_addr + 696);
	}
	int32_t GetARWorldBytesDelivered() {
		return memory.read<int32_t>(m_addr + 700);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARPlaneGeometry
{
public:
	UARPlaneGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARPlaneOrientation GetOrientation() {
		return memory.read<enum class EARPlaneOrientation>(m_addr + 248);
	}
	struct FVector GetCenter() {
		return memory.read<struct FVector>(m_addr + 252);
	}
	struct FVector GetExtent() {
		return memory.read<struct FVector>(m_addr + 264);
	}
	struct TArray<struct FVector> GetBoundaryPolygon() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 280);
	}
	struct UARPlaneGeometry GetSubsumedBy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct UARPlaneGeometry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AARSharedWorldPlayerController
{
public:
	AARSharedWorldPlayerController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AARSkyLight
{
public:
	AARSkyLight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAREnvironmentCaptureProbe GetCaptureProbe() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UAREnvironmentCaptureProbe(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARTexture
{
public:
	UARTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARTextureType GetTextureType() {
		return memory.read<enum class EARTextureType>(m_addr + 376);
	}
	float GetTimestamp() {
		return memory.read<float>(m_addr + 380);
	}
	struct FGuid GetExternalTextureGuid() {
		return memory.read<struct FGuid>(m_addr + 384);
	}
	struct FVector2D GetSize() {
		return memory.read<struct FVector2D>(m_addr + 400);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARTextureCameraImage
{
public:
	UARTextureCameraImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UARTextureCameraDepth
{
public:
	UARTextureCameraDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARDepthQuality GetDepthQuality() {
		return memory.read<enum class EARDepthQuality>(m_addr + 408);
	}
	enum class EARDepthAccuracy GetDepthAccuracy() {
		return memory.read<enum class EARDepthAccuracy>(m_addr + 409);
	}
	bool GetbIsTemporallySmoothed() {
		return memory.read<bool>(m_addr + 410);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARMeshGeometry
{
public:
	UARMeshGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAREnvironmentCaptureProbeTexture
{
public:
	UAREnvironmentCaptureProbeTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EARTextureType GetTextureType() {
		return memory.read<enum class EARTextureType>(m_addr + 464);
	}
	float GetTimestamp() {
		return memory.read<float>(m_addr + 468);
	}
	struct FGuid GetExternalTextureGuid() {
		return memory.read<struct FGuid>(m_addr + 472);
	}
	struct FVector2D GetSize() {
		return memory.read<struct FVector2D>(m_addr + 488);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARTrackedGeometry
{
public:
	UARTrackedGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetUniqueId() {
		return memory.read<struct FGuid>(m_addr + 40);
	}
	struct FTransform GetLocalToTrackingTransform() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct FTransform GetLocalToAlignedTrackingTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	enum class EARTrackingState GetTrackingState() {
		return memory.read<enum class EARTrackingState>(m_addr + 160);
	}
	struct UMRMeshComponent GetUnderlyingMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UMRMeshComponent(ptr_addr);
	}
	enum class EARObjectClassification GetObjectClassification() {
		return memory.read<enum class EARObjectClassification>(m_addr + 184);
	}
	enum class EARSpatialMeshUsageFlags GetSpatialMeshUsageFlags() {
		return memory.read<enum class EARSpatialMeshUsageFlags>(m_addr + 185);
	}
	int32_t GetLastUpdateFrameNumber() {
		return memory.read<int32_t>(m_addr + 208);
	}
	struct FName GetDebugName() {
		return memory.read<struct FName>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARTrackedPoint
{
public:
	UARTrackedPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UARTrackedObject
{
public:
	UARTrackedObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARCandidateObject GetDetectedObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct UARCandidateObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARTrackedImage
{
public:
	UARTrackedImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UARCandidateImage GetDetectedImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct UARCandidateImage(ptr_addr);
	}
	struct FVector2D GetEstimatedSize() {
		return memory.read<struct FVector2D>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARTrackedPose
{
public:
	UARTrackedPose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARPose3D GetTrackedPose() {
		return memory.read<struct FARPose3D>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};


class UARGeoAnchor
{
public:
	UARGeoAnchor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UARTypesDummyClass
{
public:
	UARTypesDummyClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


