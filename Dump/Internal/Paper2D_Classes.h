#pragma once 
#include <Paper2D_Structs.h>
 
 
 
//Class Paper2D.MaterialExpressionSpriteTextureSampler Size 160
// Inherited 128 bytes 
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{

 public: 
	char pad_128_1 : 7;  // Offset: 128 Size: 1
	bool bSampleAdditionalTextures : 1;  // Offset: 128 Size: 1
	char pad_129[3];  // Offset: 129 Size: 3
	int32_t AdditionalSlotIndex;  // Offset: 132 Size: 4
	struct FText SlotDisplayName;  // Offset: 136 Size: 24



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperRuntimeSettings Size 48
// Inherited 40 bytes 
class UPaperRuntimeSettings : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bEnableSpriteAtlasGroups : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bEnableTerrainSplineEditing : 1;  // Offset: 41 Size: 1
	char pad_42_1 : 7;  // Offset: 42 Size: 1
	bool bResizeSpriteDataToMatchTextures : 1;  // Offset: 42 Size: 1
	char pad_43[5];  // Offset: 43 Size: 5



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperCharacter Size 1216
// Inherited 1216 bytes 
class APaperCharacter : public ACharacter
{

 public: 
	struct UPaperFlipbookComponent* Sprite;  // Offset: 1208 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperGroupedSpriteActor Size 552
// Inherited 544 bytes 
class APaperGroupedSpriteActor : public AActor
{

 public: 
	struct UPaperGroupedSpriteComponent* RenderComponent;  // Offset: 544 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperFlipbook Size 80
// Inherited 40 bytes 
class UPaperFlipbook : public UObject
{

 public: 
	float FramesPerSecond;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames;  // Offset: 48 Size: 16
	struct UMaterialInterface* DefaultMaterial;  // Offset: 64 Size: 8
	enum class EFlipbookCollisionMode CollisionSource;  // Offset: 72 Size: 1
	char pad_73[7];  // Offset: 73 Size: 7



 // Functions 
 public:
	bool IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	float GetTotalDuration(); // Function Paper2D.PaperFlipbook.GetTotalDuration
	struct UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetSpriteAtTime
	struct UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex); // Function Paper2D.PaperFlipbook.GetSpriteAtFrame
	int32_t GetNumKeyFrames(); // Function Paper2D.PaperFlipbook.GetNumKeyFrames
	int32_t GetNumFrames(); // Function Paper2D.PaperFlipbook.GetNumFrames
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
}; 
 
 


//Class Paper2D.PaperGroupedSpriteComponent Size 1248
// Inherited 1200 bytes 
class UPaperGroupedSpriteComponent : public UMeshComponent
{

 public: 
	struct TArray<struct UMaterialInterface*> InstanceMaterials;  // Offset: 1192 Size: 16
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData;  // Offset: 1208 Size: 16
	char pad_1232[16];  // Offset: 1232 Size: 16



 // Functions 
 public:
	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	bool UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis); // Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	bool RemoveInstance(int32_t InstanceIndex); // Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	int32_t GetInstanceCount(); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	void ClearInstances(); // Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
	int32_t AddInstance(struct FTransform& Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color); // Function Paper2D.PaperGroupedSpriteComponent.AddInstance
}; 
 
 


//Class Paper2D.PaperFlipbookActor Size 552
// Inherited 544 bytes 
class APaperFlipbookActor : public AActor
{

 public: 
	struct UPaperFlipbookComponent* RenderComponent;  // Offset: 544 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperFlipbookComponent Size 1264
// Inherited 1200 bytes 
class UPaperFlipbookComponent : public UMeshComponent
{

 public: 
	struct UPaperFlipbook* SourceFlipbook;  // Offset: 1192 Size: 8
	struct UMaterialInterface* Material;  // Offset: 1200 Size: 8
	float PlayRate;  // Offset: 1208 Size: 4
	char bLooping : 1;  // Offset: 1212 Size: 1
	char bReversePlayback : 1;  // Offset: 1212 Size: 1
	char bPlaying : 1;  // Offset: 1212 Size: 1
	float AccumulatedTime;  // Offset: 1216 Size: 4
	int32_t CachedFrameIndex;  // Offset: 1220 Size: 4
	struct FLinearColor SpriteColor;  // Offset: 1224 Size: 16
	struct UBodySetup* CachedBodySetup;  // Offset: 1240 Size: 8
	struct FMulticastInlineDelegate OnFinishedPlaying;  // Offset: 1248 Size: 16



 // Functions 
 public:
	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop
	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperFlipbookComponent.SetSpriteColor
	void SetPlayRate(float NewRate); // Function Paper2D.PaperFlipbookComponent.SetPlayRate
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	void SetPlaybackPosition(float NewPosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	void SetNewTime(float NewTime); // Function Paper2D.PaperFlipbookComponent.SetNewTime
	void SetLooping(bool bNewLooping); // Function Paper2D.PaperFlipbookComponent.SetLooping
	bool SetFlipbook(struct UPaperFlipbook* NewFlipbook); // Function Paper2D.PaperFlipbookComponent.SetFlipbook
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play
	void OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	bool IsReversing(); // Function Paper2D.PaperFlipbookComponent.IsReversing
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying
	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping
	struct FLinearColor GetSpriteColor(); // Function Paper2D.PaperFlipbookComponent.GetSpriteColor
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate
	int32_t GetPlaybackPositionInFrames(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	float GetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	int32_t GetFlipbookLengthInFrames(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	float GetFlipbookLength(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
	float GetFlipbookFramerate(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	struct UPaperFlipbook* GetFlipbook(); // Function Paper2D.PaperFlipbookComponent.GetFlipbook
}; 
 
 


//Class Paper2D.TileMapBlueprintLibrary Size 40
// Inherited 40 bytes 
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct FPaperTileInfo MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Function Paper2D.TileMapBlueprintLibrary.MakeTile
	struct FName GetTileUserData(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
	struct FTransform GetTileTransform(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
	void BreakTile(struct FPaperTileInfo Tile, int32_t& TileIndex, struct UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // Function Paper2D.TileMapBlueprintLibrary.BreakTile
}; 
 
 


//Class Paper2D.PaperSprite Size 168
// Inherited 40 bytes 
class UPaperSprite : public UObject
{

 public: 
	char pad_40[16];  // Offset: 40 Size: 16
	struct TArray<struct UTexture*> AdditionalSourceTextures;  // Offset: 56 Size: 16
	struct FVector2D BakedSourceUV;  // Offset: 72 Size: 8
	struct FVector2D BakedSourceDimension;  // Offset: 80 Size: 8
	struct UTexture2D* BakedSourceTexture;  // Offset: 88 Size: 8
	struct UMaterialInterface* DefaultMaterial;  // Offset: 96 Size: 8
	struct UMaterialInterface* AlternateMaterial;  // Offset: 104 Size: 8
	struct TArray<struct FPaperSpriteSocket> Sockets;  // Offset: 112 Size: 16
	enum class ESpriteCollisionMode SpriteCollisionDomain;  // Offset: 128 Size: 1
	char pad_129[3];  // Offset: 129 Size: 3
	float PixelsPerUnrealUnit;  // Offset: 132 Size: 4
	struct UBodySetup* BodySetup;  // Offset: 136 Size: 8
	int32_t AlternateMaterialSplitIndex;  // Offset: 144 Size: 4
	char pad_148[4];  // Offset: 148 Size: 4
	struct TArray<struct FVector4> BakedRenderData;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperSpriteActor Size 552
// Inherited 544 bytes 
class APaperSpriteActor : public AActor
{

 public: 
	struct UPaperSpriteComponent* RenderComponent;  // Offset: 544 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperSpriteAtlas Size 40
// Inherited 40 bytes 
class UPaperSpriteAtlas : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperSpriteBlueprintLibrary Size 40
// Inherited 40 bytes 
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct FSlateBrush MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height); // Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
}; 
 
 


//Class Paper2D.PaperSpriteComponent Size 1232
// Inherited 1200 bytes 
class UPaperSpriteComponent : public UMeshComponent
{

 public: 
	struct UPaperSprite* SourceSprite;  // Offset: 1192 Size: 8
	struct UMaterialInterface* MaterialOverride;  // Offset: 1200 Size: 8
	struct FLinearColor SpriteColor;  // Offset: 1208 Size: 16



 // Functions 
 public:
	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor
	bool SetSprite(struct UPaperSprite* NewSprite); // Function Paper2D.PaperSpriteComponent.SetSprite
	struct UPaperSprite* GetSprite(); // Function Paper2D.PaperSpriteComponent.GetSprite
}; 
 
 


//Class Paper2D.PaperTerrainActor Size 568
// Inherited 544 bytes 
class APaperTerrainActor : public AActor
{

 public: 
	struct USceneComponent* DummyRoot;  // Offset: 544 Size: 8
	struct UPaperTerrainSplineComponent* SplineComponent;  // Offset: 552 Size: 8
	struct UPaperTerrainComponent* RenderComponent;  // Offset: 560 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperTerrainComponent Size 1232
// Inherited 1136 bytes 
class UPaperTerrainComponent : public UPrimitiveComponent
{

 public: 
	struct UPaperTerrainMaterial* TerrainMaterial;  // Offset: 1136 Size: 8
	char pad_1144_1 : 7;  // Offset: 1144 Size: 1
	bool bClosedSpline : 1;  // Offset: 1144 Size: 1
	char pad_1145_1 : 7;  // Offset: 1145 Size: 1
	bool bFilledSpline : 1;  // Offset: 1145 Size: 1
	char pad_1146[6];  // Offset: 1146 Size: 6
	struct UPaperTerrainSplineComponent* AssociatedSpline;  // Offset: 1152 Size: 8
	int32_t RandomSeed;  // Offset: 1160 Size: 4
	float SegmentOverlapAmount;  // Offset: 1164 Size: 4
	struct FLinearColor TerrainColor;  // Offset: 1168 Size: 16
	int32_t ReparamStepsPerSegment;  // Offset: 1184 Size: 4
	enum class ESpriteCollisionMode SpriteCollisionDomain;  // Offset: 1188 Size: 1
	char pad_1189[3];  // Offset: 1189 Size: 3
	float CollisionThickness;  // Offset: 1192 Size: 4
	char pad_1196[4];  // Offset: 1196 Size: 4
	struct UBodySetup* CachedBodySetup;  // Offset: 1200 Size: 8
	char pad_1208[24];  // Offset: 1208 Size: 24



 // Functions 
 public:
	void SetTerrainColor(struct FLinearColor NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor
}; 
 
 


//Class Paper2D.PaperTerrainMaterial Size 72
// Inherited 48 bytes 
class UPaperTerrainMaterial : public UDataAsset
{

 public: 
	struct TArray<struct FPaperTerrainMaterialRule> Rules;  // Offset: 48 Size: 16
	struct UPaperSprite* InteriorFill;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperTerrainSplineComponent Size 1408
// Inherited 1392 bytes 
class UPaperTerrainSplineComponent : public USplineComponent
{

 public: 
	char pad_1392[16];  // Offset: 1392 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperTileLayer Size 152
// Inherited 40 bytes 
class UPaperTileLayer : public UObject
{

 public: 
	struct FText LayerName;  // Offset: 40 Size: 24
	int32_t LayerWidth;  // Offset: 64 Size: 4
	int32_t LayerHeight;  // Offset: 68 Size: 4
	char bHiddenInGame : 1;  // Offset: 72 Size: 1
	char bLayerCollides : 1;  // Offset: 72 Size: 1
	char bOverrideCollisionThickness : 1;  // Offset: 72 Size: 1
	char bOverrideCollisionOffset : 1;  // Offset: 72 Size: 1
	char pad_72_1 : 4;  // Offset: 72 Size: 1
	char pad_73[4];  // Offset: 73 Size: 4
	float CollisionThicknessOverride;  // Offset: 76 Size: 4
	float CollisionOffsetOverride;  // Offset: 80 Size: 4
	struct FLinearColor LayerColor;  // Offset: 84 Size: 16
	int32_t AllocatedWidth;  // Offset: 100 Size: 4
	int32_t AllocatedHeight;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4
	struct TArray<struct FPaperTileInfo> AllocatedCells;  // Offset: 112 Size: 16
	struct UPaperTileSet* TileSet;  // Offset: 128 Size: 8
	struct TArray<int32_t> AllocatedGrid;  // Offset: 136 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperTileMap Size 168
// Inherited 40 bytes 
class UPaperTileMap : public UObject
{

 public: 
	int32_t MapWidth;  // Offset: 40 Size: 4
	int32_t MapHeight;  // Offset: 44 Size: 4
	int32_t TileWidth;  // Offset: 48 Size: 4
	int32_t TileHeight;  // Offset: 52 Size: 4
	float PixelsPerUnrealUnit;  // Offset: 56 Size: 4
	float SeparationPerTileX;  // Offset: 60 Size: 4
	float SeparationPerTileY;  // Offset: 64 Size: 4
	float SeparationPerLayer;  // Offset: 68 Size: 4
	struct TSoftObjectPtr<UPaperTileSet> SelectedTileSet;  // Offset: 72 Size: 40
	struct UMaterialInterface* Material;  // Offset: 112 Size: 8
	struct TArray<struct UPaperTileLayer*> TileLayers;  // Offset: 120 Size: 16
	float CollisionThickness;  // Offset: 136 Size: 4
	enum class ESpriteCollisionMode SpriteCollisionDomain;  // Offset: 140 Size: 1
	enum class ETileMapProjectionMode ProjectionMode;  // Offset: 141 Size: 1
	char pad_142[2];  // Offset: 142 Size: 2
	int32_t HexSideLength;  // Offset: 144 Size: 4
	char pad_148[4];  // Offset: 148 Size: 4
	struct UBodySetup* BodySetup;  // Offset: 152 Size: 8
	int32_t LayerNameIndex;  // Offset: 160 Size: 4
	char pad_164[4];  // Offset: 164 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperTileMapActor Size 552
// Inherited 544 bytes 
class APaperTileMapActor : public AActor
{

 public: 
	struct UPaperTileMapComponent* RenderComponent;  // Offset: 544 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Paper2D.PaperTileMapComponent Size 1280
// Inherited 1200 bytes 
class UPaperTileMapComponent : public UMeshComponent
{

 public: 
	int32_t MapWidth;  // Offset: 1192 Size: 4
	int32_t MapHeight;  // Offset: 1196 Size: 4
	int32_t TileWidth;  // Offset: 1200 Size: 4
	int32_t TileHeight;  // Offset: 1204 Size: 4
	struct UPaperTileSet* DefaultLayerTileSet;  // Offset: 1208 Size: 8
	struct UMaterialInterface* Material;  // Offset: 1216 Size: 8
	struct TArray<struct UPaperTileLayer*> TileLayers;  // Offset: 1224 Size: 16
	struct FLinearColor TileMapColor;  // Offset: 1240 Size: 16
	int32_t UseSingleLayerIndex;  // Offset: 1256 Size: 4
	char pad_1268_1 : 7;  // Offset: 1268 Size: 1
	bool bUseSingleLayer : 1;  // Offset: 1260 Size: 1
	struct UPaperTileMap* TileMap;  // Offset: 1264 Size: 8
	char pad_1277[3];  // Offset: 1277 Size: 3



 // Functions 
 public:
	void SetTileMapColor(struct FLinearColor NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor
	bool SetTileMap(struct UPaperTileMap* NewTileMap); // Function Paper2D.PaperTileMapComponent.SetTileMap
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue); // Function Paper2D.PaperTileMapComponent.SetTile
	void SetLayerColor(struct FLinearColor NewColor, int32_t Layer); // Function Paper2D.PaperTileMapComponent.SetLayerColor
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetLayerCollision
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // Function Paper2D.PaperTileMapComponent.ResizeMap
	void RebuildCollision(); // Function Paper2D.PaperTileMapComponent.RebuildCollision
	bool OwnsTileMap(); // Function Paper2D.PaperTileMapComponent.OwnsTileMap
	void MakeTileMapEditable(); // Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTilePolygon
	struct FLinearColor GetTileMapColor(); // Function Paper2D.PaperTileMapComponent.GetTileMapColor
	struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
	struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
	struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetTile
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers); // Function Paper2D.PaperTileMapComponent.GetMapSize
	struct FLinearColor GetLayerColor(int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetLayerColor
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap
	struct UPaperTileLayer* AddNewLayer(); // Function Paper2D.PaperTileMapComponent.AddNewLayer
}; 
 
 


//Class Paper2D.PaperTileSet Size 168
// Inherited 40 bytes 
class UPaperTileSet : public UObject
{

 public: 
	struct FIntPoint TileSize;  // Offset: 40 Size: 8
	struct UTexture2D* TileSheet;  // Offset: 48 Size: 8
	struct TArray<struct UTexture*> AdditionalSourceTextures;  // Offset: 56 Size: 16
	struct FIntMargin BorderMargin;  // Offset: 72 Size: 16
	struct FIntPoint PerTileSpacing;  // Offset: 88 Size: 8
	struct FIntPoint DrawingOffset;  // Offset: 96 Size: 8
	int32_t WidthInTiles;  // Offset: 104 Size: 4
	int32_t HeightInTiles;  // Offset: 108 Size: 4
	int32_t AllocatedWidth;  // Offset: 112 Size: 4
	int32_t AllocatedHeight;  // Offset: 116 Size: 4
	struct TArray<struct FPaperTileMetadata> PerTileData;  // Offset: 120 Size: 16
	struct TArray<struct FPaperTileSetTerrain> Terrains;  // Offset: 136 Size: 16
	int32_t TileWidth;  // Offset: 152 Size: 4
	int32_t TileHeight;  // Offset: 156 Size: 4
	int32_t Margin;  // Offset: 160 Size: 4
	int32_t Spacing;  // Offset: 164 Size: 4



 // Functions 
 public:
}; 
 
 


