#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct AugmentedReality.ARSharedWorldReplicationState Size 8
class FARSharedWorldReplicationState
{

 public: 
	int32_t PreviewImageOffset;  // Offset: 0 Size: 4
	int32_t ARWorldOffset;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats Size 24
class FGetSupportedVideoFormats
{

 public: 
	enum class EARSessionType SessionType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FARVideoFormat> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability Size 16
class FCheckGeoTrackingAvailability
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.TrackablePlaneDelegate__DelegateSignature Size 8
class FTrackablePlaneDelegate__DelegateSignature
{

 public: 
	struct UARPlaneGeometry* TrackedPlane;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.OnARTrackingStateChanged__DelegateSignature Size 1
class FOnARTrackingStateChanged__DelegateSignature
{

 public: 
	enum class EARTrackingState NewTrackingState;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.TrackableEnvProbeDelegate__DelegateSignature Size 8
class FTrackableEnvProbeDelegate__DelegateSignature
{

 public: 
	struct UAREnvironmentCaptureProbe* TrackedEnvProbe;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition Size 32
class FGetGeoLocationAtWorldPosition
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector WorldPosition;  // Offset: 8 Size: 12
	char pad_20[4];  // Offset: 20 Size: 4
	struct UGetGeoLocationAsyncTaskBlueprintProxy* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature Size 32
class FGetGeoLocationDelegate__DelegateSignature
{

 public: 
	float Longitude;  // Offset: 0 Size: 4
	float Latitude;  // Offset: 4 Size: 4
	float Altitude;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FString Error;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.OnARTransformUpdated__DelegateSignature Size 48
class FOnARTransformUpdated__DelegateSignature
{

 public: 
	struct FTransform OldToNewTransform;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.ARSaveWorldPin__DelegateSignature Size 16
class FARSaveWorldPin__DelegateSignature
{

 public: 
	struct TArray<char> SavedWorld;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData Size 24
class FClientUpdateARWorldData
{

 public: 
	int32_t Offset;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<char> Buffer;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor Size 8
class FServerDestroyARActor
{

 public: 
	struct AARActor* Actor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform Size 144
class FCalculateAlignmentTransform
{

 public: 
	struct FTransform TransformInFirstCoordinateSystem;  // Offset: 0 Size: 48
	struct FTransform TransformInSecondCoordinateSystem;  // Offset: 48 Size: 48
	struct FTransform AlignmentTransform;  // Offset: 96 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARImageUpdatePayload Size 96
class FARImageUpdatePayload
{

 public: 
	struct FARSessionPayload SessionPayload;  // Offset: 0 Size: 24
	char pad_24[8];  // Offset: 24 Size: 8
	struct FTransform WorldTransform;  // Offset: 32 Size: 48
	struct UARCandidateImage* DetectedImage;  // Offset: 80 Size: 8
	struct FVector2D EstimatedSize;  // Offset: 88 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARSessionPayload Size 24
class FARSessionPayload
{

 public: 
	int32_t ConfigFlags;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UMaterialInterface* DefaultMeshMaterial;  // Offset: 8 Size: 8
	struct UMaterialInterface* DefaultWireframeMeshMaterial;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.ARGetCandidateObjectPin__DelegateSignature Size 8
class FARGetCandidateObjectPin__DelegateSignature
{

 public: 
	struct UARCandidateObject* SavedObject;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.TrackableDelegate__DelegateSignature Size 8
class FTrackableDelegate__DelegateSignature
{

 public: 
	struct UARTrackedGeometry* TrackedGeometry;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoAnchor.GetLongitude Size 4
class FGetLongitude
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARSessionStatus Size 24
class FARSessionStatus
{

 public: 
	struct FString AdditionalInfo;  // Offset: 0 Size: 16
	enum class EARSessionStatus status;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature Size 24
class FGeoTrackingAvailabilityDelegate__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsAvailable : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString Error;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation Size 24
class FCheckGeoTrackingAvailabilityAtLocation
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float Longitude;  // Offset: 8 Size: 4
	float Latitude;  // Offset: 12 Size: 4
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses Size 16
class FGetAllTracked2DPoses
{

 public: 
	struct TArray<struct FARPose2D> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry Size 40
class FDebugDrawTrackedGeometry
{

 public: 
	struct UARTrackedGeometry* TrackedGeometry;  // Offset: 0 Size: 8
	struct UObject* WorldContextObject;  // Offset: 8 Size: 8
	struct FLinearColor Color;  // Offset: 16 Size: 16
	float OutlineThickness;  // Offset: 32 Size: 4
	float PersistForSeconds;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARFaceUpdatePayload Size 64
class FARFaceUpdatePayload
{

