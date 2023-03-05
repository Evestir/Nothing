#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function EditableMesh.EditableMesh.SetAllowSpatialDatabase Size 1
class FSetAllowSpatialDatabase
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInAllowSpatialDatabase : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere Size 28
class FComputeBoundingBoxAndSphere
{

 public: 
	struct FBoxSphereBounds ReturnValue;  // Offset: 0 Size: 28



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.PolygonGroupToCreate Size 24
class FPolygonGroupToCreate
{

 public: 
	struct FMeshElementAttributeList PolygonGroupAttributes;  // Offset: 0 Size: 16
	struct FPolygonGroupID OriginalPolygonGroupID;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.AdaptorTriangleID Size 4
// Inherited 4 bytes 
class FAdaptorTriangleID : public FElementID
{

 public: 



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.FlipPolygons Size 16
class FFlipPolygons
{

 public: 
	struct TArray<struct FPolygonID> PolygonIDs;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.InsetPolygons Size 64
class FInsetPolygons
{

 public: 
	struct TArray<struct FPolygonID> PolygonIDs;  // Offset: 0 Size: 16
	float InsetFixedDistance;  // Offset: 16 Size: 4
	float InsetProgressTowardCenter;  // Offset: 20 Size: 4
	enum class EInsetPolygonsMode Mode;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	struct TArray<struct FPolygonID> OutNewCenterPolygonIDs;  // Offset: 32 Size: 16
	struct TArray<struct FPolygonID> OutNewSidePolygonIDs;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.AdaptorPolygon2Group Size 72
class FAdaptorPolygon2Group
{

 public: 
	uint32_t RenderingSectionIndex;  // Offset: 0 Size: 4
	int32_t MaterialIndex;  // Offset: 4 Size: 4
	int32_t MaxTriangles;  // Offset: 8 Size: 4
	char pad_12[60];  // Offset: 12 Size: 60



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount Size 8
class FGetVertexConnectedEdgeCount
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex Size 12
class FGetPolygonPerimeterVertex
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	int32_t PolygonVertexNumber;  // Offset: 4 Size: 4
	struct FVertexID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.DeleteVertexInstances Size 24
class FDeleteVertexInstances
{

 public: 
	struct TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bDeleteOrphanedVertices : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.AdaptorPolygon Size 24
class FAdaptorPolygon
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FAdaptorTriangleID> TriangulatedPolygonTriangleIndices;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.PolygonGroupForPolygon Size 8
class FPolygonGroupForPolygon
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	struct FPolygonGroupID PolygonGroupID;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.MeshElementAttributeList Size 16
class FMeshElementAttributeList
{

 public: 
	struct TArray<struct FMeshElementAttributeData> Attributes;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.MakeVertexID Size 8
class FMakeVertexID
{

 public: 
	int32_t VertexIndex;  // Offset: 0 Size: 4
	struct FVertexID ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.MeshElementAttributeData Size 96
class FMeshElementAttributeData
{

 public: 
	struct FName AttributeName;  // Offset: 0 Size: 8
	int32_t AttributeIndex;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FMeshElementAttributeValue AttributeValue;  // Offset: 16 Size: 80



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.DeletePolygons Size 24
class FDeletePolygons
{

 public: 
	struct TArray<struct FPolygonID> PolygonIDsToDelete;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bDeleteOrphanedEdges : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool bDeleteOrphanedVertices : 1;  // Offset: 17 Size: 1
	char pad_18_1 : 7;  // Offset: 18 Size: 1
	bool bDeleteOrphanedVertexInstances : 1;  // Offset: 18 Size: 1
	char pad_19_1 : 7;  // Offset: 19 Size: 1
	bool bDeleteEmptyPolygonGroups : 1;  // Offset: 19 Size: 1
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.CreateEdges Size 32
class FCreateEdges
{

 public: 
	struct TArray<struct FEdgeToCreate> EdgesToCreate;  // Offset: 0 Size: 16
	struct TArray<struct FEdgeID> OutNewEdgeIDs;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.EdgeToCreate Size 32
class FEdgeToCreate
{

