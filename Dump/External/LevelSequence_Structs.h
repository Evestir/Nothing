#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FFindMetaDataByClass
{
public:
	FFindMetaDataByClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetInClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UObject(ptr_addr);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveBinding
{
public:
	FRemoveBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetBinding() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLevelSequencePlayerCameraCutEvent__DelegateSignature
{
public:
	FOnLevelSequencePlayerCameraCutEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraComponent GetCameraComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCameraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateLevelSequencePlayer
{
public:
	FCreateLevelSequencePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct ULevelSequence GetLevelSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct ULevelSequence(ptr_addr);
	}
	struct FMovieSceneSequencePlaybackSettings GetSettings() {
		return memory.read<struct FMovieSceneSequencePlaybackSettings>(m_addr + 16);
	}
	struct ALevelSequenceActor GetOutActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ALevelSequenceActor(ptr_addr);
	}
	struct ULevelSequencePlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct ULevelSequencePlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddBinding
{
public:
	FAddBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetBinding() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct AActor(ptr_addr);
	}
	bool GetbAllowBindingsFromAsset() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMediaComponent
{
public:
	FGetMediaComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadSequence
{
public:
	FLoadSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevelSequence GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULevelSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBinding
{
public:
	FSetBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetBinding() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}
	struct TArray<struct AActor> GetActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct TArray<struct AActor>(ptr_addr);
	}
	bool GetbAllowBindingsFromAsset() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddBindingByTag
{
public:
	FAddBindingByTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBindingTag() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	bool GetbAllowBindingsFromAsset() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindNamedBinding
{
public:
	FFindNamedBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetTag() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FMovieSceneObjectBindingID GetReturnValue() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveBindingByTag
{
public:
	FRemoveBindingByTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetTag() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindNamedBindings
{
public:
	FFindNamedBindings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetTag() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FMovieSceneObjectBindingID> GetReturnValue() {
		return memory.read<struct TArray<struct FMovieSceneObjectBindingID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLevelSequenceBindingReference
{
public:
	FLevelSequenceBindingReference(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPackageName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FSoftObjectPath GetExternalObjectPath() {
		return memory.read<struct FSoftObjectPath>(m_addr + 16);
	}
	struct FString GetObjectPath() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSequence
{
public:
	FGetSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ALevelSequenceActor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ALevelSequenceActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSequencePlayer
{
public:
	FGetSequencePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevelSequencePlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULevelSequencePlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActiveCameraComponent
{
public:
	FGetActiveCameraComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCameraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetBinding
{
public:
	FResetBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetBinding() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLevelSequenceObject
{
public:
	FLevelSequenceObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	 GetObjectOrOwner() {
		return memory.read<>(m_addr + 0);
	}
	struct FString GetComponentName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct TWeakObjectPtr<UObject> GetCachedComponent() {
		return memory.read<struct TWeakObjectPtr<UObject>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBindingByTag
{
public:
	FSetBindingByTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBindingTag() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct AActor> GetActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct AActor>(ptr_addr);
	}
	bool GetbAllowBindingsFromAsset() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetReplicatePlayback
{
public:
	FSetReplicatePlayback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReplicatePlayback() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLevelSequenceCameraSettings
{
public:
	FLevelSequenceCameraSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbOverrideAspectRatioAxisConstraint() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EAspectRatioAxisConstraint GetAspectRatioAxisConstraint() {
		return memory.read<enum class EAspectRatioAxisConstraint>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSequence
{
public:
	FSetSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevelSequence GetInSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULevelSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBoundActorProxy
{
public:
	FBoundActorProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLevelSequenceAnimSequenceLinkItem
{
public:
	FLevelSequenceAnimSequenceLinkItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetSkelTrackGuid() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FSoftObjectPath GetPathToAnimSequence() {
		return memory.read<struct FSoftObjectPath>(m_addr + 16);
	}
	bool GetbExportTransforms() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbExportCurves() {
		return memory.read<bool>(m_addr + 41);
	}
	bool GetbRecordInWorldSpace() {
		return memory.read<bool>(m_addr + 42);
	}

private:
	std::uint64_t m_addr = 0;
};class FLevelSequenceBindingReferences
{
public:
	FLevelSequenceBindingReferences(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> GetBindingIdToReferences() {
		return memory.read<struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray>>(m_addr + 0);
	}
	struct TSet<struct FGuid> GetAnimSequenceInstances() {
		return memory.read<struct TSet<struct FGuid>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FLevelSequenceBindingReferenceArray
{
public:
	FLevelSequenceBindingReferenceArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLevelSequenceBindingReference> GetReferences() {
		return memory.read<struct TArray<struct FLevelSequenceBindingReference>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSettingsClass
{
public:
	FGetSettingsClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	ULevelSequenceBurnInInitSettings GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return ULevelSequenceBurnInInitSettings(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLevelSequenceObjectReferenceMap
{
public:
	FLevelSequenceObjectReferenceMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLevelSequenceLegacyObjectReference
{
public:
	FLevelSequenceLegacyObjectReference(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLevelSequencePlayerSnapshot
{
public:
	FLevelSequencePlayerSnapshot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMasterName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FQualifiedFrameTime GetMasterTime() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 16);
	}
	struct FQualifiedFrameTime GetSourceTime() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 32);
	}
	struct FString GetCurrentShotName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FQualifiedFrameTime GetCurrentShotLocalTime() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 64);
	}
	struct FQualifiedFrameTime GetCurrentShotSourceTime() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 80);
	}
	struct FString GetSourceTimecode() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct TSoftObjectPtr<UCameraComponent> GetCameraComponent() {
		return memory.read<struct TSoftObjectPtr<UCameraComponent>>(m_addr + 112);
	}
	struct FLevelSequenceSnapshotSettings GetSettings() {
		return memory.read<struct FLevelSequenceSnapshotSettings>(m_addr + 152);
	}
	struct ULevelSequence GetActiveShot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct ULevelSequence(ptr_addr);
	}
	struct FMovieSceneSequenceID GetShotID() {
		return memory.read<struct FMovieSceneSequenceID>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FCopyMetaData
{
public:
	FCopyMetaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetInMetaData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLevelSequenceSnapshotSettings
{
public:
	FLevelSequenceSnapshotSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetZeroPadAmount() {
		return memory.read<char>(m_addr + 0);
	}
	struct FFrameRate GetFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoundActor
{
public:
	FGetBoundActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetObjectBinding() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}
	struct AActor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoundActors
{
public:
	FGetBoundActors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetObjectBinding() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}
	struct TArray<struct AActor> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoundObject
{
public:
	FGetBoundObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetObjectBinding() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoundObjects
{
public:
	FGetBoundObjects(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneObjectBindingID GetObjectBinding() {
		return memory.read<struct FMovieSceneObjectBindingID>(m_addr + 0);
	}
	struct TArray<struct UObject> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindOrAddMetaDataByClass
{
public:
	FFindOrAddMetaDataByClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetInClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UObject(ptr_addr);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSynchronizeToServer
{
public:
	FSynchronizeToServer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDesyncThresholdSeconds() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveMetaDataByClass
{
public:
	FRemoveMetaDataByClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetInClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBurnIn
{
public:
	FSetBurnIn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftClassPath GetInBurnInClass() {
		return memory.read<struct FSoftClassPath>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSettings
{
public:
	FSetSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetInSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};