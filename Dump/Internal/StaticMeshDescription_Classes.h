#pragma once 
#include <StaticMeshDescription_Structs.h>
 
 
 
//Class StaticMeshDescription.StaticMeshDescription Size 912
// Inherited 912 bytes 
class UStaticMeshDescription : public UMeshDescriptionBase
{

 public: 



 // Functions 
 public:
	void SetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, struct FVector2D UV, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	void SetPolygonGroupMaterialSlotName(struct FPolygonGroupID PolygonGroupID, struct FName& SlotName); // Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
	struct FVector2D GetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
	void CreateCube(struct FVector Center, struct FVector HalfExtents, struct FPolygonGroupID PolygonGroup, struct FPolygonID& PolygonID_PlusX, struct FPolygonID& PolygonID_MinusX, struct FPolygonID& PolygonID_PlusY, struct FPolygonID& PolygonID_MinusY, struct FPolygonID& PolygonID_PlusZ, struct FPolygonID& PolygonID_MinusZ); // Function StaticMeshDescription.StaticMeshDescription.CreateCube
}; 
 
 


