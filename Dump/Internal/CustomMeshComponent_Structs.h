#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles Size 16
class FAddCustomMeshTriangles
{

 public: 
	struct TArray<struct FCustomMeshTriangle> Triangles;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct CustomMeshComponent.CustomMeshTriangle Size 36
class FCustomMeshTriangle
{

 public: 
	struct FVector Vertex0;  // Offset: 0 Size: 12
	struct FVector Vertex1;  // Offset: 12 Size: 12
	struct FVector Vertex2;  // Offset: 24 Size: 12



 // Functions 
 public:
}; 
 
 //Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles Size 24
class FSetCustomMeshTriangles
{

 public: 
	struct TArray<struct FCustomMeshTriangle> Triangles;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 