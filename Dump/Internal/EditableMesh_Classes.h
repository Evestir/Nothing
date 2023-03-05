#pragma once 
#include <EditableMesh_Structs.h>
 
 
 
//Class EditableMesh.EditableGeometryCollectionAdapter Size 216
// Inherited 40 bytes 
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{

 public: 
	struct UGeometryCollection* GeometryCollection;  // Offset: 40 Size: 8
	struct UGeometryCollection* OriginalGeometryCollection;  // Offset: 48 Size: 8
	int32_t GeometryCollectionLODIndex;  // Offset: 56 Size: 4
	char pad_60[156];  // Offset: 60 Size: 156



 // Functions 
 public:
}; 
 
 


//Class EditableMesh.EditableMeshAdapter Size 40
// Inherited 40 bytes 
class UEditableMeshAdapter : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class EditableMesh.EditableMeshFactory Size 40
// Inherited 40 bytes 
class UEditableMeshFactory : public UObject
{

 public: 



 // Functions 
 public:
	struct UEditableMesh* MakeEditableMesh(struct UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex); // Function EditableMesh.EditableMeshFactory.MakeEditableMesh
}; 
 
 


//Class EditableMesh.EditableMesh Size 1800
// Inherited 40 bytes 
class UEditableMesh : public UObject
{

 public: 
	char pad_40[912];  // Offset: 40 Size: 912
	struct TArray<struct UEditableMeshAdapter*> Adapters;  // Offset: 952 Size: 16
	char pad_968[8];  // Offset: 968 Size: 8
	int32_t TextureCoordinateCount;  // Offset: 976 Size: 4
	char pad_980[328];  // Offset: 980 Size: 328
	int32_t PendingCompactCounter;  // Offset: 1308 Size: 4
	int32_t SubdivisionCount;  // Offset: 1312 Size: 4
	char pad_1316[484];  // Offset: 1316 Size: 484



