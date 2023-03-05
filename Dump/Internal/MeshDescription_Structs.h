#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct MeshDescription.TriangleID Size 4
// Inherited 4 bytes 
class FTriangleID : public FElementID
{

 public: 



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices Size 8
class FGetNumPolygonVertices
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid Size 8
class FIsPolygonGroupValid
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshDescription.ElementID Size 4
class FElementID
{

 public: 
	int32_t IDValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshDescription.PolygonGroupID Size 4
// Inherited 4 bytes 
class FPolygonGroupID : public FElementID
{

 public: 



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons Size 24
class FGetVertexInstanceConnectedPolygons
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshDescription.PolygonID Size 4
// Inherited 4 bytes 
class FPolygonID : public FElementID
{

 public: 



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles Size 24
class FGetPolygonTriangles
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FTriangleID> OutTriangleIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshDescription.VertexID Size 4
// Inherited 4 bytes 
class FVertexID : public FElementID
{

 public: 



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation Size 4
class FComputePolygonTriangulation
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles Size 8
class FGetNumVertexConnectedTriangles
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshDescription.EdgeID Size 4
// Inherited 4 bytes 
class FEdgeID : public FElementID
{

 public: 



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex Size 12
class FGetVertexInstanceForPolygonVertex
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	struct FVertexID VertexID;  // Offset: 4 Size: 4
	struct FVertexInstanceID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MeshDescription.VertexInstanceID Size 4
// Inherited 4 bytes 
class FVertexInstanceID : public FElementID
{

 public: 



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreateEdge Size 12
class FCreateEdge
{

 public: 
	struct FVertexID VertexID0;  // Offset: 0 Size: 4
	struct FVertexID VertexID1;  // Offset: 4 Size: 4
	struct FEdgeID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetTriangleVertices Size 24
class FGetTriangleVertices
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexID> OutVertexIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles Size 8
class FGetNumVertexInstanceConnectedTriangles
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.DeletePolygon Size 56
class FDeletePolygon
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FEdgeID> OrphanedEdges;  // Offset: 8 Size: 16
	struct TArray<struct FVertexInstanceID> OrphanedVertexInstances;  // Offset: 24 Size: 16
	struct TArray<struct FPolygonGroupID> OrphanedPolygonGroups;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID Size 12
class FCreateEdgeWithID
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	struct FVertexID VertexID0;  // Offset: 4 Size: 4
	struct FVertexID VertexID1;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles Size 24
class FGetVertexConnectedTriangles
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FTriangleID> OutConnectedTriangleIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreatePolygon Size 48
class FCreatePolygon
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // Offset: 8 Size: 16
	struct TArray<struct FEdgeID> NewEdgeIDs;  // Offset: 24 Size: 16
	struct FPolygonID ReturnValue;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetEdgeVertex Size 12
class FGetEdgeVertex
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	int32_t VertexNumber;  // Offset: 4 Size: 4
	struct FVertexID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup Size 4
class FCreatePolygonGroup
{

 public: 
	struct FPolygonGroupID ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreateTriangle Size 48
class FCreateTriangle
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // Offset: 8 Size: 16
	struct TArray<struct FEdgeID> NewEdgeIDs;  // Offset: 24 Size: 16
	struct FTriangleID ReturnValue;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID Size 4
class FCreatePolygonGroupWithID
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetPolygonVertices Size 24
class FGetPolygonVertices
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexID> OutVertexIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID Size 40
class FCreatePolygonWithID
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	struct FPolygonGroupID PolygonGroupID;  // Offset: 4 Size: 4
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // Offset: 8 Size: 16
	struct TArray<struct FEdgeID> NewEdgeIDs;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID Size 40
class FCreateTriangleWithID
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	struct FPolygonGroupID PolygonGroupID;  // Offset: 4 Size: 4
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // Offset: 8 Size: 16
	struct TArray<struct FEdgeID> NewEdgeIDs;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices Size 24
class FGetVertexAdjacentVertices
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexID> OutAdjacentVertexIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances Size 24
class FGetPolygonVertexInstances
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances Size 8
class FGetNumVertexVertexInstances
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreateVertex Size 4
class FCreateVertex
{

