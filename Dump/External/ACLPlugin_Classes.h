#pragma once 
#include <ACLPlugin_Structs.h>
 
 
 
class UAnimBoneCompressionCodec_ACL
{
public:
	UAnimBoneCompressionCodec_ACL(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimBoneCompressionCodec GetSafetyFallbackCodec() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UAnimBoneCompressionCodec(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimationCompressionLibraryDatabase
{
public:
	UAnimationCompressionLibraryDatabase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetCookedCompressedBytes() {
		return memory.read<struct TArray<char>>(m_addr + 40);
	}
	struct TArray<uint64_t> GetCookedAnimSequenceMappings() {
		return memory.read<struct TArray<uint64_t>>(m_addr + 56);
	}
	uint32_t GetMaxStreamRequestSizeKB() {
		return memory.read<uint32_t>(m_addr + 344);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimBoneCompressionCodec_ACLBase
{
public:
	UAnimBoneCompressionCodec_ACLBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimBoneCompressionCodec_ACLCustom
{
public:
	UAnimBoneCompressionCodec_ACLCustom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimBoneCompressionCodec_ACLSafe
{
public:
	UAnimBoneCompressionCodec_ACLSafe(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimBoneCompressionCodec_ACLDatabase
{
public:
	UAnimBoneCompressionCodec_ACLDatabase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimationCompressionLibraryDatabase GetDatabaseAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UAnimationCompressionLibraryDatabase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimCurveCompressionCodec_ACL
{
public:
	UAnimCurveCompressionCodec_ACL(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


