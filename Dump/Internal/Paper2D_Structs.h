#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct Paper2D.SpriteGeometryCollection Size 48
class FSpriteGeometryCollection
{

 public: 
	struct TArray<struct FSpriteGeometryShape> Shapes;  // Offset: 0 Size: 16
	enum class ESpritePolygonMode GeometryType;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	int32_t PixelsPerSubdivisionX;  // Offset: 20 Size: 4
	int32_t PixelsPerSubdivisionY;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bAvoidVertexMerging : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	float AlphaThreshold;  // Offset: 32 Size: 4
	float DetailAmount;  // Offset: 36 Size: 4
	float SimplifyEpsilon;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.IntMargin Size 16
class FIntMargin
{

 public: 
	int32_t Left;  // Offset: 0 Size: 4
	int32_t Top;  // Offset: 4 Size: 4
	int32_t Right;  // Offset: 8 Size: 4
	int32_t Bottom;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.SpriteInstanceData Size 80
class FSpriteInstanceData
{

 public: 
	struct FMatrix Transform;  // Offset: 0 Size: 64
	struct UPaperSprite* SourceSprite;  // Offset: 64 Size: 8
	struct FColor VertexColor;  // Offset: 72 Size: 4
	int32_t MaterialIndex;  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.GetLayerColor Size 20
class FGetLayerColor
{

 public: 
	int32_t Layer;  // Offset: 0 Size: 4
	struct FLinearColor ReturnValue;  // Offset: 4 Size: 16



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.SetTile Size 32
class FSetTile
{

 public: 
	int32_t X;  // Offset: 0 Size: 4
	int32_t Y;  // Offset: 4 Size: 4
	int32_t Layer;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FPaperTileInfo NewValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.PaperFlipbookKeyFrame Size 16
class FPaperFlipbookKeyFrame
{

 public: 
	struct UPaperSprite* Sprite;  // Offset: 0 Size: 8
	int32_t FrameRun;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook Size 8
class FOnRep_SourceFlipbook
{

 public: 
	struct UPaperFlipbook* OldFlipbook;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.PaperSpriteSocket Size 64
class FPaperSpriteSocket
{

 public: 
	struct FTransform LocalTransform;  // Offset: 0 Size: 48
	struct FName SocketName;  // Offset: 48 Size: 8
	char pad_56[8];  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.GetSpriteColor Size 16
class FGetSpriteColor
{

 public: 
	struct FLinearColor ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.PaperTerrainMaterialRule Size 56
class FPaperTerrainMaterialRule
{

 public: 
	struct UPaperSprite* StartCap;  // Offset: 0 Size: 8
	struct TArray<struct UPaperSprite*> Body;  // Offset: 8 Size: 16
	struct UPaperSprite* EndCap;  // Offset: 24 Size: 8
	float MinimumAngle;  // Offset: 32 Size: 4
	float MaximumAngle;  // Offset: 36 Size: 4
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bEnableCollision : 1;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	float CollisionOffset;  // Offset: 44 Size: 4
	int32_t DrawOrder;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.GetTilePolygon Size 32
class FGetTilePolygon
{

 public: 
	int32_t TileX;  // Offset: 0 Size: 4
	int32_t TileY;  // Offset: 4 Size: 4
	struct TArray<struct FVector> Points;  // Offset: 8 Size: 16
	int32_t LayerIndex;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bWorldSpace : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.PaperSpriteAtlasSlot Size 64
class FPaperSpriteAtlasSlot
{

 public: 
	struct TSoftObjectPtr<UPaperSprite> SpriteRef;  // Offset: 0 Size: 40
	int32_t AtlasIndex;  // Offset: 40 Size: 4
	int32_t X;  // Offset: 44 Size: 4
	int32_t Y;  // Offset: 48 Size: 4
	int32_t Width;  // Offset: 52 Size: 4
	int32_t Height;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTerrainComponent.SetTerrainColor Size 16
class FSetTerrainColor
{

