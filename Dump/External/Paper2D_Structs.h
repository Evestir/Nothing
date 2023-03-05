#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSpriteGeometryCollection
{
public:
	FSpriteGeometryCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSpriteGeometryShape> GetShapes() {
		return memory.read<struct TArray<struct FSpriteGeometryShape>>(m_addr + 0);
	}
	enum class ESpritePolygonMode GetGeometryType() {
		return memory.read<enum class ESpritePolygonMode>(m_addr + 16);
	}
	int32_t GetPixelsPerSubdivisionX() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetPixelsPerSubdivisionY() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetbAvoidVertexMerging() {
		return memory.read<bool>(m_addr + 28);
	}
	float GetAlphaThreshold() {
		return memory.read<float>(m_addr + 32);
	}
	float GetDetailAmount() {
		return memory.read<float>(m_addr + 36);
	}
	float GetSimplifyEpsilon() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FIntMargin
{
public:
	FIntMargin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLeft() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTop() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetRight() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetBottom() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpriteInstanceData
{
public:
	FSpriteInstanceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMatrix GetTransform() {
		return memory.read<struct FMatrix>(m_addr + 0);
	}
	struct UPaperSprite GetSourceSprite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UPaperSprite(ptr_addr);
	}
	struct FColor GetVertexColor() {
		return memory.read<struct FColor>(m_addr + 72);
	}
	int32_t GetMaterialIndex() {
		return memory.read<int32_t>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLayerColor
{
public:
	FGetLayerColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLayer() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTile
{
public:
	FSetTile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetY() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetLayer() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FPaperTileInfo GetNewValue() {
		return memory.read<struct FPaperTileInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPaperFlipbookKeyFrame
{
public:
	FPaperFlipbookKeyFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperSprite GetSprite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperSprite(ptr_addr);
	}
	int32_t GetFrameRun() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRep_SourceFlipbook
{
public:
	FOnRep_SourceFlipbook(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperFlipbook GetOldFlipbook() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperFlipbook(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPaperSpriteSocket
{
public:
	FPaperSpriteSocket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetLocalTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpriteColor
{
public:
	FGetSpriteColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPaperTerrainMaterialRule
{
public:
	FPaperTerrainMaterialRule(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperSprite GetStartCap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperSprite(ptr_addr);
	}
	struct TArray<struct UPaperSprite> GetBody() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UPaperSprite>(ptr_addr);
	}
	struct UPaperSprite GetEndCap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UPaperSprite(ptr_addr);
	}
	float GetMinimumAngle() {
		return memory.read<float>(m_addr + 32);
	}
	float GetMaximumAngle() {
		return memory.read<float>(m_addr + 36);
	}
	bool GetbEnableCollision() {
		return memory.read<bool>(m_addr + 40);
	}
	float GetCollisionOffset() {
		return memory.read<float>(m_addr + 44);
	}
	int32_t GetDrawOrder() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTilePolygon
{
public:
	FGetTilePolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTileX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTileY() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<struct FVector> GetPoints() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 8);
	}
	int32_t GetLayerIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetbWorldSpace() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FPaperSpriteAtlasSlot
{
public:
	FPaperSpriteAtlasSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UPaperSprite> GetSpriteRef() {
		return memory.read<struct TSoftObjectPtr<UPaperSprite>>(m_addr + 0);
	}
	int32_t GetAtlasIndex() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetX() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetY() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTerrainColor
{
public:
	FSetTerrainColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetNewColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlayRate
{
public:
	FSetPlayRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewRate() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPaperTileInfo
{
public:
	FPaperTileInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperTileSet GetTileSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperTileSet(ptr_addr);
	}
	int32_t GetPackedTileIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeBrushFromSprite
{
public:
	FMakeBrushFromSprite(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperSprite GetSprite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperSprite(ptr_addr);
	}
	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct FSlateBrush GetReturnValue() {
		return memory.read<struct FSlateBrush>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPaperTileSetTerrain
{
public:
	FPaperTileSetTerrain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTerrainName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetCenterTileIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInstanceTransform
{
public:
	FGetInstanceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInstanceIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FTransform GetOutInstanceTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	bool GetbWorldSpace() {
		return memory.read<bool>(m_addr + 64);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 65);
	}

private:
	std::uint64_t m_addr = 0;
};class FPaperTileMetadata
{
public:
	FPaperTileMetadata(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetUserDataName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FSpriteGeometryCollection GetCollisionData() {
		return memory.read<struct FSpriteGeometryCollection>(m_addr + 8);
	}
	char GetTerrainMembership[4]() {
		return memory.read<char>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpriteGeometryShape
{
public:
	FSpriteGeometryShape(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESpriteShapeType GetShapeType() {
		return memory.read<enum class ESpriteShapeType>(m_addr + 0);
	}
	struct TArray<struct FVector2D> GetVertices() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 8);
	}
	struct FVector2D GetBoxSize() {
		return memory.read<struct FVector2D>(m_addr + 24);
	}
	struct FVector2D GetBoxPosition() {
		return memory.read<struct FVector2D>(m_addr + 32);
	}
	float GetRotation() {
		return memory.read<float>(m_addr + 40);
	}
	bool GetbNegativeWinding() {
		return memory.read<bool>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlayRate
{
public:
	FGetPlayRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpriteDrawCallRecord
{
public:
	FSpriteDrawCallRecord(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetDestination() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct UTexture GetBaseTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UTexture(ptr_addr);
	}
	struct FColor GetColor() {
		return memory.read<struct FColor>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpriteAssetInitParameters
{
public:
	FSpriteAssetInitParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSetDefaultCollisionThickness
{
public:
	FSetDefaultCollisionThickness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetThickness() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetbRebuildCollision() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSprite
{
public:
	FGetSprite(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperSprite GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperSprite(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetKeyFrameIndexAtTime
{
public:
	FGetKeyFrameIndexAtTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTime() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetbClampToEnds() {
		return memory.read<bool>(m_addr + 4);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumFrames
{
public:
	FGetNumFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddInstance
{
public:
	FAddInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	struct UPaperSprite GetSprite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UPaperSprite(ptr_addr);
	}
	bool GetbWorldSpace() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 60);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLooping
{
public:
	FSetLooping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbNewLooping() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumKeyFrames
{
public:
	FGetNumKeyFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpriteAtFrame
{
public:
	FGetSpriteAtFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetFrameIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UPaperSprite GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPaperSprite(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpriteAtTime
{
public:
	FGetSpriteAtTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTime() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetbClampToEnds() {
		return memory.read<bool>(m_addr + 4);
	}
	struct UPaperSprite GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPaperSprite(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValidKeyFrameIndex
{
public:
	FIsValidKeyFrameIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTotalDuration
{
public:
	FGetTotalDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFlipbookLength
{
public:
	FGetFlipbookLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFlipbook
{
public:
	FGetFlipbook(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperFlipbook GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperFlipbook(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFlipbookLengthInFrames
{
public:
	FGetFlipbookLengthInFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFlipbookFramerate
{
public:
	FGetFlipbookFramerate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaybackPosition
{
public:
	FGetPlaybackPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaybackPositionInFrames
{
public:
	FGetPlaybackPositionInFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FResizeMap
{
public:
	FResizeMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewWidthInTiles() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNewHeightInTiles() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsLooping
{
public:
	FIsLooping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSpriteColor
{
public:
	FSetSpriteColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetNewColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPlaying
{
public:
	FIsPlaying(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateInstanceColor
{
public:
	FUpdateInstanceColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInstanceIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FLinearColor GetNewInstanceColor() {
		return memory.read<struct FLinearColor>(m_addr + 4);
	}
	bool GetbMarkRenderStateDirty() {
		return memory.read<bool>(m_addr + 20);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 21);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsReversing
{
public:
	FIsReversing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFlipbook
{
public:
	FSetFlipbook(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperFlipbook GetNewFlipbook() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperFlipbook(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTileMapColor
{
public:
	FGetTileMapColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNewTime
{
public:
	FSetNewTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateNewTileMap
{
public:
	FCreateNewTileMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMapWidth() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetMapHeight() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetTileWidth() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetTileHeight() {
		return memory.read<int32_t>(m_addr + 12);
	}
	float GetPixelsPerUnrealUnit() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetbCreateLayer() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaybackPosition
{
public:
	FSetPlaybackPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewPosition() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetbFireEvents() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateInstanceTransform
{
public:
	FUpdateInstanceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInstanceIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FTransform GetNewInstanceTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	bool GetbWorldSpace() {
		return memory.read<bool>(m_addr + 64);
	}
	bool GetbMarkRenderStateDirty() {
		return memory.read<bool>(m_addr + 65);
	}
	bool GetbTeleport() {
		return memory.read<bool>(m_addr + 66);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 67);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaybackPositionInFrames
{
public:
	FSetPlaybackPositionInFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewFramePosition() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbFireEvents() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInstanceCount
{
public:
	FGetInstanceCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveInstance
{
public:
	FRemoveInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInstanceIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSortInstancesAlongAxis
{
public:
	FSortInstancesAlongAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetWorldSpaceSortAxis() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTileCornerPosition
{
public:
	FGetTileCornerPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTileX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTileY() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetLayerIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetbWorldSpace() {
		return memory.read<bool>(m_addr + 12);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSprite
{
public:
	FSetSprite(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperSprite GetNewSprite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperSprite(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddNewLayer
{
public:
	FAddNewLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperTileLayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperTileLayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMapSize
{
public:
	FGetMapSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMapWidth() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetMapHeight() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetNumLayers() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTile
{
public:
	FGetTile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetY() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetLayer() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FPaperTileInfo GetReturnValue() {
		return memory.read<struct FPaperTileInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTileCenterPosition
{
public:
	FGetTileCenterPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTileX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTileY() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetLayerIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetbWorldSpace() {
		return memory.read<bool>(m_addr + 12);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOwnsTileMap
{
public:
	FOwnsTileMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLayerCollision
{
public:
	FSetLayerCollision(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLayer() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbHasCollision() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetbOverrideThickness() {
		return memory.read<bool>(m_addr + 5);
	}
	float GetCustomThickness() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbOverrideOffset() {
		return memory.read<bool>(m_addr + 12);
	}
	float GetCustomOffset() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetbRebuildCollision() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLayerColor
{
public:
	FSetLayerColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetNewColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	int32_t GetLayer() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTileMap
{
public:
	FSetTileMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperTileMap GetNewTileMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperTileMap(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTileMapColor
{
public:
	FSetTileMapColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetNewColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBreakTile
{
public:
	FBreakTile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPaperTileInfo GetTile() {
		return memory.read<struct FPaperTileInfo>(m_addr + 0);
	}
	int32_t GetTileIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct UPaperTileSet GetTileSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UPaperTileSet(ptr_addr);
	}
	bool GetbFlipH() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetbFlipV() {
		return memory.read<bool>(m_addr + 33);
	}
	bool GetbFlipD() {
		return memory.read<bool>(m_addr + 34);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTileTransform
{
public:
	FGetTileTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPaperTileInfo GetTile() {
		return memory.read<struct FPaperTileInfo>(m_addr + 0);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTileUserData
{
public:
	FGetTileUserData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPaperTileInfo GetTile() {
		return memory.read<struct FPaperTileInfo>(m_addr + 0);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeTile
{
public:
	FMakeTile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTileIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UPaperTileSet GetTileSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPaperTileSet(ptr_addr);
	}
	bool GetbFlipH() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetbFlipV() {
		return memory.read<bool>(m_addr + 17);
	}
	bool GetbFlipD() {
		return memory.read<bool>(m_addr + 18);
	}
	struct FPaperTileInfo GetReturnValue() {
		return memory.read<struct FPaperTileInfo>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};