 public: 
	struct FVertexID VertexID0;  // Offset: 0 Size: 4
	struct FVertexID VertexID1;  // Offset: 4 Size: 4
	struct FMeshElementAttributeList EdgeAttributes;  // Offset: 8 Size: 16
	struct FEdgeID OriginalEdgeID;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.MeshElementAttributeValue Size 80
class FMeshElementAttributeValue
{

 public: 
	char pad_0[80];  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.VertexToMove Size 16
class FVertexToMove
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	struct FVector NewVertexPosition;  // Offset: 4 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon Size 40
class FChangeVertexInstancesForPolygon
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs;  // Offset: 8 Size: 16
	struct TArray<struct FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.DeletePolygonGroups Size 16
class FDeletePolygonGroups
{

 public: 
	struct TArray<struct FPolygonGroupID> PolygonGroupIDs;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances Size 16
class FChangePolygonsVertexInstances
{

 public: 
	struct TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.VertexInstancesForPolygonHole Size 16
class FVertexInstancesForPolygonHole
{

 public: 
	struct TArray<struct FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexAdjacentVertices Size 24
class FGetVertexAdjacentVertices
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexID> OutAdjacentVertexIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.VertexIndexAndInstanceID Size 8
class FVertexIndexAndInstanceID
{

 public: 
	int32_t ContourIndex;  // Offset: 0 Size: 4
	struct FVertexInstanceID VertexInstanceID;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.VertexInstanceToCreate Size 32
class FVertexInstanceToCreate
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FMeshElementAttributeList VertexInstanceAttributes;  // Offset: 8 Size: 16
	struct FVertexInstanceID OriginalVertexInstanceID;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.VertexAttributesForPolygon Size 40
class FVertexAttributesForPolygon
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FMeshElementAttributeList> PerimeterVertexAttributeLists;  // Offset: 8 Size: 16
	struct TArray<struct FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.VertexAttributesForPolygonHole Size 16
class FVertexAttributesForPolygonHole
{

 public: 
	struct TArray<struct FMeshElementAttributeList> VertexAttributeList;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.AttributesForEdge Size 24
class FAttributesForEdge
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FMeshElementAttributeList EdgeAttributes;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.AttributesForVertexInstance Size 24
class FAttributesForVertexInstance
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FMeshElementAttributeList VertexInstanceAttributes;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.ExtrudePolygons Size 40
class FExtrudePolygons
{

 public: 
	struct TArray<struct FPolygonID> Polygons;  // Offset: 0 Size: 16
	float ExtrudeDistance;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bKeepNeighborsTogether : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct TArray<struct FPolygonID> OutNewExtrudedFrontPolygons;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.AttributesForVertex Size 24
class FAttributesForVertex
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FMeshElementAttributeList VertexAttributes;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.PolygonToSplit Size 24
class FPolygonToSplit
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexPair> VertexPairsToSplitAt;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.VertexPair Size 8
class FVertexPair
{

 public: 
	struct FVertexID VertexID0;  // Offset: 0 Size: 4
	struct FVertexID VertexID1;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.PolygonToCreate Size 32
class FPolygonToCreate
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexAndAttributes> PerimeterVertices;  // Offset: 8 Size: 16
	struct FPolygonID OriginalPolygonID;  // Offset: 24 Size: 4
	enum class EPolygonEdgeHardness PolygonEdgeHardness;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.VertexAndAttributes Size 24
class FVertexAndAttributes
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	struct FVertexID VertexID;  // Offset: 4 Size: 4
	struct FMeshElementAttributeList PolygonVertexAttributes;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.VertexToCreate Size 24
class FVertexToCreate
{

 public: 
	struct FMeshElementAttributeList VertexAttributes;  // Offset: 0 Size: 16
	struct FVertexID OriginalVertexID;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.SubdividedQuadVertex Size 52
class FSubdividedQuadVertex
{

