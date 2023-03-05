#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc Size 16
class FGetUVLayerNamesFunc
{

 public: 
	struct TArray<struct FString> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshModelingTools.PerlinLayerProperties Size 8
class FPerlinLayerProperties
{

 public: 
	float Frequency;  // Offset: 0 Size: 4
	float Intensity;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshModelingTools.PhysicsCapsuleData Size 112
class FPhysicsCapsuleData
{

 public: 
	float Radius;  // Offset: 0 Size: 4
	float Length;  // Offset: 4 Size: 4
	char pad_8[8];  // Offset: 8 Size: 8
	struct FTransform Transform;  // Offset: 16 Size: 48
	struct FKShapeElem Element;  // Offset: 64 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshModelingTools.PhysicsConvexData Size 56
class FPhysicsConvexData
{

 public: 
	int32_t NumVertices;  // Offset: 0 Size: 4
	int32_t NumFaces;  // Offset: 4 Size: 4
	struct FKShapeElem Element;  // Offset: 8 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshModelingTools.TransformMeshesTarget Size 16
class FTransformMeshesTarget
{

 public: 
	struct UTransformProxy* TransformProxy;  // Offset: 0 Size: 8
	struct UTransformGizmo* TransformGizmo;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshModelingTools.PhysicsSphereData Size 112
class FPhysicsSphereData
{

 public: 
	float Radius;  // Offset: 0 Size: 4
	char pad_4[12];  // Offset: 4 Size: 12
	struct FTransform Transform;  // Offset: 16 Size: 48
	struct FKShapeElem Element;  // Offset: 64 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshModelingTools.PhysicsBoxData Size 112
class FPhysicsBoxData
{

 public: 
	struct FVector Dimensions;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct FTransform Transform;  // Offset: 16 Size: 48
	struct FKShapeElem Element;  // Offset: 64 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshModelingTools.EditPivotTarget Size 16
class FEditPivotTarget
{

 public: 
	struct UTransformProxy* TransformProxy;  // Offset: 0 Size: 8
	struct UTransformGizmo* TransformGizmo;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc Size 16
class FGetWeightMapsFunc
{

 public: 
	struct TArray<struct FString> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 