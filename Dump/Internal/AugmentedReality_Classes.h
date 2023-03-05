#pragma once 
#include <AugmentedReality_Structs.h>
 
 
 
//Class AugmentedReality.ARFaceGeometry Size 496
// Inherited 256 bytes 
class UARFaceGeometry : public UARTrackedGeometry
{

 public: 
	struct FVector LookAtTarget;  // Offset: 248 Size: 12
	char pad_268_1 : 7;  // Offset: 268 Size: 1
	bool bIsTracked : 1;  // Offset: 260 Size: 1
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes;  // Offset: 264 Size: 80
	char pad_349[51];  // Offset: 349 Size: 51
	struct FTransform LeftEyeTransform;  // Offset: 400 Size: 48
	struct FTransform RightEyeTransform;  // Offset: 448 Size: 48



 // Functions 
 public:
	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape); // Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes(); // Function AugmentedReality.ARFaceGeometry.GetBlendShapes
}; 
 
 


//Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy Size 152
// Inherited 80 bytes 
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 80 Size: 16
	struct FMulticastInlineDelegate OnFailed;  // Offset: 96 Size: 16
	char pad_112[40];  // Offset: 112 Size: 40



 // Functions 
 public:
	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
}; 
 
 


//Class AugmentedReality.ARBlueprintLibrary Size 40
// Inherited 40 bytes 
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void UnpinComponent(struct USceneComponent* ComponentToUnpin); // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	bool ToggleARCapture(bool bOnOff, enum class EARCaptureType CaptureType); // Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	void StopARSession(); // Function AugmentedReality.ARBlueprintLibrary.StopARSession
	void StartARSession(struct UARSessionConfig* SessionConfig); // Function AugmentedReality.ARBlueprintLibrary.StartARSession
	void SetEnabledXRCamera(bool bOnOff); // Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	void SetARWorldScale(float InWorldScale); // Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	void SetARWorldOriginLocationAndRotation(struct FVector OriginLocation, struct FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection); // Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	void SetAlignmentTransform(struct FTransform& InAlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	bool SaveARPinToLocalStore(struct FName InSaveName, struct UARPin* InPin); // Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	struct FIntPoint ResizeXRCamera(struct FIntPoint& InSize); // Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	void RemovePin(struct UARPin* PinToRemove); // Function AugmentedReality.ARBlueprintLibrary.RemovePin
	void RemoveARPinFromLocalStore(struct FName InSaveName); // Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	void RemoveAllARPinsFromLocalStore(); // Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult& TraceResult, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	bool PinComponentToARPin(struct USceneComponent* ComponentToPin, struct UARPin* Pin); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, struct FTransform& PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponent
	void PauseARSession(); // Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	struct TMap<struct FName, struct UARPin*> LoadARPinsFromLocalStore(); // Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	bool IsSessionTypeSupported(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	bool IsSceneReconstructionSupported(enum class EARSessionType SessionType, enum class EARSceneReconstruction SceneReconstructionMethod); // Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	bool IsARSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	bool IsARPinLocalStoreSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	bool IsARPinLocalStoreReady(); // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	enum class EARWorldMappingState GetWorldMappingStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	enum class EARTrackingQualityReason GetTrackingQualityReason(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	enum class EARTrackingQuality GetTrackingQuality(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	struct UARSessionConfig* GetSessionConfig(); // Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	struct TArray<struct FVector> GetPointCloud(); // Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	struct UARTexture* GetPersonSegmentationImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	struct UARTexture* GetPersonSegmentationDepthImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum class EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff); // Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	int32_t GetNumberOfTrackedFacesSupported(); // Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	struct UARLightEstimate* GetCurrentLightEstimate(); // Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	bool GetCameraIntrinsics(struct FARCameraIntrinsics& OutCameraIntrinsics); // Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	struct UARTextureCameraImage* GetCameraImage(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	struct UARTextureCameraDepth* GetCameraDepth(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	float GetARWorldScale(); // Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	struct UARTexture* GetARTexture(enum class EARTextureType TextureType); // Function AugmentedReality.ARBlueprintLibrary.GetARTexture
	struct FARSessionStatus GetARSessionStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	struct TArray<struct UARTrackedPose*> GetAllTrackedPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	struct TArray<struct UARTrackedImage*> GetAllTrackedImages(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	struct TArray<struct UARPin*> GetAllPins(); // Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	struct TArray<struct UARTrackedGeometry*> GetAllGeometriesByClass(UARTrackedGeometry* GeometryClass); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	struct TArray<struct UARTrackedGeometry*> GetAllGeometries(); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	struct FTransform GetAlignmentTransform(); // Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	struct TArray<struct UARTrackedPoint*> FindTrackedPointsByName(struct FString PointName); // Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	void CalculateClosestIntersection(struct TArray<struct FVector>& StartPoints, struct TArray<struct FVector>& EndPoints, struct FVector& ClosestIntersection); // Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	void CalculateAlignmentTransform(struct FTransform& TransformInFirstCoordinateSystem, struct FTransform& TransformInSecondCoordinateSystem, struct FTransform& AlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	bool AddTrackedPointWithName(struct FTransform& WorldTransform, struct FString PointName, bool bDeletePointsWithSameName); // Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth); // Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
}; 
 
 