 public: 
	int32_t VertexPositionIndex;  // Offset: 0 Size: 4
	struct FVector2D TextureCoordinate0;  // Offset: 4 Size: 8
	struct FVector2D TextureCoordinate1;  // Offset: 12 Size: 8
	struct FColor VertexColor;  // Offset: 20 Size: 4
	struct FVector VertexNormal;  // Offset: 24 Size: 12
	struct FVector VertexTangent;  // Offset: 36 Size: 12
	float VertexBinormalSign;  // Offset: 48 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.SubdivisionLimitData Size 48
class FSubdivisionLimitData
{

 public: 
	struct TArray<struct FVector> VertexPositions;  // Offset: 0 Size: 16
	struct TArray<struct FSubdivisionLimitSection> Sections;  // Offset: 16 Size: 16
	struct TArray<struct FSubdividedWireEdge> SubdividedWireEdges;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.DeleteEdges Size 24
class FDeleteEdges
{

 public: 
	struct TArray<struct FEdgeID> EdgeIDsToDelete;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bDeleteOrphanedVertices : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.SubdividedWireEdge Size 12
class FSubdividedWireEdge
{

 public: 
	int32_t EdgeVertex0PositionIndex;  // Offset: 0 Size: 4
	int32_t EdgeVertex1PositionIndex;  // Offset: 4 Size: 4
	char pad_8[4];  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.SubdivisionLimitSection Size 16
class FSubdivisionLimitSection
{

 public: 
	struct TArray<struct FSubdividedQuad> SubdividedQuads;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.MoveVertices Size 16
class FMoveVertices
{

 public: 
	struct TArray<struct FVertexToMove> VerticesToMove;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.SubdividedQuad Size 208
class FSubdividedQuad
{

 public: 
	struct FSubdividedQuadVertex QuadVertex0;  // Offset: 0 Size: 52
	struct FSubdividedQuadVertex QuadVertex1;  // Offset: 52 Size: 52
	struct FSubdividedQuadVertex QuadVertex2;  // Offset: 104 Size: 52
	struct FSubdividedQuadVertex QuadVertex3;  // Offset: 156 Size: 52



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.RenderingPolygonGroup Size 72
class FRenderingPolygonGroup
{

 public: 
	uint32_t RenderingSectionIndex;  // Offset: 0 Size: 4
	int32_t MaterialIndex;  // Offset: 4 Size: 4
	int32_t MaxTriangles;  // Offset: 8 Size: 4
	char pad_12[60];  // Offset: 12 Size: 60



 // Functions 
 public:
}; 
 
 //ScriptStruct EditableMesh.RenderingPolygon Size 24
class FRenderingPolygon
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FTriangleID> TriangulatedPolygonTriangleIndices;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetEdgesHardness Size 32
class FSetEdgesHardness
{

 public: 
	struct TArray<struct FEdgeID> EdgeIDs;  // Offset: 0 Size: 16
	struct TArray<bool> EdgesNewIsHard;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.AnyChangesToUndo Size 1
class FAnyChangesToUndo
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups Size 24
class FAssignPolygonsToPolygonGroups
{

 public: 
	struct TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bDeleteOrphanedPolygonGroups : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsOrphanedVertex Size 8
class FIsOrphanedVertex
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.BevelPolygons Size 56
class FBevelPolygons
{

 public: 
	struct TArray<struct FPolygonID> PolygonIDs;  // Offset: 0 Size: 16
	float BevelFixedDistance;  // Offset: 16 Size: 4
	float BevelProgressTowardCenter;  // Offset: 20 Size: 4
	struct TArray<struct FPolygonID> OutNewCenterPolygonIDs;  // Offset: 24 Size: 16
	struct TArray<struct FPolygonID> OutNewSidePolygonIDs;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsBeingModified Size 1
class FIsBeingModified
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.CommitInstance Size 16
class FCommitInstance
{

 public: 
	struct UPrimitiveComponent* ComponentToInstanceTo;  // Offset: 0 Size: 8
	struct UEditableMesh* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.MakePolygonGroupID Size 8
class FMakePolygonGroupID
{

 public: 
	int32_t PolygonGroupIndex;  // Offset: 0 Size: 4
	struct FPolygonGroupID ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.DeleteOrphanVertices Size 16
class FDeleteOrphanVertices
{

