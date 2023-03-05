#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh Size 64
class FSliceProceduralMesh
{

 public: 
	struct UProceduralMeshComponent* InProcMesh;  // Offset: 0 Size: 8
	struct FVector PlanePosition;  // Offset: 8 Size: 12
	struct FVector PlaneNormal;  // Offset: 20 Size: 12
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bCreateOtherHalf : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7
	struct UProceduralMeshComponent* OutOtherHalfProcMesh;  // Offset: 40 Size: 8
	enum class EProcMeshSliceCapOption CapOption;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7
	struct UMaterialInterface* CapMaterial;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct ProceduralMeshComponent.ProcMeshSection Size 64
class FProcMeshSection
{

 public: 
	struct TArray<struct FProcMeshVertex> ProcVertexBuffer;  // Offset: 0 Size: 16
	struct TArray<uint32_t> ProcIndexBuffer;  // Offset: 16 Size: 16
	struct FBox SectionLocalBox;  // Offset: 32 Size: 28
	char pad_60_1 : 7;  // Offset: 60 Size: 1
	bool bEnableCollision : 1;  // Offset: 60 Size: 1
	char pad_61_1 : 7;  // Offset: 61 Size: 1
	bool bSectionVisible : 1;  // Offset: 61 Size: 1
	char pad_62[2];  // Offset: 62 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct ProceduralMeshComponent.ProcMeshVertex Size 76
class FProcMeshVertex
{

 public: 
	struct FVector position;  // Offset: 0 Size: 12
	struct FVector Normal;  // Offset: 12 Size: 12
	struct FProcMeshTangent Tangent;  // Offset: 24 Size: 16
	struct FColor Color;  // Offset: 40 Size: 4
	struct FVector2D UV0;  // Offset: 44 Size: 8
	struct FVector2D UV1;  // Offset: 52 Size: 8
	struct FVector2D UV2;  // Offset: 60 Size: 8
	struct FVector2D UV3;  // Offset: 68 Size: 8



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection Size 4
class FClearMeshSection
{

 public: 
	int32_t SectionIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct ProceduralMeshComponent.ProcMeshTangent Size 16
class FProcMeshTangent
{

 public: 
	struct FVector TangentX;  // Offset: 0 Size: 12
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bFlipTangentY : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh Size 16
class FAddCollisionConvexMesh
{

 public: 
	struct TArray<struct FVector> ConvexVerts;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles Size 32
class FConvertQuadToTriangles
{

 public: 
	struct TArray<int32_t> Triangles;  // Offset: 0 Size: 16
	int32_t Vert0;  // Offset: 16 Size: 4
	int32_t Vert1;  // Offset: 20 Size: 4
	int32_t Vert2;  // Offset: 24 Size: 4
	int32_t Vert3;  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection Size 112
class FCreateMeshSection
{

 public: 
	int32_t SectionIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVector> Vertices;  // Offset: 8 Size: 16
	struct TArray<int32_t> Triangles;  // Offset: 24 Size: 16
	struct TArray<struct FVector> Normals;  // Offset: 40 Size: 16
	struct TArray<struct FVector2D> UV0;  // Offset: 56 Size: 16
	struct TArray<struct FColor> VertexColors;  // Offset: 72 Size: 16
	struct TArray<struct FProcMeshTangent> Tangents;  // Offset: 88 Size: 16
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bCreateCollision : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection Size 88
class FUpdateMeshSection
{

 public: 
	int32_t SectionIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVector> Vertices;  // Offset: 8 Size: 16
	struct TArray<struct FVector> Normals;  // Offset: 24 Size: 16
	struct TArray<struct FVector2D> UV0;  // Offset: 40 Size: 16
	struct TArray<struct FColor> VertexColors;  // Offset: 56 Size: 16
	struct TArray<struct FProcMeshTangent> Tangents;  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor Size 160
class FCreateMeshSection_LinearColor
{

 public: 
	int32_t SectionIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVector> Vertices;  // Offset: 8 Size: 16
	struct TArray<int32_t> Triangles;  // Offset: 24 Size: 16
	struct TArray<struct FVector> Normals;  // Offset: 40 Size: 16
	struct TArray<struct FVector2D> UV0;  // Offset: 56 Size: 16
	struct TArray<struct FVector2D> UV1;  // Offset: 72 Size: 16
	struct TArray<struct FVector2D> UV2;  // Offset: 88 Size: 16
	struct TArray<struct FVector2D> UV3;  // Offset: 104 Size: 16
	struct TArray<struct FLinearColor> VertexColors;  // Offset: 120 Size: 16
	struct TArray<struct FProcMeshTangent> Tangents;  // Offset: 136 Size: 16
	char pad_152_1 : 7;  // Offset: 152 Size: 1
	bool bCreateCollision : 1;  // Offset: 152 Size: 1
	char pad_153[7];  // Offset: 153 Size: 7



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections Size 4
class FGetNumSections
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible Size 8
class FIsMeshSectionVisible
{

