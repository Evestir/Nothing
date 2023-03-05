#pragma once 
#include <VariantManagerContent_Structs.h>
 
 
 
class ULevelVariantSets
{
public:
	ULevelVariantSets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetDirectorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return UObject(ptr_addr);
	}
	struct TArray<struct UVariantSet> GetVariantSets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UVariantSet>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALevelVariantSetsActor
{
public:
	ALevelVariantSetsActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftObjectPath GetLevelVariantSets() {
		return memory.read<struct FSoftObjectPath>(m_addr + 544);
	}
	struct TMap<UObject, struct ULevelVariantSetsFunctionDirector*> GetDirectorInstances() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct TMap<UObject, struct ULevelVariantSetsFunctionDirector*>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPropertyValueMaterial
{
public:
	UPropertyValueMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPropertyValueOption
{
public:
	UPropertyValueOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPropertyValue
{
public:
	UPropertyValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct TFieldPath<FNone>> GetProperties() {
		return memory.read<struct TArray<struct TFieldPath<FNone>>>(m_addr + 136);
	}
	struct TArray<int32_t> GetPropertyIndices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 152);
	}
	struct TArray<struct FCapturedPropSegment> GetCapturedPropSegments() {
		return memory.read<struct TArray<struct FCapturedPropSegment>>(m_addr + 168);
	}
	struct FString GetFullDisplayString() {
		return memory.read<struct FString>(m_addr + 184);
	}
	struct FName GetPropertySetterName() {
		return memory.read<struct FName>(m_addr + 200);
	}
	struct TMap<struct FString, struct FString> GetPropertySetterParameterDefaults() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 208);
	}
	bool GetbHasRecordedData() {
		return memory.read<bool>(m_addr + 288);
	}
	UObject GetLeafPropertyClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return UObject(ptr_addr);
	}
	struct TArray<char> GetValueBytes() {
		return memory.read<struct TArray<char>>(m_addr + 312);
	}
	enum class EPropertyValueCategory GetPropCategory() {
		return memory.read<enum class EPropertyValueCategory>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelVariantSetsFunctionDirector
{
public:
	ULevelVariantSetsFunctionDirector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPropertyValueVisibility
{
public:
	UPropertyValueVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPropertyValueTransform
{
public:
	UPropertyValueTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPropertyValueColor
{
public:
	UPropertyValueColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPropertyValueSoftObject
{
public:
	UPropertyValueSoftObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ASwitchActor
{
public:
	ASwitchActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetSceneComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct USceneComponent(ptr_addr);
	}
	int32_t GetLastSelectedOption() {
		return memory.read<int32_t>(m_addr + 576);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVariant
{
public:
	UVariant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVariantDependency> GetDependencies() {
		return memory.read<struct TArray<struct FVariantDependency>>(m_addr + 40);
	}
	struct FText GetDisplayText() {
		return memory.read<struct FText>(m_addr + 56);
	}
	struct TArray<struct UVariantObjectBinding> GetObjectBindings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct TArray<struct UVariantObjectBinding>(ptr_addr);
	}
	struct UTexture2D GetThumbnail() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVariantObjectBinding
{
public:
	UVariantObjectBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCachedActorLabel() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FSoftObjectPath GetObjectPtr() {
		return memory.read<struct FSoftObjectPath>(m_addr + 56);
	}
	 GetLazyObjectPtr() {
		return memory.read<>(m_addr + 80);
	}
	struct TArray<struct UPropertyValue> GetCapturedProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct TArray<struct UPropertyValue>(ptr_addr);
	}
	struct TArray<struct FFunctionCaller> GetFunctionCallers() {
		return memory.read<struct TArray<struct FFunctionCaller>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVariantSet
{
public:
	UVariantSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetDisplayText() {
		return memory.read<struct FText>(m_addr + 40);
	}
	bool GetbExpanded() {
		return memory.read<bool>(m_addr + 88);
	}
	struct TArray<struct UVariant> GetVariants() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct TArray<struct UVariant>(ptr_addr);
	}
	struct UTexture2D GetThumbnail() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


