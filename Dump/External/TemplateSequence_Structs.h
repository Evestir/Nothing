#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetSequencePlayer
{
public:
	FGetSequencePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTemplateSequencePlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTemplateSequencePlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTemplateSequenceBindingOverrideData
{
public:
	FTemplateSequenceBindingOverrideData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<UObject> GetObject() {
		return memory.read<struct TWeakObjectPtr<UObject>>(m_addr + 0);
	}
	bool GetbOverridesDefault() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateTemplateSequencePlayer
{
public:
	FCreateTemplateSequencePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UTemplateSequence GetTemplateSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTemplateSequence(ptr_addr);
	}
	struct FMovieSceneSequencePlaybackSettings GetSettings() {
		return memory.read<struct FMovieSceneSequencePlaybackSettings>(m_addr + 16);
	}
	struct ATemplateSequenceActor GetOutActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ATemplateSequenceActor(ptr_addr);
	}
	struct UTemplateSequencePlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UTemplateSequencePlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTemplateSectionPropertyScale
{
public:
	FTemplateSectionPropertyScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetObjectBinding() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FMovieScenePropertyBinding GetPropertyBinding() {
		return memory.read<struct FMovieScenePropertyBinding>(m_addr + 16);
	}
	enum class ETemplateSectionPropertyScaleType GetPropertyScaleType() {
		return memory.read<enum class ETemplateSectionPropertyScaleType>(m_addr + 36);
	}
	struct FMovieSceneFloatChannel GetFloatChannel() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSequence
{
public:
	FGetSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTemplateSequence GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTemplateSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBinding
{
public:
	FSetBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	bool GetbOverridesDefault() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadSequence
{
public:
	FLoadSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTemplateSequence GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTemplateSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSequence
{
public:
	FSetSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTemplateSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTemplateSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};