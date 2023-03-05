#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function MRMesh.MeshReconstructorBase.ConnectMRMesh Size 8
class FConnectMRMesh
{

 public: 
	struct UMRMeshComponent* Mesh;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MRMesh.MeshReconstructorBase.IsReconstructionPaused Size 1
class FIsReconstructionPaused
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature Size 72
class FOnMockDataMeshTrackerUpdated__DelegateSignature
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVector> Vertices;  // Offset: 8 Size: 16
	struct TArray<int32_t> Triangles;  // Offset: 24 Size: 16
	struct TArray<struct FVector> Normals;  // Offset: 40 Size: 16
	struct TArray<float> Confidence;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh Size 8
class FDisconnectMRMesh
{

 public: 
	struct UMRMeshComponent* InMRMeshPtr;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MRMesh.MRMeshConfiguration Size 1
class FMRMeshConfiguration
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MRMesh.MeshReconstructorBase.IsReconstructionStarted Size 1
class FIsReconstructionStarted
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion Size 1
class FGetEnableMeshOcclusion
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MRMesh.MRMeshComponent.GetUseWireframe Size 1
class FGetUseWireframe
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MRMesh.MRMeshComponent.GetWireframeColor Size 16
class FGetWireframeColor
{

 public: 
	struct FLinearColor ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MRMesh.MRMeshComponent.IsConnected Size 1
class FIsConnected
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MRMesh.MRMeshComponent.SetWireframeMaterial Size 8
class FSetWireframeMaterial
{

 public: 
	struct UMaterialInterface* InMaterial;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion Size 1
class FSetEnableMeshOcclusion
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MRMesh.MRMeshComponent.SetUseWireframe Size 1
class FSetUseWireframe
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bUseWireframe : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MRMesh.MRMeshComponent.SetWireframeColor Size 16
class FSetWireframeColor
{

 public: 
	struct FLinearColor InColor;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 