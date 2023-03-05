#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV Size 16
class FSetVertexInstanceUV
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	struct FVector2D UV;  // Offset: 4 Size: 8
	int32_t UVIndex;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct StaticMeshDescription.UVMapSettings Size 56
class FUVMapSettings
{

 public: 
	struct FVector Size;  // Offset: 0 Size: 12
	struct FVector2D UVTile;  // Offset: 12 Size: 8
	struct FVector position;  // Offset: 20 Size: 12
	struct FRotator Rotation;  // Offset: 32 Size: 12
	struct FVector Scale;  // Offset: 44 Size: 12



 // Functions 
 public:
}; 
 
 //Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName Size 12
class FSetPolygonGroupMaterialSlotName
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	struct FName SlotName;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function StaticMeshDescription.StaticMeshDescription.CreateCube Size 52
class FCreateCube
{

 public: 
	struct FVector Center;  // Offset: 0 Size: 12
	struct FVector HalfExtents;  // Offset: 12 Size: 12
	struct FPolygonGroupID PolygonGroup;  // Offset: 24 Size: 4
	struct FPolygonID PolygonID_PlusX;  // Offset: 28 Size: 4
	struct FPolygonID PolygonID_MinusX;  // Offset: 32 Size: 4
	struct FPolygonID PolygonID_PlusY;  // Offset: 36 Size: 4
	struct FPolygonID PolygonID_MinusY;  // Offset: 40 Size: 4
	struct FPolygonID PolygonID_PlusZ;  // Offset: 44 Size: 4
	struct FPolygonID PolygonID_MinusZ;  // Offset: 48 Size: 4



 // Functions 
 public:
}; 
 
 //Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV Size 16
class FGetVertexInstanceUV
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	int32_t UVIndex;  // Offset: 4 Size: 4
	struct FVector2D ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 