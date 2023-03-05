#pragma once 
#include <Paper2D_Structs.h>
 
 
 
class UMaterialExpressionSpriteTextureSampler
{
public:
	UMaterialExpressionSpriteTextureSampler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSampleAdditionalTextures() {
		return memory.read<bool>(m_addr + 128);
	}
	int32_t GetAdditionalSlotIndex() {
		return memory.read<int32_t>(m_addr + 132);
	}
	struct FText GetSlotDisplayName() {
		return memory.read<struct FText>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPaperRuntimeSettings
{
public:
	UPaperRuntimeSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnableSpriteAtlasGroups() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbEnableTerrainSplineEditing() {
		return memory.read<bool>(m_addr + 41);
	}
	bool GetbResizeSpriteDataToMatchTextures() {
		return memory.read<bool>(m_addr + 42);
	}

private:
	std::uint64_t m_addr = 0;
};


class APaperCharacter
{
public:
	APaperCharacter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperFlipbookComponent GetSprite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct UPaperFlipbookComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class APaperGroupedSpriteActor
{
public:
	APaperGroupedSpriteActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperGroupedSpriteComponent GetRenderComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UPaperGroupedSpriteComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPaperFlipbook
{
public:
	UPaperFlipbook(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFramesPerSecond() {
		return memory.read<float>(m_addr + 40);
	}
	struct TArray<struct FPaperFlipbookKeyFrame> GetKeyFrames() {
		return memory.read<struct TArray<struct FPaperFlipbookKeyFrame>>(m_addr + 48);
	}
	struct UMaterialInterface GetDefaultMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UMaterialInterface(ptr_addr);
	}
	enum class EFlipbookCollisionMode GetCollisionSource() {
		return memory.read<enum class EFlipbookCollisionMode>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPaperGroupedSpriteComponent
{
public:
	UPaperGroupedSpriteComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMaterialInterface> GetInstanceMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct TArray<struct FSpriteInstanceData> GetPerInstanceSpriteData() {
		return memory.read<struct TArray<struct FSpriteInstanceData>>(m_addr + 1208);
	}

private:
	std::uint64_t m_addr = 0;
};


class APaperFlipbookActor
{
public:
	APaperFlipbookActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperFlipbookComponent GetRenderComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UPaperFlipbookComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPaperFlipbookComponent
{
public:
	UPaperFlipbookComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperFlipbook GetSourceFlipbook() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct UPaperFlipbook(ptr_addr);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct UMaterialInterface(ptr_addr);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 1208);
	}
	char GetbLooping() {
		return memory.read<char>(m_addr + 1212);
	}
	char GetbReversePlayback() {
		return memory.read<char>(m_addr + 1212);
	}
	char GetbPlaying() {
		return memory.read<char>(m_addr + 1212);
	}
	float GetAccumulatedTime() {
		return memory.read<float>(m_addr + 1216);
	}
	int32_t GetCachedFrameIndex() {
		return memory.read<int32_t>(m_addr + 1220);
	}
	struct FLinearColor GetSpriteColor() {
		return memory.read<struct FLinearColor>(m_addr + 1224);
	}
	struct UBodySetup GetCachedBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1240);
		return struct UBodySetup(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnFinishedPlaying() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1248);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTileMapBlueprintLibrary
{
public:
	UTileMapBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPaperSprite
{
public:
	UPaperSprite(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UTexture> GetAdditionalSourceTextures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UTexture>(ptr_addr);
	}
	struct FVector2D GetBakedSourceUV() {
		return memory.read<struct FVector2D>(m_addr + 72);
	}
	struct FVector2D GetBakedSourceDimension() {
		return memory.read<struct FVector2D>(m_addr + 80);
	}
	struct UTexture2D GetBakedSourceTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UTexture2D(ptr_addr);
	}
	struct UMaterialInterface GetDefaultMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetAlternateMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UMaterialInterface(ptr_addr);
	}
	struct TArray<struct FPaperSpriteSocket> GetSockets() {
		return memory.read<struct TArray<struct FPaperSpriteSocket>>(m_addr + 112);
	}
	enum class ESpriteCollisionMode GetSpriteCollisionDomain() {
		return memory.read<enum class ESpriteCollisionMode>(m_addr + 128);
	}
	float GetPixelsPerUnrealUnit() {
		return memory.read<float>(m_addr + 132);
	}
	struct UBodySetup GetBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UBodySetup(ptr_addr);
	}
	int32_t GetAlternateMaterialSplitIndex() {
		return memory.read<int32_t>(m_addr + 144);
	}
	struct TArray<struct FVector4> GetBakedRenderData() {
		return memory.read<struct TArray<struct FVector4>>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class APaperSpriteActor
{
public:
	APaperSpriteActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperSpriteComponent GetRenderComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UPaperSpriteComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPaperSpriteAtlas
{
public:
	UPaperSpriteAtlas(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPaperSpriteBlueprintLibrary
{
public:
	UPaperSpriteBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPaperSpriteComponent
{
public:
	UPaperSpriteComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperSprite GetSourceSprite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct UPaperSprite(ptr_addr);
	}
	struct UMaterialInterface GetMaterialOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FLinearColor GetSpriteColor() {
		return memory.read<struct FLinearColor>(m_addr + 1208);
	}

private:
	std::uint64_t m_addr = 0;
};


class APaperTerrainActor
{
public:
	APaperTerrainActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetDummyRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct USceneComponent(ptr_addr);
	}
	struct UPaperTerrainSplineComponent GetSplineComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UPaperTerrainSplineComponent(ptr_addr);
	}
	struct UPaperTerrainComponent GetRenderComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UPaperTerrainComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPaperTerrainComponent
{
public:
	UPaperTerrainComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperTerrainMaterial GetTerrainMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UPaperTerrainMaterial(ptr_addr);
	}
	bool GetbClosedSpline() {
		return memory.read<bool>(m_addr + 1144);
	}
	bool GetbFilledSpline() {
		return memory.read<bool>(m_addr + 1145);
	}
	struct UPaperTerrainSplineComponent GetAssociatedSpline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct UPaperTerrainSplineComponent(ptr_addr);
	}
	int32_t GetRandomSeed() {
		return memory.read<int32_t>(m_addr + 1160);
	}
	float GetSegmentOverlapAmount() {
		return memory.read<float>(m_addr + 1164);
	}
	struct FLinearColor GetTerrainColor() {
		return memory.read<struct FLinearColor>(m_addr + 1168);
	}
	int32_t GetReparamStepsPerSegment() {
		return memory.read<int32_t>(m_addr + 1184);
	}
	enum class ESpriteCollisionMode GetSpriteCollisionDomain() {
		return memory.read<enum class ESpriteCollisionMode>(m_addr + 1188);
	}
	float GetCollisionThickness() {
		return memory.read<float>(m_addr + 1192);
	}
	struct UBodySetup GetCachedBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct UBodySetup(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPaperTerrainMaterial
{
public:
	UPaperTerrainMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPaperTerrainMaterialRule> GetRules() {
		return memory.read<struct TArray<struct FPaperTerrainMaterialRule>>(m_addr + 48);
	}
	struct UPaperSprite GetInteriorFill() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UPaperSprite(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPaperTerrainSplineComponent
{
public:
	UPaperTerrainSplineComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPaperTileLayer
{
public:
	UPaperTileLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetLayerName() {
		return memory.read<struct FText>(m_addr + 40);
	}
	int32_t GetLayerWidth() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t GetLayerHeight() {
		return memory.read<int32_t>(m_addr + 68);
	}
	char GetbHiddenInGame() {
		return memory.read<char>(m_addr + 72);
	}
	char GetbLayerCollides() {
		return memory.read<char>(m_addr + 72);
	}
	char GetbOverrideCollisionThickness() {
		return memory.read<char>(m_addr + 72);
	}
	char GetbOverrideCollisionOffset() {
		return memory.read<char>(m_addr + 72);
	}
	float GetCollisionThicknessOverride() {
		return memory.read<float>(m_addr + 76);
	}
	float GetCollisionOffsetOverride() {
		return memory.read<float>(m_addr + 80);
	}
	struct FLinearColor GetLayerColor() {
		return memory.read<struct FLinearColor>(m_addr + 84);
	}
	int32_t GetAllocatedWidth() {
		return memory.read<int32_t>(m_addr + 100);
	}
	int32_t GetAllocatedHeight() {
		return memory.read<int32_t>(m_addr + 104);
	}
	struct TArray<struct FPaperTileInfo> GetAllocatedCells() {
		return memory.read<struct TArray<struct FPaperTileInfo>>(m_addr + 112);
	}
	struct UPaperTileSet GetTileSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct UPaperTileSet(ptr_addr);
	}
	struct TArray<int32_t> GetAllocatedGrid() {
		return memory.read<struct TArray<int32_t>>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPaperTileMap
{
public:
	UPaperTileMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMapWidth() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetMapHeight() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetTileWidth() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetTileHeight() {
		return memory.read<int32_t>(m_addr + 52);
	}
	float GetPixelsPerUnrealUnit() {
		return memory.read<float>(m_addr + 56);
	}
	float GetSeparationPerTileX() {
		return memory.read<float>(m_addr + 60);
	}
	float GetSeparationPerTileY() {
		return memory.read<float>(m_addr + 64);
	}
	float GetSeparationPerLayer() {
		return memory.read<float>(m_addr + 68);
	}
	struct TSoftObjectPtr<UPaperTileSet> GetSelectedTileSet() {
		return memory.read<struct TSoftObjectPtr<UPaperTileSet>>(m_addr + 72);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UMaterialInterface(ptr_addr);
	}
	struct TArray<struct UPaperTileLayer> GetTileLayers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct TArray<struct UPaperTileLayer>(ptr_addr);
	}
	float GetCollisionThickness() {
		return memory.read<float>(m_addr + 136);
	}
	enum class ESpriteCollisionMode GetSpriteCollisionDomain() {
		return memory.read<enum class ESpriteCollisionMode>(m_addr + 140);
	}
	enum class ETileMapProjectionMode GetProjectionMode() {
		return memory.read<enum class ETileMapProjectionMode>(m_addr + 141);
	}
	int32_t GetHexSideLength() {
		return memory.read<int32_t>(m_addr + 144);
	}
	struct UBodySetup GetBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UBodySetup(ptr_addr);
	}
	int32_t GetLayerNameIndex() {
		return memory.read<int32_t>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class APaperTileMapActor
{
public:
	APaperTileMapActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperTileMapComponent GetRenderComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UPaperTileMapComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPaperTileMapComponent
{
public:
	UPaperTileMapComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMapWidth() {
		return memory.read<int32_t>(m_addr + 1192);
	}
	int32_t GetMapHeight() {
		return memory.read<int32_t>(m_addr + 1196);
	}
	int32_t GetTileWidth() {
		return memory.read<int32_t>(m_addr + 1200);
	}
	int32_t GetTileHeight() {
		return memory.read<int32_t>(m_addr + 1204);
	}
	struct UPaperTileSet GetDefaultLayerTileSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct UPaperTileSet(ptr_addr);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UMaterialInterface(ptr_addr);
	}
	struct TArray<struct UPaperTileLayer> GetTileLayers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1224);
		return struct TArray<struct UPaperTileLayer>(ptr_addr);
	}
	struct FLinearColor GetTileMapColor() {
		return memory.read<struct FLinearColor>(m_addr + 1240);
	}
	int32_t GetUseSingleLayerIndex() {
		return memory.read<int32_t>(m_addr + 1256);
	}
	bool GetbUseSingleLayer() {
		return memory.read<bool>(m_addr + 1260);
	}
	struct UPaperTileMap GetTileMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UPaperTileMap(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPaperTileSet
{
public:
	UPaperTileSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FIntPoint GetTileSize() {
		return memory.read<struct FIntPoint>(m_addr + 40);
	}
	struct UTexture2D GetTileSheet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UTexture2D(ptr_addr);
	}
	struct TArray<struct UTexture> GetAdditionalSourceTextures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UTexture>(ptr_addr);
	}
	struct FIntMargin GetBorderMargin() {
		return memory.read<struct FIntMargin>(m_addr + 72);
	}
	struct FIntPoint GetPerTileSpacing() {
		return memory.read<struct FIntPoint>(m_addr + 88);
	}
	struct FIntPoint GetDrawingOffset() {
		return memory.read<struct FIntPoint>(m_addr + 96);
	}
	int32_t GetWidthInTiles() {
		return memory.read<int32_t>(m_addr + 104);
	}
	int32_t GetHeightInTiles() {
		return memory.read<int32_t>(m_addr + 108);
	}
	int32_t GetAllocatedWidth() {
		return memory.read<int32_t>(m_addr + 112);
	}
	int32_t GetAllocatedHeight() {
		return memory.read<int32_t>(m_addr + 116);
	}
	struct TArray<struct FPaperTileMetadata> GetPerTileData() {
		return memory.read<struct TArray<struct FPaperTileMetadata>>(m_addr + 120);
	}
	struct TArray<struct FPaperTileSetTerrain> GetTerrains() {
		return memory.read<struct TArray<struct FPaperTileSetTerrain>>(m_addr + 136);
	}
	int32_t GetTileWidth() {
		return memory.read<int32_t>(m_addr + 152);
	}
	int32_t GetTileHeight() {
		return memory.read<int32_t>(m_addr + 156);
	}
	int32_t GetMargin() {
		return memory.read<int32_t>(m_addr + 160);
	}
	int32_t GetSpacing() {
		return memory.read<int32_t>(m_addr + 164);
	}

private:
	std::uint64_t m_addr = 0;
};


