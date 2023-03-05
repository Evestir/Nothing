#pragma once 
#include <SpinePlugin_Structs.h>
 
 
 
class USpineSkeletonComponent
{
public:
	USpineSkeletonComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USpineAtlasAsset GetAtlas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct USpineAtlasAsset(ptr_addr);
	}
	struct USpineSkeletonDataAsset GetSkeletonData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct USpineSkeletonDataAsset(ptr_addr);
	}
	struct FMulticastInlineDelegate GetBeforeUpdateWorldTransform() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 192);
	}
	struct FMulticastInlineDelegate GetAfterUpdateWorldTransform() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpineBoneFollowerComponent
{
public:
	USpineBoneFollowerComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct AActor(ptr_addr);
	}
	struct FString GetBoneName() {
		return memory.read<struct FString>(m_addr + 528);
	}
	bool GetUseComponentTransform() {
		return memory.read<bool>(m_addr + 544);
	}
	bool GetUsePosition() {
		return memory.read<bool>(m_addr + 545);
	}
	bool GetUseRotation() {
		return memory.read<bool>(m_addr + 546);
	}
	bool GetUseScale() {
		return memory.read<bool>(m_addr + 547);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpineAtlasAsset
{
public:
	USpineAtlasAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UTexture2D> GetatlasPages() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UTexture2D>(ptr_addr);
	}
	struct FString GetrawData() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FName GetatlasFileName() {
		return memory.read<struct FName>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpineBoneDriverComponent
{
public:
	USpineBoneDriverComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct AActor(ptr_addr);
	}
	struct FString GetBoneName() {
		return memory.read<struct FString>(m_addr + 528);
	}
	bool GetUseComponentTransform() {
		return memory.read<bool>(m_addr + 544);
	}
	bool GetUsePosition() {
		return memory.read<bool>(m_addr + 545);
	}
	bool GetUseRotation() {
		return memory.read<bool>(m_addr + 546);
	}
	bool GetUseScale() {
		return memory.read<bool>(m_addr + 547);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTrackEntry
{
public:
	UTrackEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetanimationStart() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetAnimationInterrupt() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}
	struct FMulticastInlineDelegate GetAnimationEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 72);
	}
	struct FMulticastInlineDelegate GetAnimationComplete() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 88);
	}
	struct FMulticastInlineDelegate GetanimationEnd() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}
	struct FMulticastInlineDelegate GetAnimationDispose() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpineSkeletonAnimationComponent
{
public:
	USpineSkeletonAnimationComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetanimationStart() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 264);
	}
	struct FMulticastInlineDelegate GetAnimationInterrupt() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 280);
	}
	struct FMulticastInlineDelegate GetAnimationEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 296);
	}
	struct FMulticastInlineDelegate GetAnimationComplete() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 312);
	}
	struct FMulticastInlineDelegate GetanimationEnd() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 328);
	}
	struct FMulticastInlineDelegate GetAnimationDispose() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 344);
	}
	struct FString GetPreviewAnimation() {
		return memory.read<struct FString>(m_addr + 360);
	}
	struct FString GetPreviewSkin() {
		return memory.read<struct FString>(m_addr + 376);
	}
	struct TSet<struct UTrackEntry> GettrackEntries() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 400);
		return struct TSet<struct UTrackEntry>(ptr_addr);
	}
	bool GetbAutoPlaying() {
		return memory.read<bool>(m_addr + 480);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpineSkeletonRendererComponent
{
public:
	USpineSkeletonRendererComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetNormalBlendMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetAdditiveBlendMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetMultiplyBlendMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetScreenBlendMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UMaterialInterface(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetatlasNormalBlendMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetatlasAdditiveBlendMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetatlasMultiplyBlendMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetatlasScreenBlendMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	float GetDepthOffset() {
		return memory.read<float>(m_addr + 1720);
	}
	struct FName GetTextureParameterName() {
		return memory.read<struct FName>(m_addr + 1724);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 1732);
	}
	bool GetbCreateCollision() {
		return memory.read<bool>(m_addr + 1748);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpineSkeletonDataAsset
{
public:
	USpineSkeletonDataAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDefaultMix() {
		return memory.read<float>(m_addr + 40);
	}
	struct TArray<struct FSpineAnimationStateMixData> GetMixData() {
		return memory.read<struct TArray<struct FSpineAnimationStateMixData>>(m_addr + 48);
	}
	struct TArray<struct FString> GetBones() {
		return memory.read<struct TArray<struct FString>>(m_addr + 64);
	}
	struct TArray<struct FString> GetSlots() {
		return memory.read<struct TArray<struct FString>>(m_addr + 80);
	}
	struct TArray<struct FString> GetSkins() {
		return memory.read<struct TArray<struct FString>>(m_addr + 96);
	}
	struct TArray<struct FString> GetAnimations() {
		return memory.read<struct TArray<struct FString>>(m_addr + 112);
	}
	struct TArray<struct FString> Getevents() {
		return memory.read<struct TArray<struct FString>>(m_addr + 128);
	}
	struct TArray<char> GetrawData() {
		return memory.read<struct TArray<char>>(m_addr + 144);
	}
	struct FName GetskeletonDataFileName() {
		return memory.read<struct FName>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpineWidget
{
public:
	USpineWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInitialSkin() {
		return memory.read<struct FString>(m_addr + 264);
	}
	struct USpineAtlasAsset GetAtlas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 280);
		return struct USpineAtlasAsset(ptr_addr);
	}
	struct USpineSkeletonDataAsset GetSkeletonData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct USpineSkeletonDataAsset(ptr_addr);
	}
	struct UMaterialInterface GetNormalBlendMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetAdditiveBlendMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetMultiplyBlendMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetScreenBlendMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FName GetTextureParameterName() {
		return memory.read<struct FName>(m_addr + 328);
	}
	float GetDepthOffset() {
		return memory.read<float>(m_addr + 336);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 340);
	}
	struct FSlateBrush GetBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 360);
	}
	struct FMulticastInlineDelegate GetBeforeUpdateWorldTransform() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 496);
	}
	struct FMulticastInlineDelegate GetAfterUpdateWorldTransform() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 512);
	}
	struct FMulticastInlineDelegate GetanimationStart() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 528);
	}
	struct FMulticastInlineDelegate GetAnimationInterrupt() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 544);
	}
	struct FMulticastInlineDelegate GetAnimationEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 560);
	}
	struct FMulticastInlineDelegate GetAnimationComplete() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 576);
	}
	struct FMulticastInlineDelegate GetanimationEnd() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 592);
	}
	struct FMulticastInlineDelegate GetAnimationDispose() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 608);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetatlasNormalBlendMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetatlasAdditiveBlendMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetatlasMultiplyBlendMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetatlasScreenBlendMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TSet<struct UTrackEntry> GettrackEntries() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct TSet<struct UTrackEntry>(ptr_addr);
	}
	bool GetbAutoPlaying() {
		return memory.read<bool>(m_addr + 1648);
	}

private:
	std::uint64_t m_addr = 0;
};


