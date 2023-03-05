#pragma once 
#include <BP_CubemapViewer_Structs.h>
 
 
 
//BlueprintGeneratedClass BP_CubemapViewer.BP_CubemapViewer_C Size 648
// Inherited 560 bytes 
class ABP_CubemapViewer_C : public ACubeMapViewer
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 560 Size: 8
	struct UStaticMeshComponent* SkyDome;  // Offset: 568 Size: 8
	struct USceneComponent* SceneComponent;  // Offset: 576 Size: 8
	struct UTextureCube* Cubemap;  // Offset: 584 Size: 8
	float Intensity;  // Offset: 592 Size: 4
	float Size;  // Offset: 596 Size: 4
	float LightingDistanceFactor;  // Offset: 600 Size: 4
	char pad_604_1 : 7;  // Offset: 604 Size: 1
	bool UseCameraProjection : 1;  // Offset: 604 Size: 1
	char pad_605[3];  // Offset: 605 Size: 3
	struct UStaticMesh* Mesh;  // Offset: 608 Size: 8
	float HDR_Angle;  // Offset: 616 Size: 4
	struct FLinearColor HDRI_Color;  // Offset: 620 Size: 16
	struct FVector ProjectionCenter;  // Offset: 636 Size: 12



 // Functions 
 public:
	void CreateMaterial(); // Function BP_CubemapViewer.BP_CubemapViewer_C.CreateMaterial
	void UserConstructionScript(); // Function BP_CubemapViewer.BP_CubemapViewer_C.UserConstructionScript
	void CubeMapTo2DTexture(); // Function BP_CubemapViewer.BP_CubemapViewer_C.CubeMapTo2DTexture
	void ExecuteUbergraph_BP_CubemapViewer(int32_t EntryPoint); // Function BP_CubemapViewer.BP_CubemapViewer_C.ExecuteUbergraph_BP_CubemapViewer
}; 
 
 