 public: 
	struct FARSessionPayload SessionPayload;  // Offset: 0 Size: 24
	struct FVector LeftEyePosition;  // Offset: 24 Size: 12
	struct FVector RightEyePosition;  // Offset: 36 Size: 12
	struct FVector LookAtTarget;  // Offset: 48 Size: 12
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARMeshUpdatePayload Size 96
class FARMeshUpdatePayload
{

 public: 
	struct FARSessionPayload SessionPayload;  // Offset: 0 Size: 24
	char pad_24[8];  // Offset: 24 Size: 8
	struct FTransform WorldTransform;  // Offset: 32 Size: 48
	enum class EARObjectClassification ObjectClassification;  // Offset: 80 Size: 1
	char pad_81[15];  // Offset: 81 Size: 15



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetPointCloud Size 16
class FGetPointCloud
{

 public: 
	struct TArray<struct FVector> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature Size 32
class FInstanceARActorSpawnedDelegate__DelegateSignature
{

 public: 
	UObject* ComponentClass;  // Offset: 0 Size: 8
	struct FGuid NativeID;  // Offset: 8 Size: 16
	struct AARActor* SpawnedActor;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload Size 112
class FARGeoAnchorUpdatePayload
{

 public: 
	struct FARSessionPayload SessionPayload;  // Offset: 0 Size: 24
	char pad_24[8];  // Offset: 24 Size: 8
	struct FTransform WorldTransform;  // Offset: 32 Size: 48
	float Longitude;  // Offset: 80 Size: 4
	float Latitude;  // Offset: 84 Size: 4
	float AltitudeMeters;  // Offset: 88 Size: 4
	enum class EARAltitudeSource AltitudeSource;  // Offset: 92 Size: 1
	char pad_93[3];  // Offset: 93 Size: 3
	struct FString AnchorName;  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature Size 8
class FInstanceARActorToBeDestroyedDelegate__DelegateSignature
{

 public: 
	struct AARActor* Actor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARPin.GetTrackedGeometry Size 8
class FGetTrackedGeometry
{

 public: 
	struct UARTrackedGeometry* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor Size 24
class FServerSpawnARActor
{

 public: 
	UObject* ComponentClass;  // Offset: 0 Size: 8
	struct FGuid NativeID;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.TrackablePointDelegate__DelegateSignature Size 8
class FTrackablePointDelegate__DelegateSignature
{

 public: 
	struct UARTrackedPoint* TrackedPoint;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints Size 16
class FGetAllTrackedPoints
{

 public: 
	struct TArray<struct UARTrackedPoint*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode Size 1
class FSetFaceComponentDebugMode
{

 public: 
	enum class EFaceComponentDebugMode NewDebugMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.TrackableImageDelegate__DelegateSignature Size 8
class FTrackableImageDelegate__DelegateSignature
{

 public: 
	struct UARTrackedImage* TrackedImage;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.TrackableFaceDelegate__DelegateSignature Size 8
class FTrackableFaceDelegate__DelegateSignature
{

 public: 
	struct UARFaceGeometry* TrackedFace;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARCameraIntrinsics Size 24
class FARCameraIntrinsics
{

 public: 
	struct FIntPoint ImageResolution;  // Offset: 0 Size: 8
	struct FVector2D FocalLength;  // Offset: 8 Size: 8
	struct FVector2D PrincipalPoint;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AugmentedReality.TrackableObjectDelegate__DelegateSignature Size 8
class FTrackableObjectDelegate__DelegateSignature
{

 public: 
	struct UARTrackedObject* TrackedObject;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.TrackedGeometryGroup Size 24
class FTrackedGeometryGroup
{

 public: 
	struct AARActor* ARActor;  // Offset: 0 Size: 8
	struct UARComponent* ARComponent;  // Offset: 8 Size: 8
	struct UARTrackedGeometry* TrackedGeometry;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedPose.GetTrackedPoseData Size 80
class FGetTrackedPoseData
{

 public: 
	struct FARPose3D ReturnValue;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARObjectUpdatePayload Size 48
class FARObjectUpdatePayload
{

 public: 
	struct FTransform WorldTransform;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload Size 48
class FAREnvironmentProbeUpdatePayload
{

 public: 
	struct FTransform WorldTransform;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARSkeletonDefinition Size 40
class FARSkeletonDefinition
{