//Class AugmentedReality.ARActor Size 544
// Inherited 544 bytes 
class AARActor : public AActor
{

 public: 



 // Functions 
 public:
	struct UARComponent* AddARComponent(UARComponent* InComponentClass, struct FGuid& NativeID); // Function AugmentedReality.ARActor.AddARComponent
}; 
 
 


//Class AugmentedReality.ARTraceResultLibrary Size 40
// Inherited 40 bytes 
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	struct FTransform GetLocalTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	float GetDistanceFromCamera(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
}; 
 
 


//Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy Size 80
// Inherited 48 bytes 
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{

 public: 
	char pad_48[32];  // Offset: 48 Size: 32



 // Functions 
 public:
}; 
 
 


//Class AugmentedReality.ARSharedWorldGameMode Size 880
// Inherited 776 bytes 
class AARSharedWorldGameMode : public AGameMode
{

 public: 
	int32_t BufferSizePerChunk;  // Offset: 776 Size: 4
	char pad_780[100];  // Offset: 780 Size: 100



 // Functions 
 public:
	void SetPreviewImageData(struct TArray<char> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	void SetARWorldSharingIsReady(); // Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	void SetARSharedWorldData(struct TArray<char> ARWorldData); // Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	struct AARSharedWorldGameState* GetARSharedWorldGameState(); // Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
}; 
 
 


//Class AugmentedReality.ARPlaneComponent Size 784
// Inherited 656 bytes 
class UARPlaneComponent : public UARComponent
{

 public: 
	struct FARPlaneUpdatePayload ReplicatedPayload;  // Offset: 656 Size: 128



 // Functions 
 public:
	void SetPlaneComponentDebugMode(enum class EPlaneComponentDebugMode NewDebugMode); // Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	void SetObjectClassificationDebugColors(struct TMap<enum class EARObjectClassification, struct FLinearColor>& InColors); // Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	void ServerUpdatePayload(struct FARPlaneUpdatePayload NewPayload); // Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARPlaneUpdatePayload& Payload); // Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
	void ReceiveAdd(struct FARPlaneUpdatePayload& Payload); // Function AugmentedReality.ARPlaneComponent.ReceiveAdd
	struct TMap<enum class EARObjectClassification, struct FLinearColor> GetObjectClassificationDebugColors(); // Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
}; 
 
 


//Class AugmentedReality.ARBasicLightEstimate Size 64
// Inherited 40 bytes 
class UARBasicLightEstimate : public UARLightEstimate
{

 public: 
	float AmbientIntensityLumens;  // Offset: 40 Size: 4
	float AmbientColorTemperatureKelvin;  // Offset: 44 Size: 4
	struct FLinearColor AmbientColor;  // Offset: 48 Size: 16



 // Functions 
 public:
	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	float GetAmbientColorTemperatureKelvin(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	struct FLinearColor GetAmbientColor(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
}; 
 
 


//Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy Size 160
// Inherited 80 bytes 
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 80 Size: 16
	struct FMulticastInlineDelegate OnFailed;  // Offset: 96 Size: 16
	char pad_112[48];  // Offset: 112 Size: 48



 // Functions 
 public:
	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, struct FString Error); // DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	struct UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(struct UObject* WorldContextObject, struct FVector& WorldPosition); // Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
}; 
 
 


//Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy Size 128
// Inherited 80 bytes 
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 80 Size: 16
	struct FMulticastInlineDelegate OnFailed;  // Offset: 96 Size: 16
	char pad_112[16];  // Offset: 112 Size: 16



 // Functions 
 public:
	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
}; 
 
 


//Class AugmentedReality.ARComponent Size 656
// Inherited 528 bytes 
class UARComponent : public USceneComponent
{

 public: 
	struct FGuid NativeID;  // Offset: 520 Size: 16
	char pad_544[40];  // Offset: 544 Size: 40
	char pad_584_1 : 7;  // Offset: 584 Size: 1
	bool bUseDefaultReplication : 1;  // Offset: 584 Size: 1
	char pad_585[7];  // Offset: 585 Size: 7
	struct UMaterialInterface* DefaultMeshMaterial;  // Offset: 592 Size: 8
	struct UMaterialInterface* DefaultWireframeMeshMaterial;  // Offset: 600 Size: 8
	struct UMRMeshComponent* MRMeshComponent;  // Offset: 608 Size: 8
	struct UARTrackedGeometry* MyTrackedGeometry;  // Offset: 616 Size: 8
	char pad_624[32];  // Offset: 624 Size: 32



 // Functions 
 public:
	void UpdateVisualization(); // Function AugmentedReality.ARComponent.UpdateVisualization
	void SetNativeID(struct FGuid NativeID); // Function AugmentedReality.ARComponent.SetNativeID
	void ReceiveRemove(); // Function AugmentedReality.ARComponent.ReceiveRemove
	void OnRep_Payload(); // Function AugmentedReality.ARComponent.OnRep_Payload
	struct UMRMeshComponent* GetMRMesh(); // Function AugmentedReality.ARComponent.GetMRMesh
}; 
 
 


//Class AugmentedReality.ARPointComponent Size 656
// Inherited 656 bytes 
class UARPointComponent : public UARComponent
{

