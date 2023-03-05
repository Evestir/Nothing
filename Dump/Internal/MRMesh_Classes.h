#pragma once 
#include <MRMesh_Structs.h>
 
 
 
//Class MRMesh.MeshReconstructorBase Size 40
// Inherited 40 bytes 
class UMeshReconstructorBase : public UObject
{

 public: 



 // Functions 
 public:
	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh
}; 
 
 


//Class MRMesh.MRMeshComponent Size 1328
// Inherited 1136 bytes 
class UMRMeshComponent : public UPrimitiveComponent
{

 public: 
	char pad_1136[16];  // Offset: 1136 Size: 16
	struct UMaterialInterface* Material;  // Offset: 1152 Size: 8
	struct UMaterialInterface* WireframeMaterial;  // Offset: 1160 Size: 8
	char pad_1168_1 : 7;  // Offset: 1168 Size: 1
	bool bCreateMeshProxySections : 1;  // Offset: 1168 Size: 1
	char pad_1169_1 : 7;  // Offset: 1169 Size: 1
	bool bUpdateNavMeshOnMeshUpdate : 1;  // Offset: 1169 Size: 1
	char pad_1170_1 : 7;  // Offset: 1170 Size: 1
	bool bNeverCreateCollisionMesh : 1;  // Offset: 1170 Size: 1
	char pad_1171[5];  // Offset: 1171 Size: 5
	struct UBodySetup* CachedBodySetup;  // Offset: 1176 Size: 8
	struct TArray<struct UBodySetup*> BodySetups;  // Offset: 1184 Size: 16
	char pad_1200[128];  // Offset: 1200 Size: 128



 // Functions 
 public:
	void SetWireframeMaterial(struct UMaterialInterface* InMaterial); // Function MRMesh.MRMeshComponent.SetWireframeMaterial
	void SetWireframeColor(struct FLinearColor& InColor); // Function MRMesh.MRMeshComponent.SetWireframeColor
	void SetUseWireframe(bool bUseWireframe); // Function MRMesh.MRMeshComponent.SetUseWireframe
	void SetEnableMeshOcclusion(bool bEnable); // Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected
	struct FLinearColor GetWireframeColor(); // Function MRMesh.MRMeshComponent.GetWireframeColor
	bool GetUseWireframe(); // Function MRMesh.MRMeshComponent.GetUseWireframe
	bool GetEnableMeshOcclusion(); // Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
	void Clear(); // Function MRMesh.MRMeshComponent.Clear
}; 
 
 


//Class MRMesh.MockDataMeshTrackerComponent Size 640
// Inherited 528 bytes 
class UMockDataMeshTrackerComponent : public USceneComponent
{

 public: 
	struct FMulticastInlineDelegate OnMeshTrackerUpdated;  // Offset: 520 Size: 16
	char pad_544_1 : 7;  // Offset: 544 Size: 1
	bool ScanWorld : 1;  // Offset: 536 Size: 1
	char pad_545_1 : 7;  // Offset: 545 Size: 1
	bool RequestNormals : 1;  // Offset: 537 Size: 1
	char pad_546_1 : 7;  // Offset: 546 Size: 1
	bool RequestVertexConfidence : 1;  // Offset: 538 Size: 1
	enum class EMeshTrackerVertexColorMode VertexColorMode;  // Offset: 539 Size: 1
	struct TArray<struct FColor> BlockVertexColors;  // Offset: 544 Size: 16
	struct FLinearColor VertexColorFromConfidenceZero;  // Offset: 560 Size: 16
	struct FLinearColor VertexColorFromConfidenceOne;  // Offset: 576 Size: 16
	float UpdateInterval;  // Offset: 592 Size: 4
	struct UMRMeshComponent* MRMesh;  // Offset: 600 Size: 8
	char pad_608[32];  // Offset: 608 Size: 32



 // Functions 
 public:
	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
}; 
 
 