 public: 
	int32_t NumJoints;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FName> JointNames;  // Offset: 8 Size: 16
	struct TArray<int32_t> ParentIndices;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARPoseUpdatePayload Size 64
class FARPoseUpdatePayload
{

 public: 
	struct FTransform WorldTransform;  // Offset: 0 Size: 48
	struct TArray<struct FTransform> JointTransforms;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass Size 24
class FGetAllGeometriesByClass
{

 public: 
	UARTrackedGeometry* GeometryClass;  // Offset: 0 Size: 8
	struct TArray<struct UARTrackedGeometry*> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName Size 32
class FFindTrackedPointsByName
{

 public: 
	struct FString PointName;  // Offset: 0 Size: 16
	struct TArray<struct UARTrackedPoint*> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARQRCodeUpdatePayload Size 112
class FARQRCodeUpdatePayload
{

 public: 
	struct FARSessionPayload SessionPayload;  // Offset: 0 Size: 24
	char pad_24[8];  // Offset: 24 Size: 8
	struct FTransform WorldTransform;  // Offset: 32 Size: 48
	struct FVector Extents;  // Offset: 80 Size: 12
	char pad_92[4];  // Offset: 92 Size: 4
	struct FString QRCode;  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedGeometry.IsTracked Size 1
class FIsTracked
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARPointUpdatePayload Size 1
class FARPointUpdatePayload
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARPlaneUpdatePayload Size 128
class FARPlaneUpdatePayload
{

 public: 
	struct FARSessionPayload SessionPayload;  // Offset: 0 Size: 24
	char pad_24[8];  // Offset: 24 Size: 8
	struct FTransform WorldTransform;  // Offset: 32 Size: 48
	struct FVector Center;  // Offset: 80 Size: 12
	struct FVector Extents;  // Offset: 92 Size: 12
	struct TArray<struct FVector> BoundaryVertices;  // Offset: 104 Size: 16
	enum class EARObjectClassification ObjectClassification;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARTraceResult Size 96
class FARTraceResult
{

 public: 
	float DistanceFromCamera;  // Offset: 0 Size: 4
	enum class EARLineTraceChannels TraceChannel;  // Offset: 4 Size: 1
	char pad_5[11];  // Offset: 5 Size: 11
	struct FTransform LocalTransform;  // Offset: 16 Size: 48
	struct UARTrackedGeometry* TrackedGeometry;  // Offset: 64 Size: 8
	char pad_72[24];  // Offset: 72 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARVideoFormat Size 12
class FARVideoFormat
{

 public: 
	int32_t FPS;  // Offset: 0 Size: 4
	int32_t Width;  // Offset: 4 Size: 4
	int32_t Height;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARPose3D Size 80
class FARPose3D
{

 public: 
	struct FARSkeletonDefinition SkeletonDefinition;  // Offset: 0 Size: 40
	struct TArray<struct FTransform> JointTransforms;  // Offset: 40 Size: 16
	struct TArray<bool> IsJointTracked;  // Offset: 56 Size: 16
	enum class EARJointTransformSpace JointTransformSpace;  // Offset: 72 Size: 1
	char pad_73[7];  // Offset: 73 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AugmentedReality.ARPose2D Size 72
class FARPose2D
{

 public: 
	struct FARSkeletonDefinition SkeletonDefinition;  // Offset: 0 Size: 40
	struct TArray<struct FVector2D> JointLocations;  // Offset: 40 Size: 16
	struct TArray<bool> IsJointTracked;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARActor.AddARComponent Size 32
class FAddARComponent
{

 public: 
	UARComponent* InComponentClass;  // Offset: 0 Size: 8
	struct FGuid NativeID;  // Offset: 8 Size: 16
	struct UARComponent* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe Size 28
class FAddManualEnvironmentCaptureProbe
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12
	struct FVector Extent;  // Offset: 12 Size: 12
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy Size 8
class FGetSubsumedBy
{

 public: 
	struct UARPlaneGeometry* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage Size 48
class FAddRuntimeCandidateImage
{

 public: 
	struct UARSessionConfig* SessionConfig;  // Offset: 0 Size: 8
	struct UTexture2D* CandidateTexture;  // Offset: 8 Size: 8
	struct FString FriendlyName;  // Offset: 16 Size: 16
	float PhysicalWidth;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct UARCandidateImage* ReturnValue;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages Size 16
class FGetAllTrackedImages
{

 public: 
	struct TArray<struct UARTrackedImage*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName Size 80
class FAddTrackedPointWithName
{