 public: 
	struct FARPointUpdatePayload ReplicatedPayload;  // Offset: 648 Size: 1



 // Functions 
 public:
	void ServerUpdatePayload(struct FARPointUpdatePayload NewPayload); // Function AugmentedReality.ARPointComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARPointUpdatePayload& Payload); // Function AugmentedReality.ARPointComponent.ReceiveUpdate
	void ReceiveAdd(struct FARPointUpdatePayload& Payload); // Function AugmentedReality.ARPointComponent.ReceiveAdd
}; 
 
 


//Class AugmentedReality.ARFaceComponent Size 752
// Inherited 656 bytes 
class UARFaceComponent : public UARComponent
{

 public: 
	enum class EARFaceTransformMixing TransformSetting;  // Offset: 648 Size: 1
	char pad_657_1 : 7;  // Offset: 657 Size: 1
	bool bUpdateVertexNormal : 1;  // Offset: 649 Size: 1
	char pad_658_1 : 7;  // Offset: 658 Size: 1
	bool bFaceOutOfScreen : 1;  // Offset: 650 Size: 1
	struct FARFaceUpdatePayload ReplicatedPayload;  // Offset: 656 Size: 64
	char pad_723[29];  // Offset: 723 Size: 29



 // Functions 
 public:
	void SetFaceComponentDebugMode(enum class EFaceComponentDebugMode NewDebugMode); // Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	void ServerUpdatePayload(struct FARFaceUpdatePayload NewPayload); // Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARFaceUpdatePayload& Payload); // Function AugmentedReality.ARFaceComponent.ReceiveUpdate
	void ReceiveAdd(struct FARFaceUpdatePayload& Payload); // Function AugmentedReality.ARFaceComponent.ReceiveAdd
}; 
 
 


//Class AugmentedReality.ARObjectComponent Size 704
// Inherited 656 bytes 
class UARObjectComponent : public UARComponent
{

 public: 
	struct FARObjectUpdatePayload ReplicatedPayload;  // Offset: 656 Size: 48



 // Functions 
 public:
	void ServerUpdatePayload(struct FARObjectUpdatePayload NewPayload); // Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARObjectUpdatePayload& Payload); // Function AugmentedReality.ARObjectComponent.ReceiveUpdate
	void ReceiveAdd(struct FARObjectUpdatePayload& Payload); // Function AugmentedReality.ARObjectComponent.ReceiveAdd
}; 
 
 


//Class AugmentedReality.ARImageComponent Size 752
// Inherited 656 bytes 
class UARImageComponent : public UARComponent
{

 public: 
	struct FARImageUpdatePayload ReplicatedPayload;  // Offset: 656 Size: 96



 // Functions 
 public:
	void SetImageComponentDebugMode(enum class EImageComponentDebugMode NewDebugMode); // Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	void ServerUpdatePayload(struct FARImageUpdatePayload NewPayload); // Function AugmentedReality.ARImageComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARImageUpdatePayload& Payload); // Function AugmentedReality.ARImageComponent.ReceiveUpdate
	void ReceiveAdd(struct FARImageUpdatePayload& Payload); // Function AugmentedReality.ARImageComponent.ReceiveAdd
}; 
 
 


//Class AugmentedReality.ARQRCodeComponent Size 768
// Inherited 656 bytes 
class UARQRCodeComponent : public UARComponent
{

 public: 
	struct FARQRCodeUpdatePayload ReplicatedPayload;  // Offset: 656 Size: 112



 // Functions 
 public:
	void SetQRCodeComponentDebugMode(enum class EQRCodeComponentDebugMode NewDebugMode); // Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	void ServerUpdatePayload(struct FARQRCodeUpdatePayload NewPayload); // Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARQRCodeUpdatePayload& Payload); // Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	void ReceiveAdd(struct FARQRCodeUpdatePayload& Payload); // Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
}; 
 
 


//Class AugmentedReality.ARLifeCycleComponent Size 576
// Inherited 528 bytes 
class UARLifeCycleComponent : public USceneComponent
{

 public: 
	struct FMulticastInlineDelegate OnARActorSpawnedDelegate;  // Offset: 520 Size: 16
	struct FMulticastInlineDelegate OnARActorToBeDestroyedDelegate;  // Offset: 536 Size: 16
	char pad_560[16];  // Offset: 560 Size: 16



 // Functions 
 public:
	void ServerSpawnARActor(UObject* ComponentClass, struct FGuid NativeID); // Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	void ServerDestroyARActor(struct AARActor* Actor); // Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(struct AARActor* Actor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	void InstanceARActorSpawnedDelegate__DelegateSignature(UObject* ComponentClass, struct FGuid NativeID, struct AARActor* SpawnedActor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
}; 
 
 


//Class AugmentedReality.ARPoseComponent Size 720
// Inherited 656 bytes 
class UARPoseComponent : public UARComponent
{

 public: 
	struct FARPoseUpdatePayload ReplicatedPayload;  // Offset: 656 Size: 64



 // Functions 
 public:
	void SetPoseComponentDebugMode(enum class EPoseComponentDebugMode NewDebugMode); // Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	void ServerUpdatePayload(struct FARPoseUpdatePayload NewPayload); // Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARPoseUpdatePayload& Payload); // Function AugmentedReality.ARPoseComponent.ReceiveUpdate
	void ReceiveAdd(struct FARPoseUpdatePayload& Payload); // Function AugmentedReality.ARPoseComponent.ReceiveAdd
}; 
 
 


