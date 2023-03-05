namespace offsets
{
	namespace UARSessionConfig
	{
			constexpr auto bGenerateMeshDataFromTrackedGeometry = 0x30; // Size: 1, Type: bool
			constexpr auto bGenerateCollisionForMeshData = 0x31; // Size: 1, Type: bool
			constexpr auto bGenerateNavMeshForMeshData = 0x32; // Size: 1, Type: bool
			constexpr auto bUseMeshDataForOcclusion = 0x33; // Size: 1, Type: bool
			constexpr auto bRenderMeshDataInWireframe = 0x34; // Size: 1, Type: bool
			constexpr auto bTrackSceneObjects = 0x35; // Size: 1, Type: bool
			constexpr auto bUsePersonSegmentationForOcclusion = 0x36; // Size: 1, Type: bool
			constexpr auto bUseSceneDepthForOcclusion = 0x37; // Size: 1, Type: bool
			constexpr auto bUseAutomaticImageScaleEstimation = 0x38; // Size: 1, Type: bool
			constexpr auto bUseStandardOnboardingUX = 0x39; // Size: 1, Type: bool
			constexpr auto WorldAlignment = 0x3a; // Size: 1, Type: enum class EARWorldAlignment
			constexpr auto SessionType = 0x3b; // Size: 1, Type: enum class EARSessionType
			constexpr auto PlaneDetectionMode = 0x3c; // Size: 1, Type: enum class EARPlaneDetectionMode
			constexpr auto bHorizontalPlaneDetection = 0x3d; // Size: 1, Type: bool
			constexpr auto bVerticalPlaneDetection = 0x3e; // Size: 1, Type: bool
			constexpr auto bEnableAutoFocus = 0x3f; // Size: 1, Type: bool
			constexpr auto LightEstimationMode = 0x40; // Size: 1, Type: enum class EARLightEstimationMode
			constexpr auto FrameSyncMode = 0x41; // Size: 1, Type: enum class EARFrameSyncMode
			constexpr auto bEnableAutomaticCameraOverlay = 0x42; // Size: 1, Type: bool
			constexpr auto bEnableAutomaticCameraTracking = 0x43; // Size: 1, Type: bool
			constexpr auto bResetCameraTracking = 0x44; // Size: 1, Type: bool
			constexpr auto bResetTrackedObjects = 0x45; // Size: 1, Type: bool
			constexpr auto CandidateImages = 0x48; // Size: 16, Type: struct TArray<struct UARCandidateImage*>
			constexpr auto MaxNumSimultaneousImagesTracked = 0x58; // Size: 4, Type: int32_t
			constexpr auto EnvironmentCaptureProbeType = 0x5c; // Size: 1, Type: enum class EAREnvironmentCaptureProbeType
			constexpr auto WorldMapData = 0x60; // Size: 16, Type: struct TArray<char>
			constexpr auto CandidateObjects = 0x70; // Size: 16, Type: struct TArray<struct UARCandidateObject*>
			constexpr auto DesiredVideoFormat = 0x80; // Size: 12, Type: struct FARVideoFormat
			constexpr auto bUseOptimalVideoFormat = 0x8c; // Size: 1, Type: bool
			constexpr auto FaceTrackingDirection = 0x8d; // Size: 1, Type: enum class EARFaceTrackingDirection
			constexpr auto FaceTrackingUpdate = 0x8e; // Size: 1, Type: enum class EARFaceTrackingUpdate
			constexpr auto MaxNumberOfTrackedFaces = 0x90; // Size: 4, Type: int32_t
			constexpr auto SerializedARCandidateImageDatabase = 0x98; // Size: 16, Type: struct TArray<char>
			constexpr auto EnabledSessionTrackingFeature = 0xa8; // Size: 1, Type: enum class EARSessionTrackingFeature
			constexpr auto SceneReconstructionMethod = 0xa9; // Size: 1, Type: enum class EARSceneReconstruction
			constexpr auto PlaneComponentClass = 0xb0; // Size: 8, Type: UARPlaneComponent*
			constexpr auto PointComponentClass = 0xb8; // Size: 8, Type: UARPointComponent*
			constexpr auto FaceComponentClass = 0xc0; // Size: 8, Type: UARFaceComponent*
			constexpr auto ImageComponentClass = 0xc8; // Size: 8, Type: UARImageComponent*
			constexpr auto QRCodeComponentClass = 0xd0; // Size: 8, Type: UARQRCodeComponent*
			constexpr auto PoseComponentClass = 0xd8; // Size: 8, Type: UARPoseComponent*
			constexpr auto EnvironmentProbeComponentClass = 0xe0; // Size: 8, Type: UAREnvironmentProbeComponent*
			constexpr auto ObjectComponentClass = 0xe8; // Size: 8, Type: UARObjectComponent*
			constexpr auto MeshComponentClass = 0xf0; // Size: 8, Type: UARMeshComponent*
			constexpr auto GeoAnchorComponentClass = 0xf8; // Size: 8, Type: UARGeoAnchorComponent*
			constexpr auto DefaultMeshMaterial = 0x100; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto DefaultWireframeMeshMaterial = 0x108; // Size: 8, Type: struct UMaterialInterface*
	}
} 