 public: 
	struct FTransform WorldTransform;  // Offset: 0 Size: 48
	struct FString PointName;  // Offset: 48 Size: 16
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bDeletePointsWithSameName : 1;  // Offset: 64 Size: 1
	char pad_65_1 : 7;  // Offset: 65 Size: 1
	bool ReturnValue : 1;  // Offset: 65 Size: 1
	char pad_66[14];  // Offset: 66 Size: 14



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection Size 48
class FCalculateClosestIntersection
{

 public: 
	struct TArray<struct FVector> StartPoints;  // Offset: 0 Size: 16
	struct TArray<struct FVector> EndPoints;  // Offset: 16 Size: 16
	struct FVector ClosestIntersection;  // Offset: 32 Size: 12
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin Size 40
class FDebugDrawPin
{

 public: 
	struct UARPin* ARPin;  // Offset: 0 Size: 8
	struct UObject* WorldContextObject;  // Offset: 8 Size: 8
	struct FLinearColor Color;  // Offset: 16 Size: 16
	float Scale;  // Offset: 32 Size: 4
	float PersistForSeconds;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform Size 48
class FGetAlignmentTransform
{

 public: 
	struct FTransform ReturnValue;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries Size 16
class FGetAllGeometries
{

 public: 
	struct TArray<struct UARTrackedGeometry*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes Size 16
class FGetAllTrackedEnvironmentCaptureProbes
{

 public: 
	struct TArray<struct UAREnvironmentCaptureProbe*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetAllPins Size 16
class FGetAllPins
{

 public: 
	struct TArray<struct UARPin*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported Size 3
class FIsSceneReconstructionSupported
{

 public: 
	enum class EARSessionType SessionType;  // Offset: 0 Size: 1
	enum class EARSceneReconstruction SceneReconstructionMethod;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool ReturnValue : 1;  // Offset: 2 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetARTexture Size 16
class FGetARTexture
{

 public: 
	enum class EARTextureType TextureType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UARTexture* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes Size 16
class FGetAllTrackedPlanes
{

 public: 
	struct TArray<struct UARPlaneGeometry*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARPin.DebugDraw Size 32
class FDebugDraw
{

 public: 
	struct UWorld* World;  // Offset: 0 Size: 8
	struct FLinearColor Color;  // Offset: 8 Size: 16
	float Scale;  // Offset: 24 Size: 4
	float PersistForSeconds;  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses Size 16
class FGetAllTrackedPoses
{

 public: 
	struct TArray<struct UARTrackedPose*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale Size 4
class FGetARWorldScale
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedObject.GetDetectedObject Size 8
class FGetDetectedObject
{

 public: 
	struct UARCandidateObject* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore Size 80
class FLoadARPinsFromLocalStore
{

 public: 
	struct TMap<struct FName, struct UARPin*> ReturnValue;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus Size 24
class FGetARSessionStatus
{

 public: 
	struct FARSessionStatus ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth Size 8
class FGetCameraDepth
{

 public: 
	struct UARTextureCameraDepth* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetCameraImage Size 8
class FGetCameraImage
{

 public: 
	struct UARTextureCameraImage* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics Size 28
class FGetCameraIntrinsics
{

 public: 
	struct FARCameraIntrinsics OutCameraIntrinsics;  // Offset: 0 Size: 24
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate Size 8
class FGetCurrentLightEstimate
{

 public: 
	struct UARLightEstimate* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.SetCandidateObjectList Size 16
class FSetCandidateObjectList
{

 public: 
	struct TArray<struct UARCandidateObject*> InCandidateObjects;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported Size 4
class FGetNumberOfTrackedFacesSupported
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage Size 8
class FGetPersonSegmentationDepthImage
{

 public: 
	struct UARTexture* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation Size 36
class FGetObjectClassificationAtLocation
{

 public: 
	struct FVector InWorldLocation;  // Offset: 0 Size: 12
	enum class EARObjectClassification OutClassification;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	struct FVector OutClassificationLocation;  // Offset: 16 Size: 12
	float MaxLocationDiff;  // Offset: 28 Size: 4
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage Size 8
class FGetPersonSegmentationImage
{

 public: 
	struct UARTexture* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate Size 112
class FReceiveUpdate
{

 public: 
	struct FARGeoAnchorUpdatePayload Payload;  // Offset: 0 Size: 112



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig Size 8
class FGetSessionConfig
{

 public: 
	struct UARSessionConfig* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality Size 1
class FGetTrackingQuality
{