 // Functions 
 public:
	void WeldVertices(struct TArray<struct FVertexID>& VertexIDs, struct FVertexID& OutNewVertexID); // Function EditableMesh.EditableMesh.WeldVertices
	void TryToRemoveVertex(struct FVertexID VertexID, bool& bOutWasVertexRemoved, struct FEdgeID& OutNewEdgeID); // Function EditableMesh.EditableMesh.TryToRemoveVertex
	void TryToRemovePolygonEdge(struct FEdgeID EdgeID, bool& bOutWasEdgeRemoved, struct FPolygonID& OutNewPolygonID); // Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
	void TriangulatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FPolygonID>& OutNewTrianglePolygons); // Function EditableMesh.EditableMesh.TriangulatePolygons
	void TessellatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, enum class ETriangleTessellationMode TriangleTessellationMode, struct TArray<struct FPolygonID>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.TessellatePolygons
	void StartModification(enum class EMeshModificationType MeshModificationType, enum class EMeshTopologyChange MeshTopologyChange); // Function EditableMesh.EditableMesh.StartModification
	void SplitPolygons(struct TArray<struct FPolygonToSplit>& PolygonsToSplit, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.SplitPolygons
	void SplitPolygonalMesh(struct FPlane& InPlane, struct TArray<struct FPolygonID>& PolygonIDs1, struct TArray<struct FPolygonID>& PolygonIDs2, struct TArray<struct FEdgeID>& BoundaryIDs); // Function EditableMesh.EditableMesh.SplitPolygonalMesh
	void SplitEdge(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FVertexID>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.SplitEdge
	void SetVerticesCornerSharpness(struct TArray<struct FVertexID>& VertexIDs, struct TArray<float>& VerticesNewCornerSharpness); // Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
	void SetVerticesAttributes(struct TArray<struct FAttributesForVertex>& AttributesForVertices); // Function EditableMesh.EditableMesh.SetVerticesAttributes
	void SetVertexInstancesAttributes(struct TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances); // Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
	void SetTextureCoordinateCount(int32_t NumTexCoords); // Function EditableMesh.EditableMesh.SetTextureCoordinateCount
	void SetSubdivisionCount(int32_t NewSubdivisionCount); // Function EditableMesh.EditableMesh.SetSubdivisionCount
	void SetPolygonsVertexAttributes(struct TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons); // Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	void SetEdgesHardnessAutomatically(struct TArray<struct FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge); // Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	void SetEdgesHardness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<bool>& EdgesNewIsHard); // Function EditableMesh.EditableMesh.SetEdgesHardness
	void SetEdgesCreaseSharpness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<float>& EdgesNewCreaseSharpness); // Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	void SetEdgesAttributes(struct TArray<struct FAttributesForEdge>& AttributesForEdges); // Function EditableMesh.EditableMesh.SetEdgesAttributes
	void SetAllowUndo(bool bInAllowUndo); // Function EditableMesh.EditableMesh.SetAllowUndo
	void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase); // Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
	void SetAllowCompact(bool bInAllowCompact); // Function EditableMesh.EditableMesh.SetAllowCompact
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct FPlane& InPlane, struct TArray<struct FPolygonID>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct FVector LineSegmentStart, struct FVector LineSegmentEnd, struct TArray<struct FPolygonID>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	void SearchSpatialDatabaseForPolygonsInVolume(struct TArray<struct FPlane>& Planes, struct TArray<struct FPolygonID>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	struct UEditableMesh* RevertInstance(); // Function EditableMesh.EditableMesh.RevertInstance
	void Revert(); // Function EditableMesh.EditableMesh.Revert
	void RebuildRenderMesh(); // Function EditableMesh.EditableMesh.RebuildRenderMesh
	void QuadrangulateMesh(struct TArray<struct FPolygonID>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.QuadrangulateMesh
	void PropagateInstanceChanges(); // Function EditableMesh.EditableMesh.PropagateInstanceChanges
	void MoveVertices(struct TArray<struct FVertexToMove>& VerticesToMove); // Function EditableMesh.EditableMesh.MoveVertices
	struct FVertexID MakeVertexID(int32_t VertexIndex); // Function EditableMesh.EditableMesh.MakeVertexID
	struct FPolygonID MakePolygonID(int32_t PolygonIndex); // Function EditableMesh.EditableMesh.MakePolygonID
	struct FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex); // Function EditableMesh.EditableMesh.MakePolygonGroupID
	struct FEdgeID MakeEdgeID(int32_t EdgeIndex); // Function EditableMesh.EditableMesh.MakeEdgeID
	bool IsValidVertex(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.IsValidVertex
	bool IsValidPolygonGroup(struct FPolygonGroupID PolygonGroupID); // Function EditableMesh.EditableMesh.IsValidPolygonGroup
	bool IsValidPolygon(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.IsValidPolygon
	bool IsValidEdge(struct FEdgeID EdgeID); // Function EditableMesh.EditableMesh.IsValidEdge
	bool IsUndoAllowed(); // Function EditableMesh.EditableMesh.IsUndoAllowed
	bool IsSpatialDatabaseAllowed(); // Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	bool IsPreviewingSubdivisions(); // Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
	bool IsOrphanedVertex(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.IsOrphanedVertex
	bool IsCompactAllowed(); // Function EditableMesh.EditableMesh.IsCompactAllowed
	bool IsCommittedAsInstance(); // Function EditableMesh.EditableMesh.IsCommittedAsInstance
	bool IsCommitted(); // Function EditableMesh.EditableMesh.IsCommitted
	bool IsBeingModified(); // Function EditableMesh.EditableMesh.IsBeingModified
	struct FVertexID InvalidVertexID(); // Function EditableMesh.EditableMesh.InvalidVertexID
	struct FPolygonID InvalidPolygonID(); // Function EditableMesh.EditableMesh.InvalidPolygonID
	struct FPolygonGroupID InvalidPolygonGroupID(); // Function EditableMesh.EditableMesh.InvalidPolygonGroupID
	struct FEdgeID InvalidEdgeID(); // Function EditableMesh.EditableMesh.InvalidEdgeID
	void InsetPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class EInsetPolygonsMode Mode, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.InsetPolygons
	void InsertEdgeLoop(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.InsertEdgeLoop
	void InitializeAdapters(); // Function EditableMesh.EditableMesh.InitializeAdapters
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID, struct FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed); // Function EditableMesh.EditableMesh.GetVertexPairEdge
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceVertex
	int32_t GetVertexInstanceCount(); // Function EditableMesh.EditableMesh.GetVertexInstanceCount
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	int32_t GetVertexInstanceConnectedPolygonCount(struct FVertexInstanceID VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	struct FPolygonID GetVertexInstanceConnectedPolygon(struct FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	int32_t GetVertexCount(); // Function EditableMesh.EditableMesh.GetVertexCount
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutConnectedEdgeIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedEdges
	int32_t GetVertexConnectedEdgeCount(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	struct FEdgeID GetVertexConnectedEdge(struct FVertexID VertexID, int32_t ConnectedEdgeNumber); // Function EditableMesh.EditableMesh.GetVertexConnectedEdge
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs); // Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
	int32_t GetTextureCoordinateCount(); // Function EditableMesh.EditableMesh.GetTextureCoordinateCount
	struct FSubdivisionLimitData GetSubdivisionLimitData(); // Function EditableMesh.EditableMesh.GetSubdivisionLimitData
	int32_t GetSubdivisionCount(); // Function EditableMesh.EditableMesh.GetSubdivisionCount
	int32_t GetPolygonTriangulatedTriangleCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	struct FTriangleID GetPolygonTriangulatedTriangle(struct FPolygonID PolygonID, int32_t PolygonTriangleNumber); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	void GetPolygonPerimeterVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutPolygonPerimeterVertexIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	void GetPolygonPerimeterVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	struct FVertexInstanceID GetPolygonPerimeterVertexInstance(struct FPolygonID PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	int32_t GetPolygonPerimeterVertexCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	struct FVertexID GetPolygonPerimeterVertex(struct FPolygonID PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutPolygonPerimeterEdgeIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	int32_t GetPolygonPerimeterEdgeCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	struct FEdgeID GetPolygonPerimeterEdge(struct FPolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	struct FPolygonID GetPolygonInGroup(struct FPolygonGroupID PolygonGroupID, int32_t PolygonNumber); // Function EditableMesh.EditableMesh.GetPolygonInGroup
	int32_t GetPolygonGroupCount(); // Function EditableMesh.EditableMesh.GetPolygonGroupCount
	int32_t GetPolygonCountInGroup(struct FPolygonGroupID PolygonGroupID); // Function EditableMesh.EditableMesh.GetPolygonCountInGroup
	int32_t GetPolygonCount(); // Function EditableMesh.EditableMesh.GetPolygonCount
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutAdjacentPolygons); // Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	struct FPolygonGroupID GetGroupForPolygon(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetGroupForPolygon
	struct FPolygonGroupID GetFirstValidPolygonGroup(); // Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	void GetEdgeVertices(struct FEdgeID EdgeID, struct FVertexID& OutEdgeVertexID0, struct FVertexID& OutEdgeVertexID1); // Function EditableMesh.EditableMesh.GetEdgeVertices
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t EdgeVertexNumber); // Function EditableMesh.EditableMesh.GetEdgeVertex
	struct FEdgeID GetEdgeThatConnectsVertices(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	void GetEdgeLoopElements(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& EdgeLoopIDs); // Function EditableMesh.EditableMesh.GetEdgeLoopElements
	int32_t GetEdgeCount(); // Function EditableMesh.EditableMesh.GetEdgeCount
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	int32_t GetEdgeConnectedPolygonCount(struct FEdgeID EdgeID); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	struct FPolygonID GetEdgeConnectedPolygon(struct FEdgeID EdgeID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	void GeneratePolygonTangentsAndNormals(struct TArray<struct FPolygonID>& PolygonIDs); // Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	void FlipPolygons(struct TArray<struct FPolygonID>& PolygonIDs); // Function EditableMesh.EditableMesh.FlipPolygons
	int32_t FindPolygonPerimeterVertexNumberForVertex(struct FPolygonID PolygonID, struct FVertexID VertexID); // Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	int32_t FindPolygonPerimeterEdgeNumberForVertices(struct FPolygonID PolygonID, struct FVertexID EdgeVertexID0, struct FVertexID EdgeVertexID1); // Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	void FindPolygonLoop(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& OutEdgeLoopEdgeIDs, struct TArray<struct FEdgeID>& OutFlippedEdgeIDs, struct TArray<struct FEdgeID>& OutReversedEdgeIDPathToTake, struct TArray<struct FPolygonID>& OutPolygonIDsToSplit); // Function EditableMesh.EditableMesh.FindPolygonLoop
	void ExtrudePolygons(struct TArray<struct FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, struct TArray<struct FPolygonID>& OutNewExtrudedFrontPolygons); // Function EditableMesh.EditableMesh.ExtrudePolygons
	void ExtendVertices(struct TArray<struct FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, struct FVector ReferencePosition, struct TArray<struct FVertexID>& OutNewExtendedVertexIDs); // Function EditableMesh.EditableMesh.ExtendVertices
	void ExtendEdges(struct TArray<struct FEdgeID>& EdgeIDs, bool bWeldNeighbors, struct TArray<struct FEdgeID>& OutNewExtendedEdgeIDs); // Function EditableMesh.EditableMesh.ExtendEdges
	void EndModification(bool bFromUndo); // Function EditableMesh.EditableMesh.EndModification
	void DeleteVertexInstances(struct TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteVertexInstances
	void DeleteVertexAndConnectedEdgesAndPolygons(struct FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	void DeletePolygons(struct TArray<struct FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeletePolygons
	void DeletePolygonGroups(struct TArray<struct FPolygonGroupID>& PolygonGroupIDs); // Function EditableMesh.EditableMesh.DeletePolygonGroups
	void DeleteOrphanVertices(struct TArray<struct FVertexID>& VertexIDsToDelete); // Function EditableMesh.EditableMesh.DeleteOrphanVertices
	void DeleteEdges(struct TArray<struct FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteEdges
	void DeleteEdgeAndConnectedPolygons(struct FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	void CreateVertices(struct TArray<struct FVertexToCreate>& VerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateVertices
	void CreateVertexInstances(struct TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate, struct TArray<struct FVertexInstanceID>& OutNewVertexInstanceIDs); // Function EditableMesh.EditableMesh.CreateVertexInstances
	void CreatePolygons(struct TArray<struct FPolygonToCreate>& PolygonsToCreate, struct TArray<struct FPolygonID>& OutNewPolygonIDs, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreatePolygons
	void CreatePolygonGroups(struct TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate, struct TArray<struct FPolygonGroupID>& OutNewPolygonGroupIDs); // Function EditableMesh.EditableMesh.CreatePolygonGroups
	void CreateMissingPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	void CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateEmptyVertexRange
	void CreateEdges(struct TArray<struct FEdgeToCreate>& EdgesToCreate, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateEdges
	void ComputePolygonsSharedEdges(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FEdgeID>& OutSharedEdgeIDs); // Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	struct FPlane ComputePolygonPlane(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonPlane
	struct FVector ComputePolygonNormal(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonNormal
	struct FVector ComputePolygonCenter(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonCenter
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere(); // Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	struct FBox ComputeBoundingBox(); // Function EditableMesh.EditableMesh.ComputeBoundingBox
	struct UEditableMesh* CommitInstance(struct UPrimitiveComponent* ComponentToInstanceTo); // Function EditableMesh.EditableMesh.CommitInstance
	void Commit(); // Function EditableMesh.EditableMesh.Commit
	void ChangePolygonsVertexInstances(struct TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons); // Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	void BevelPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.BevelPolygons
	void AssignPolygonsToPolygonGroups(struct TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups); // Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	bool AnyChangesToUndo(); // Function EditableMesh.EditableMesh.AnyChangesToUndo
}; 
 
 


//Class EditableMesh.EditableStaticMeshAdapter Size 224
// Inherited 40 bytes 
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{

 public: 
	struct UStaticMesh* StaticMesh;  // Offset: 40 Size: 8
	struct UStaticMesh* OriginalStaticMesh;  // Offset: 48 Size: 8
	int32_t StaticMeshLODIndex;  // Offset: 56 Size: 4
	char pad_60[164];  // Offset: 60 Size: 164



 // Functions 
 public:
}; 
 
 