//Class AugmentedReality.AREnvironmentProbeComponent Size 704
// Inherited 656 bytes 
class UAREnvironmentProbeComponent : public UARComponent
{

 public: 
	struct FAREnvironmentProbeUpdatePayload ReplicatedPayload;  // Offset: 656 Size: 48



 // Functions 
 public:
	void ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload NewPayload); // Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FAREnvironmentProbeUpdatePayload& Payload); // Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	void ReceiveAdd(struct FAREnvironmentProbeUpdatePayload& Payload); // Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
}; 
 
 


//Class AugmentedReality.AROriginActor Size 544
// Inherited 544 bytes 
class AAROriginActor : public AActor
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AugmentedReality.ARMeshComponent Size 752
// Inherited 656 bytes 
class UARMeshComponent : public UARComponent
{

 public: 
	struct FARMeshUpdatePayload ReplicatedPayload;  // Offset: 656 Size: 96



 // Functions 
 public:
	void ServerUpdatePayload(struct FARMeshUpdatePayload NewPayload); // Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARMeshUpdatePayload& Payload); // Function AugmentedReality.ARMeshComponent.ReceiveUpdate
	void ReceiveAdd(struct FARMeshUpdatePayload& Payload); // Function AugmentedReality.ARMeshComponent.ReceiveAdd
}; 
 
 


//Class AugmentedReality.ARGeoAnchorComponent Size 768
// Inherited 656 bytes 
class UARGeoAnchorComponent : public UARComponent
{

 public: 
	struct FARGeoAnchorUpdatePayload ReplicatedPayload;  // Offset: 656 Size: 112



 // Functions 
 public:
	void SetGeoAnchorComponentDebugMode(enum class EGeoAnchorComponentDebugMode NewDebugMode); // Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	void ServerUpdatePayload(struct FARGeoAnchorUpdatePayload NewPayload); // Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARGeoAnchorUpdatePayload& Payload); // Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	void ReceiveAdd(struct FARGeoAnchorUpdatePayload& Payload); // Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
}; 
 
 


//Class AugmentedReality.ARDependencyHandler Size 40
// Inherited 40 bytes 
class UARDependencyHandler : public UObject
{

 public: 



 // Functions 
 public:
	void StartARSessionLatent(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo); // Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
	void RequestARSessionPermission(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo, enum class EARServicePermissionRequestResult& OutPermissionResult); // Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	void InstallARService(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, enum class EARServiceInstallRequestResult& OutInstallResult); // Function AugmentedReality.ARDependencyHandler.InstallARService
	struct UARDependencyHandler* GetARDependencyHandler(); // Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	void CheckARServiceAvailability(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, enum class EARServiceAvailability& OutAvailability); // Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
}; 
 
 


//Class AugmentedReality.ARCandidateObject Size 112
// Inherited 48 bytes 
class UARCandidateObject : public UDataAsset
{

 public: 
	struct TArray<char> CandidateObjectData;  // Offset: 48 Size: 16
	struct FString FriendlyName;  // Offset: 64 Size: 16
	struct FBox BoundingBox;  // Offset: 80 Size: 28
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName
	void SetCandidateObjectData(struct TArray<char>& InCandidateObject); // Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	void SetBoundingBox(struct FBox& InBoundingBox); // Function AugmentedReality.ARCandidateObject.SetBoundingBox
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateObject.GetFriendlyName
	struct TArray<char> GetCandidateObjectData(); // Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	struct FBox GetBoundingBox(); // Function AugmentedReality.ARCandidateObject.GetBoundingBox
}; 
 
 


//Class AugmentedReality.ARGeoTrackingSupport Size 40
// Inherited 40 bytes 
class UARGeoTrackingSupport : public UObject
{

 public: 