 public: 
	enum class EARTrackingQuality ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason Size 1
class FGetTrackingQualityReason
{

 public: 
	enum class EARTrackingQualityReason ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus Size 1
class FGetWorldMappingStatus
{

 public: 
	enum class EARWorldMappingState ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady Size 1
class FIsARPinLocalStoreReady
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported Size 1
class FIsARPinLocalStoreSupported
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.IsARSupported Size 1
class FIsARSupported
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported Size 3
class FIsSessionTrackingFeatureSupported
{

 public: 
	enum class EARSessionType SessionType;  // Offset: 0 Size: 1
	enum class EARSessionTrackingFeature SessionTrackingFeature;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool ReturnValue : 1;  // Offset: 2 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported Size 2
class FIsSessionTypeSupported
{

 public: 
	enum class EARSessionType SessionType;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool ReturnValue : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects Size 32
class FLineTraceTrackedObjects
{

 public: 
	struct FVector2D ScreenCoord;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bTestFeaturePoints : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bTestGroundPlane : 1;  // Offset: 9 Size: 1
	char pad_10_1 : 7;  // Offset: 10 Size: 1
	bool bTestPlaneExtents : 1;  // Offset: 10 Size: 1
	char pad_11_1 : 7;  // Offset: 11 Size: 1
	bool bTestPlaneBoundaryPolygon : 1;  // Offset: 11 Size: 1
	char pad_12[4];  // Offset: 12 Size: 4
	struct TArray<struct FARTraceResult> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D Size 48
class FLineTraceTrackedObjects3D
{

 public: 
	struct FVector Start;  // Offset: 0 Size: 12
	struct FVector End;  // Offset: 12 Size: 12
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bTestFeaturePoints : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bTestGroundPlane : 1;  // Offset: 25 Size: 1
	char pad_26_1 : 7;  // Offset: 26 Size: 1
	bool bTestPlaneExtents : 1;  // Offset: 26 Size: 1
	char pad_27_1 : 7;  // Offset: 27 Size: 1
	bool bTestPlaneBoundaryPolygon : 1;  // Offset: 27 Size: 1
	char pad_28[4];  // Offset: 28 Size: 4
	struct TArray<struct FARTraceResult> ReturnValue;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.PinComponent Size 96
class FPinComponent
{

 public: 
	struct USceneComponent* ComponentToPin;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8
	struct FTransform PinToWorldTransform;  // Offset: 16 Size: 48
	struct UARTrackedGeometry* TrackedGeometry;  // Offset: 64 Size: 8
	struct FName DebugName;  // Offset: 72 Size: 8
	struct UARPin* ReturnValue;  // Offset: 80 Size: 8
	char pad_88[8];  // Offset: 88 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin Size 24
class FPinComponentToARPin
{

 public: 
	struct USceneComponent* ComponentToPin;  // Offset: 0 Size: 8
	struct UARPin* Pin;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult Size 128
class FPinComponentToTraceResult
{

 public: 
	struct USceneComponent* ComponentToPin;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8
	struct FARTraceResult TraceResult;  // Offset: 16 Size: 96
	struct FName DebugName;  // Offset: 112 Size: 8
	struct UARPin* ReturnValue;  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.SetWorldMapData Size 16
class FSetWorldMapData
{

 public: 
	struct TArray<char> WorldMapData;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode Size 1
class FGetPlaneDetectionMode
{

 public: 
	enum class EARPlaneDetectionMode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore Size 8
class FRemoveARPinFromLocalStore
{

 public: 
	struct FName InSaveName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.RemovePin Size 8
class FRemovePin
{

 public: 
	struct UARPin* PinToRemove;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera Size 16
class FResizeXRCamera
{

 public: 
	struct FIntPoint InSize;  // Offset: 0 Size: 8
	struct FIntPoint ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel Size 112
class FGetTraceChannel
{

 public: 
	struct FARTraceResult TraceResult;  // Offset: 0 Size: 96
	enum class EARLineTraceChannels ReturnValue;  // Offset: 96 Size: 1
	char pad_97[15];  // Offset: 97 Size: 15



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore Size 24
class FSaveARPinToLocalStore
{

 public: 
	struct FName InSaveName;  // Offset: 0 Size: 8
	struct UARPin* InPin;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform Size 48
class FSetAlignmentTransform
{

 public: 
	struct FTransform InAlignmentTransform;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation Size 28
class FSetARWorldOriginLocationAndRotation
{