 public: 
	struct FLinearColor NewColor;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.SetPlayRate Size 4
class FSetPlayRate
{

 public: 
	float NewRate;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.PaperTileInfo Size 16
class FPaperTileInfo
{

 public: 
	struct UPaperTileSet* TileSet;  // Offset: 0 Size: 8
	int32_t PackedTileIndex;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite Size 152
class FMakeBrushFromSprite
{

 public: 
	struct UPaperSprite* Sprite;  // Offset: 0 Size: 8
	int32_t Width;  // Offset: 8 Size: 4
	int32_t Height;  // Offset: 12 Size: 4
	struct FSlateBrush ReturnValue;  // Offset: 16 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.PaperTileSetTerrain Size 24
class FPaperTileSetTerrain
{

 public: 
	struct FString TerrainName;  // Offset: 0 Size: 16
	int32_t CenterTileIndex;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform Size 80
class FGetInstanceTransform
{

 public: 
	int32_t InstanceIndex;  // Offset: 0 Size: 4
	char pad_4[12];  // Offset: 4 Size: 12
	struct FTransform OutInstanceTransform;  // Offset: 16 Size: 48
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bWorldSpace : 1;  // Offset: 64 Size: 1
	char pad_65_1 : 7;  // Offset: 65 Size: 1
	bool ReturnValue : 1;  // Offset: 65 Size: 1
	char pad_66[14];  // Offset: 66 Size: 14



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.PaperTileMetadata Size 64
class FPaperTileMetadata
{

 public: 
	struct FName UserDataName;  // Offset: 0 Size: 8
	struct FSpriteGeometryCollection CollisionData;  // Offset: 8 Size: 48
	char TerrainMembership[4];  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.SpriteGeometryShape Size 48
class FSpriteGeometryShape
{

 public: 
	enum class ESpriteShapeType ShapeType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FVector2D> Vertices;  // Offset: 8 Size: 16
	struct FVector2D BoxSize;  // Offset: 24 Size: 8
	struct FVector2D BoxPosition;  // Offset: 32 Size: 8
	float Rotation;  // Offset: 40 Size: 4
	char pad_44_1 : 7;  // Offset: 44 Size: 1
	bool bNegativeWinding : 1;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.GetPlayRate Size 4
class FGetPlayRate
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.SpriteDrawCallRecord Size 208
class FSpriteDrawCallRecord
{

 public: 
	struct FVector Destination;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct UTexture* BaseTexture;  // Offset: 16 Size: 8
	char pad_24[48];  // Offset: 24 Size: 48
	struct FColor Color;  // Offset: 72 Size: 4
	char pad_76[132];  // Offset: 76 Size: 132



 // Functions 
 public:
}; 
 
 //ScriptStruct Paper2D.SpriteAssetInitParameters Size 64
class FSpriteAssetInitParameters
{

 public: 
	char pad_0[64];  // Offset: 0 Size: 64



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness Size 8
class FSetDefaultCollisionThickness
{

 public: 
	float Thickness;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bRebuildCollision : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperSpriteComponent.GetSprite Size 8
class FGetSprite
{

 public: 
	struct UPaperSprite* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime Size 12
class FGetKeyFrameIndexAtTime
{

 public: 
	float Time;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bClampToEnds : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	int32_t ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbook.GetNumFrames Size 4
class FGetNumFrames
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperGroupedSpriteComponent.AddInstance Size 80
class FAddInstance
{

 public: 
	struct FTransform Transform;  // Offset: 0 Size: 48
	struct UPaperSprite* Sprite;  // Offset: 48 Size: 8
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bWorldSpace : 1;  // Offset: 56 Size: 1
	char pad_57[3];  // Offset: 57 Size: 3
	struct FLinearColor Color;  // Offset: 60 Size: 16
	int32_t ReturnValue;  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.SetLooping Size 1
class FSetLooping
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bNewLooping : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbook.GetNumKeyFrames Size 4
class FGetNumKeyFrames
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbook.GetSpriteAtFrame Size 16
class FGetSpriteAtFrame
{