 // Functions 
 public:
	struct UARGeoTrackingSupport* GetGeoTrackingSupport(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	enum class EARGeoTrackingStateReason GetGeoTrackingStateReason(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	enum class EARGeoTrackingState GetGeoTrackingState(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	enum class EARGeoTrackingAccuracy GetGeoTrackingAccuracy(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, struct FString OptionalAnchorName); // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	bool AddGeoAnchorAtLocation(float Longitude, float Latitude, struct FString OptionalAnchorName); // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
}; 
 
 


//Class AugmentedReality.AREnvironmentCaptureProbe Size 272
// Inherited 256 bytes 
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{

 public: 
	struct FVector Extent;  // Offset: 248 Size: 12
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;  // Offset: 264 Size: 8



 // Functions 
 public:
	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
}; 
 
 


//Class AugmentedReality.ARTrackedQRCode Size 288
// Inherited 272 bytes 
class UARTrackedQRCode : public UARTrackedImage
{

 public: 
	struct FString QRCode;  // Offset: 264 Size: 16
	int32_t Version;  // Offset: 280 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AugmentedReality.ARSessionConfig Size 272
// Inherited 48 bytes 
class UARSessionConfig : public UDataAsset
{

 public: 
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bGenerateMeshDataFromTrackedGeometry : 1;  // Offset: 48 Size: 1
	char pad_49_1 : 7;  // Offset: 49 Size: 1
	bool bGenerateCollisionForMeshData : 1;  // Offset: 49 Size: 1
	char pad_50_1 : 7;  // Offset: 50 Size: 1
	bool bGenerateNavMeshForMeshData : 1;  // Offset: 50 Size: 1
	char pad_51_1 : 7;  // Offset: 51 Size: 1
	bool bUseMeshDataForOcclusion : 1;  // Offset: 51 Size: 1
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	bool bRenderMeshDataInWireframe : 1;  // Offset: 52 Size: 1
	char pad_53_1 : 7;  // Offset: 53 Size: 1
	bool bTrackSceneObjects : 1;  // Offset: 53 Size: 1
	char pad_54_1 : 7;  // Offset: 54 Size: 1
	bool bUsePersonSegmentationForOcclusion : 1;  // Offset: 54 Size: 1
	char pad_55_1 : 7;  // Offset: 55 Size: 1
	bool bUseSceneDepthForOcclusion : 1;  // Offset: 55 Size: 1
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bUseAutomaticImageScaleEstimation : 1;  // Offset: 56 Size: 1
	char pad_57_1 : 7;  // Offset: 57 Size: 1
	bool bUseStandardOnboardingUX : 1;  // Offset: 57 Size: 1
	enum class EARWorldAlignment WorldAlignment;  // Offset: 58 Size: 1
	enum class EARSessionType SessionType;  // Offset: 59 Size: 1
	enum class EARPlaneDetectionMode PlaneDetectionMode;  // Offset: 60 Size: 1
	char pad_61_1 : 7;  // Offset: 61 Size: 1
	bool bHorizontalPlaneDetection : 1;  // Offset: 61 Size: 1
	char pad_62_1 : 7;  // Offset: 62 Size: 1
	bool bVerticalPlaneDetection : 1;  // Offset: 62 Size: 1
	char pad_63_1 : 7;  // Offset: 63 Size: 1
	bool bEnableAutoFocus : 1;  // Offset: 63 Size: 1
	enum class EARLightEstimationMode LightEstimationMode;  // Offset: 64 Size: 1
	enum class EARFrameSyncMode FrameSyncMode;  // Offset: 65 Size: 1
	char pad_66_1 : 7;  // Offset: 66 Size: 1
	bool bEnableAutomaticCameraOverlay : 1;  // Offset: 66 Size: 1
	char pad_67_1 : 7;  // Offset: 67 Size: 1
	bool bEnableAutomaticCameraTracking : 1;  // Offset: 67 Size: 1
	char pad_68_1 : 7;  // Offset: 68 Size: 1
	bool bResetCameraTracking : 1;  // Offset: 68 Size: 1
	char pad_69_1 : 7;  // Offset: 69 Size: 1
	bool bResetTrackedObjects : 1;  // Offset: 69 Size: 1
	char pad_70[2];  // Offset: 70 Size: 2
	struct TArray<struct UARCandidateImage*> CandidateImages;  // Offset: 72 Size: 16
	int32_t MaxNumSimultaneousImagesTracked;  // Offset: 88 Size: 4
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType;  // Offset: 92 Size: 1
	char pad_93[3];  // Offset: 93 Size: 3
	struct TArray<char> WorldMapData;  // Offset: 96 Size: 16
	struct TArray<struct UARCandidateObject*> CandidateObjects;  // Offset: 112 Size: 16
	struct FARVideoFormat DesiredVideoFormat;  // Offset: 128 Size: 12
	char pad_140_1 : 7;  // Offset: 140 Size: 1
	bool bUseOptimalVideoFormat : 1;  // Offset: 140 Size: 1
	enum class EARFaceTrackingDirection FaceTrackingDirection;  // Offset: 141 Size: 1
	enum class EARFaceTrackingUpdate FaceTrackingUpdate;  // Offset: 142 Size: 1
	char pad_143[1];  // Offset: 143 Size: 1
	int32_t MaxNumberOfTrackedFaces;  // Offset: 144 Size: 4
	char pad_148[4];  // Offset: 148 Size: 4
	struct TArray<char> SerializedARCandidateImageDatabase;  // Offset: 152 Size: 16
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature;  // Offset: 168 Size: 1
	enum class EARSceneReconstruction SceneReconstructionMethod;  // Offset: 169 Size: 1
	char pad_170[6];  // Offset: 170 Size: 6
	UARPlaneComponent* PlaneComponentClass;  // Offset: 176 Size: 8
	UARPointComponent* PointComponentClass;  // Offset: 184 Size: 8
	UARFaceComponent* FaceComponentClass;  // Offset: 192 Size: 8
	UARImageComponent* ImageComponentClass;  // Offset: 200 Size: 8
	UARQRCodeComponent* QRCodeComponentClass;  // Offset: 208 Size: 8
	UARPoseComponent* PoseComponentClass;  // Offset: 216 Size: 8
	UAREnvironmentProbeComponent* EnvironmentProbeComponentClass;  // Offset: 224 Size: 8
	UARObjectComponent* ObjectComponentClass;  // Offset: 232 Size: 8
	UARMeshComponent* MeshComponentClass;  // Offset: 240 Size: 8
	UARGeoAnchorComponent* GeoAnchorComponentClass;  // Offset: 248 Size: 8
	struct UMaterialInterface* DefaultMeshMaterial;  // Offset: 256 Size: 8
	struct UMaterialInterface* DefaultWireframeMeshMaterial;  // Offset: 264 Size: 8



 // Functions 
 public:
	bool ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	bool ShouldResetCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	bool ShouldRenderCameraOverlay(); // Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	bool ShouldEnableCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	bool ShouldEnableAutoFocus(); // Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	void SetWorldMapData(struct TArray<char> WorldMapData); // Function AugmentedReality.ARSessionConfig.SetWorldMapData
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature); // Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	void SetSceneReconstructionMethod(enum class EARSceneReconstruction InSceneReconstructionMethod); // Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	void SetResetTrackedObjects(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	void SetResetCameraTracking(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	void SetEnableAutoFocus(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat); // Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject*>& InCandidateObjects); // Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	struct TArray<char> GetWorldMapData(); // Function AugmentedReality.ARSessionConfig.GetWorldMapData
	enum class EARWorldAlignment GetWorldAlignment(); // Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	enum class EARSessionType GetSessionType(); // Function AugmentedReality.ARSessionConfig.GetSessionType
	enum class EARSceneReconstruction GetSceneReconstructionMethod(); // Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	enum class EARPlaneDetectionMode GetPlaneDetectionMode(); // Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	int32_t GetMaxNumSimultaneousImagesTracked(); // Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	enum class EARLightEstimationMode GetLightEstimationMode(); // Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	enum class EARFrameSyncMode GetFrameSyncMode(); // Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	enum class EARFaceTrackingDirection GetFaceTrackingDirection(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	struct FARVideoFormat GetDesiredVideoFormat(); // Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList(); // Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	struct TArray<struct UARCandidateImage*> GetCandidateImageList(); // Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	void AddCandidateObject(struct UARCandidateObject* CandidateObject); // Function AugmentedReality.ARSessionConfig.AddCandidateObject
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage); // Function AugmentedReality.ARSessionConfig.AddCandidateImage
}; 
 
 


//Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy Size 160
// Inherited 80 bytes 
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 80 Size: 16
	struct FMulticastInlineDelegate OnFailed;  // Offset: 96 Size: 16
	char pad_112[48];  // Offset: 112 Size: 48



 // Functions 
 public:
	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, struct FString Error); // DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(struct UObject* WorldContextObject, float Longitude, float Latitude); // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(struct UObject* WorldContextObject); // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
}; 
 
 