 public: 
	struct FVector OriginLocation;  // Offset: 0 Size: 12
	struct FRotator OriginRotation;  // Offset: 12 Size: 12
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bIsTransformInWorldSpace : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bMaintainUpDirection : 1;  // Offset: 25 Size: 1
	char pad_26[2];  // Offset: 26 Size: 2



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale Size 4
class FSetARWorldScale
{

 public: 
	float InWorldScale;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode Size 1
class FSetImageComponentDebugMode
{

 public: 
	enum class EImageComponentDebugMode NewDebugMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera Size 1
class FSetEnabledXRCamera
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bOnOff : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked Size 4
class FGetMaxNumSimultaneousImagesTracked
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.StartARSession Size 8
class FStartARSession
{

 public: 
	struct UARSessionConfig* SessionConfig;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture Size 3
class FToggleARCapture
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bOnOff : 1;  // Offset: 0 Size: 1
	enum class EARCaptureType CaptureType;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool ReturnValue : 1;  // Offset: 2 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBlueprintLibrary.UnpinComponent Size 8
class FUnpinComponent
{

 public: 
	struct USceneComponent* ComponentToUnpin;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking Size 1
class FShouldEnableCameraTracking
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera Size 112
class FGetDistanceFromCamera
{

 public: 
	struct FARTraceResult TraceResult;  // Offset: 0 Size: 96
	float ReturnValue;  // Offset: 96 Size: 4
	char pad_100[12];  // Offset: 100 Size: 12



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform Size 48
class FGetLocalToTrackingTransform
{

 public: 
	struct FTransform ReturnValue;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent Size 12
class FGetExtent
{

 public: 
	struct FVector ReturnValue;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform Size 48
class FGetLocalToWorldTransform
{

 public: 
	struct FTransform ReturnValue;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARDependencyHandler.InstallARService Size 40
class FInstallARService
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FLatentActionInfo LatentInfo;  // Offset: 8 Size: 24
	enum class EARServiceInstallRequestResult OutInstallResult;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform Size 144
class FGetLocalTransform
{

 public: 
	struct FARTraceResult TraceResult;  // Offset: 0 Size: 96
	struct FTransform ReturnValue;  // Offset: 96 Size: 48



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld Size 16
class FARSaveWorld
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject Size 40
class FARGetCandidateObject
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Location;  // Offset: 8 Size: 12
	struct FVector Extent;  // Offset: 20 Size: 12
	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARComponent.GetMRMesh Size 8
class FGetMRMesh
{

 public: 
	struct UMRMeshComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARComponent.SetNativeID Size 16
class FSetNativeID
{

 public: 
	struct FGuid NativeID;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors Size 80
class FGetObjectClassificationDebugColors
{

 public: 
	struct TMap<enum class EARObjectClassification, struct FLinearColor> ReturnValue;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd Size 112
class FReceiveAdd
{

 public: 
	struct FARGeoAnchorUpdatePayload Payload;  // Offset: 0 Size: 112



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload Size 112
class FServerUpdatePayload
{

 public: 
	struct FARGeoAnchorUpdatePayload NewPayload;  // Offset: 0 Size: 112



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors Size 80
class FSetObjectClassificationDebugColors
{

 public: 
	struct TMap<enum class EARObjectClassification, struct FLinearColor> InColors;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode Size 1
class FSetPlaneComponentDebugMode
{

 public: 
	enum class EPlaneComponentDebugMode NewDebugMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode Size 1
class FSetQRCodeComponentDebugMode
{

 public: 
	enum class EQRCodeComponentDebugMode NewDebugMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode Size 1
class FSetPoseComponentDebugMode
{

 public: 
	enum class EPoseComponentDebugMode NewDebugMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode Size 1
class FSetGeoAnchorComponentDebugMode
{

 public: 
	enum class EGeoAnchorComponentDebugMode NewDebugMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability Size 40
class FCheckARServiceAvailability
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FLatentActionInfo LatentInfo;  // Offset: 8 Size: 24
	enum class EARServiceAvailability OutAvailability;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin Size 4
class FGetAmbientColorTemperatureKelvin
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler Size 8
class FGetARDependencyHandler
{

 public: 
	struct UARDependencyHandler* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType Size 1
class FGetEnvironmentCaptureProbeType
{

 public: 
	enum class EAREnvironmentCaptureProbeType ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport Size 8
class FGetGeoTrackingSupport
{