 public: 
	struct TArray<struct FVertexID> VertexIDsToDelete;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment Size 40
class FSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
{

 public: 
	struct FVector LineSegmentStart;  // Offset: 0 Size: 12
	struct FVector LineSegmentEnd;  // Offset: 12 Size: 12
	struct TArray<struct FPolygonID> OutPolygons;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.ComputeBoundingBox Size 28
class FComputeBoundingBox
{

 public: 
	struct FBox ReturnValue;  // Offset: 0 Size: 28



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.ComputePolygonCenter Size 16
class FComputePolygonCenter
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	struct FVector ReturnValue;  // Offset: 4 Size: 12



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.ComputePolygonNormal Size 16
class FComputePolygonNormal
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	struct FVector ReturnValue;  // Offset: 4 Size: 12



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.ComputePolygonPlane Size 32
class FComputePolygonPlane
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[12];  // Offset: 4 Size: 12
	struct FPlane ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges Size 32
class FComputePolygonsSharedEdges
{

 public: 
	struct TArray<struct FPolygonID> PolygonIDs;  // Offset: 0 Size: 16
	struct TArray<struct FEdgeID> OutSharedEdgeIDs;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.CreateEmptyVertexRange Size 24
class FCreateEmptyVertexRange
{

 public: 
	int32_t NumVerticesToCreate;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexID> OutNewVertexIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons Size 8
class FDeleteEdgeAndConnectedPolygons
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bDeleteOrphanedEdges : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool bDeleteOrphanedVertices : 1;  // Offset: 5 Size: 1
	char pad_6_1 : 7;  // Offset: 6 Size: 1
	bool bDeleteOrphanedVertexInstances : 1;  // Offset: 6 Size: 1
	char pad_7_1 : 7;  // Offset: 7 Size: 1
	bool bDeleteEmptyPolygonGroups : 1;  // Offset: 7 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges Size 24
class FCreateMissingPolygonPerimeterEdges
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FEdgeID> OutNewEdgeIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.CreatePolygonGroups Size 32
class FCreatePolygonGroups
{

 public: 
	struct TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate;  // Offset: 0 Size: 16
	struct TArray<struct FPolygonGroupID> OutNewPolygonGroupIDs;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.CreatePolygons Size 48
class FCreatePolygons
{

 public: 
	struct TArray<struct FPolygonToCreate> PolygonsToCreate;  // Offset: 0 Size: 16
	struct TArray<struct FPolygonID> OutNewPolygonIDs;  // Offset: 16 Size: 16
	struct TArray<struct FEdgeID> OutNewEdgeIDs;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex Size 12
class FFindPolygonPerimeterVertexNumberForVertex
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	struct FVertexID VertexID;  // Offset: 4 Size: 4
	int32_t ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.CreateVertexInstances Size 32
class FCreateVertexInstances
{

 public: 
	struct TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate;  // Offset: 0 Size: 16
	struct TArray<struct FVertexInstanceID> OutNewVertexInstanceIDs;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.CreateVertices Size 32
class FCreateVertices
{

 public: 
	struct TArray<struct FVertexToCreate> VerticesToCreate;  // Offset: 0 Size: 16
	struct TArray<struct FVertexID> OutNewVertexIDs;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons Size 8
class FDeleteVertexAndConnectedEdgesAndPolygons
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bDeleteOrphanedEdges : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool bDeleteOrphanedVertices : 1;  // Offset: 5 Size: 1
	char pad_6_1 : 7;  // Offset: 6 Size: 1
	bool bDeleteOrphanedVertexInstances : 1;  // Offset: 6 Size: 1
	char pad_7_1 : 7;  // Offset: 7 Size: 1
	bool bDeleteEmptyPolygonGroups : 1;  // Offset: 7 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.EndModification Size 1
class FEndModification
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bFromUndo : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices Size 16
class FFindPolygonPerimeterEdgeNumberForVertices
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	struct FVertexID EdgeVertexID0;  // Offset: 4 Size: 4
	struct FVertexID EdgeVertexID1;  // Offset: 8 Size: 4
	int32_t ReturnValue;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.ExtendEdges Size 40
class FExtendEdges
{