//Class AugmentedReality.ARTrackableNotifyComponent Size 512
// Inherited 176 bytes 
class UARTrackableNotifyComponent : public UActorComponent
{

 public: 
	struct FMulticastInlineDelegate OnAddTrackedGeometry;  // Offset: 176 Size: 16
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry;  // Offset: 192 Size: 16
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry;  // Offset: 208 Size: 16
	struct FMulticastInlineDelegate OnAddTrackedPlane;  // Offset: 224 Size: 16
	struct FMulticastInlineDelegate OnUpdateTrackedPlane;  // Offset: 240 Size: 16
	struct FMulticastInlineDelegate OnRemoveTrackedPlane;  // Offset: 256 Size: 16
	struct FMulticastInlineDelegate OnAddTrackedPoint;  // Offset: 272 Size: 16
	struct FMulticastInlineDelegate OnUpdateTrackedPoint;  // Offset: 288 Size: 16
	struct FMulticastInlineDelegate OnRemoveTrackedPoint;  // Offset: 304 Size: 16
	struct FMulticastInlineDelegate OnAddTrackedImage;  // Offset: 320 Size: 16
	struct FMulticastInlineDelegate OnUpdateTrackedImage;  // Offset: 336 Size: 16
	struct FMulticastInlineDelegate OnRemoveTrackedImage;  // Offset: 352 Size: 16
	struct FMulticastInlineDelegate OnAddTrackedFace;  // Offset: 368 Size: 16
	struct FMulticastInlineDelegate OnUpdateTrackedFace;  // Offset: 384 Size: 16
	struct FMulticastInlineDelegate OnRemoveTrackedFace;  // Offset: 400 Size: 16
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe;  // Offset: 416 Size: 16
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe;  // Offset: 432 Size: 16
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe;  // Offset: 448 Size: 16
	struct FMulticastInlineDelegate OnAddTrackedObject;  // Offset: 464 Size: 16
	struct FMulticastInlineDelegate OnUpdateTrackedObject;  // Offset: 480 Size: 16
	struct FMulticastInlineDelegate OnRemoveTrackedObject;  // Offset: 496 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AugmentedReality.ARTraceResultDummy Size 40
// Inherited 40 bytes 
class UARTraceResultDummy : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AugmentedReality.ARLightEstimate Size 40
// Inherited 40 bytes 
class UARLightEstimate : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AugmentedReality.ARCandidateImage Size 88
// Inherited 48 bytes 
class UARCandidateImage : public UDataAsset
{

 public: 
	struct UTexture2D* CandidateTexture;  // Offset: 48 Size: 8
	struct FString FriendlyName;  // Offset: 56 Size: 16
	float Width;  // Offset: 72 Size: 4
	float Height;  // Offset: 76 Size: 4
	enum class EARCandidateImageOrientation Orientation;  // Offset: 80 Size: 1
	char pad_81[7];  // Offset: 81 Size: 7



