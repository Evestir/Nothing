#pragma once 
#include <GeometryCache_Structs.h>
 
 
 
class UGeometryCacheComponent
{
public:
	UGeometryCacheComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGeometryCache GetGeometryCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct UGeometryCache(ptr_addr);
	}
	bool GetbRunning() {
		return memory.read<bool>(m_addr + 1200);
	}
	bool GetbLooping() {
		return memory.read<bool>(m_addr + 1201);
	}
	bool GetbExtrapolateFrames() {
		return memory.read<bool>(m_addr + 1202);
	}
	float GetStartTimeOffset() {
		return memory.read<float>(m_addr + 1204);
	}
	float GetPlaybackSpeed() {
		return memory.read<float>(m_addr + 1208);
	}
	float GetMotionVectorScale() {
		return memory.read<float>(m_addr + 1212);
	}
	int32_t GetNumTracks() {
		return memory.read<int32_t>(m_addr + 1216);
	}
	float GetElapsedTime() {
		return memory.read<float>(m_addr + 1220);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 1276);
	}
	bool GetbManualTick() {
		return memory.read<bool>(m_addr + 1280);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeometryCache
{
public:
	UGeometryCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMaterialInterface> GetMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct TArray<struct UGeometryCacheTrack> GetTracks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct TArray<struct UGeometryCacheTrack>(ptr_addr);
	}
	int32_t GetStartFrame() {
		return memory.read<int32_t>(m_addr + 96);
	}
	int32_t GetEndFrame() {
		return memory.read<int32_t>(m_addr + 100);
	}
	uint64_t GetHash() {
		return memory.read<uint64_t>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class AGeometryCacheActor
{
public:
	AGeometryCacheActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGeometryCacheComponent GetGeometryCacheComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UGeometryCacheComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeometryCacheCodecBase
{
public:
	UGeometryCacheCodecBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetTopologyRanges() {
		return memory.read<struct TArray<int32_t>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeometryCacheTrack
{
public:
	UGeometryCacheTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDuration() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeometryCacheTrack_FlipbookAnimation
{
public:
	UGeometryCacheTrack_FlipbookAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetNumMeshSamples() {
		return memory.read<uint32_t>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeometryCacheCodecRaw
{
public:
	UGeometryCacheCodecRaw(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDummyProperty() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeometryCacheCodecV1
{
public:
	UGeometryCacheCodecV1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGeometryCacheTrackStreamable
{
public:
	UGeometryCacheTrackStreamable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGeometryCacheCodecBase GetCodec() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UGeometryCacheCodecBase(ptr_addr);
	}
	float GetStartSampleTime() {
		return memory.read<float>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeometryCacheTrack_TransformAnimation
{
public:
	UGeometryCacheTrack_TransformAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGeometryCacheTrack_TransformGroupAnimation
{
public:
	UGeometryCacheTrack_TransformGroupAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