 public: 
	struct TArray<struct FEdgeID> EdgeIDs;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bWeldNeighbors : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct TArray<struct FEdgeID> OutNewExtendedEdgeIDs;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.ExtendVertices Size 48
class FExtendVertices
{

 public: 
	struct TArray<struct FVertexID> VertexIDs;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bOnlyExtendClosestEdge : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	struct FVector ReferencePosition;  // Offset: 20 Size: 12
	struct TArray<struct FVertexID> OutNewExtendedVertexIDs;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.FindPolygonLoop Size 72
class FFindPolygonLoop
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FEdgeID> OutEdgeLoopEdgeIDs;  // Offset: 8 Size: 16
	struct TArray<struct FEdgeID> OutFlippedEdgeIDs;  // Offset: 24 Size: 16
	struct TArray<struct FEdgeID> OutReversedEdgeIDPathToTake;  // Offset: 40 Size: 16
	struct TArray<struct FPolygonID> OutPolygonIDsToSplit;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals Size 16
class FGeneratePolygonTangentsAndNormals
{

 public: 
	struct TArray<struct FPolygonID> PolygonIDs;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon Size 12
class FGetEdgeConnectedPolygon
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	int32_t ConnectedPolygonNumber;  // Offset: 4 Size: 4
	struct FPolygonID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount Size 8
class FGetEdgeConnectedPolygonCount
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons Size 24
class FGetEdgeConnectedPolygons
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetEdgeCount Size 4
class FGetEdgeCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetEdgeLoopElements Size 24
class FGetEdgeLoopElements
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FEdgeID> EdgeLoopIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices Size 12
class FGetEdgeThatConnectsVertices
{

 public: 
	struct FVertexID VertexID0;  // Offset: 0 Size: 4
	struct FVertexID VertexID1;  // Offset: 4 Size: 4
	struct FEdgeID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetEdgeVertex Size 12
class FGetEdgeVertex
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	int32_t EdgeVertexNumber;  // Offset: 4 Size: 4
	struct FVertexID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetEdgeVertices Size 12
class FGetEdgeVertices
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	struct FVertexID OutEdgeVertexID0;  // Offset: 4 Size: 4
	struct FVertexID OutEdgeVertexID1;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup Size 4
class FGetFirstValidPolygonGroup
{

 public: 
	struct FPolygonGroupID ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetGroupForPolygon Size 8
class FGetGroupForPolygon
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	struct FPolygonGroupID ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons Size 24
class FGetPolygonAdjacentPolygons
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FPolygonID> OutAdjacentPolygons;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonCount Size 4
class FGetPolygonCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonCountInGroup Size 8
class FGetPolygonCountInGroup
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonGroupCount Size 4
class FGetPolygonGroupCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonInGroup Size 12
class FGetPolygonInGroup
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	int32_t PolygonNumber;  // Offset: 4 Size: 4
	struct FPolygonID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge Size 16
class FGetPolygonPerimeterEdge
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	int32_t PerimeterEdgeNumber;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bOutEdgeWindingIsReversedForPolygon : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	struct FEdgeID ReturnValue;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount Size 8
class FGetPolygonPerimeterEdgeCount
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges Size 24
class FGetPolygonPerimeterEdges
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FEdgeID> OutPolygonPerimeterEdgeIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount Size 8
class FGetPolygonPerimeterVertexCount
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance Size 12
class FGetPolygonPerimeterVertexInstance
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	int32_t PolygonVertexNumber;  // Offset: 4 Size: 4
	struct FVertexInstanceID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances Size 24
class FGetPolygonPerimeterVertexInstances
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexInstanceID> OutPolygonPerimeterVertexInstanceIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices Size 24
class FGetPolygonPerimeterVertices
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexID> OutPolygonPerimeterVertexIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle Size 12
class FGetPolygonTriangulatedTriangle
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	int32_t PolygonTriangleNumber;  // Offset: 4 Size: 4
	struct FTriangleID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount Size 8
class FGetPolygonTriangulatedTriangleCount
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetSubdivisionCount Size 4
class FGetSubdivisionCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetSubdivisionLimitData Size 48
class FGetSubdivisionLimitData
{