 // Functions 
 public:
	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
	float GetPhysicalHeight(); // Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	enum class EARCandidateImageOrientation GetOrientation(); // Function AugmentedReality.ARCandidateImage.GetOrientation
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateImage.GetFriendlyName
	struct UTexture2D* GetCandidateTexture(); // Function AugmentedReality.ARCandidateImage.GetCandidateTexture
}; 
 
 


//Class AugmentedReality.ARPin Size 240
// Inherited 40 bytes 
class UARPin : public UObject
{

 public: 
	struct UARTrackedGeometry* TrackedGeometry;  // Offset: 40 Size: 8
	struct USceneComponent* PinnedComponent;  // Offset: 48 Size: 8
	char pad_56[8];  // Offset: 56 Size: 8
	struct FTransform LocalToTrackingTransform;  // Offset: 64 Size: 48
	struct FTransform LocalToAlignedTrackingTransform;  // Offset: 112 Size: 48
	enum class EARTrackingState TrackingState;  // Offset: 160 Size: 1
	char pad_161[31];  // Offset: 161 Size: 31
	struct FMulticastInlineDelegate OnARTrackingStateChanged;  // Offset: 192 Size: 16
	struct FMulticastInlineDelegate OnARTransformUpdated;  // Offset: 208 Size: 16
	char pad_224[16];  // Offset: 224 Size: 16



 // Functions 
 public:
	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState
	struct UARTrackedGeometry* GetTrackedGeometry(); // Function AugmentedReality.ARPin.GetTrackedGeometry
	struct USceneComponent* GetPinnedComponent(); // Function AugmentedReality.ARPin.GetPinnedComponent
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARPin.GetLocalToWorldTransform
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	struct FName GetDebugName(); // Function AugmentedReality.ARPin.GetDebugName
	void DebugDraw(struct UWorld* World, struct FLinearColor& Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARPin.DebugDraw
}; 
 
 


//Class AugmentedReality.ARSharedWorldGameState Size 712
// Inherited 656 bytes 
class AARSharedWorldGameState : public AGameState
{

 public: 
	struct TArray<char> PreviewImageData;  // Offset: 656 Size: 16
	struct TArray<char> ARWorldData;  // Offset: 672 Size: 16
	int32_t PreviewImageBytesTotal;  // Offset: 688 Size: 4
	int32_t ARWorldBytesTotal;  // Offset: 692 Size: 4
	int32_t PreviewImageBytesDelivered;  // Offset: 696 Size: 4
	int32_t ARWorldBytesDelivered;  // Offset: 700 Size: 4
	char pad_704[8];  // Offset: 704 Size: 8



 // Functions 
 public:
	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
}; 
 
 


//Class AugmentedReality.ARPlaneGeometry Size 304
// Inherited 256 bytes 
class UARPlaneGeometry : public UARTrackedGeometry
{

 public: 
	enum class EARPlaneOrientation Orientation;  // Offset: 248 Size: 1
	struct FVector Center;  // Offset: 252 Size: 12
	struct FVector Extent;  // Offset: 264 Size: 12
	struct TArray<struct FVector> BoundaryPolygon;  // Offset: 280 Size: 16
	struct UARPlaneGeometry* SubsumedBy;  // Offset: 296 Size: 8



 // Functions 
 public:
	struct UARPlaneGeometry* GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	enum class EARPlaneOrientation GetOrientation(); // Function AugmentedReality.ARPlaneGeometry.GetOrientation
	struct FVector GetExtent(); // Function AugmentedReality.ARPlaneGeometry.GetExtent
	struct FVector GetCenter(); // Function AugmentedReality.ARPlaneGeometry.GetCenter
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
}; 
 
 


//Class AugmentedReality.ARSharedWorldPlayerController Size 1416
// Inherited 1408 bytes 
class AARSharedWorldPlayerController : public APlayerController
{

 public: 
	char pad_1408[8];  // Offset: 1408 Size: 8



 // Functions 
 public:
	void ServerMarkReadyForReceiving(); // Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize); // Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
}; 
 
 


//Class AugmentedReality.ARSkyLight Size 576
// Inherited 560 bytes 
class AARSkyLight : public ASkyLight
{

 public: 
	struct UAREnvironmentCaptureProbe* CaptureProbe;  // Offset: 560 Size: 8
	char pad_568[8];  // Offset: 568 Size: 8



 // Functions 
 public:
	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
}; 
 
 


//Class AugmentedReality.ARTexture Size 416
// Inherited 384 bytes 
class UARTexture : public UTexture
{

 public: 
	enum class EARTextureType TextureType;  // Offset: 376 Size: 1
	float Timestamp;  // Offset: 380 Size: 4
	struct FGuid ExternalTextureGuid;  // Offset: 384 Size: 16
	struct FVector2D Size;  // Offset: 400 Size: 8
	char pad_413[3];  // Offset: 413 Size: 3



