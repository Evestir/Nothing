#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function ModelingComponents.PreviewGeometry.RemoveLineSet Size 24
class FRemoveLineSet
{

 public: 
	struct FString LineSetIdentifier;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bDestroy : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool ReturnValue : 1;  // Offset: 17 Size: 1
	char pad_18[6];  // Offset: 18 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct ModelingComponents.RenderableTriangle Size 120
class FRenderableTriangle
{

 public: 
	struct UMaterialInterface* Material;  // Offset: 0 Size: 8
	struct FRenderableTriangleVertex Vertex0;  // Offset: 8 Size: 36
	struct FRenderableTriangleVertex Vertex1;  // Offset: 44 Size: 36
	struct FRenderableTriangleVertex Vertex2;  // Offset: 80 Size: 36
	char pad_116[4];  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct ModelingComponents.RenderableTriangleVertex Size 36
class FRenderableTriangleVertex
{

 public: 
	struct FVector position;  // Offset: 0 Size: 12
	struct FVector2D UV;  // Offset: 12 Size: 8
	struct FVector Normal;  // Offset: 20 Size: 12
	struct FColor Color;  // Offset: 32 Size: 4



 // Functions 
 public:
}; 
 
 //Function ModelingComponents.PreviewGeometry.RemoveAllLineSets Size 1
class FRemoveAllLineSets
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bDestroy : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function ModelingComponents.PreviewGeometry.AddLineSet Size 24
class FAddLineSet
{

 public: 
	struct FString LineSetIdentifier;  // Offset: 0 Size: 16
	struct ULineSetComponent* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function ModelingComponents.PreviewGeometry.CreateInWorld Size 64
class FCreateInWorld
{

 public: 
	struct UWorld* World;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8
	struct FTransform WithTransform;  // Offset: 16 Size: 48



 // Functions 
 public:
}; 
 
 //Function ModelingComponents.PreviewGeometry.FindLineSet Size 24
class FFindLineSet
{

 public: 
	struct FString LineSetIdentifier;  // Offset: 0 Size: 16
	struct ULineSetComponent* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function ModelingComponents.PreviewGeometry.GetActor Size 8
class FGetActor
{

 public: 
	struct APreviewGeometryActor* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial Size 8
class FSetAllLineSetsMaterial
{

 public: 
	struct UMaterialInterface* Material;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function ModelingComponents.PreviewGeometry.SetLineSetMaterial Size 32
class FSetLineSetMaterial
{

 public: 
	struct FString LineSetIdentifier;  // Offset: 0 Size: 16
	struct UMaterialInterface* NewMaterial;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function ModelingComponents.PreviewGeometry.SetLineSetVisibility Size 24
class FSetLineSetVisibility
{

 public: 
	struct FString LineSetIdentifier;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bVisible : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool ReturnValue : 1;  // Offset: 17 Size: 1
	char pad_18[6];  // Offset: 18 Size: 6



 // Functions 
 public:
}; 
 
 //Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc Size 16
class FGetWeightMapsFunc
{

 public: 
	struct TArray<struct FString> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 