 public: 
	int32_t SectionIndex;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible Size 8
class FSetMeshSectionVisible
{

 public: 
	int32_t SectionIndex;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bNewVisibility : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.ProceduralMeshComponent.SetUpdateMeshSection Size 8
class FSetUpdateMeshSection
{

 public: 
	int32_t SectionIndex;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bUpdateMeshSection : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor Size 136
class FUpdateMeshSection_LinearColor
{

 public: 
	int32_t SectionIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FVector> Vertices;  // Offset: 8 Size: 16
	struct TArray<struct FVector> Normals;  // Offset: 24 Size: 16
	struct TArray<struct FVector2D> UV0;  // Offset: 40 Size: 16
	struct TArray<struct FVector2D> UV1;  // Offset: 56 Size: 16
	struct TArray<struct FVector2D> UV2;  // Offset: 72 Size: 16
	struct TArray<struct FVector2D> UV3;  // Offset: 88 Size: 16
	struct TArray<struct FLinearColor> VertexColors;  // Offset: 104 Size: 16
	struct TArray<struct FProcMeshTangent> Tangents;  // Offset: 120 Size: 16



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles Size 32
class FCreateGridMeshTriangles
{

 public: 
	int32_t NumX;  // Offset: 0 Size: 4
	int32_t NumY;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bWinding : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct TArray<int32_t> Triangles;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh Size 80
class FCalculateTangentsForMesh
{

 public: 
	struct TArray<struct FVector> Vertices;  // Offset: 0 Size: 16
	struct TArray<int32_t> Triangles;  // Offset: 16 Size: 16
	struct TArray<struct FVector2D> UVs;  // Offset: 32 Size: 16
	struct TArray<struct FVector> Normals;  // Offset: 48 Size: 16
	struct TArray<struct FProcMeshTangent> Tangents;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent Size 32
class FCopyProceduralMeshFromStaticMeshComponent
{

 public: 
	struct UStaticMeshComponent* StaticMeshComponent;  // Offset: 0 Size: 8
	int32_t LODIndex;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct UProceduralMeshComponent* ProcMeshComponent;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bCreateCollision : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit Size 80
class FCreateGridMeshSplit
{

 public: 
	int32_t NumX;  // Offset: 0 Size: 4
	int32_t NumY;  // Offset: 4 Size: 4
	struct TArray<int32_t> Triangles;  // Offset: 8 Size: 16
	struct TArray<struct FVector> Vertices;  // Offset: 24 Size: 16
	struct TArray<struct FVector2D> UVs;  // Offset: 40 Size: 16
	struct TArray<struct FVector2D> UV1s;  // Offset: 56 Size: 16
	float GridSpacing;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded Size 64
class FCreateGridMeshWelded
{

 public: 
	int32_t NumX;  // Offset: 0 Size: 4
	int32_t NumY;  // Offset: 4 Size: 4
	struct TArray<int32_t> Triangles;  // Offset: 8 Size: 16
	struct TArray<struct FVector> Vertices;  // Offset: 24 Size: 16
	struct TArray<struct FVector2D> UVs;  // Offset: 40 Size: 16
	float GridSpacing;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh Size 96
class FGenerateBoxMesh
{

 public: 
	struct FVector BoxRadius;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct TArray<struct FVector> Vertices;  // Offset: 16 Size: 16
	struct TArray<int32_t> Triangles;  // Offset: 32 Size: 16
	struct TArray<struct FVector> Normals;  // Offset: 48 Size: 16
	struct TArray<struct FVector2D> UVs;  // Offset: 64 Size: 16
	struct TArray<struct FProcMeshTangent> Tangents;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh Size 96
class FGetSectionFromProceduralMesh
{

 public: 
	struct UProceduralMeshComponent* InProcMesh;  // Offset: 0 Size: 8
	int32_t SectionIndex;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct TArray<struct FVector> Vertices;  // Offset: 16 Size: 16
	struct TArray<int32_t> Triangles;  // Offset: 32 Size: 16
	struct TArray<struct FVector> Normals;  // Offset: 48 Size: 16
	struct TArray<struct FVector2D> UVs;  // Offset: 64 Size: 16
	struct TArray<struct FProcMeshTangent> Tangents;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 //Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh Size 96
class FGetSectionFromStaticMesh
{

 public: 
	struct UStaticMesh* InMesh;  // Offset: 0 Size: 8
	int32_t LODIndex;  // Offset: 8 Size: 4
	int32_t SectionIndex;  // Offset: 12 Size: 4
	struct TArray<struct FVector> Vertices;  // Offset: 16 Size: 16
	struct TArray<int32_t> Triangles;  // Offset: 32 Size: 16
	struct TArray<struct FVector> Normals;  // Offset: 48 Size: 16
	struct TArray<struct FVector2D> UVs;  // Offset: 64 Size: 16
	struct TArray<struct FProcMeshTangent> Tangents;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 