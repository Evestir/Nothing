#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FStructSerializerSetTestStruct
{
public:
	FStructSerializerSetTestStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct FString> GetStrSet() {
		return memory.read<struct TSet<struct FString>>(m_addr + 0);
	}
	struct TSet<int32_t> GetIntSet() {
		return memory.read<struct TSet<int32_t>>(m_addr + 80);
	}
	struct TSet<struct FName> GetNameSet() {
		return memory.read<struct TSet<struct FName>>(m_addr + 160);
	}
	struct TSet<struct FStructSerializerBuiltinTestStruct> GetStructSet() {
		return memory.read<struct TSet<struct FStructSerializerBuiltinTestStruct>>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FStructSerializerTestStruct
{
public:
	FStructSerializerTestStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FStructSerializerNumericTestStruct GetNumerics() {
		return memory.read<struct FStructSerializerNumericTestStruct>(m_addr + 0);
	}
	struct FStructSerializerBooleanTestStruct GetBooleans() {
		return memory.read<struct FStructSerializerBooleanTestStruct>(m_addr + 48);
	}
	struct FStructSerializerObjectTestStruct GetObjects() {
		return memory.read<struct FStructSerializerObjectTestStruct>(m_addr + 56);
	}
	struct FStructSerializerBuiltinTestStruct GetBuiltins() {
		return memory.read<struct FStructSerializerBuiltinTestStruct>(m_addr + 224);
	}
	struct FStructSerializerArrayTestStruct GetArrays() {
		return memory.read<struct FStructSerializerArrayTestStruct>(m_addr + 368);
	}
	struct FStructSerializerMapTestStruct GetMaps() {
		return memory.read<struct FStructSerializerMapTestStruct>(m_addr + 464);
	}
	struct FStructSerializerSetTestStruct GetSets() {
		return memory.read<struct FStructSerializerSetTestStruct>(m_addr + 784);
	}

private:
	std::uint64_t m_addr = 0;
};class FStructSerializerObjectTestStruct
{
public:
	FStructSerializerObjectTestStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UObject(ptr_addr);
	}
	UMetaData GetSubClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UMetaData(ptr_addr);
	}
	struct TSoftClassPtr<UObject> GetSoftClass() {
		return memory.read<struct TSoftClassPtr<UObject>>(m_addr + 16);
	}
	struct UObject GetObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UObject(ptr_addr);
	}
	struct TWeakObjectPtr<UMetaData> GetWeakObject() {
		return memory.read<struct TWeakObjectPtr<UMetaData>>(m_addr + 64);
	}
	struct TSoftObjectPtr<UMetaData> GetSoftObject() {
		return memory.read<struct TSoftObjectPtr<UMetaData>>(m_addr + 72);
	}
	struct FSoftClassPath GetClassPath() {
		return memory.read<struct FSoftClassPath>(m_addr + 112);
	}
	struct FSoftObjectPath GetObjectPath() {
		return memory.read<struct FSoftObjectPath>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FStructSerializerBuiltinTestStruct
{
public:
	FStructSerializerBuiltinTestStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetGuid() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FString GetString() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 40);
	}
	struct FVector GetVector() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	struct FVector4 GetVector4() {
		return memory.read<struct FVector4>(m_addr + 80);
	}
	struct FRotator GetRotator() {
		return memory.read<struct FRotator>(m_addr + 96);
	}
	struct FQuat GetQuat() {
		return memory.read<struct FQuat>(m_addr + 112);
	}
	struct FColor GetColor() {
		return memory.read<struct FColor>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FStructSerializerMapTestStruct
{
public:
	FStructSerializerMapTestStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<int32_t, struct FString> GetIntToStr() {
		return memory.read<struct TMap<int32_t, struct FString>>(m_addr + 0);
	}
	struct TMap<struct FString, struct FString> GetStrToStr() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 80);
	}
	struct TMap<struct FString, struct FVector> GetStrToVec() {
		return memory.read<struct TMap<struct FString, struct FVector>>(m_addr + 160);
	}
	struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> GetStrToStruct() {
		return memory.read<struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct>>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FStructSerializerArrayTestStruct
{
public:
	FStructSerializerArrayTestStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetInt32Array() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}
	struct TArray<char> GetByteArray() {
		return memory.read<struct TArray<char>>(m_addr + 16);
	}
	int32_t GetStaticSingleElement() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetStaticInt32Array[3]() {
		return memory.read<int32_t>(m_addr + 36);
	}
	float GetStaticFloatArray[3]() {
		return memory.read<float>(m_addr + 48);
	}
	struct TArray<struct FVector> GetVectorArray() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 64);
	}
	struct TArray<struct FStructSerializerBuiltinTestStruct> GetStructArray() {
		return memory.read<struct TArray<struct FStructSerializerBuiltinTestStruct>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FStructSerializerBooleanTestStruct
{
public:
	FStructSerializerBooleanTestStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetBoolFalse() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetBoolTrue() {
		return memory.read<bool>(m_addr + 1);
	}
	char GetBitfield0() {
		return memory.read<char>(m_addr + 2);
	}
	char GetBitfield1() {
		return memory.read<char>(m_addr + 2);
	}
	char GetBitfield2Set() {
		return memory.read<char>(m_addr + 2);
	}
	char GetBitfield3() {
		return memory.read<char>(m_addr + 2);
	}
	char GetBitfield4Set() {
		return memory.read<char>(m_addr + 2);
	}
	char GetBitfield5Set() {
		return memory.read<char>(m_addr + 2);
	}
	char GetBitfield6() {
		return memory.read<char>(m_addr + 2);
	}
	char GetBitfield7Set() {
		return memory.read<char>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FStructSerializerNumericTestStruct
{
public:
	FStructSerializerNumericTestStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int8_t GetInt8() {
		return memory.read<int8_t>(m_addr + 0);
	}
	int16_t GetInt16() {
		return memory.read<int16_t>(m_addr + 2);
	}
	int32_t GetInt32() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int64_t GetInt64() {
		return memory.read<int64_t>(m_addr + 8);
	}
	char GetUInt8() {
		return memory.read<char>(m_addr + 16);
	}
	uint16_t GetUInt16() {
		return memory.read<uint16_t>(m_addr + 18);
	}
	uint32_t GetUInt32() {
		return memory.read<uint32_t>(m_addr + 20);
	}
	uint64_t GetUInt64() {
		return memory.read<uint64_t>(m_addr + 24);
	}
	float GetFloat() {
		return memory.read<float>(m_addr + 32);
	}
	double GetDouble() {
		return memory.read<double>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FStructSerializerByteArray
{
public:
	FStructSerializerByteArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDummy1() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<char> GetByteArray() {
		return memory.read<struct TArray<char>>(m_addr + 8);
	}
	int32_t GetDummy2() {
		return memory.read<int32_t>(m_addr + 24);
	}
	struct TArray<int8_t> GetInt8Array() {
		return memory.read<struct TArray<int8_t>>(m_addr + 32);
	}
	int32_t GetDummy3() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};