 public: 
	struct UARGeoTrackingSupport* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission Size 48
class FRequestARSessionPermission
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UARSessionConfig* SessionConfig;  // Offset: 8 Size: 8
	struct FLatentActionInfo LatentInfo;  // Offset: 16 Size: 24
	enum class EARServicePermissionRequestResult OutPermissionResult;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARDependencyHandler.StartARSessionLatent Size 40
class FStartARSessionLatent
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UARSessionConfig* SessionConfig;  // Offset: 8 Size: 8
	struct FLatentActionInfo LatentInfo;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation Size 32
class FAddGeoAnchorAtLocation
{

 public: 
	float Longitude;  // Offset: 0 Size: 4
	float Latitude;  // Offset: 4 Size: 4
	struct FString OptionalAnchorName;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude Size 40
class FAddGeoAnchorAtLocationWithAltitude
{

 public: 
	float Longitude;  // Offset: 0 Size: 4
	float Latitude;  // Offset: 4 Size: 4
	float AltitudeMeters;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FString OptionalAnchorName;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy Size 1
class FGetGeoTrackingAccuracy
{

 public: 
	enum class EARGeoTrackingAccuracy ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState Size 1
class FGetGeoTrackingState
{

 public: 
	enum class EARGeoTrackingState ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber Size 4
class FGetLastUpdateFrameNumber
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason Size 1
class FGetGeoTrackingStateReason
{

 public: 
	enum class EARGeoTrackingStateReason ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoAnchor.GetAltitudeSource Size 1
class FGetAltitudeSource
{

 public: 
	enum class EARAltitudeSource ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens Size 4
class FGetAmbientIntensityLumens
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor Size 16
class FGetAmbientColor
{

 public: 
	struct FLinearColor ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedGeometry.GetDebugName Size 8
class FGetDebugName
{

 public: 
	struct FName ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARPin.GetPinnedComponent Size 8
class FGetPinnedComponent
{

 public: 
	struct USceneComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedGeometry.GetTrackingState Size 1
class FGetTrackingState
{

 public: 
	enum class EARTrackingState ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.AddCandidateImage Size 8
class FAddCandidateImage
{

 public: 
	struct UARCandidateImage* NewCandidateImage;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.AddCandidateObject Size 8
class FAddCandidateObject
{

 public: 
	struct UARCandidateObject* CandidateObject;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag Size 2
class FHasSpatialMeshUsageFlag
{

 public: 
	enum class EARSpatialMeshUsageFlags InFlag;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool ReturnValue : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetCandidateImageList Size 16
class FGetCandidateImageList
{

 public: 
	struct TArray<struct UARCandidateImage*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetCandidateObjectList Size 16
class FGetCandidateObjectList
{

 public: 
	struct TArray<struct UARCandidateObject*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat Size 12
class FGetDesiredVideoFormat
{

 public: 
	struct FARVideoFormat ReturnValue;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature Size 1
class FGetEnabledSessionTrackingFeature
{

 public: 
	enum class EARSessionTrackingFeature ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedGeometry.GetObjectClassification Size 1
class FGetObjectClassification
{

 public: 
	enum class EARObjectClassification ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection Size 1
class FGetFaceTrackingDirection
{

 public: 
	enum class EARFaceTrackingDirection ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate Size 1
class FGetFaceTrackingUpdate
{

 public: 
	enum class EARFaceTrackingUpdate ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetFrameSyncMode Size 1
class FGetFrameSyncMode
{

 public: 
	enum class EARFrameSyncMode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetLightEstimationMode Size 1
class FGetLightEstimationMode
{

 public: 
	enum class EARLightEstimationMode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable Size 1
class FSetSessionTrackingFeatureToEnable
{

 public: 
	enum class EARSessionTrackingFeature InSessionTrackingFeature;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod Size 1
class FGetSceneReconstructionMethod
{

 public: 
	enum class EARSceneReconstruction ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetSessionType Size 1
class FGetSessionType
{

 public: 
	enum class EARSessionType ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetWorldAlignment Size 1
class FGetWorldAlignment
{

 public: 
	enum class EARWorldAlignment ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.GetWorldMapData Size 16
class FGetWorldMapData
{

 public: 
	struct TArray<char> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat Size 12
class FSetDesiredVideoFormat
{

 public: 
	struct FARVideoFormat NewFormat;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus Size 1
class FSetEnableAutoFocus
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bNewValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection Size 1
class FSetFaceTrackingDirection
{

 public: 
	enum class EARFaceTrackingDirection InDirection;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate Size 1
class FSetFaceTrackingUpdate
{