 public: 
	struct FSubdivisionLimitData ReturnValue;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetTextureCoordinateCount Size 4
class FGetTextureCoordinateCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexConnectedEdge Size 12
class FGetVertexConnectedEdge
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	int32_t ConnectedEdgeNumber;  // Offset: 4 Size: 4
	struct FEdgeID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexConnectedEdges Size 24
class FGetVertexConnectedEdges
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FEdgeID> OutConnectedEdgeIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexConnectedPolygons Size 24
class FGetVertexConnectedPolygons
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount Size 8
class FGetVertexInstanceConnectedPolygonCount
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexCount Size 4
class FGetVertexCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon Size 12
class FGetVertexInstanceConnectedPolygon
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	int32_t ConnectedPolygonNumber;  // Offset: 4 Size: 4
	struct FPolygonID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons Size 24
class FGetVertexInstanceConnectedPolygons
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexInstanceCount Size 4
class FGetVertexInstanceCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexInstanceVertex Size 8
class FGetVertexInstanceVertex
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	struct FVertexID ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.GetVertexPairEdge Size 16
class FGetVertexPairEdge
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	struct FVertexID NextVertexID;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bOutEdgeWindingIsReversed : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	struct FEdgeID ReturnValue;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.InsertEdgeLoop Size 40
class FInsertEdgeLoop
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<float> Splits;  // Offset: 8 Size: 16
	struct TArray<struct FEdgeID> OutNewEdgeIDs;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.InvalidEdgeID Size 4
class FInvalidEdgeID
{

 public: 
	struct FEdgeID ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.InvalidPolygonGroupID Size 4
class FInvalidPolygonGroupID
{

 public: 
	struct FPolygonGroupID ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.InvalidPolygonID Size 4
class FInvalidPolygonID
{

 public: 
	struct FPolygonID ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.InvalidVertexID Size 4
class FInvalidVertexID
{

 public: 
	struct FVertexID ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsCommitted Size 1
class FIsCommitted
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsCommittedAsInstance Size 1
class FIsCommittedAsInstance
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsCompactAllowed Size 1
class FIsCompactAllowed
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetTextureCoordinateCount Size 4
class FSetTextureCoordinateCount
{

 public: 
	int32_t NumTexCoords;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsPreviewingSubdivisions Size 1
class FIsPreviewingSubdivisions
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed Size 1
class FIsSpatialDatabaseAllowed
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsUndoAllowed Size 1
class FIsUndoAllowed
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsValidEdge Size 8
class FIsValidEdge
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsValidPolygon Size 8
class FIsValidPolygon
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsValidPolygonGroup Size 8
class FIsValidPolygonGroup
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.IsValidVertex Size 8
class FIsValidVertex
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.MakeEdgeID Size 8
class FMakeEdgeID
{

 public: 
	int32_t EdgeIndex;  // Offset: 0 Size: 4
	struct FEdgeID ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.MakePolygonID Size 8
class FMakePolygonID
{

 public: 
	int32_t PolygonIndex;  // Offset: 0 Size: 4
	struct FPolygonID ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.QuadrangulateMesh Size 16
class FQuadrangulateMesh
{

 public: 
	struct TArray<struct FPolygonID> OutNewPolygonIDs;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.RevertInstance Size 8
class FRevertInstance
{

 public: 
	struct UEditableMesh* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume Size 32
class FSearchSpatialDatabaseForPolygonsInVolume
{

 public: 
	struct TArray<struct FPlane> Planes;  // Offset: 0 Size: 16
	struct TArray<struct FPolygonID> OutPolygons;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane Size 32
class FSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
{

