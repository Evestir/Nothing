#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetDrawOrderThreshold
{
public:
	FSetDrawOrderThreshold(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetdrawOrderThreshold() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineBeforeUpdateWorldTransformDelegate__DelegateSignature
{
public:
	FSpineBeforeUpdateWorldTransformDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USpineSkeletonComponent GetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USpineSkeletonComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineAnimationStartDelegate__DelegateSignature
{
public:
	FSpineAnimationStartDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTrackEntry Getentry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTrackEntry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAlpha
{
public:
	FSetAlpha(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAlpha() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAttachmentThreshold
{
public:
	FGetAttachmentThreshold(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineAfterUpdateWorldTransformDelegate__DelegateSignature
{
public:
	FSpineAfterUpdateWorldTransformDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USpineSkeletonComponent GetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USpineSkeletonComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnimationStart
{
public:
	FGetAnimationStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSkin
{
public:
	FSetSkin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSkinName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasSkin
{
public:
	FHasSkin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSkinName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineAnimationEventDelegate__DelegateSignature
{
public:
	FSpineAnimationEventDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTrackEntry Getentry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTrackEntry(ptr_addr);
	}
	struct FSpineEvent Getevt() {
		return memory.read<struct FSpineEvent>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineEvent
{
public:
	FSpineEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetStringValue() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetIntValue() {
		return memory.read<int32_t>(m_addr + 32);
	}
	float GetFloatValue() {
		return memory.read<float>(m_addr + 36);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineAnimationInterruptDelegate__DelegateSignature
{
public:
	FSpineAnimationInterruptDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTrackEntry Getentry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTrackEntry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSkins
{
public:
	FGetSkins(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetSkins() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineAnimationCompleteDelegate__DelegateSignature
{
public:
	FSpineAnimationCompleteDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTrackEntry Getentry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTrackEntry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineAnimationEndDelegate__DelegateSignature
{
public:
	FSpineAnimationEndDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTrackEntry Getentry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTrackEntry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineAnimationDisposeDelegate__DelegateSignature
{
public:
	FSpineAnimationDisposeDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTrackEntry Getentry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTrackEntry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature
{
public:
	FSpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USpineWidget GetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USpineWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMixTime
{
public:
	FSetMixTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetmixTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBones
{
public:
	FGetBones(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetBones() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDelay
{
public:
	FSetDelay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDelay() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackIndex
{
public:
	FGetTrackIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature
{
public:
	FSpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USpineWidget GetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USpineWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAttachmentThreshold
{
public:
	FSetAttachmentThreshold(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetattachmentThreshold() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpineAnimationStateMixData
{
public:
	FSpineAnimationStateMixData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFrom() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetTo() {
		return memory.read<struct FString>(m_addr + 16);
	}
	float GetMix() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTrackEnd
{
public:
	FSetTrackEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GettrackEnd() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMixDuration
{
public:
	FSetMixDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetmixDuration() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackTime
{
public:
	FGetTrackTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAnimation
{
public:
	FHasAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAnimationName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackEnd
{
public:
	FGetTrackEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBeforeUpdateWorldTransform
{
public:
	FBeforeUpdateWorldTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USpineSkeletonComponent GetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USpineSkeletonComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimationStart
{
public:
	FSetAnimationStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetanimationStart() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisValidAnimation
{
public:
	FisValidAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAlpha
{
public:
	FGetAlpha(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimationLast
{
public:
	FSetAnimationLast(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetanimationLast() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTrackTime
{
public:
	FSetTrackTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GettrackTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetAnimationDuration
{
public:
	FgetAnimationDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAnimationName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnimations
{
public:
	FGetAnimations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetAnimations() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEventThreshold
{
public:
	FSetEventThreshold(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GeteventThreshold() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnimationEnd
{
public:
	FGetAnimationEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnimationLast
{
public:
	FGetAnimationLast(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetAnimationName
{
public:
	FgetAnimationName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDelay
{
public:
	FGetDelay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDrawOrderThreshold
{
public:
	FGetDrawOrderThreshold(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEventThreshold
{
public:
	FGetEventThreshold(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLoop
{
public:
	FGetLoop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSkins
{
public:
	FSetSkins(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetSkinNames() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMixDuration
{
public:
	FGetMixDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetScaleY
{
public:
	FSetScaleY(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetScaleY() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMixTime
{
public:
	FGetMixTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimeScale
{
public:
	FGetTimeScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimationEnd
{
public:
	FSetAnimationEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetanimationEnd() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLoop
{
public:
	FSetLoop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetLoop() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTimeScale
{
public:
	FSetTimeScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeScale() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetScaleX
{
public:
	FGetScaleX(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoneWorldTransform
{
public:
	FGetBoneWorldTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetBoneName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetScaleY
{
public:
	FGetScaleY(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSlots
{
public:
	FGetSlots(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetSlots() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasBone
{
public:
	FHasBone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetBoneName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasSlot
{
public:
	FHasSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSlotName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAttachment
{
public:
	FSetAttachment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSlotName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetAttachmentName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FTick
{
public:
	FTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetCallDelegates() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBoneWorldPosition
{
public:
	FSetBoneWorldPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetBoneName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetScaleX
{
public:
	FSetScaleX(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetScaleX() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSlotColor
{
public:
	FSetSlotColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSlotName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FColor GetColor() {
		return memory.read<struct FColor>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddAnimation
{
public:
	FAddAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetAnimationName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	bool GetLoop() {
		return memory.read<bool>(m_addr + 24);
	}
	float GetDelay() {
		return memory.read<float>(m_addr + 28);
	}
	struct UTrackEntry GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UTrackEntry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddEmptyAnimation
{
public:
	FAddEmptyAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetmixDuration() {
		return memory.read<float>(m_addr + 4);
	}
	float GetDelay() {
		return memory.read<float>(m_addr + 8);
	}
	struct UTrackEntry GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UTrackEntry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearTrack
{
public:
	FClearTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrent
{
public:
	FGetCurrent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UTrackEntry GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTrackEntry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimation
{
public:
	FSetAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetAnimationName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	bool GetLoop() {
		return memory.read<bool>(m_addr + 24);
	}
	struct UTrackEntry GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UTrackEntry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAutoPlay
{
public:
	FSetAutoPlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInAutoPlays() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEmptyAnimation
{
public:
	FSetEmptyAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetmixDuration() {
		return memory.read<float>(m_addr + 4);
	}
	struct UTrackEntry GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTrackEntry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaybackTime
{
public:
	FSetPlaybackTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInPlaybackTime() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetbCallDelegates() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};