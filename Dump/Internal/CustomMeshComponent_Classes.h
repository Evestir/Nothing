#pragma once 
#include <CustomMeshComponent_Structs.h>
 
 
 
//Class CustomMeshComponent.CustomMeshComponent Size 1216
// Inherited 1200 bytes 
class UCustomMeshComponent : public UMeshComponent
{

 public: 
	char pad_1200[16];  // Offset: 1200 Size: 16



 // Functions 
 public:
	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
}; 
 
 