 public: 
	int32_t FrameIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UPaperSprite* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbook.GetSpriteAtTime Size 16
class FGetSpriteAtTime
{

 public: 
	float Time;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bClampToEnds : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	struct UPaperSprite* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex Size 8
class FIsValidKeyFrameIndex
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbook.GetTotalDuration Size 4
class FGetTotalDuration
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.GetFlipbookLength Size 4
class FGetFlipbookLength
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.GetFlipbook Size 8
class FGetFlipbook
{

 public: 
	struct UPaperFlipbook* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames Size 4
class FGetFlipbookLengthInFrames
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate Size 4
class FGetFlipbookFramerate
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition Size 4
class FGetPlaybackPosition
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames Size 4
class FGetPlaybackPositionInFrames
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.ResizeMap Size 8
class FResizeMap
{

 public: 
	int32_t NewWidthInTiles;  // Offset: 0 Size: 4
	int32_t NewHeightInTiles;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.IsLooping Size 1
class FIsLooping
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperSpriteComponent.SetSpriteColor Size 16
class FSetSpriteColor
{

 public: 
	struct FLinearColor NewColor;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.IsPlaying Size 1
class FIsPlaying
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor Size 24
class FUpdateInstanceColor
{

 public: 
	int32_t InstanceIndex;  // Offset: 0 Size: 4
	struct FLinearColor NewInstanceColor;  // Offset: 4 Size: 16
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bMarkRenderStateDirty : 1;  // Offset: 20 Size: 1
	char pad_21_1 : 7;  // Offset: 21 Size: 1
	bool ReturnValue : 1;  // Offset: 21 Size: 1
	char pad_22[2];  // Offset: 22 Size: 2



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.IsReversing Size 1
class FIsReversing
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.SetFlipbook Size 16
class FSetFlipbook
{

 public: 
	struct UPaperFlipbook* NewFlipbook;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.GetTileMapColor Size 16
class FGetTileMapColor
{

 public: 
	struct FLinearColor ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.SetNewTime Size 4
class FSetNewTime
{

 public: 
	float NewTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.CreateNewTileMap Size 24
class FCreateNewTileMap
{

 public: 
	int32_t MapWidth;  // Offset: 0 Size: 4
	int32_t MapHeight;  // Offset: 4 Size: 4
	int32_t TileWidth;  // Offset: 8 Size: 4
	int32_t TileHeight;  // Offset: 12 Size: 4
	float PixelsPerUnrealUnit;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bCreateLayer : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition Size 8
class FSetPlaybackPosition
{

 public: 
	float NewPosition;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bFireEvents : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform Size 80
class FUpdateInstanceTransform
{

 public: 
	int32_t InstanceIndex;  // Offset: 0 Size: 4
	char pad_4[12];  // Offset: 4 Size: 12
	struct FTransform NewInstanceTransform;  // Offset: 16 Size: 48
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bWorldSpace : 1;  // Offset: 64 Size: 1
	char pad_65_1 : 7;  // Offset: 65 Size: 1
	bool bMarkRenderStateDirty : 1;  // Offset: 65 Size: 1
	char pad_66_1 : 7;  // Offset: 66 Size: 1
	bool bTeleport : 1;  // Offset: 66 Size: 1
	char pad_67_1 : 7;  // Offset: 67 Size: 1
	bool ReturnValue : 1;  // Offset: 67 Size: 1
	char pad_68[12];  // Offset: 68 Size: 12



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames Size 8
class FSetPlaybackPositionInFrames
{

 public: 
	int32_t NewFramePosition;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bFireEvents : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount Size 4
class FGetInstanceCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance Size 8
class FRemoveInstance
{

 public: 
	int32_t InstanceIndex;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis Size 12
class FSortInstancesAlongAxis
{

 public: 
	struct FVector WorldSpaceSortAxis;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.GetTileCornerPosition Size 28
class FGetTileCornerPosition
{