 // Functions 
 public:
}; 
 
 


//Class AugmentedReality.ARTextureCameraImage Size 416
// Inherited 416 bytes 
class UARTextureCameraImage : public UARTexture
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AugmentedReality.ARTextureCameraDepth Size 416
// Inherited 416 bytes 
class UARTextureCameraDepth : public UARTexture
{

 public: 
	enum class EARDepthQuality DepthQuality;  // Offset: 408 Size: 1
	enum class EARDepthAccuracy DepthAccuracy;  // Offset: 409 Size: 1
	char pad_418_1 : 7;  // Offset: 418 Size: 1
	bool bIsTemporallySmoothed : 1;  // Offset: 410 Size: 1



 // Functions 
 public:
}; 
 
 


//Class AugmentedReality.ARMeshGeometry Size 256
// Inherited 256 bytes 
class UARMeshGeometry : public UARTrackedGeometry
{

 public: 



 // Functions 
 public:
	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum class EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff); // Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
}; 
 
 


//Class AugmentedReality.AREnvironmentCaptureProbeTexture Size 496
// Inherited 464 bytes 
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{

 public: 
	enum class EARTextureType TextureType;  // Offset: 464 Size: 1
	char pad_465[3];  // Offset: 465 Size: 3
	float Timestamp;  // Offset: 468 Size: 4
	struct FGuid ExternalTextureGuid;  // Offset: 472 Size: 16
	struct FVector2D Size;  // Offset: 488 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AugmentedReality.ARTrackedGeometry Size 256
// Inherited 40 bytes 
class UARTrackedGeometry : public UObject
{

 public: 
	struct FGuid UniqueId;  // Offset: 40 Size: 16
	char pad_56[8];  // Offset: 56 Size: 8
	struct FTransform LocalToTrackingTransform;  // Offset: 64 Size: 48
	struct FTransform LocalToAlignedTrackingTransform;  // Offset: 112 Size: 48
	enum class EARTrackingState TrackingState;  // Offset: 160 Size: 1
	char pad_161[15];  // Offset: 161 Size: 15
	struct UMRMeshComponent* UnderlyingMesh;  // Offset: 176 Size: 8
	enum class EARObjectClassification ObjectClassification;  // Offset: 184 Size: 1
	enum class EARSpatialMeshUsageFlags SpatialMeshUsageFlags;  // Offset: 185 Size: 1
	char pad_186[22];  // Offset: 186 Size: 22
	int32_t LastUpdateFrameNumber;  // Offset: 208 Size: 4
	char pad_212[12];  // Offset: 212 Size: 12
	struct FName DebugName;  // Offset: 224 Size: 8
	char pad_232[24];  // Offset: 232 Size: 24



 // Functions 
 public:
	bool IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked
	bool HasSpatialMeshUsageFlag(enum class EARSpatialMeshUsageFlags InFlag); // Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
	struct UMRMeshComponent* GetUnderlyingMesh(); // Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	enum class EARObjectClassification GetObjectClassification(); // Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	struct FString GetName(); // Function AugmentedReality.ARTrackedGeometry.GetName
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	float GetLastUpdateTimestamp(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	int32_t GetLastUpdateFrameNumber(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	struct FName GetDebugName(); // Function AugmentedReality.ARTrackedGeometry.GetDebugName
}; 
 
 


//Class AugmentedReality.ARTrackedPoint Size 256
// Inherited 256 bytes 
class UARTrackedPoint : public UARTrackedGeometry
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AugmentedReality.ARTrackedObject Size 256
// Inherited 256 bytes 
class UARTrackedObject : public UARTrackedGeometry
{

 public: 
	struct UARCandidateObject* DetectedObject;  // Offset: 248 Size: 8



 // Functions 
 public:
	struct UARCandidateObject* GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject
}; 
 
 


//Class AugmentedReality.ARTrackedImage Size 272
// Inherited 256 bytes 
class UARTrackedImage : public UARTrackedGeometry
{

 public: 
	struct UARCandidateImage* DetectedImage;  // Offset: 248 Size: 8
	struct FVector2D EstimatedSize;  // Offset: 256 Size: 8



 // Functions 
 public:
	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize
	struct UARCandidateImage* GetDetectedImage(); // Function AugmentedReality.ARTrackedImage.GetDetectedImage
}; 
 
 


//Class AugmentedReality.ARTrackedPose Size 336
// Inherited 256 bytes 
class UARTrackedPose : public UARTrackedGeometry
{

 public: 
	struct FARPose3D TrackedPose;  // Offset: 248 Size: 80



 // Functions 
 public:
	struct FARPose3D GetTrackedPoseData(); // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
}; 
 
 


//Class AugmentedReality.ARGeoAnchor Size 272
// Inherited 256 bytes 
class UARGeoAnchor : public UARTrackedGeometry
{

 public: 
	char pad_256[16];  // Offset: 256 Size: 16



 // Functions 
 public:
	float GetLongitude(); // Function AugmentedReality.ARGeoAnchor.GetLongitude
	float GetLatitude(); // Function AugmentedReality.ARGeoAnchor.GetLatitude
	enum class EARAltitudeSource GetAltitudeSource(); // Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
	float GetAltitudeMeters(); // Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
}; 
 
 


//Class AugmentedReality.ARTypesDummyClass Size 40
// Inherited 40 bytes 
class UARTypesDummyClass : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