 public: 
	enum class EARFaceTrackingUpdate InUpdate;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.SetResetCameraTracking Size 1
class FSetResetCameraTracking
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bNewValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects Size 1
class FSetResetTrackedObjects
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bNewValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod Size 1
class FSetSceneReconstructionMethod
{

 public: 
	enum class EARSceneReconstruction InSceneReconstructionMethod;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData Size 24
class FClientUpdatePreviewImageData
{

 public: 
	int32_t Offset;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<char> Buffer;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus Size 1
class FShouldEnableAutoFocus
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay Size 1
class FShouldRenderCameraOverlay
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking Size 1
class FShouldResetCameraTracking
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects Size 1
class FShouldResetTrackedObjects
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState Size 8
class FGetARSharedWorldGameState
{

 public: 
	struct AARSharedWorldGameState* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData Size 16
class FSetARSharedWorldData
{

 public: 
	struct TArray<char> ARWorldData;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData Size 16
class FSetPreviewImageData
{

 public: 
	struct TArray<char> ImageData;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld Size 8
class FClientInitSharedWorld
{

 public: 
	int32_t PreviewImageSize;  // Offset: 0 Size: 4
	int32_t ARWorldDataSize;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe Size 8
class FSetEnvironmentCaptureProbe
{

 public: 
	struct UAREnvironmentCaptureProbe* InCaptureProbe;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp Size 4
class FGetLastUpdateTimestamp
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedGeometry.GetName Size 16
class FGetName
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh Size 8
class FGetUnderlyingMesh
{

 public: 
	struct UMRMeshComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace Size 16
class FGetBoundaryPolygonInLocalSpace
{

 public: 
	struct TArray<struct FVector> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARPlaneGeometry.GetCenter Size 12
class FGetCenter
{

 public: 
	struct FVector ReturnValue;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARCandidateImage.GetOrientation Size 1
class FGetOrientation
{

 public: 
	enum class EARCandidateImageOrientation ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedImage.GetDetectedImage Size 8
class FGetDetectedImage
{

 public: 
	struct UARCandidateImage* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARTrackedImage.GetEstimateSize Size 8
class FGetEstimateSize
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARFaceGeometry.GetBlendShapes Size 80
class FGetBlendShapes
{

 public: 
	struct TMap<enum class EARFaceBlendShape, float> ReturnValue;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue Size 8
class FGetBlendShapeValue
{

 public: 
	enum class EARFaceBlendShape BlendShape;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform Size 64
class FGetLocalSpaceEyeTransform
{

 public: 
	enum class EAREye Eye;  // Offset: 0 Size: 1
	char pad_1[15];  // Offset: 1 Size: 15
	struct FTransform ReturnValue;  // Offset: 16 Size: 48



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform Size 64
class FGetWorldSpaceEyeTransform
{

 public: 
	enum class EAREye Eye;  // Offset: 0 Size: 1
	char pad_1[15];  // Offset: 1 Size: 15
	struct FTransform ReturnValue;  // Offset: 16 Size: 48



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture Size 8
class FGetEnvironmentCaptureTexture
{

 public: 
	struct UAREnvironmentCaptureProbeTexture* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters Size 4
class FGetAltitudeMeters
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARGeoAnchor.GetLatitude Size 4
class FGetLatitude
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARCandidateImage.GetCandidateTexture Size 8
class FGetCandidateTexture
{

 public: 
	struct UTexture2D* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARCandidateObject.GetFriendlyName Size 16
class FGetFriendlyName
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARCandidateImage.GetPhysicalHeight Size 4
class FGetPhysicalHeight
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARCandidateImage.GetPhysicalWidth Size 4
class FGetPhysicalWidth
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARCandidateObject.GetBoundingBox Size 28
class FGetBoundingBox
{

 public: 
	struct FBox ReturnValue;  // Offset: 0 Size: 28



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARCandidateObject.GetCandidateObjectData Size 16
class FGetCandidateObjectData
{

 public: 
	struct TArray<char> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARCandidateObject.SetBoundingBox Size 28
class FSetBoundingBox
{

 public: 
	struct FBox InBoundingBox;  // Offset: 0 Size: 28



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARCandidateObject.SetCandidateObjectData Size 16
class FSetCandidateObjectData
{

 public: 
	struct TArray<char> InCandidateObject;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AugmentedReality.ARCandidateObject.SetFriendlyName Size 16
class FSetFriendlyName
{

 public: 
	struct FString NewName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 