 public: 
	int32_t TileX;  // Offset: 0 Size: 4
	int32_t TileY;  // Offset: 4 Size: 4
	int32_t LayerIndex;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bWorldSpace : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	struct FVector ReturnValue;  // Offset: 16 Size: 12



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperSpriteComponent.SetSprite Size 16
class FSetSprite
{

 public: 
	struct UPaperSprite* NewSprite;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.AddNewLayer Size 8
class FAddNewLayer
{

 public: 
	struct UPaperTileLayer* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.GetMapSize Size 12
class FGetMapSize
{

 public: 
	int32_t MapWidth;  // Offset: 0 Size: 4
	int32_t MapHeight;  // Offset: 4 Size: 4
	int32_t NumLayers;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.GetTile Size 32
class FGetTile
{

 public: 
	int32_t X;  // Offset: 0 Size: 4
	int32_t Y;  // Offset: 4 Size: 4
	int32_t Layer;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FPaperTileInfo ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.GetTileCenterPosition Size 28
class FGetTileCenterPosition
{

 public: 
	int32_t TileX;  // Offset: 0 Size: 4
	int32_t TileY;  // Offset: 4 Size: 4
	int32_t LayerIndex;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bWorldSpace : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	struct FVector ReturnValue;  // Offset: 16 Size: 12



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.OwnsTileMap Size 1
class FOwnsTileMap
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.SetLayerCollision Size 24
class FSetLayerCollision
{

 public: 
	int32_t Layer;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bHasCollision : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool bOverrideThickness : 1;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2
	float CustomThickness;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bOverrideOffset : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	float CustomOffset;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bRebuildCollision : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.SetLayerColor Size 20
class FSetLayerColor
{

 public: 
	struct FLinearColor NewColor;  // Offset: 0 Size: 16
	int32_t Layer;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.SetTileMap Size 16
class FSetTileMap
{

 public: 
	struct UPaperTileMap* NewTileMap;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function Paper2D.PaperTileMapComponent.SetTileMapColor Size 16
class FSetTileMapColor
{

 public: 
	struct FLinearColor NewColor;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function Paper2D.TileMapBlueprintLibrary.BreakTile Size 40
class FBreakTile
{

 public: 
	struct FPaperTileInfo Tile;  // Offset: 0 Size: 16
	int32_t TileIndex;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct UPaperTileSet* TileSet;  // Offset: 24 Size: 8
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bFlipH : 1;  // Offset: 32 Size: 1
	char pad_33_1 : 7;  // Offset: 33 Size: 1
	bool bFlipV : 1;  // Offset: 33 Size: 1
	char pad_34_1 : 7;  // Offset: 34 Size: 1
	bool bFlipD : 1;  // Offset: 34 Size: 1
	char pad_35[5];  // Offset: 35 Size: 5



 // Functions 
 public:
}; 
 
 //Function Paper2D.TileMapBlueprintLibrary.GetTileTransform Size 64
class FGetTileTransform
{

 public: 
	struct FPaperTileInfo Tile;  // Offset: 0 Size: 16
	struct FTransform ReturnValue;  // Offset: 16 Size: 48



 // Functions 
 public:
}; 
 
 //Function Paper2D.TileMapBlueprintLibrary.GetTileUserData Size 24
class FGetTileUserData
{

 public: 
	struct FPaperTileInfo Tile;  // Offset: 0 Size: 16
	struct FName ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function Paper2D.TileMapBlueprintLibrary.MakeTile Size 40
class FMakeTile
{

 public: 
	int32_t TileIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UPaperTileSet* TileSet;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bFlipH : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool bFlipV : 1;  // Offset: 17 Size: 1
	char pad_18_1 : 7;  // Offset: 18 Size: 1
	bool bFlipD : 1;  // Offset: 18 Size: 1
	char pad_19[5];  // Offset: 19 Size: 5
	struct FPaperTileInfo ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 