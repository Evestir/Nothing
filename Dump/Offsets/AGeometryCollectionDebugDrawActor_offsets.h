namespace offsets
{
	namespace AGeometryCollectionDebugDrawActor
	{
			constexpr auto WarningMessage = 0x220; // Size: 1, Type: struct FGeometryCollectionDebugDrawWarningMessage
			constexpr auto SelectedRigidBody = 0x228; // Size: 24, Type: struct FGeometryCollectionDebugDrawActorSelectedRigidBody
			constexpr auto bDebugDrawWholeCollection = 0x240; // Size: 1, Type: bool
			constexpr auto bDebugDrawHierarchy = 0x241; // Size: 1, Type: bool
			constexpr auto bDebugDrawClustering = 0x242; // Size: 1, Type: bool
			constexpr auto HideGeometry = 0x243; // Size: 1, Type: enum class EGeometryCollectionDebugDrawActorHideGeometry
			constexpr auto bShowRigidBodyId = 0x244; // Size: 1, Type: bool
			constexpr auto bShowRigidBodyCollision = 0x245; // Size: 1, Type: bool
			constexpr auto bCollisionAtOrigin = 0x246; // Size: 1, Type: bool
			constexpr auto bShowRigidBodyTransform = 0x247; // Size: 1, Type: bool
			constexpr auto bShowRigidBodyInertia = 0x248; // Size: 1, Type: bool
			constexpr auto bShowRigidBodyVelocity = 0x249; // Size: 1, Type: bool
			constexpr auto bShowRigidBodyForce = 0x24a; // Size: 1, Type: bool
			constexpr auto bShowRigidBodyInfos = 0x24b; // Size: 1, Type: bool
			constexpr auto bShowTransformIndex = 0x24c; // Size: 1, Type: bool
			constexpr auto bShowTransform = 0x24d; // Size: 1, Type: bool
			constexpr auto bShowParent = 0x24e; // Size: 1, Type: bool
			constexpr auto bShowLevel = 0x24f; // Size: 1, Type: bool
			constexpr auto bShowConnectivityEdges = 0x250; // Size: 1, Type: bool
			constexpr auto bShowGeometryIndex = 0x251; // Size: 1, Type: bool
			constexpr auto bShowGeometryTransform = 0x252; // Size: 1, Type: bool
			constexpr auto bShowBoundingBox = 0x253; // Size: 1, Type: bool
			constexpr auto bShowFaces = 0x254; // Size: 1, Type: bool
			constexpr auto bShowFaceIndices = 0x255; // Size: 1, Type: bool
			constexpr auto bShowFaceNormals = 0x256; // Size: 1, Type: bool
			constexpr auto bShowSingleFace = 0x257; // Size: 1, Type: bool
			constexpr auto SingleFaceIndex = 0x258; // Size: 4, Type: int32_t
			constexpr auto bShowVertices = 0x25c; // Size: 1, Type: bool
			constexpr auto bShowVertexIndices = 0x25d; // Size: 1, Type: bool
			constexpr auto bShowVertexNormals = 0x25e; // Size: 1, Type: bool
			constexpr auto bUseActiveVisualization = 0x25f; // Size: 1, Type: bool
			constexpr auto PointThickness = 0x260; // Size: 4, Type: float
			constexpr auto LineThickness = 0x264; // Size: 4, Type: float
			constexpr auto bTextShadow = 0x268; // Size: 1, Type: bool
			constexpr auto TextScale = 0x26c; // Size: 4, Type: float
			constexpr auto NormalScale = 0x270; // Size: 4, Type: float
			constexpr auto AxisScale = 0x274; // Size: 4, Type: float
			constexpr auto ArrowScale = 0x278; // Size: 4, Type: float
			constexpr auto RigidBodyIdColor = 0x27c; // Size: 4, Type: struct FColor
			constexpr auto RigidBodyTransformScale = 0x280; // Size: 4, Type: float
			constexpr auto RigidBodyCollisionColor = 0x284; // Size: 4, Type: struct FColor
			constexpr auto RigidBodyInertiaColor = 0x288; // Size: 4, Type: struct FColor
			constexpr auto RigidBodyVelocityColor = 0x28c; // Size: 4, Type: struct FColor
			constexpr auto RigidBodyForceColor = 0x290; // Size: 4, Type: struct FColor
			constexpr auto RigidBodyInfoColor = 0x294; // Size: 4, Type: struct FColor
			constexpr auto TransformIndexColor = 0x298; // Size: 4, Type: struct FColor
			constexpr auto TransformScale = 0x29c; // Size: 4, Type: float
			constexpr auto LevelColor = 0x2a0; // Size: 4, Type: struct FColor
			constexpr auto ParentColor = 0x2a4; // Size: 4, Type: struct FColor
			constexpr auto ConnectivityEdgeThickness = 0x2a8; // Size: 4, Type: float
			constexpr auto GeometryIndexColor = 0x2ac; // Size: 4, Type: struct FColor
			constexpr auto GeometryTransformScale = 0x2b0; // Size: 4, Type: float
			constexpr auto BoundingBoxColor = 0x2b4; // Size: 4, Type: struct FColor
			constexpr auto FaceColor = 0x2b8; // Size: 4, Type: struct FColor
			constexpr auto FaceIndexColor = 0x2bc; // Size: 4, Type: struct FColor
			constexpr auto FaceNormalColor = 0x2c0; // Size: 4, Type: struct FColor
			constexpr auto SingleFaceColor = 0x2c4; // Size: 4, Type: struct FColor
			constexpr auto VertexColor = 0x2c8; // Size: 4, Type: struct FColor
			constexpr auto VertexIndexColor = 0x2cc; // Size: 4, Type: struct FColor
			constexpr auto VertexNormalColor = 0x2d0; // Size: 4, Type: struct FColor
			constexpr auto SpriteComponent = 0x2d8; // Size: 8, Type: struct UBillboardComponent*
	}
} 