 public: 
	struct FPlane InPlane;  // Offset: 0 Size: 16
	struct TArray<struct FPolygonID> OutPolygons;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetAllowCompact Size 1
class FSetAllowCompact
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInAllowCompact : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetAllowUndo Size 1
class FSetAllowUndo
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInAllowUndo : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetEdgesAttributes Size 16
class FSetEdgesAttributes
{

 public: 
	struct TArray<struct FAttributesForEdge> AttributesForEdges;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness Size 32
class FSetEdgesCreaseSharpness
{

 public: 
	struct TArray<struct FEdgeID> EdgeIDs;  // Offset: 0 Size: 16
	struct TArray<float> EdgesNewCreaseSharpness;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically Size 24
class FSetEdgesHardnessAutomatically
{

 public: 
	struct TArray<struct FEdgeID> EdgeIDs;  // Offset: 0 Size: 16
	float MaxDotProductForSoftEdge;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes Size 16
class FSetPolygonsVertexAttributes
{

 public: 
	struct TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SplitPolygonalMesh Size 64
class FSplitPolygonalMesh
{

 public: 
	struct FPlane InPlane;  // Offset: 0 Size: 16
	struct TArray<struct FPolygonID> PolygonIDs1;  // Offset: 16 Size: 16
	struct TArray<struct FPolygonID> PolygonIDs2;  // Offset: 32 Size: 16
	struct TArray<struct FEdgeID> BoundaryIDs;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetSubdivisionCount Size 4
class FSetSubdivisionCount
{

 public: 
	int32_t NewSubdivisionCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetVertexInstancesAttributes Size 16
class FSetVertexInstancesAttributes
{

 public: 
	struct TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetVerticesAttributes Size 16
class FSetVerticesAttributes
{

 public: 
	struct TArray<struct FAttributesForVertex> AttributesForVertices;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SetVerticesCornerSharpness Size 32
class FSetVerticesCornerSharpness
{

 public: 
	struct TArray<struct FVertexID> VertexIDs;  // Offset: 0 Size: 16
	struct TArray<float> VerticesNewCornerSharpness;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SplitEdge Size 40
class FSplitEdge
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<float> Splits;  // Offset: 8 Size: 16
	struct TArray<struct FVertexID> OutNewVertexIDs;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.SplitPolygons Size 32
class FSplitPolygons
{

 public: 
	struct TArray<struct FPolygonToSplit> PolygonsToSplit;  // Offset: 0 Size: 16
	struct TArray<struct FEdgeID> OutNewEdgeIDs;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.StartModification Size 2
class FStartModification
{

 public: 
	enum class EMeshModificationType MeshModificationType;  // Offset: 0 Size: 1
	enum class EMeshTopologyChange MeshTopologyChange;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.TessellatePolygons Size 40
class FTessellatePolygons
{

 public: 
	struct TArray<struct FPolygonID> PolygonIDs;  // Offset: 0 Size: 16
	enum class ETriangleTessellationMode TriangleTessellationMode;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct TArray<struct FPolygonID> OutNewPolygonIDs;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.TryToRemovePolygonEdge Size 12
class FTryToRemovePolygonEdge
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bOutWasEdgeRemoved : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	struct FPolygonID OutNewPolygonID;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.TriangulatePolygons Size 32
class FTriangulatePolygons
{

 public: 
	struct TArray<struct FPolygonID> PolygonIDs;  // Offset: 0 Size: 16
	struct TArray<struct FPolygonID> OutNewTrianglePolygons;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.TryToRemoveVertex Size 12
class FTryToRemoveVertex
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bOutWasVertexRemoved : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	struct FEdgeID OutNewEdgeID;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMesh.WeldVertices Size 24
class FWeldVertices
{

 public: 
	struct TArray<struct FVertexID> VertexIDs;  // Offset: 0 Size: 16
	struct FVertexID OutNewVertexID;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function EditableMesh.EditableMeshFactory.MakeEditableMesh Size 24
class FMakeEditableMesh
{

 public: 
	struct UPrimitiveComponent* PrimitiveComponent;  // Offset: 0 Size: 8
	int32_t LODIndex;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct UEditableMesh* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 