 public: 
	struct FVertexID ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons Size 8
class FGetNumPolygonGroupPolygons
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreateVertexInstance Size 8
class FCreateVertexInstance
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	struct FVertexInstanceID ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID Size 8
class FCreateVertexInstanceWithID
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	struct FVertexID VertexID;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons Size 24
class FGetEdgeConnectedPolygons
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.CreateVertexWithID Size 4
class FCreateVertexWithID
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons Size 24
class FGetVertexConnectedPolygons
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon Size 8
class FGetTrianglePolygon
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	struct FPolygonID ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.DeleteEdge Size 24
class FDeleteEdge
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexID> OrphanedVertices;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetTriangleEdges Size 24
class FGetTriangleEdges
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FEdgeID> OutEdgeIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex Size 12
class FGetVertexInstanceForTriangleVertex
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	struct FVertexID VertexID;  // Offset: 4 Size: 4
	struct FVertexInstanceID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup Size 4
class FDeletePolygonGroup
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup Size 8
class FGetTrianglePolygonGroup
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	struct FPolygonGroupID ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.DeleteTriangle Size 56
class FDeleteTriangle
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FEdgeID> OrphanedEdges;  // Offset: 8 Size: 16
	struct TArray<struct FVertexInstanceID> OrphanedVertexInstances;  // Offset: 24 Size: 16
	struct TArray<struct FPolygonGroupID> OrphanedPolygonGroupsPtr;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.DeleteVertex Size 4
class FDeleteVertex
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance Size 24
class FDeleteVertexInstance
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexID> OrphanedVertices;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons Size 24
class FGetPolygonAdjacentPolygons
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FPolygonID> OutPolygonIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles Size 24
class FGetEdgeConnectedTriangles
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FTriangleID> OutConnectedTriangleIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetEdgeVertices Size 24
class FGetEdgeVertices
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexID> OutVertexIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges Size 24
class FGetPolygonPerimeterEdges
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FEdgeID> OutEdgeIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges Size 8
class FGetNumVertexConnectedEdges
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons Size 8
class FGetNumEdgeConnectedPolygons
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles Size 8
class FGetNumEdgeConnectedTriangles
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges Size 8
class FGetNumPolygonInternalEdges
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles Size 24
class FGetTriangleAdjacentTriangles
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FTriangleID> OutTriangleIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles Size 8
class FGetNumPolygonTriangles
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons Size 8
class FGetNumVertexConnectedPolygons
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons Size 8
class FGetNumVertexInstanceConnectedPolygons
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons Size 24
class FGetPolygonGroupPolygons
{

 public: 
	struct FPolygonGroupID PolygonGroupID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FPolygonID> OutPolygonIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges Size 24
class FGetPolygonInternalEdges
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FEdgeID> OutEdgeIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup Size 8
class FGetPolygonPolygonGroup
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	struct FPolygonGroupID ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance Size 12
class FGetTriangleVertexInstance
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	int32_t Index;  // Offset: 4 Size: 4
	struct FVertexInstanceID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances Size 24
class FGetTriangleVertexInstances
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges Size 24
class FGetVertexConnectedEdges
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FEdgeID> OutEdgeIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles Size 24
class FGetVertexInstanceConnectedTriangles
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FTriangleID> OutConnectedTriangleIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.ReserveNewEdges Size 4
class FReserveNewEdges
{

 public: 
	int32_t NumberOfNewEdges;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge Size 12
class FGetVertexInstancePairEdge
{

 public: 
	struct FVertexInstanceID VertexInstanceID0;  // Offset: 0 Size: 4
	struct FVertexInstanceID VertexInstanceID1;  // Offset: 4 Size: 4
	struct FEdgeID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex Size 8
class FGetVertexInstanceVertex
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	struct FVertexID ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge Size 12
class FGetVertexPairEdge
{

 public: 
	struct FVertexID VertexID0;  // Offset: 0 Size: 4
	struct FVertexID VertexID1;  // Offset: 4 Size: 4
	struct FEdgeID ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexPosition Size 16
class FGetVertexPosition
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	struct FVector ReturnValue;  // Offset: 4 Size: 12



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances Size 24
class FGetVertexVertexInstances
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.IsEdgeInternal Size 8
class FIsEdgeInternal
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon Size 12
class FIsEdgeInternalToPolygon
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	struct FPolygonID PolygonID;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.IsEdgeValid Size 8
class FIsEdgeValid
{

 public: 
	struct FEdgeID EdgeID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.IsEmpty Size 1
class FIsEmpty
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.IsPolygonValid Size 8
class FIsPolygonValid
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon Size 8
class FIsTrianglePartOfNgon
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.IsTriangleValid Size 8
class FIsTriangleValid
{

 public: 
	struct FTriangleID TriangleID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid Size 8
class FIsVertexInstanceValid
{

 public: 
	struct FVertexInstanceID VertexInstanceID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned Size 8
class FIsVertexOrphaned
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.IsVertexValid Size 8
class FIsVertexValid
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups Size 4
class FReserveNewPolygonGroups
{

 public: 
	int32_t NumberOfNewPolygonGroups;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons Size 4
class FReserveNewPolygons
{

 public: 
	int32_t NumberOfNewPolygons;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles Size 4
class FReserveNewTriangles
{

 public: 
	int32_t NumberOfNewTriangles;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances Size 4
class FReserveNewVertexInstances
{

 public: 
	int32_t NumberOfNewVertexInstances;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.ReserveNewVertices Size 4
class FReserveNewVertices
{

 public: 
	int32_t NumberOfNewVertices;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing Size 4
class FReversePolygonFacing
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup Size 8
class FSetPolygonPolygonGroup
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	struct FPolygonGroupID PolygonGroupID;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance Size 12
class FSetPolygonVertexInstance
{

 public: 
	struct FPolygonID PolygonID;  // Offset: 0 Size: 4
	int32_t PerimeterIndex;  // Offset: 4 Size: 4
	struct FVertexInstanceID VertexInstanceID;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MeshDescription.MeshDescriptionBase.SetVertexPosition Size 16
class FSetVertexPosition
{

 public: 
	struct FVertexID VertexID;  // Offset: 0 Size: 4
	struct FVector position;  // Offset: 4 Size: 12



 // Functions 
 public:
}; 
 
 