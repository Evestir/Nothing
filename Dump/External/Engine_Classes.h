#pragma once 
#include <Engine_Structs.h>
 
 
 
class AActor
{
public:
	AActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FActorTickFunction GetPrimaryActorTick() {
		return memory.read<struct FActorTickFunction>(m_addr + 40);
	}
	char GetbNetTemporary() {
		return memory.read<char>(m_addr + 88);
	}
	char GetbNetStartup() {
		return memory.read<char>(m_addr + 88);
	}
	char GetbOnlyRelevantToOwner() {
		return memory.read<char>(m_addr + 88);
	}
	char GetbAlwaysRelevant() {
		return memory.read<char>(m_addr + 88);
	}
	char GetbReplicateMovement() {
		return memory.read<char>(m_addr + 88);
	}
	char GetbHidden() {
		return memory.read<char>(m_addr + 88);
	}
	char GetbTearOff() {
		return memory.read<char>(m_addr + 88);
	}
	char GetbForceNetAddressable() {
		return memory.read<char>(m_addr + 88);
	}
	char GetbExchangedRoles() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbNetLoadOnClient() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbNetUseOwnerRelevancy() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbRelevantForNetworkReplays() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbRelevantForLevelBounds() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbReplayRewindable() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbAllowTickBeforeBeginPlay() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbAutoDestroyWhenFinished() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbCanBeDamaged() {
		return memory.read<char>(m_addr + 90);
	}
	char GetbBlockInput() {
		return memory.read<char>(m_addr + 90);
	}
	char GetbCollideWhenPlacing() {
		return memory.read<char>(m_addr + 90);
	}
	char GetbFindCameraComponentWhenViewTarget() {
		return memory.read<char>(m_addr + 90);
	}
	char GetbGenerateOverlapEventsDuringLevelStreaming() {
		return memory.read<char>(m_addr + 90);
	}
	char GetbIgnoresOriginShifting() {
		return memory.read<char>(m_addr + 90);
	}
	char GetbEnableAutoLODGeneration() {
		return memory.read<char>(m_addr + 90);
	}
	char GetbIsEditorOnlyActor() {
		return memory.read<char>(m_addr + 90);
	}
	char GetbActorSeamlessTraveled() {
		return memory.read<char>(m_addr + 91);
	}
	char GetbReplicates() {
		return memory.read<char>(m_addr + 91);
	}
	char GetbCanBeInCluster() {
		return memory.read<char>(m_addr + 91);
	}
	char GetbAllowReceiveTickEventOnDedicatedServer() {
		return memory.read<char>(m_addr + 91);
	}
	char GetbActorEnableCollision() {
		return memory.read<char>(m_addr + 92);
	}
	char GetbActorIsBeingDestroyed() {
		return memory.read<char>(m_addr + 92);
	}
	enum class EActorUpdateOverlapsMethod GetUpdateOverlapsMethodDuringLevelStreaming() {
		return memory.read<enum class EActorUpdateOverlapsMethod>(m_addr + 93);
	}
	enum class EActorUpdateOverlapsMethod GetDefaultUpdateOverlapsMethodDuringLevelStreaming() {
		return memory.read<enum class EActorUpdateOverlapsMethod>(m_addr + 94);
	}
	enum class ENetRole GetRemoteRole() {
		return memory.read<enum class ENetRole>(m_addr + 95);
	}
	struct FRepMovement GetReplicatedMovement() {
		return memory.read<struct FRepMovement>(m_addr + 96);
	}
	float GetInitialLifeSpan() {
		return memory.read<float>(m_addr + 148);
	}
	float GetCustomTimeDilation() {
		return memory.read<float>(m_addr + 152);
	}
	struct FRepAttachment GetAttachmentReplication() {
		return memory.read<struct FRepAttachment>(m_addr + 160);
	}
	struct AActor GetOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct AActor(ptr_addr);
	}
	struct FName GetNetDriverName() {
		return memory.read<struct FName>(m_addr + 232);
	}
	enum class ENetRole GetRole() {
		return memory.read<enum class ENetRole>(m_addr + 240);
	}
	enum class ENetDormancy GetNetDormancy() {
		return memory.read<enum class ENetDormancy>(m_addr + 241);
	}
	enum class ESpawnActorCollisionHandlingMethod GetSpawnCollisionHandlingMethod() {
		return memory.read<enum class ESpawnActorCollisionHandlingMethod>(m_addr + 242);
	}
	enum class EAutoReceiveInput GetAutoReceiveInput() {
		return memory.read<enum class EAutoReceiveInput>(m_addr + 243);
	}
	int32_t GetInputPriority() {
		return memory.read<int32_t>(m_addr + 244);
	}
	struct UInputComponent GetInputComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct UInputComponent(ptr_addr);
	}
	float GetNetCullDistanceSquared() {
		return memory.read<float>(m_addr + 256);
	}
	int32_t GetNetTag() {
		return memory.read<int32_t>(m_addr + 260);
	}
	float GetNetUpdateFrequency() {
		return memory.read<float>(m_addr + 264);
	}
	float GetMinNetUpdateFrequency() {
		return memory.read<float>(m_addr + 268);
	}
	float GetNetPriority() {
		return memory.read<float>(m_addr + 272);
	}
	struct APawn GetInstigator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 280);
		return struct APawn(ptr_addr);
	}
	struct TArray<struct AActor> GetChildren() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct TArray<struct AActor>(ptr_addr);
	}
	struct USceneComponent GetRootComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct USceneComponent(ptr_addr);
	}
	struct TArray<struct AMatineeActor> GetControllingMatineeActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct TArray<struct AMatineeActor>(ptr_addr);
	}
	struct TArray<struct FName> GetLayers() {
		return memory.read<struct TArray<struct FName>>(m_addr + 336);
	}
	struct TWeakObjectPtr<UChildActorComponent> GetParentComponent() {
		return memory.read<struct TWeakObjectPtr<UChildActorComponent>>(m_addr + 352);
	}
	struct TArray<struct FName> GetTags() {
		return memory.read<struct TArray<struct FName>>(m_addr + 368);
	}
	struct FMulticastSparseDelegate GetOnTakeAnyDamage() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 384);
	}
	struct FMulticastSparseDelegate GetOnTakePointDamage() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 385);
	}
	struct FMulticastSparseDelegate GetOnTakeRadialDamage() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 386);
	}
	struct FMulticastSparseDelegate GetOnActorBeginOverlap() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 387);
	}
	struct FMulticastSparseDelegate GetOnActorEndOverlap() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 388);
	}
	struct FMulticastSparseDelegate GetOnBeginCursorOver() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 389);
	}
	struct FMulticastSparseDelegate GetOnEndCursorOver() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 390);
	}
	struct FMulticastSparseDelegate GetOnClicked() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 391);
	}
	struct FMulticastSparseDelegate GetOnReleased() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 392);
	}
	struct FMulticastSparseDelegate GetOnInputTouchBegin() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 393);
	}
	struct FMulticastSparseDelegate GetOnInputTouchEnd() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 394);
	}
	struct FMulticastSparseDelegate GetOnInputTouchEnter() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 395);
	}
	struct FMulticastSparseDelegate GetOnInputTouchLeave() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 396);
	}
	struct FMulticastSparseDelegate GetOnActorHit() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 397);
	}
	struct FMulticastSparseDelegate GetOnDestroyed() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 398);
	}
	struct FMulticastSparseDelegate GetOnEndPlay() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 399);
	}
	struct TArray<struct UActorComponent> GetInstanceComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 496);
		return struct TArray<struct UActorComponent>(ptr_addr);
	}
	struct TArray<struct UActorComponent> GetBlueprintCreatedComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return struct TArray<struct UActorComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULightmassPortalComponent
{
public:
	ULightmassPortalComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBoxComponent GetPreviewBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UBoxComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlayer
{
public:
	UPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct APlayerController(ptr_addr);
	}
	int32_t GetCurrentNetSpeed() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetConfiguredInternetSpeed() {
		return memory.read<int32_t>(m_addr + 60);
	}
	int32_t GetConfiguredLanSpeed() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCurveTable
{
public:
	UCurveTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGameInstance
{
public:
	UGameInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct ULocalPlayer> GetLocalPlayers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct ULocalPlayer>(ptr_addr);
	}
	struct UOnlineSession GetOnlineSession() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UOnlineSession(ptr_addr);
	}
	struct TArray<struct UObject> GetReferencedObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TArray<struct UObject>(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnPawnControllerChangedDelegates() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UExponentialHeightFogComponent
{
public:
	UExponentialHeightFogComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFogDensity() {
		return memory.read<float>(m_addr + 520);
	}
	float GetFogHeightFalloff() {
		return memory.read<float>(m_addr + 524);
	}
	struct FExponentialHeightFogData GetSecondFogData() {
		return memory.read<struct FExponentialHeightFogData>(m_addr + 528);
	}
	struct FLinearColor GetFogInscatteringColor() {
		return memory.read<struct FLinearColor>(m_addr + 540);
	}
	struct UTextureCube GetInscatteringColorCubemap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UTextureCube(ptr_addr);
	}
	float GetInscatteringColorCubemapAngle() {
		return memory.read<float>(m_addr + 568);
	}
	struct FLinearColor GetInscatteringTextureTint() {
		return memory.read<struct FLinearColor>(m_addr + 572);
	}
	float GetFullyDirectionalInscatteringColorDistance() {
		return memory.read<float>(m_addr + 588);
	}
	float GetNonDirectionalInscatteringColorDistance() {
		return memory.read<float>(m_addr + 592);
	}
	float GetDirectionalInscatteringExponent() {
		return memory.read<float>(m_addr + 596);
	}
	float GetDirectionalInscatteringStartDistance() {
		return memory.read<float>(m_addr + 600);
	}
	struct FLinearColor GetDirectionalInscatteringColor() {
		return memory.read<struct FLinearColor>(m_addr + 604);
	}
	float GetFogMaxOpacity() {
		return memory.read<float>(m_addr + 620);
	}
	float GetStartDistance() {
		return memory.read<float>(m_addr + 624);
	}
	float GetFogCutoffDistance() {
		return memory.read<float>(m_addr + 628);
	}
	bool GetbEnableVolumetricFog() {
		return memory.read<bool>(m_addr + 632);
	}
	float GetVolumetricFogScatteringDistribution() {
		return memory.read<float>(m_addr + 636);
	}
	struct FColor GetVolumetricFogAlbedo() {
		return memory.read<struct FColor>(m_addr + 640);
	}
	struct FLinearColor GetVolumetricFogEmissive() {
		return memory.read<struct FLinearColor>(m_addr + 644);
	}
	float GetVolumetricFogExtinctionScale() {
		return memory.read<float>(m_addr + 660);
	}
	float GetVolumetricFogDistance() {
		return memory.read<float>(m_addr + 664);
	}
	float GetVolumetricFogStaticLightingScatteringIntensity() {
		return memory.read<float>(m_addr + 668);
	}
	bool GetbOverrideLightColorsWithFogInscatteringColors() {
		return memory.read<bool>(m_addr + 672);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubsystem
{
public:
	USubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackMoveAxis
{
public:
	UInterpTrackMoveAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EInterpMoveAxis GetMoveAxis() {
		return memory.read<enum class EInterpMoveAxis>(m_addr + 144);
	}
	struct FInterpLookupTrack GetLookupTrack() {
		return memory.read<struct FInterpLookupTrack>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureSample
{
public:
	UMaterialExpressionTextureSample(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetCoordinates() {
		return memory.read<struct FExpressionInput>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSizeScale
{
public:
	UParticleModuleSizeScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetSizeScale() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	char GetEnableX() {
		return memory.read<char>(m_addr + 120);
	}
	char GetEnableY() {
		return memory.read<char>(m_addr + 120);
	}
	char GetEnableZ() {
		return memory.read<char>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimCurveCompressionCodec
{
public:
	UAnimCurveCompressionCodec(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGameInstanceSubsystem
{
public:
	UGameInstanceSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USoundEffectSourcePresetChain
{
public:
	USoundEffectSourcePresetChain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSourceEffectChainEntry> GetChain() {
		return memory.read<struct TArray<struct FSourceEffectChainEntry>>(m_addr + 40);
	}
	char GetbPlayEffectChainTails() {
		return memory.read<char>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class ADirectionalLight
{
public:
	ADirectionalLight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureSampleParameter2D
{
public:
	UMaterialExpressionTextureSampleParameter2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInputSettings
{
public:
	UInputSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInputAxisConfigEntry> GetAxisConfig() {
		return memory.read<struct TArray<struct FInputAxisConfigEntry>>(m_addr + 40);
	}
	char GetbAltEnterTogglesFullscreen() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbF11TogglesFullscreen() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbUseMouseForTouch() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbEnableMouseSmoothing() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbEnableFOVScaling() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbCaptureMouseOnLaunch() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbDefaultViewportMouseLock() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbAlwaysShowTouchInterface() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbShowConsoleOnFourFingerTap() {
		return memory.read<char>(m_addr + 57);
	}
	char GetbEnableGestureRecognizer() {
		return memory.read<char>(m_addr + 57);
	}
	bool GetbUseAutocorrect() {
		return memory.read<bool>(m_addr + 58);
	}
	struct TArray<struct FString> GetExcludedAutocorrectOS() {
		return memory.read<struct TArray<struct FString>>(m_addr + 64);
	}
	struct TArray<struct FString> GetExcludedAutocorrectCultures() {
		return memory.read<struct TArray<struct FString>>(m_addr + 80);
	}
	struct TArray<struct FString> GetExcludedAutocorrectDeviceModels() {
		return memory.read<struct TArray<struct FString>>(m_addr + 96);
	}
	enum class EMouseCaptureMode GetDefaultViewportMouseCaptureMode() {
		return memory.read<enum class EMouseCaptureMode>(m_addr + 112);
	}
	enum class EMouseLockMode GetDefaultViewportMouseLockMode() {
		return memory.read<enum class EMouseLockMode>(m_addr + 113);
	}
	float GetFOVScale() {
		return memory.read<float>(m_addr + 116);
	}
	float GetDoubleClickTime() {
		return memory.read<float>(m_addr + 120);
	}
	struct TArray<struct FInputActionKeyMapping> GetActionMappings() {
		return memory.read<struct TArray<struct FInputActionKeyMapping>>(m_addr + 128);
	}
	struct TArray<struct FInputAxisKeyMapping> GetAxisMappings() {
		return memory.read<struct TArray<struct FInputAxisKeyMapping>>(m_addr + 144);
	}
	struct TArray<struct FInputActionSpeechMapping> GetSpeechMappings() {
		return memory.read<struct TArray<struct FInputActionSpeechMapping>>(m_addr + 160);
	}
	struct TSoftClassPtr<UObject> GetDefaultPlayerInputClass() {
		return memory.read<struct TSoftClassPtr<UObject>>(m_addr + 176);
	}
	struct TSoftClassPtr<UObject> GetDefaultInputComponentClass() {
		return memory.read<struct TSoftClassPtr<UObject>>(m_addr + 216);
	}
	struct FSoftObjectPath GetDefaultTouchInterface() {
		return memory.read<struct FSoftObjectPath>(m_addr + 256);
	}
	struct FKey GetConsoleKey() {
		return memory.read<struct FKey>(m_addr + 280);
	}
	struct TArray<struct FKey> GetConsoleKeys() {
		return memory.read<struct TArray<struct FKey>>(m_addr + 304);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNetDriver
{
public:
	UNetDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetNetConnectionClassName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetReplicationDriverClassName() {
		return memory.read<struct FString>(m_addr + 64);
	}
	int32_t GetMaxDownloadSize() {
		return memory.read<int32_t>(m_addr + 80);
	}
	char GetbClampListenServerTickRate() {
		return memory.read<char>(m_addr + 84);
	}
	int32_t GetNetServerMaxTickRate() {
		return memory.read<int32_t>(m_addr + 88);
	}
	int32_t GetMaxNetTickRate() {
		return memory.read<int32_t>(m_addr + 92);
	}
	int32_t GetMaxInternetClientRate() {
		return memory.read<int32_t>(m_addr + 96);
	}
	int32_t GetMaxClientRate() {
		return memory.read<int32_t>(m_addr + 100);
	}
	float GetServerTravelPause() {
		return memory.read<float>(m_addr + 104);
	}
	float GetSpawnPrioritySeconds() {
		return memory.read<float>(m_addr + 108);
	}
	float GetRelevantTimeout() {
		return memory.read<float>(m_addr + 112);
	}
	float GetKeepAliveTime() {
		return memory.read<float>(m_addr + 116);
	}
	float GetInitialConnectTimeout() {
		return memory.read<float>(m_addr + 120);
	}
	float GetConnectionTimeout() {
		return memory.read<float>(m_addr + 124);
	}
	float GetTimeoutMultiplierForUnoptimizedBuilds() {
		return memory.read<float>(m_addr + 128);
	}
	bool GetbNoTimeouts() {
		return memory.read<bool>(m_addr + 132);
	}
	bool GetbNeverApplyNetworkEmulationSettings() {
		return memory.read<bool>(m_addr + 133);
	}
	struct UNetConnection GetServerConnection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UNetConnection(ptr_addr);
	}
	struct TArray<struct UNetConnection> GetClientConnections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UNetConnection>(ptr_addr);
	}
	int32_t GetRecentlyDisconnectedTrackingTime() {
		return memory.read<int32_t>(m_addr + 256);
	}
	struct UWorld GetWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct UWorld(ptr_addr);
	}
	struct UPackage GetWorldPackage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct UPackage(ptr_addr);
	}
	UObject GetNetConnectionClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 368);
		return UObject(ptr_addr);
	}
	UObject GetReplicationDriverClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 376);
		return UObject(ptr_addr);
	}
	struct FName GetNetDriverName() {
		return memory.read<struct FName>(m_addr + 400);
	}
	struct TArray<struct FChannelDefinition> GetChannelDefinitions() {
		return memory.read<struct TArray<struct FChannelDefinition>>(m_addr + 408);
	}
	struct TMap<struct FName, struct FChannelDefinition> GetChannelDefinitionMap() {
		return memory.read<struct TMap<struct FName, struct FChannelDefinition>>(m_addr + 424);
	}
	struct TArray<struct UChannel> GetActorChannelPool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct TArray<struct UChannel>(ptr_addr);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 528);
	}
	struct UReplicationDriver GetReplicationDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct UReplicationDriver(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AExponentialHeightFog
{
public:
	AExponentialHeightFog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UExponentialHeightFogComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UExponentialHeightFogComponent(ptr_addr);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 552);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNetConnection
{
public:
	UNetConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UChildConnection> GetChildren() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct TArray<struct UChildConnection>(ptr_addr);
	}
	struct UNetDriver GetDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UNetDriver(ptr_addr);
	}
	UPackageMap GetPackageMapClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return UPackageMap(ptr_addr);
	}
	struct UPackageMap GetPackageMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UPackageMap(ptr_addr);
	}
	struct TArray<struct UChannel> GetOpenChannels() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct TArray<struct UChannel>(ptr_addr);
	}
	struct TArray<struct AActor> GetSentTemporaries() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct TArray<struct AActor>(ptr_addr);
	}
	struct AActor GetViewTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOwningActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct AActor(ptr_addr);
	}
	int32_t GetMaxPacket() {
		return memory.read<int32_t>(m_addr + 160);
	}
	char GetInternalAck() {
		return memory.read<char>(m_addr + 164);
	}
	struct FUniqueNetIdRepl GetplayerId() {
		return memory.read<struct FUniqueNetIdRepl>(m_addr + 352);
	}
	double GetLastReceiveTime() {
		return memory.read<double>(m_addr + 464);
	}
	struct TArray<struct UChannel> GetChannelsToTick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 5392);
		return struct TArray<struct UChannel>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackParticleReplay
{
public:
	UInterpTrackParticleReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FParticleReplayTrackKey> GetTrackKeys() {
		return memory.read<struct TArray<struct FParticleReplayTrackKey>>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPackageMapClient
{
public:
	UPackageMapClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBookMark
{
public:
	UBookMark(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 52);
	}
	struct TArray<struct FString> GetHiddenLevels() {
		return memory.read<struct TArray<struct FString>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleColorScaleOverLife
{
public:
	UParticleModuleColorScaleOverLife(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetColorScaleOverLife() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	struct FRawDistributionFloat GetAlphaScaleOverLife() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 120);
	}
	char GetbEmitterTime() {
		return memory.read<char>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlueprintFunctionLibrary
{
public:
	UBlueprintFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlueprintAsyncActionBase
{
public:
	UBlueprintAsyncActionBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UHapticFeedbackEffect_SoundWave
{
public:
	UHapticFeedbackEffect_SoundWave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundWave GetSoundWave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct USoundWave(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDecalComponent
{
public:
	UDecalComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetDecalMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UTexture GetDecalShadowmapTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 528);
		return struct UTexture(ptr_addr);
	}
	struct FVector4 GetShadowmapUV() {
		return memory.read<struct FVector4>(m_addr + 544);
	}
	char GetbOverrideDecalStaticShadowRes() {
		return memory.read<char>(m_addr + 560);
	}
	int32_t GetOverriddenStaticShadowmapRes() {
		return memory.read<int32_t>(m_addr + 564);
	}
	int32_t GetSortOrder() {
		return memory.read<int32_t>(m_addr + 568);
	}
	bool GetbDrawOverDecal() {
		return memory.read<bool>(m_addr + 572);
	}
	float GetFadeScreenSize() {
		return memory.read<float>(m_addr + 576);
	}
	float GetFadeStartDelay() {
		return memory.read<float>(m_addr + 580);
	}
	float GetFadeDuration() {
		return memory.read<float>(m_addr + 584);
	}
	float GetFadeInDuration() {
		return memory.read<float>(m_addr + 588);
	}
	float GetFadeInStartDelay() {
		return memory.read<float>(m_addr + 592);
	}
	char GetbDestroyOwnerAfterFade() {
		return memory.read<char>(m_addr + 596);
	}
	struct FVector GetDecalSize() {
		return memory.read<struct FVector>(m_addr + 600);
	}
	bool GetbUseMasterPrimitive() {
		return memory.read<bool>(m_addr + 612);
	}
	struct UPrimitiveComponent GetMasterPrimitive() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UPrimitiveComponent(ptr_addr);
	}
	bool GetbDawWithLightingOnMobile() {
		return memory.read<bool>(m_addr + 624);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBoneMaskFilter
{
public:
	UBoneMaskFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInputBlendPose> GetBlendPoses() {
		return memory.read<struct TArray<struct FInputBlendPose>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavMovementComponent
{
public:
	UNavMovementComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNavAgentProperties GetNavAgentProps() {
		return memory.read<struct FNavAgentProperties>(m_addr + 240);
	}
	float GetFixedPathBrakingDistance() {
		return memory.read<float>(m_addr + 288);
	}
	char GetbUpdateNavAgentWithOwnersCollision() {
		return memory.read<char>(m_addr + 292);
	}
	char GetbUseAccelerationForPaths() {
		return memory.read<char>(m_addr + 292);
	}
	char GetbUseFixedBrakingDistanceForPaths() {
		return memory.read<char>(m_addr + 292);
	}
	struct FMovementProperties GetMovementState() {
		return memory.read<struct FMovementProperties>(m_addr + 293);
	}
	struct UObject GetPathFollowingComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionVertexNormalWS
{
public:
	UMaterialExpressionVertexNormalWS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOnlineBlueprintCallProxyBase
{
public:
	UOnlineBlueprintCallProxyBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UKismetMaterialLibrary
{
public:
	UKismetMaterialLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDataAsset
{
public:
	UDataAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UDataAsset GetNativeClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return UDataAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOnlineEngineInterface
{
public:
	UOnlineEngineInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOnlineSession
{
public:
	UOnlineSession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UReverbEffect
{
public:
	UReverbEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbBypassEarlyReflections() {
		return memory.read<bool>(m_addr + 40);
	}
	float GetReflectionsDelay() {
		return memory.read<float>(m_addr + 44);
	}
	float GetGainHF() {
		return memory.read<float>(m_addr + 48);
	}
	float GetReflectionsGain() {
		return memory.read<float>(m_addr + 52);
	}
	bool GetbBypassLateReflections() {
		return memory.read<bool>(m_addr + 56);
	}
	float GetLateDelay() {
		return memory.read<float>(m_addr + 60);
	}
	float GetDecayTime() {
		return memory.read<float>(m_addr + 64);
	}
	float GetDensity() {
		return memory.read<float>(m_addr + 68);
	}
	float GetDiffusion() {
		return memory.read<float>(m_addr + 72);
	}
	float GetAirAbsorptionGainHF() {
		return memory.read<float>(m_addr + 76);
	}
	float GetDecayHFRatio() {
		return memory.read<float>(m_addr + 80);
	}
	float GetLateGain() {
		return memory.read<float>(m_addr + 84);
	}
	float GetGain() {
		return memory.read<float>(m_addr + 88);
	}
	float GetRoomRolloffFactor() {
		return memory.read<float>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackSound
{
public:
	UInterpTrackSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSoundTrackKey> GetSounds() {
		return memory.read<struct TArray<struct FSoundTrackKey>>(m_addr + 144);
	}
	char GetbPlayOnReverse() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbContinueSoundOnMatineeEnd() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbSuppressSubtitles() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbTreatAsDialogue() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbAttach() {
		return memory.read<char>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBookMark2D
{
public:
	UBookMark2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetZoom2D() {
		return memory.read<float>(m_addr + 40);
	}
	struct FIntPoint GetLocation() {
		return memory.read<struct FIntPoint>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureSampleParameter
{
public:
	UMaterialExpressionTextureSampleParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 96);
	}
	struct FGuid GetExpressionGUID() {
		return memory.read<struct FGuid>(m_addr + 104);
	}
	struct FName GetGroup() {
		return memory.read<struct FName>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleAttractorBase
{
public:
	UParticleModuleAttractorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UStereoLayerShapeCubemap
{
public:
	UStereoLayerShapeCubemap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackVectorMaterialParam
{
public:
	UInterpTrackVectorMaterialParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMaterialInterface> GetTargetMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct FName GetParamName() {
		return memory.read<struct FName>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class UActorComponent
{
public:
	UActorComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FActorComponentTickFunction GetPrimaryComponentTick() {
		return memory.read<struct FActorComponentTickFunction>(m_addr + 48);
	}
	struct TArray<struct FName> GetComponentTags() {
		return memory.read<struct TArray<struct FName>>(m_addr + 96);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}
	int32_t GetUCSSerializationIndex() {
		return memory.read<int32_t>(m_addr + 132);
	}
	char GetbNetAddressable() {
		return memory.read<char>(m_addr + 136);
	}
	char GetbReplicates() {
		return memory.read<char>(m_addr + 136);
	}
	char GetbAutoActivate() {
		return memory.read<char>(m_addr + 137);
	}
	char GetbIsActive() {
		return memory.read<char>(m_addr + 138);
	}
	char GetbEditableWhenInherited() {
		return memory.read<char>(m_addr + 138);
	}
	char GetbCanEverAffectNavigation() {
		return memory.read<char>(m_addr + 138);
	}
	char GetbIsEditorOnly() {
		return memory.read<char>(m_addr + 138);
	}
	enum class EComponentCreationMethod GetCreationMethod() {
		return memory.read<enum class EComponentCreationMethod>(m_addr + 140);
	}
	struct FMulticastSparseDelegate GetOnComponentActivated() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 141);
	}
	struct FMulticastSparseDelegate GetOnComponentDeactivated() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 142);
	}
	struct TArray<struct FSimpleMemberReference> GetUCSModifiedProperties() {
		return memory.read<struct TArray<struct FSimpleMemberReference>>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimStateMachineTypes
{
public:
	UAnimStateMachineTypes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFontImportOptions
{
public:
	UFontImportOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFontImportOptionsData GetData() {
		return memory.read<struct FFontImportOptionsData>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAssetMappingTable
{
public:
	UAssetMappingTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAssetMapping> GetMappedAssets() {
		return memory.read<struct TArray<struct FAssetMapping>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProjectileMovementComponent
{
public:
	UProjectileMovementComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInitialSpeed() {
		return memory.read<float>(m_addr + 240);
	}
	float GetMaxSpeed() {
		return memory.read<float>(m_addr + 244);
	}
	char GetbRotationFollowsVelocity() {
		return memory.read<char>(m_addr + 248);
	}
	char GetbRotationRemainsVertical() {
		return memory.read<char>(m_addr + 248);
	}
	char GetbShouldBounce() {
		return memory.read<char>(m_addr + 248);
	}
	char GetbInitialVelocityInLocalSpace() {
		return memory.read<char>(m_addr + 248);
	}
	char GetbForceSubStepping() {
		return memory.read<char>(m_addr + 248);
	}
	char GetbSimulationEnabled() {
		return memory.read<char>(m_addr + 248);
	}
	char GetbSweepCollision() {
		return memory.read<char>(m_addr + 248);
	}
	char GetbIsHomingProjectile() {
		return memory.read<char>(m_addr + 248);
	}
	char GetbBounceAngleAffectsFriction() {
		return memory.read<char>(m_addr + 249);
	}
	char GetbIsSliding() {
		return memory.read<char>(m_addr + 249);
	}
	char GetbInterpMovement() {
		return memory.read<char>(m_addr + 249);
	}
	char GetbInterpRotation() {
		return memory.read<char>(m_addr + 249);
	}
	float GetPreviousHitTime() {
		return memory.read<float>(m_addr + 252);
	}
	struct FVector GetPreviousHitNormal() {
		return memory.read<struct FVector>(m_addr + 256);
	}
	float GetProjectileGravityScale() {
		return memory.read<float>(m_addr + 268);
	}
	float GetBuoyancy() {
		return memory.read<float>(m_addr + 272);
	}
	float GetBounciness() {
		return memory.read<float>(m_addr + 276);
	}
	float GetFriction() {
		return memory.read<float>(m_addr + 280);
	}
	float GetBounceVelocityStopSimulatingThreshold() {
		return memory.read<float>(m_addr + 284);
	}
	float GetMinFrictionFraction() {
		return memory.read<float>(m_addr + 288);
	}
	struct FMulticastInlineDelegate GetOnProjectileBounce() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 296);
	}
	struct FMulticastInlineDelegate GetOnProjectileStop() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 312);
	}
	float GetHomingAccelerationMagnitude() {
		return memory.read<float>(m_addr + 328);
	}
	struct TWeakObjectPtr<USceneComponent> GetHomingTargetComponent() {
		return memory.read<struct TWeakObjectPtr<USceneComponent>>(m_addr + 332);
	}
	float GetMaxSimulationTimeStep() {
		return memory.read<float>(m_addr + 340);
	}
	int32_t GetMaxSimulationIterations() {
		return memory.read<int32_t>(m_addr + 344);
	}
	int32_t GetBounceAdditionalIterations() {
		return memory.read<int32_t>(m_addr + 348);
	}
	float GetInterpLocationTime() {
		return memory.read<float>(m_addr + 352);
	}
	float GetInterpRotationTime() {
		return memory.read<float>(m_addr + 356);
	}
	float GetInterpLocationMaxLagDistance() {
		return memory.read<float>(m_addr + 360);
	}
	float GetInterpLocationSnapToTargetDistance() {
		return memory.read<float>(m_addr + 364);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimInstance
{
public:
	UAnimInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeleton GetCurrentSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct USkeleton(ptr_addr);
	}
	enum class ERootMotionMode GetRootMotionMode() {
		return memory.read<enum class ERootMotionMode>(m_addr + 48);
	}
	char GetbUseMultiThreadedAnimationUpdate() {
		return memory.read<char>(m_addr + 49);
	}
	char GetbUsingCopyPoseFromMesh() {
		return memory.read<char>(m_addr + 49);
	}
	char GetbReceiveNotifiesFromLinkedInstances() {
		return memory.read<char>(m_addr + 49);
	}
	char GetbPropagateNotifiesToLinkedInstances() {
		return memory.read<char>(m_addr + 49);
	}
	char GetbQueueMontageEvents() {
		return memory.read<char>(m_addr + 49);
	}
	struct FMulticastInlineDelegate GetOnMontageBlendingOut() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}
	struct FMulticastInlineDelegate GetOnMontageStarted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 72);
	}
	struct FMulticastInlineDelegate GetOnMontageEnded() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 88);
	}
	struct FMulticastInlineDelegate GetOnAllMontageInstancesEnded() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}
	struct FAnimNotifyQueue GetNotifyQueue() {
		return memory.read<struct FAnimNotifyQueue>(m_addr + 256);
	}
	struct TArray<struct FAnimNotifyEvent> GetActiveAnimNotifyState() {
		return memory.read<struct TArray<struct FAnimNotifyEvent>>(m_addr + 368);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEngineCustomTimeStep
{
public:
	UEngineCustomTimeStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USceneComponent
{
public:
	USceneComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<APhysicsVolume> GetPhysicsVolume() {
		return memory.read<struct TWeakObjectPtr<APhysicsVolume>>(m_addr + 184);
	}
	struct USceneComponent GetAttachParent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct USceneComponent(ptr_addr);
	}
	struct FName GetAttachSocketName() {
		return memory.read<struct FName>(m_addr + 200);
	}
	struct TArray<struct USceneComponent> GetAttachChildren() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct TArray<struct USceneComponent>(ptr_addr);
	}
	struct TArray<struct USceneComponent> GetClientAttachedChildren() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct TArray<struct USceneComponent>(ptr_addr);
	}
	struct FVector GetRelativeLocation() {
		return memory.read<struct FVector>(m_addr + 284);
	}
	struct FRotator GetRelativeRotation() {
		return memory.read<struct FRotator>(m_addr + 296);
	}
	struct FVector GetRelativeScale3D() {
		return memory.read<struct FVector>(m_addr + 308);
	}
	struct FVector GetComponentVelocity() {
		return memory.read<struct FVector>(m_addr + 320);
	}
	char GetbComponentToWorldUpdated() {
		return memory.read<char>(m_addr + 332);
	}
	char GetbAbsoluteLocation() {
		return memory.read<char>(m_addr + 332);
	}
	char GetbAbsoluteRotation() {
		return memory.read<char>(m_addr + 332);
	}
	char GetbAbsoluteScale() {
		return memory.read<char>(m_addr + 332);
	}
	char GetbVisible() {
		return memory.read<char>(m_addr + 332);
	}
	char GetbShouldBeAttached() {
		return memory.read<char>(m_addr + 332);
	}
	char GetbShouldSnapLocationWhenAttached() {
		return memory.read<char>(m_addr + 332);
	}
	char GetbShouldSnapRotationWhenAttached() {
		return memory.read<char>(m_addr + 333);
	}
	char GetbShouldUpdatePhysicsVolume() {
		return memory.read<char>(m_addr + 333);
	}
	char GetbHiddenInGame() {
		return memory.read<char>(m_addr + 333);
	}
	char GetbIsExceptMobile() {
		return memory.read<char>(m_addr + 333);
	}
	char GetbBoundsChangeTriggersStreamingDataRebuild() {
		return memory.read<char>(m_addr + 333);
	}
	char GetbUseAttachParentBound() {
		return memory.read<char>(m_addr + 333);
	}
	enum class EComponentMobility GetMobility() {
		return memory.read<enum class EComponentMobility>(m_addr + 335);
	}
	enum class EDetailMode GetDetailMode() {
		return memory.read<enum class EDetailMode>(m_addr + 336);
	}
	int32_t GetMirrorDetailLevel() {
		return memory.read<int32_t>(m_addr + 340);
	}
	struct FMulticastSparseDelegate GetPhysicsVolumeChangedDelegate() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 344);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionNamedRerouteDeclaration
{
public:
	UMaterialExpressionNamedRerouteDeclaration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 84);
	}
	struct FGuid GetVariableGuid() {
		return memory.read<struct FGuid>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionHairAttributes
{
public:
	UMaterialExpressionHairAttributes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbUseTangentSpace() {
		return memory.read<char>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UKismetStringTableLibrary
{
public:
	UKismetStringTableLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDynamicSubsystem
{
public:
	UDynamicSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UKismetSystemLibrary
{
public:
	UKismetSystemLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleSystemReplay
{
public:
	UParticleSystemReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetClipIDNumber() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPrimitiveComponent
{
public:
	UPrimitiveComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinDrawDistance() {
		return memory.read<float>(m_addr + 528);
	}
	float GetLDMaxDrawDistance() {
		return memory.read<float>(m_addr + 532);
	}
	float GetCachedMaxDrawDistance() {
		return memory.read<float>(m_addr + 536);
	}
	bool GetbBlockNeverDistanceCullbyParent() {
		return memory.read<bool>(m_addr + 540);
	}
	enum class ESceneDepthPriorityGroup GetDepthPriorityGroup() {
		return memory.read<enum class ESceneDepthPriorityGroup>(m_addr + 541);
	}
	enum class ESceneDepthPriorityGroup GetViewOwnerDepthPriorityGroup() {
		return memory.read<enum class ESceneDepthPriorityGroup>(m_addr + 542);
	}
	enum class EIndirectLightingCacheQuality GetIndirectLightingCacheQuality() {
		return memory.read<enum class EIndirectLightingCacheQuality>(m_addr + 543);
	}
	enum class ELightmapType GetLightmapType() {
		return memory.read<enum class ELightmapType>(m_addr + 544);
	}
	char GetbUseMaxLODAsImposter() {
		return memory.read<char>(m_addr + 545);
	}
	char GetbBatchImpostersAsInstances() {
		return memory.read<char>(m_addr + 545);
	}
	char GetbNeverDistanceCull() {
		return memory.read<char>(m_addr + 545);
	}
	char GetbAlwaysCreatePhysicsState() {
		return memory.read<char>(m_addr + 545);
	}
	char GetbGenerateOverlapEvents() {
		return memory.read<char>(m_addr + 546);
	}
	char GetbMultiBodyOverlap() {
		return memory.read<char>(m_addr + 546);
	}
	char GetbTraceComplexOnMove() {
		return memory.read<char>(m_addr + 546);
	}
	char GetbReturnMaterialOnMove() {
		return memory.read<char>(m_addr + 546);
	}
	char GetbUseViewOwnerDepthPriorityGroup() {
		return memory.read<char>(m_addr + 546);
	}
	char GetbAllowCullDistanceVolume() {
		return memory.read<char>(m_addr + 546);
	}
	char GetbHasMotionBlurVelocityMeshes() {
		return memory.read<char>(m_addr + 546);
	}
	char GetbVisibleInReflectionCaptures() {
		return memory.read<char>(m_addr + 546);
	}
	char GetbVisibleInRealTimeSkyCaptures() {
		return memory.read<char>(m_addr + 547);
	}
	char GetbVisibleInRayTracing() {
		return memory.read<char>(m_addr + 547);
	}
	char GetbRenderInMainPass() {
		return memory.read<char>(m_addr + 547);
	}
	char GetbRenderInDepthPass() {
		return memory.read<char>(m_addr + 547);
	}
	char GetbReceivesDecals() {
		return memory.read<char>(m_addr + 547);
	}
	char GetbDecalOverDecal() {
		return memory.read<char>(m_addr + 547);
	}
	char GetbOwnerNoSee() {
		return memory.read<char>(m_addr + 547);
	}
	char GetbOnlyOwnerSee() {
		return memory.read<char>(m_addr + 547);
	}
	char GetbTreatAsBackgroundForOcclusion() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbUseAsOccluder() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbSelectable() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbForceMipStreaming() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbHasPerInstanceHitProxies() {
		return memory.read<char>(m_addr + 548);
	}
	char GetCastShadow() {
		return memory.read<char>(m_addr + 548);
	}
	char GetForceNoCastShadowOnMobile() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbAffectDynamicIndirectLighting() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbAffectDistanceFieldLighting() {
		return memory.read<char>(m_addr + 549);
	}
	char GetbCastDynamicShadow() {
		return memory.read<char>(m_addr + 549);
	}
	char GetbCastStaticShadow() {
		return memory.read<char>(m_addr + 549);
	}
	char GetbCastVolumetricTranslucentShadow() {
		return memory.read<char>(m_addr + 549);
	}
	char GetbCastContactShadow() {
		return memory.read<char>(m_addr + 549);
	}
	char GetbSelfShadowOnly() {
		return memory.read<char>(m_addr + 549);
	}
	char GetbCastFarShadow() {
		return memory.read<char>(m_addr + 549);
	}
	char GetbCastInsetShadow() {
		return memory.read<char>(m_addr + 549);
	}
	char GetbCastCinematicShadow() {
		return memory.read<char>(m_addr + 550);
	}
	char GetbCastHiddenShadow() {
		return memory.read<char>(m_addr + 550);
	}
	char GetbCastShadowAsTwoSided() {
		return memory.read<char>(m_addr + 550);
	}
	char GetbLightAsIfStatic() {
		return memory.read<char>(m_addr + 550);
	}
	char GetbLightAttachmentsAsGroup() {
		return memory.read<char>(m_addr + 550);
	}
	char GetbExcludeFromLightAttachmentGroup() {
		return memory.read<char>(m_addr + 550);
	}
	char GetbReceiveMobileCSMShadows() {
		return memory.read<char>(m_addr + 550);
	}
	char GetbSingleSampleShadowFromStationaryLights() {
		return memory.read<char>(m_addr + 550);
	}
	char GetbIgnoreRadialImpulse() {
		return memory.read<char>(m_addr + 551);
	}
	char GetbIgnoreRadialForce() {
		return memory.read<char>(m_addr + 551);
	}
	char GetbApplyImpulseOnDamage() {
		return memory.read<char>(m_addr + 551);
	}
	char GetbReplicatePhysicsToAutonomousProxy() {
		return memory.read<char>(m_addr + 551);
	}
	char GetbFillCollisionUnderneathForNavmesh() {
		return memory.read<char>(m_addr + 551);
	}
	char GetAlwaysLoadOnClient() {
		return memory.read<char>(m_addr + 551);
	}
	char GetAlwaysLoadOnServer() {
		return memory.read<char>(m_addr + 551);
	}
	char GetbUseEditorCompositing() {
		return memory.read<char>(m_addr + 551);
	}
	char GetbRenderCustomDepth() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbVisibleInSceneCaptureOnly() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbHiddenInSceneCapture() {
		return memory.read<char>(m_addr + 552);
	}
	enum class EHasCustomNavigableGeometry GetbHasCustomNavigableGeometry() {
		return memory.read<enum class EHasCustomNavigableGeometry>(m_addr + 553);
	}
	enum class ECanBeCharacterBase GetCanCharacterStepUpOn() {
		return memory.read<enum class ECanBeCharacterBase>(m_addr + 555);
	}
	struct FLightingChannels GetLightingChannels() {
		return memory.read<struct FLightingChannels>(m_addr + 556);
	}
	enum class ERendererStencilMask GetCustomDepthStencilWriteMask() {
		return memory.read<enum class ERendererStencilMask>(m_addr + 557);
	}
	int32_t GetCustomDepthStencilValue() {
		return memory.read<int32_t>(m_addr + 560);
	}
	int32_t GetOutlineStencilValue() {
		return memory.read<int32_t>(m_addr + 564);
	}
	char GetbUseLinearVelocityOnly() {
		return memory.read<char>(m_addr + 568);
	}
	char GetbDrawSSR() {
		return memory.read<char>(m_addr + 568);
	}
	struct FCustomPrimitiveData GetCustomPrimitiveData() {
		return memory.read<struct FCustomPrimitiveData>(m_addr + 576);
	}
	struct FCustomPrimitiveData GetCustomPrimitiveDataInternal() {
		return memory.read<struct FCustomPrimitiveData>(m_addr + 592);
	}
	int32_t GetTranslucencySortPriority() {
		return memory.read<int32_t>(m_addr + 616);
	}
	float GetTranslucencySortDistanceOffset() {
		return memory.read<float>(m_addr + 620);
	}
	int32_t GetVisibilityId() {
		return memory.read<int32_t>(m_addr + 624);
	}
	struct TArray<struct URuntimeVirtualTexture> GetRuntimeVirtualTextures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct TArray<struct URuntimeVirtualTexture>(ptr_addr);
	}
	int8_t GetVirtualTextureLodBias() {
		return memory.read<int8_t>(m_addr + 648);
	}
	int8_t GetVirtualTextureCullMips() {
		return memory.read<int8_t>(m_addr + 649);
	}
	int8_t GetVirtualTextureMinCoverage() {
		return memory.read<int8_t>(m_addr + 650);
	}
	enum class ERuntimeVirtualTextureMainPassType GetVirtualTextureRenderPassType() {
		return memory.read<enum class ERuntimeVirtualTextureMainPassType>(m_addr + 651);
	}
	float GetLpvBiasMultiplier() {
		return memory.read<float>(m_addr + 656);
	}
	float GetBoundsScale() {
		return memory.read<float>(m_addr + 668);
	}
	struct TArray<struct AActor> GetMoveIgnoreActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct TArray<struct AActor>(ptr_addr);
	}
	struct TArray<struct UPrimitiveComponent> GetMoveIgnoreComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct TArray<struct UPrimitiveComponent>(ptr_addr);
	}
	struct FBodyInstance GetBodyInstance() {
		return memory.read<struct FBodyInstance>(m_addr + 736);
	}
	struct FMulticastSparseDelegate GetOnComponentHit() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1080);
	}
	struct FMulticastSparseDelegate GetOnComponentBeginOverlap() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1081);
	}
	struct FMulticastSparseDelegate GetOnComponentEndOverlap() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1082);
	}
	struct FMulticastSparseDelegate GetOnComponentWake() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1083);
	}
	struct FMulticastSparseDelegate GetOnComponentSleep() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1084);
	}
	struct FMulticastSparseDelegate GetOnBeginCursorOver() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1086);
	}
	struct FMulticastSparseDelegate GetOnEndCursorOver() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1087);
	}
	struct FMulticastSparseDelegate GetOnClicked() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1088);
	}
	struct FMulticastSparseDelegate GetOnReleased() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1089);
	}
	struct FMulticastSparseDelegate GetOnInputTouchBegin() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1090);
	}
	struct FMulticastSparseDelegate GetOnInputTouchEnd() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1091);
	}
	struct FMulticastSparseDelegate GetOnInputTouchEnter() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1092);
	}
	struct FMulticastSparseDelegate GetOnInputTouchLeave() {
		return memory.read<struct FMulticastSparseDelegate>(m_addr + 1093);
	}
	struct UPrimitiveComponent GetLODParentPrimitive() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1120);
		return struct UPrimitiveComponent(ptr_addr);
	}
	char GetbUseMultiLODLevel() {
		return memory.read<char>(m_addr + 1128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionShadingPathSwitch
{
public:
	UMaterialExpressionShadingPathSwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetDefault() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetInputs[3]() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimNotify
{
public:
	UAnimNotify(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFXSystemComponent
{
public:
	UFXSystemComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDPICustomScalingRule
{
public:
	UDPICustomScalingRule(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UConsole
{
public:
	UConsole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULocalPlayer GetConsoleTargetPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct ULocalPlayer(ptr_addr);
	}
	struct UTexture2D GetDefaultTexture_Black() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetDefaultTexture_White() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UTexture2D(ptr_addr);
	}
	struct TArray<struct FString> GetHistoryBuffer() {
		return memory.read<struct TArray<struct FString>>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class ATriggerBase
{
public:
	ATriggerBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UShapeComponent GetCollisionComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UShapeComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFXSystemAsset
{
public:
	UFXSystemAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetMaxPoolSize() {
		return memory.read<uint32_t>(m_addr + 40);
	}
	uint32_t GetPoolPrimeSize() {
		return memory.read<uint32_t>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleEventReceiverSpawn
{
public:
	UParticleModuleEventReceiverSpawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetSpawnCount() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 64);
	}
	char GetbUseParticleTime() {
		return memory.read<char>(m_addr + 112);
	}
	char GetbUsePSysLocation() {
		return memory.read<char>(m_addr + 112);
	}
	char GetbInheritVelocity() {
		return memory.read<char>(m_addr + 112);
	}
	struct FRawDistributionVector GetInheritVelocityScale() {
		return memory.read<struct FRawDistributionVector>(m_addr + 120);
	}
	struct TArray<struct UPhysicalMaterial> GetPhysicalMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct TArray<struct UPhysicalMaterial>(ptr_addr);
	}
	char GetbBanPhysicalMaterials() {
		return memory.read<char>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackFloatParticleParam
{
public:
	UInterpTrackFloatParticleParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParamName() {
		return memory.read<struct FName>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundEffectPreset
{
public:
	USoundEffectPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ALightmassCharacterIndirectDetailVolume
{
public:
	ALightmassCharacterIndirectDetailVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSampleSpacingScale() {
		return memory.read<float>(m_addr + 600);
	}
	bool GetbIgnoreNearbyVolumeSample() {
		return memory.read<bool>(m_addr + 604);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHLODProxy
{
public:
	UHLODProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FHLODProxyMesh> GetProxyMeshes() {
		return memory.read<struct TArray<struct FHLODProxyMesh>>(m_addr + 40);
	}
	struct TMap<struct UHLODProxyDesc, struct FHLODProxyMesh> GetHLODActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TMap<struct UHLODProxyDesc, struct FHLODProxyMesh>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionShadowReplace
{
public:
	UMaterialExpressionShadowReplace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetDefault() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetShadow() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimNotifyState
{
public:
	UAnimNotifyState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USoundSubmixWithParentBase
{
public:
	USoundSubmixWithParentBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundSubmixBase GetParentSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct USoundSubmixBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDecalDerivative
{
public:
	UMaterialExpressionDecalDerivative(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshComponent
{
public:
	UMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMaterialInterface> GetOverrideMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	char GetbEnableMaterialParameterCaching() {
		return memory.read<char>(m_addr + 1168);
	}
	struct TArray<struct FOverayMaterialArray> GetOverlayMaterials() {
		return memory.read<struct TArray<struct FOverayMaterialArray>>(m_addr + 1176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovementComponent
{
public:
	UMovementComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetUpdatedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct USceneComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetUpdatedPrimitive() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetVelocity() {
		return memory.read<struct FVector>(m_addr + 196);
	}
	struct FVector GetPlaneConstraintNormal() {
		return memory.read<struct FVector>(m_addr + 208);
	}
	struct FVector GetPlaneConstraintOrigin() {
		return memory.read<struct FVector>(m_addr + 220);
	}
	char GetbUpdateOnlyIfRendered() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbAutoUpdateTickRegistration() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbTickBeforeOwner() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbAutoRegisterUpdatedComponent() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbConstrainToPlane() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbSnapToPlaneAtStart() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbAutoRegisterPhysicsVolumeUpdates() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbComponentShouldUpdatePhysicsVolume() {
		return memory.read<char>(m_addr + 232);
	}
	enum class EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting() {
		return memory.read<enum class EPlaneConstraintAxisSetting>(m_addr + 235);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFont
{
public:
	UFont(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EFontCacheType GetFontCacheType() {
		return memory.read<enum class EFontCacheType>(m_addr + 48);
	}
	struct TArray<struct FFontCharacter> GetCharacters() {
		return memory.read<struct TArray<struct FFontCharacter>>(m_addr + 56);
	}
	struct TArray<struct UTexture2D> GetTextures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct TArray<struct UTexture2D>(ptr_addr);
	}
	int32_t GetIsRemapped() {
		return memory.read<int32_t>(m_addr + 88);
	}
	float GetEmScale() {
		return memory.read<float>(m_addr + 92);
	}
	float GetAscent() {
		return memory.read<float>(m_addr + 96);
	}
	float GetDescent() {
		return memory.read<float>(m_addr + 100);
	}
	float GetLeading() {
		return memory.read<float>(m_addr + 104);
	}
	int32_t GetKerning() {
		return memory.read<int32_t>(m_addr + 108);
	}
	struct FFontImportOptionsData GetImportOptions() {
		return memory.read<struct FFontImportOptionsData>(m_addr + 112);
	}
	int32_t GetNumCharacters() {
		return memory.read<int32_t>(m_addr + 288);
	}
	struct TArray<int32_t> GetMaxCharHeight() {
		return memory.read<struct TArray<int32_t>>(m_addr + 296);
	}
	float GetScalingFactor() {
		return memory.read<float>(m_addr + 312);
	}
	int32_t GetLegacyFontSize() {
		return memory.read<int32_t>(m_addr + 316);
	}
	struct FName GetLegacyFontName() {
		return memory.read<struct FName>(m_addr + 320);
	}
	struct FCompositeFont GetCompositeFont() {
		return memory.read<struct FCompositeFont>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTimecodeProvider
{
public:
	UTimecodeProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrameDelay() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class ATargetPoint
{
public:
	ATargetPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAssetImportData
{
public:
	UAssetImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPolys
{
public:
	UPolys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimBoneCompressionCodec
{
public:
	UAnimBoneCompressionCodec(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEdGraphNode_Documentation
{
public:
	UEdGraphNode_Documentation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLink() {
		return memory.read<struct FString>(m_addr + 152);
	}
	struct FString GetExcerpt() {
		return memory.read<struct FString>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextureRenderTargetCube
{
public:
	UTextureRenderTargetCube(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSizeX() {
		return memory.read<int32_t>(m_addr + 384);
	}
	struct FLinearColor GetClearColor() {
		return memory.read<struct FLinearColor>(m_addr + 388);
	}
	enum class EPixelFormat GetOverrideFormat() {
		return memory.read<enum class EPixelFormat>(m_addr + 404);
	}
	char GetbHDR() {
		return memory.read<char>(m_addr + 405);
	}
	char GetbForceLinearGamma() {
		return memory.read<char>(m_addr + 405);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALight
{
public:
	ALight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULightComponent GetLightComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct ULightComponent(ptr_addr);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 552);
	}

private:
	std::uint64_t m_addr = 0;
};


class AInfo
{
public:
	AInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AGameModeBase
{
public:
	AGameModeBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOptionsString() {
		return memory.read<struct FString>(m_addr + 544);
	}
	AGameSession GetGameSessionClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return AGameSession(ptr_addr);
	}
	AGameStateBase GetGameStateClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return AGameStateBase(ptr_addr);
	}
	APlayerController GetPlayerControllerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return APlayerController(ptr_addr);
	}
	APlayerState GetPlayerStateClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return APlayerState(ptr_addr);
	}
	AHUD GetHUDClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return AHUD(ptr_addr);
	}
	APawn GetDefaultPawnClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return APawn(ptr_addr);
	}
	ASpectatorPawn GetSpectatorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return ASpectatorPawn(ptr_addr);
	}
	APlayerController GetReplaySpectatorPlayerControllerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return APlayerController(ptr_addr);
	}
	AServerStatReplicator GetServerStatReplicatorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return AServerStatReplicator(ptr_addr);
	}
	struct AGameSession GetGameSession() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct AGameSession(ptr_addr);
	}
	struct AGameStateBase GetGameState() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct AGameStateBase(ptr_addr);
	}
	struct AServerStatReplicator GetServerStatReplicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct AServerStatReplicator(ptr_addr);
	}
	struct FText GetDefaultPlayerName() {
		return memory.read<struct FText>(m_addr + 656);
	}
	char GetbUseSeamlessTravel() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbStartPlayersAsSpectators() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbPauseable() {
		return memory.read<char>(m_addr + 680);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeSwitch
{
public:
	USoundNodeSwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetIntParameterName() {
		return memory.read<struct FName>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDecalLifetimeOpacity
{
public:
	UMaterialExpressionDecalLifetimeOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimMetaData
{
public:
	UAnimMetaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInstancedStaticMeshComponent
{
public:
	UInstancedStaticMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInstancedStaticMeshInstanceData> GetPerInstanceSMData() {
		return memory.read<struct TArray<struct FInstancedStaticMeshInstanceData>>(m_addr + 1304);
	}
	int32_t GetNumCustomDataFloats() {
		return memory.read<int32_t>(m_addr + 1320);
	}
	struct TArray<float> GetPerInstanceSMCustomData() {
		return memory.read<struct TArray<float>>(m_addr + 1328);
	}
	int32_t GetInstancingRandomSeed() {
		return memory.read<int32_t>(m_addr + 1344);
	}
	float GetLODScaleFactor() {
		return memory.read<float>(m_addr + 1348);
	}
	bool GetbUseFullPrecision() {
		return memory.read<bool>(m_addr + 1352);
	}
	int32_t GetInstanceStartCullDistance() {
		return memory.read<int32_t>(m_addr + 1356);
	}
	int32_t GetInstanceEndCullDistance() {
		return memory.read<int32_t>(m_addr + 1360);
	}
	struct TArray<int32_t> GetInstanceReorderTable() {
		return memory.read<struct TArray<int32_t>>(m_addr + 1368);
	}
	int32_t GetNumPendingLightmaps() {
		return memory.read<int32_t>(m_addr + 1456);
	}
	struct TArray<struct FInstancedStaticMeshMappingInfo> GetCachedMappings() {
		return memory.read<struct TArray<struct FInstancedStaticMeshMappingInfo>>(m_addr + 1464);
	}

private:
	std::uint64_t m_addr = 0;
};


class ASphereReflectionCapture
{
public:
	ASphereReflectionCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDrawSphereComponent GetDrawCaptureRadius() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UDrawSphereComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEngineSubsystem
{
public:
	UEngineSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionQualitySwitch
{
public:
	UMaterialExpressionQualitySwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetDefault() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetInputs[4]() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleCollisionGPU
{
public:
	UParticleModuleCollisionGPU(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetResilience() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 48);
	}
	struct FRawDistributionFloat GetResilienceScaleOverLife() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 96);
	}
	float GetFriction() {
		return memory.read<float>(m_addr + 144);
	}
	float GetRandomSpread() {
		return memory.read<float>(m_addr + 148);
	}
	float GetRandomDistribution() {
		return memory.read<float>(m_addr + 152);
	}
	float GetRadiusScale() {
		return memory.read<float>(m_addr + 156);
	}
	float GetRadiusBias() {
		return memory.read<float>(m_addr + 160);
	}
	enum class EParticleCollisionResponse GetResponse() {
		return memory.read<enum class EParticleCollisionResponse>(m_addr + 164);
	}
	enum class EParticleCollisionMode GetCollisionMode() {
		return memory.read<enum class EParticleCollisionMode>(m_addr + 165);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstVectorProp
{
public:
	UInterpTrackInstVectorProp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetResetVector() {
		return memory.read<struct FVector>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialParameterCollection
{
public:
	UMaterialParameterCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetStateId() {
		return memory.read<struct FGuid>(m_addr + 40);
	}
	struct TArray<struct FCollectionScalarParameter> GetScalarParameters() {
		return memory.read<struct TArray<struct FCollectionScalarParameter>>(m_addr + 56);
	}
	struct TArray<struct FCollectionVectorParameter> GetVectorParameters() {
		return memory.read<struct TArray<struct FCollectionVectorParameter>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCurveVector
{
public:
	UCurveVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRichCurve GetFloatCurves[3]() {
		return memory.read<struct FRichCurve>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPrecomputedAOMask
{
public:
	UMaterialExpressionPrecomputedAOMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCameraShakePattern
{
public:
	UCameraShakePattern(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpression
{
public:
	UMaterialExpression(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterial GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UMaterial(ptr_addr);
	}
	struct UMaterialFunction GetFunction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UMaterialFunction(ptr_addr);
	}
	char GetbIsParameterExpression() {
		return memory.read<char>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class USaveGame
{
public:
	USaveGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AGameStateBase
{
public:
	AGameStateBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	AGameModeBase GetGameModeClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return AGameModeBase(ptr_addr);
	}
	struct AGameModeBase GetAuthorityGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct AGameModeBase(ptr_addr);
	}
	ASpectatorPawn GetSpectatorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return ASpectatorPawn(ptr_addr);
	}
	struct TArray<struct APlayerState> GetPlayerArray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct TArray<struct APlayerState>(ptr_addr);
	}
	bool GetbReplicatedHasBegunPlay() {
		return memory.read<bool>(m_addr + 584);
	}
	float GetReplicatedWorldTimeSeconds() {
		return memory.read<float>(m_addr + 588);
	}
	float GetServerWorldTimeSecondsDelta() {
		return memory.read<float>(m_addr + 592);
	}
	float GetServerWorldTimeSecondsUpdateFrequency() {
		return memory.read<float>(m_addr + 596);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimNotify_PauseClothingSimulation
{
public:
	UAnimNotify_PauseClothingSimulation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAssetUserData
{
public:
	UAssetUserData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBoneReferenceSkeletonProvider
{
public:
	UBoneReferenceSkeletonProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureBase
{
public:
	UMaterialExpressionTextureBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionScreenPosition
{
public:
	UMaterialExpressionScreenPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlueprintCore
{
public:
	UBlueprintCore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetSkeletonGeneratedClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return UObject(ptr_addr);
	}
	UObject GetGeneratedClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UObject(ptr_addr);
	}
	bool GetbLegacyNeedToPurgeSkelRefs() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FGuid GetBlueprintGuid() {
		return memory.read<struct FGuid>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticleMotionBlurFade
{
public:
	UMaterialExpressionParticleMotionBlurFade(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class APawn
{
public:
	APawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbUseControllerRotationPitch() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbUseControllerRotationYaw() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbUseControllerRotationRoll() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbCanAffectNavigationGeneration() {
		return memory.read<char>(m_addr + 552);
	}
	float GetBaseEyeHeight() {
		return memory.read<float>(m_addr + 556);
	}
	enum class EAutoReceiveInput GetAutoPossessPlayer() {
		return memory.read<enum class EAutoReceiveInput>(m_addr + 560);
	}
	enum class EAutoPossessAI GetAutoPossessAI() {
		return memory.read<enum class EAutoPossessAI>(m_addr + 561);
	}
	char GetRemoteViewPitch() {
		return memory.read<char>(m_addr + 562);
	}
	AController GetAIControllerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return AController(ptr_addr);
	}
	struct APlayerState GetPlayerState() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct APlayerState(ptr_addr);
	}
	struct AController GetLastHitBy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct AController(ptr_addr);
	}
	struct AController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct AController(ptr_addr);
	}
	struct FVector GetControlInputVector() {
		return memory.read<struct FVector>(m_addr + 612);
	}
	struct FVector GetLastControlInputVector() {
		return memory.read<struct FVector>(m_addr + 624);
	}

private:
	std::uint64_t m_addr = 0;
};


class ACharacter
{
public:
	ACharacter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct UCharacterMovementComponent GetCharacterMovement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UCharacterMovementComponent(ptr_addr);
	}
	struct UCapsuleComponent GetCapsuleComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UCapsuleComponent(ptr_addr);
	}
	struct FBasedMovementInfo GetBasedMovement() {
		return memory.read<struct FBasedMovementInfo>(m_addr + 664);
	}
	struct FBasedMovementInfo GetReplicatedBasedMovement() {
		return memory.read<struct FBasedMovementInfo>(m_addr + 712);
	}
	float GetAnimRootMotionTranslationScale() {
		return memory.read<float>(m_addr + 760);
	}
	struct FVector GetBaseTranslationOffset() {
		return memory.read<struct FVector>(m_addr + 764);
	}
	struct FQuat GetBaseRotationOffset() {
		return memory.read<struct FQuat>(m_addr + 784);
	}
	float GetReplicatedServerLastTransformUpdateTimeStamp() {
		return memory.read<float>(m_addr + 800);
	}
	float GetReplayLastTransformUpdateTimeStamp() {
		return memory.read<float>(m_addr + 804);
	}
	char GetReplicatedMovementMode() {
		return memory.read<char>(m_addr + 808);
	}
	bool GetbInBaseReplication() {
		return memory.read<bool>(m_addr + 809);
	}
	float GetCrouchedEyeHeight() {
		return memory.read<float>(m_addr + 812);
	}
	char GetbIsCrouched() {
		return memory.read<char>(m_addr + 816);
	}
	char GetbProxyIsJumpForceApplied() {
		return memory.read<char>(m_addr + 816);
	}
	char GetbPressedJump() {
		return memory.read<char>(m_addr + 816);
	}
	char GetbClientUpdating() {
		return memory.read<char>(m_addr + 816);
	}
	char GetbClientWasFalling() {
		return memory.read<char>(m_addr + 816);
	}
	char GetbClientResimulateRootMotion() {
		return memory.read<char>(m_addr + 816);
	}
	char GetbClientResimulateRootMotionSources() {
		return memory.read<char>(m_addr + 816);
	}
	char GetbSimGravityDisabled() {
		return memory.read<char>(m_addr + 816);
	}
	char GetbClientCheckEncroachmentOnNetUpdate() {
		return memory.read<char>(m_addr + 817);
	}
	char GetbServerMoveIgnoreRootMotion() {
		return memory.read<char>(m_addr + 817);
	}
	char GetbWasJumping() {
		return memory.read<char>(m_addr + 817);
	}
	float GetJumpKeyHoldTime() {
		return memory.read<float>(m_addr + 820);
	}
	float GetJumpForceTimeRemaining() {
		return memory.read<float>(m_addr + 824);
	}
	float GetProxyJumpForceStartedTime() {
		return memory.read<float>(m_addr + 828);
	}
	float GetJumpMaxHoldTime() {
		return memory.read<float>(m_addr + 832);
	}
	int32_t GetJumpMaxCount() {
		return memory.read<int32_t>(m_addr + 836);
	}
	int32_t GetJumpCurrentCount() {
		return memory.read<int32_t>(m_addr + 840);
	}
	int32_t GetJumpCurrentCountPreJump() {
		return memory.read<int32_t>(m_addr + 844);
	}
	struct FMulticastInlineDelegate GetOnReachedJumpApex() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 856);
	}
	struct FMulticastInlineDelegate GetMovementModeChangedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 888);
	}
	struct FMulticastInlineDelegate GetOnCharacterMovementUpdated() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 904);
	}
	struct FRootMotionSourceGroup GetSavedRootMotion() {
		return memory.read<struct FRootMotionSourceGroup>(m_addr + 920);
	}
	struct FRootMotionMovementParams GetClientRootMotionParams() {
		return memory.read<struct FRootMotionMovementParams>(m_addr + 976);
	}
	struct TArray<struct FSimulatedRootMotionReplicatedMove> GetRootMotionRepMoves() {
		return memory.read<struct TArray<struct FSimulatedRootMotionReplicatedMove>>(m_addr + 1040);
	}
	struct FRepRootMotionMontage GetRepRootMotion() {
		return memory.read<struct FRepRootMotionMontage>(m_addr + 1056);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTangentCustomOutput
{
public:
	UMaterialExpressionTangentCustomOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleTrailBase
{
public:
	UParticleModuleTrailBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDistanceFieldGradient
{
public:
	UMaterialExpressionDistanceFieldGradient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput Getposition() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundEffectSubmixPreset
{
public:
	USoundEffectSubmixPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USoundNodeParamCrossFade
{
public:
	USoundNodeParamCrossFade(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParamName() {
		return memory.read<struct FName>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelPartitionInterface
{
public:
	ULevelPartitionInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USplineComponent
{
public:
	USplineComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSplineCurves GetSplineCurves() {
		return memory.read<struct FSplineCurves>(m_addr + 1136);
	}
	struct FInterpCurveVector GetSplineInfo() {
		return memory.read<struct FInterpCurveVector>(m_addr + 1248);
	}
	struct FInterpCurveQuat GetSplineRotInfo() {
		return memory.read<struct FInterpCurveQuat>(m_addr + 1272);
	}
	struct FInterpCurveVector GetSplineScaleInfo() {
		return memory.read<struct FInterpCurveVector>(m_addr + 1296);
	}
	struct FInterpCurveFloat GetSplineReparamTable() {
		return memory.read<struct FInterpCurveFloat>(m_addr + 1320);
	}
	bool GetbAllowSplineEditingPerInstance() {
		return memory.read<bool>(m_addr + 1344);
	}
	int32_t GetReparamStepsPerSegment() {
		return memory.read<int32_t>(m_addr + 1348);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 1352);
	}
	bool GetbStationaryEndpoints() {
		return memory.read<bool>(m_addr + 1356);
	}
	bool GetbSplineHasBeenEdited() {
		return memory.read<bool>(m_addr + 1357);
	}
	bool GetbModifiedByConstructionScript() {
		return memory.read<bool>(m_addr + 1358);
	}
	bool GetbInputSplinePointsToConstructionScript() {
		return memory.read<bool>(m_addr + 1359);
	}
	bool GetbDrawDebug() {
		return memory.read<bool>(m_addr + 1360);
	}
	bool GetbClosedLoop() {
		return memory.read<bool>(m_addr + 1361);
	}
	bool GetbLoopPositionOverride() {
		return memory.read<bool>(m_addr + 1362);
	}
	float GetLoopPosition() {
		return memory.read<float>(m_addr + 1364);
	}
	struct FVector GetDefaultUpVector() {
		return memory.read<struct FVector>(m_addr + 1368);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCameraShakeBase
{
public:
	UCameraShakeBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSingleInstance() {
		return memory.read<bool>(m_addr + 40);
	}
	float GetShakeScale() {
		return memory.read<float>(m_addr + 44);
	}
	struct UCameraShakePattern GetRootShakePattern() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UCameraShakePattern(ptr_addr);
	}
	struct APlayerCameraManager GetCameraManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct APlayerCameraManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USplineMeshComponent
{
public:
	USplineMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSplineMeshParams GetSplineParams() {
		return memory.read<struct FSplineMeshParams>(m_addr + 1312);
	}
	struct FVector GetSplineUpDir() {
		return memory.read<struct FVector>(m_addr + 1400);
	}
	float GetSplineBoundaryMin() {
		return memory.read<float>(m_addr + 1412);
	}
	struct FGuid GetCachedMeshBodySetupGuid() {
		return memory.read<struct FGuid>(m_addr + 1416);
	}
	struct UBodySetup GetBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UBodySetup(ptr_addr);
	}
	float GetSplineBoundaryMax() {
		return memory.read<float>(m_addr + 1440);
	}
	char GetbAllowSplineEditingPerInstance() {
		return memory.read<char>(m_addr + 1444);
	}
	char GetbSmoothInterpRollScale() {
		return memory.read<char>(m_addr + 1444);
	}
	char GetbMeshDirty() {
		return memory.read<char>(m_addr + 1444);
	}
	enum class ESplineMeshAxis GetForwardAxis() {
		return memory.read<enum class ESplineMeshAxis>(m_addr + 1445);
	}
	float GetVirtualTextureMainPassMaxDrawDistance() {
		return memory.read<float>(m_addr + 1448);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCommandlet
{
public:
	UCommandlet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetHelpDescription() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetHelpUsage() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetHelpWebLink() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct TArray<struct FString> GetHelpParamNames() {
		return memory.read<struct TArray<struct FString>>(m_addr + 88);
	}
	struct TArray<struct FString> GetHelpParamDescriptions() {
		return memory.read<struct TArray<struct FString>>(m_addr + 104);
	}
	char GetIsServer() {
		return memory.read<char>(m_addr + 120);
	}
	char GetIsClient() {
		return memory.read<char>(m_addr + 120);
	}
	char GetIsEditor() {
		return memory.read<char>(m_addr + 120);
	}
	char GetLogToConsole() {
		return memory.read<char>(m_addr + 120);
	}
	char GetShowErrorCount() {
		return memory.read<char>(m_addr + 120);
	}
	char GetShowProgress() {
		return memory.read<char>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAtmosphericFog
{
public:
	AAtmosphericFog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAtmosphericFogComponent GetAtmosphericFogComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UAtmosphericFogComponent(ptr_addr);
	}
	struct UAtmosphericFogCacheComponent GetAtmosphericFogCacheComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UAtmosphericFogCacheComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleTypeDataBeam2
{
public:
	UParticleModuleTypeDataBeam2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBeam2Method GetBeamMethod() {
		return memory.read<enum class EBeam2Method>(m_addr + 48);
	}
	int32_t GetTextureTile() {
		return memory.read<int32_t>(m_addr + 52);
	}
	float GetTextureTileDistance() {
		return memory.read<float>(m_addr + 56);
	}
	int32_t GetSheets() {
		return memory.read<int32_t>(m_addr + 60);
	}
	int32_t GetMaxBeamCount() {
		return memory.read<int32_t>(m_addr + 64);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 68);
	}
	int32_t GetInterpolationPoints() {
		return memory.read<int32_t>(m_addr + 72);
	}
	char GetbAlwaysOn() {
		return memory.read<char>(m_addr + 76);
	}
	int32_t GetUpVectorStepSize() {
		return memory.read<int32_t>(m_addr + 80);
	}
	struct FName GetBranchParentName() {
		return memory.read<struct FName>(m_addr + 84);
	}
	struct FRawDistributionFloat GetDistance() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 96);
	}
	enum class EBeamTaperMethod GetTaperMethod() {
		return memory.read<enum class EBeamTaperMethod>(m_addr + 144);
	}
	struct FRawDistributionFloat GetTaperFactor() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 152);
	}
	struct FRawDistributionFloat GetTaperScale() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 200);
	}
	char GetRenderGeometry() {
		return memory.read<char>(m_addr + 248);
	}
	char GetRenderDirectLine() {
		return memory.read<char>(m_addr + 248);
	}
	char GetRenderLines() {
		return memory.read<char>(m_addr + 248);
	}
	char GetRenderTessellation() {
		return memory.read<char>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkinnedMeshComponent
{
public:
	USkinnedMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMesh GetSkeletalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct USkeletalMesh(ptr_addr);
	}
	struct TWeakObjectPtr<USkinnedMeshComponent> GetMasterPoseComponent() {
		return memory.read<struct TWeakObjectPtr<USkinnedMeshComponent>>(m_addr + 1208);
	}
	struct TArray<enum class ESkinCacheUsage> GetSkinCacheUsage() {
		return memory.read<struct TArray<enum class ESkinCacheUsage>>(m_addr + 1216);
	}
	struct TArray<struct FVertexOffsetUsage> GetVertexOffsetUsage() {
		return memory.read<struct TArray<struct FVertexOffsetUsage>>(m_addr + 1232);
	}
	struct UPhysicsAsset GetPhysicsAssetOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UPhysicsAsset(ptr_addr);
	}
	int32_t GetForcedLodModel() {
		return memory.read<int32_t>(m_addr + 1504);
	}
	int32_t GetMinLodModel() {
		return memory.read<int32_t>(m_addr + 1508);
	}
	float GetStreamingDistanceMultiplier() {
		return memory.read<float>(m_addr + 1520);
	}
	struct TArray<struct FSkelMeshComponentLODInfo> GetLODInfo() {
		return memory.read<struct TArray<struct FSkelMeshComponentLODInfo>>(m_addr + 1536);
	}
	enum class EVisibilityBasedAnimTickOption GetVisibilityBasedAnimTickOption() {
		return memory.read<enum class EVisibilityBasedAnimTickOption>(m_addr + 1588);
	}
	char GetbOverrideMinLod() {
		return memory.read<char>(m_addr + 1590);
	}
	char GetbUseBoundsFromMasterPoseComponent() {
		return memory.read<char>(m_addr + 1590);
	}
	char GetbForceWireframe() {
		return memory.read<char>(m_addr + 1590);
	}
	char GetbDisplayBones() {
		return memory.read<char>(m_addr + 1590);
	}
	char GetbDisableMorphTarget() {
		return memory.read<char>(m_addr + 1590);
	}
	char GetbHideSkin() {
		return memory.read<char>(m_addr + 1591);
	}
	char GetbPerBoneMotionBlur() {
		return memory.read<char>(m_addr + 1591);
	}
	char GetbComponentUseFixedSkelBounds() {
		return memory.read<char>(m_addr + 1591);
	}
	char GetbConsiderAllBodiesForBounds() {
		return memory.read<char>(m_addr + 1591);
	}
	char GetbSyncAttachParentLOD() {
		return memory.read<char>(m_addr + 1591);
	}
	char GetbCanHighlightSelectedSections() {
		return memory.read<char>(m_addr + 1591);
	}
	char GetbRecentlyRendered() {
		return memory.read<char>(m_addr + 1591);
	}
	char GetbCastCapsuleDirectShadow() {
		return memory.read<char>(m_addr + 1591);
	}
	char GetbCastCapsuleIndirectShadow() {
		return memory.read<char>(m_addr + 1592);
	}
	char GetbCPUSkinning() {
		return memory.read<char>(m_addr + 1592);
	}
	char GetbEnableUpdateRateOptimizations() {
		return memory.read<char>(m_addr + 1592);
	}
	char GetbDisplayDebugUpdateRateOptimizations() {
		return memory.read<char>(m_addr + 1592);
	}
	char GetbRenderStatic() {
		return memory.read<char>(m_addr + 1592);
	}
	char GetbNoSkinning() {
		return memory.read<char>(m_addr + 1592);
	}
	char GetbPrepareSkinSnapshot() {
		return memory.read<char>(m_addr + 1592);
	}
	char GetbUseSkinSnapshot() {
		return memory.read<char>(m_addr + 1592);
	}
	char GetbIgnoreMasterPoseComponentLOD() {
		return memory.read<char>(m_addr + 1593);
	}
	char GetbCachedLocalBoundsUpToDate() {
		return memory.read<char>(m_addr + 1593);
	}
	char GetbSkinSnapshotDirty() {
		return memory.read<char>(m_addr + 1593);
	}
	char GetbForceMeshObjectUpdate() {
		return memory.read<char>(m_addr + 1593);
	}
	float GetCapsuleIndirectShadowMinVisibility() {
		return memory.read<float>(m_addr + 1596);
	}
	struct FBoxSphereBounds GetCachedWorldSpaceBounds() {
		return memory.read<struct FBoxSphereBounds>(m_addr + 1628);
	}
	struct FMatrix GetCachedWorldToLocalTransform() {
		return memory.read<struct FMatrix>(m_addr + 1664);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULocalLightComponent
{
public:
	ULocalLightComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELightUnits GetIntensityUnits() {
		return memory.read<enum class ELightUnits>(m_addr + 832);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 836);
	}
	float GetAttenuationRadius() {
		return memory.read<float>(m_addr + 840);
	}
	struct FLightmassPointLightSettings GetLightmassSettings() {
		return memory.read<struct FLightmassPointLightSettings>(m_addr + 844);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkeletalMeshComponent
{
public:
	USkeletalMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetAnimBlueprintGeneratedClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return UObject(ptr_addr);
	}
	UAnimInstance GetAnimClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return UAnimInstance(ptr_addr);
	}
	struct UAnimInstance GetAnimScriptInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UAnimInstance(ptr_addr);
	}
	struct UAnimInstance GetPostProcessAnimInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1784);
		return struct UAnimInstance(ptr_addr);
	}
	struct FSingleAnimationPlayData GetAnimationData() {
		return memory.read<struct FSingleAnimationPlayData>(m_addr + 1792);
	}
	struct FVector GetRootBoneTranslation() {
		return memory.read<struct FVector>(m_addr + 1832);
	}
	struct FVector GetLineCheckBoundsScale() {
		return memory.read<struct FVector>(m_addr + 1844);
	}
	struct TArray<struct UAnimInstance> GetLinkedInstances() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1904);
		return struct TArray<struct UAnimInstance>(ptr_addr);
	}
	struct TArray<struct FTransform> GetCachedBoneSpaceTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 1920);
	}
	struct TArray<struct FTransform> GetCachedComponentSpaceTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 1936);
	}
	float GetGlobalAnimRateScale() {
		return memory.read<float>(m_addr + 2288);
	}
	enum class EKinematicBonesUpdateToPhysics GetKinematicBonesUpdateType() {
		return memory.read<enum class EKinematicBonesUpdateToPhysics>(m_addr + 2292);
	}
	enum class EPhysicsTransformUpdateMode GetPhysicsTransformUpdateMode() {
		return memory.read<enum class EPhysicsTransformUpdateMode>(m_addr + 2293);
	}
	enum class EAnimationMode GetAnimationMode() {
		return memory.read<enum class EAnimationMode>(m_addr + 2295);
	}
	char GetbDisablePostProcessBlueprint() {
		return memory.read<char>(m_addr + 2297);
	}
	char GetbUpdateOverlapsOnAnimationFinalize() {
		return memory.read<char>(m_addr + 2297);
	}
	char GetbHasValidBodies() {
		return memory.read<char>(m_addr + 2297);
	}
	char GetbBlendPhysics() {
		return memory.read<char>(m_addr + 2297);
	}
	char GetbEnablePhysicsOnDedicatedServer() {
		return memory.read<char>(m_addr + 2297);
	}
	char GetbUpdateJointsFromAnimation() {
		return memory.read<char>(m_addr + 2297);
	}
	char GetbDisableClothSimulation() {
		return memory.read<char>(m_addr + 2298);
	}
	char GetbDisableRigidBodyAnimNode() {
		return memory.read<char>(m_addr + 2304);
	}
	char GetbAllowAnimCurveEvaluation() {
		return memory.read<char>(m_addr + 2304);
	}
	char GetbDisableAnimCurves() {
		return memory.read<char>(m_addr + 2304);
	}
	char GetbCollideWithEnvironment() {
		return memory.read<char>(m_addr + 2304);
	}
	char GetbCollideWithAttachedChildren() {
		return memory.read<char>(m_addr + 2305);
	}
	char GetbLocalSpaceSimulation() {
		return memory.read<char>(m_addr + 2305);
	}
	char GetbResetAfterTeleport() {
		return memory.read<char>(m_addr + 2305);
	}
	char GetbDeferKinematicBoneUpdate() {
		return memory.read<char>(m_addr + 2305);
	}
	char GetbNoSkeletonUpdate() {
		return memory.read<char>(m_addr + 2305);
	}
	char GetbPauseAnims() {
		return memory.read<char>(m_addr + 2305);
	}
	char GetbUseRefPoseOnInitAnim() {
		return memory.read<char>(m_addr + 2305);
	}
	char GetbEnablePerPolyCollision() {
		return memory.read<char>(m_addr + 2306);
	}
	char GetbForceRefpose() {
		return memory.read<char>(m_addr + 2306);
	}
	char GetbOnlyAllowAutonomousTickPose() {
		return memory.read<char>(m_addr + 2306);
	}
	char GetbIsAutonomousTickPose() {
		return memory.read<char>(m_addr + 2306);
	}
	char GetbOldForceRefPose() {
		return memory.read<char>(m_addr + 2306);
	}
	char GetbShowPrePhysBones() {
		return memory.read<char>(m_addr + 2306);
	}
	char GetbRequiredBonesUpToDate() {
		return memory.read<char>(m_addr + 2306);
	}
	char GetbAnimTreeInitialised() {
		return memory.read<char>(m_addr + 2306);
	}
	char GetbIncludeComponentLocationIntoBounds() {
		return memory.read<char>(m_addr + 2307);
	}
	char GetbEnableLineCheckWithBounds() {
		return memory.read<char>(m_addr + 2307);
	}
	char GetbPropagateCurvesToSlaves() {
		return memory.read<char>(m_addr + 2307);
	}
	char GetbSkipKinematicUpdateWhenInterpolating() {
		return memory.read<char>(m_addr + 2307);
	}
	char GetbSkipBoundsUpdateWhenInterpolating() {
		return memory.read<char>(m_addr + 2307);
	}
	char GetbNeedsQueuedAnimEventsDispatched() {
		return memory.read<char>(m_addr + 2307);
	}
	uint16_t GetCachedAnimCurveUidVersion() {
		return memory.read<uint16_t>(m_addr + 2310);
	}
	float GetClothBlendWeight() {
		return memory.read<float>(m_addr + 2312);
	}
	bool GetbWaitForParallelClothTask() {
		return memory.read<bool>(m_addr + 2316);
	}
	struct TArray<struct FName> GetDisallowedAnimCurves() {
		return memory.read<struct TArray<struct FName>>(m_addr + 2320);
	}
	struct UBodySetup GetBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2336);
		return struct UBodySetup(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnConstraintBroken() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 2352);
	}
	UClothingSimulationFactory GetClothingSimulationFactory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2368);
		return UClothingSimulationFactory(ptr_addr);
	}
	float GetTeleportDistanceThreshold() {
		return memory.read<float>(m_addr + 2584);
	}
	float GetTeleportRotationThreshold() {
		return memory.read<float>(m_addr + 2588);
	}
	uint32_t GetLastPoseTickFrame() {
		return memory.read<uint32_t>(m_addr + 2600);
	}
	struct UClothingSimulationInteractor GetClothingInteractor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2688);
		return struct UClothingSimulationInteractor(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnAnimInitialized() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 2896);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLogarithm2
{
public:
	UMaterialExpressionLogarithm2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetX() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundWaveProcedural
{
public:
	USoundWaveProcedural(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackLinearColorProp
{
public:
	UInterpTrackLinearColorProp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPropertyName() {
		return memory.read<struct FName>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class ASpotLight
{
public:
	ASpotLight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USpotLightComponent GetSpotLightComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct USpotLightComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class APlayerStartPIE
{
public:
	APlayerStartPIE(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimCompress_LeastDestructive
{
public:
	UAnimCompress_LeastDestructive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlueprintGeneratedClass
{
public:
	UBlueprintGeneratedClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumReplicatedProperties() {
		return memory.read<int32_t>(m_addr + 560);
	}
	char GetbHasNativizedParent() {
		return memory.read<char>(m_addr + 564);
	}
	char GetbHasCookedComponentInstancingData() {
		return memory.read<char>(m_addr + 564);
	}
	struct TArray<struct UDynamicBlueprintBinding> GetDynamicBindingObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct TArray<struct UDynamicBlueprintBinding>(ptr_addr);
	}
	struct TArray<struct UActorComponent> GetComponentTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct TArray<struct UActorComponent>(ptr_addr);
	}
	struct TArray<struct UTimelineTemplate> GetTimelines() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct TArray<struct UTimelineTemplate>(ptr_addr);
	}
	struct TArray<struct FBPComponentClassOverride> GetComponentClassOverrides() {
		return memory.read<struct TArray<struct FBPComponentClassOverride>>(m_addr + 616);
	}
	struct USimpleConstructionScript GetSimpleConstructionScript() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct USimpleConstructionScript(ptr_addr);
	}
	struct UInheritableComponentHandler GetInheritableComponentHandler() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UInheritableComponentHandler(ptr_addr);
	}
	struct UStructProperty GetUberGraphFramePointerProperty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UStructProperty(ptr_addr);
	}
	struct UFunction GetUberGraphFunction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UFunction(ptr_addr);
	}
	struct TMap<struct FName, struct FBlueprintCookedComponentInstancingData> GetCookedComponentInstancingData() {
		return memory.read<struct TMap<struct FName, struct FBlueprintCookedComponentInstancingData>>(m_addr + 672);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAudioComponent
{
public:
	UAudioComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundBase GetSound() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct USoundBase(ptr_addr);
	}
	struct TArray<struct FAudioComponentParam> GetInstanceParameters() {
		return memory.read<struct TArray<struct FAudioComponentParam>>(m_addr + 528);
	}
	struct USoundClass GetSoundClassOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct USoundClass(ptr_addr);
	}
	char GetbAutoDestroy() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbStopWhenOwnerDestroyed() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbShouldRemainActiveIfDropped() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbAllowSpatialization() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbOverrideAttenuation() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbOverrideSubtitlePriority() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbIsUISound() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbEnableLowPassFilter() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbOverridePriority() {
		return memory.read<char>(m_addr + 553);
	}
	char GetbSuppressSubtitles() {
		return memory.read<char>(m_addr + 553);
	}
	char GetbAutoManageAttachment() {
		return memory.read<char>(m_addr + 554);
	}
	struct FName GetAudioComponentUserID() {
		return memory.read<struct FName>(m_addr + 560);
	}
	float GetPitchModulationMin() {
		return memory.read<float>(m_addr + 568);
	}
	float GetPitchModulationMax() {
		return memory.read<float>(m_addr + 572);
	}
	float GetVolumeModulationMin() {
		return memory.read<float>(m_addr + 576);
	}
	float GetVolumeModulationMax() {
		return memory.read<float>(m_addr + 580);
	}
	float GetVolumeMultiplier() {
		return memory.read<float>(m_addr + 584);
	}
	int32_t GetEnvelopeFollowerAttackTime() {
		return memory.read<int32_t>(m_addr + 588);
	}
	int32_t GetEnvelopeFollowerReleaseTime() {
		return memory.read<int32_t>(m_addr + 592);
	}
	float GetPriority() {
		return memory.read<float>(m_addr + 596);
	}
	float GetSubtitlePriority() {
		return memory.read<float>(m_addr + 600);
	}
	struct USoundEffectSourcePresetChain GetSourceEffectChain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct USoundEffectSourcePresetChain(ptr_addr);
	}
	float GetPitchMultiplier() {
		return memory.read<float>(m_addr + 616);
	}
	float GetLowPassFilterFrequency() {
		return memory.read<float>(m_addr + 620);
	}
	struct USoundAttenuation GetAttenuationSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct USoundAttenuation(ptr_addr);
	}
	struct FSoundAttenuationSettings GetAttenuationOverrides() {
		return memory.read<struct FSoundAttenuationSettings>(m_addr + 640);
	}
	struct USoundConcurrency GetConcurrencySettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct USoundConcurrency(ptr_addr);
	}
	struct TSet<struct USoundConcurrency> GetConcurrencySet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct TSet<struct USoundConcurrency>(ptr_addr);
	}
	enum class EAttachmentRule GetAutoAttachLocationRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 1668);
	}
	enum class EAttachmentRule GetAutoAttachRotationRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 1669);
	}
	enum class EAttachmentRule GetAutoAttachScaleRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 1670);
	}
	struct FSoundModulationDefaultRoutingSettings GetModulationRouting() {
		return memory.read<struct FSoundModulationDefaultRoutingSettings>(m_addr + 1672);
	}
	struct FMulticastInlineDelegate GetOnAudioPlayStateChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1744);
	}
	struct FMulticastInlineDelegate GetOnAudioVirtualizationChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1784);
	}
	struct FMulticastInlineDelegate GetOnAudioFinished() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1824);
	}
	struct FMulticastInlineDelegate GetOnAudioPlaybackPercent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1864);
	}
	struct FMulticastInlineDelegate GetOnAudioSingleEnvelopeValue() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1904);
	}
	struct FMulticastInlineDelegate GetOnAudioMultiEnvelopeValue() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1944);
	}
	struct FDelegate GetOnQueueSubtitles() {
		return memory.read<struct FDelegate>(m_addr + 1984);
	}
	struct TWeakObjectPtr<USceneComponent> GetAutoAttachParent() {
		return memory.read<struct TWeakObjectPtr<USceneComponent>>(m_addr + 2000);
	}
	struct FName GetAutoAttachSocketName() {
		return memory.read<struct FName>(m_addr + 2008);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundEffectSourcePreset
{
public:
	USoundEffectSourcePreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPawnMovementComponent
{
public:
	UPawnMovementComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetPawnOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCharacterMovementComponent
{
public:
	UCharacterMovementComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ACharacter GetCharacterOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct ACharacter(ptr_addr);
	}
	float GetGravityScale() {
		return memory.read<float>(m_addr + 336);
	}
	float GetMaxStepHeight() {
		return memory.read<float>(m_addr + 340);
	}
	float GetJumpZVelocity() {
		return memory.read<float>(m_addr + 344);
	}
	float GetJumpOffJumpZFactor() {
		return memory.read<float>(m_addr + 348);
	}
	float GetWalkableFloorAngle() {
		return memory.read<float>(m_addr + 352);
	}
	float GetWalkableFloorZ() {
		return memory.read<float>(m_addr + 356);
	}
	enum class EMovementMode GetMovementMode() {
		return memory.read<enum class EMovementMode>(m_addr + 360);
	}
	char GetCustomMovementMode() {
		return memory.read<char>(m_addr + 361);
	}
	enum class ENetworkSmoothingMode GetNetworkSmoothingMode() {
		return memory.read<enum class ENetworkSmoothingMode>(m_addr + 362);
	}
	float GetGroundFriction() {
		return memory.read<float>(m_addr + 364);
	}
	float GetMaxWalkSpeed() {
		return memory.read<float>(m_addr + 396);
	}
	float GetMaxWalkSpeedCrouched() {
		return memory.read<float>(m_addr + 400);
	}
	float GetMaxSwimSpeed() {
		return memory.read<float>(m_addr + 404);
	}
	float GetMaxFlySpeed() {
		return memory.read<float>(m_addr + 408);
	}
	float GetMaxCustomMovementSpeed() {
		return memory.read<float>(m_addr + 412);
	}
	float GetMaxAcceleration() {
		return memory.read<float>(m_addr + 416);
	}
	float GetMinAnalogWalkSpeed() {
		return memory.read<float>(m_addr + 420);
	}
	float GetBrakingFrictionFactor() {
		return memory.read<float>(m_addr + 424);
	}
	float GetBrakingFriction() {
		return memory.read<float>(m_addr + 428);
	}
	float GetBrakingSubStepTime() {
		return memory.read<float>(m_addr + 432);
	}
	float GetBrakingDecelerationWalking() {
		return memory.read<float>(m_addr + 436);
	}
	float GetBrakingDecelerationFalling() {
		return memory.read<float>(m_addr + 440);
	}
	float GetBrakingDecelerationSwimming() {
		return memory.read<float>(m_addr + 444);
	}
	float GetBrakingDecelerationFlying() {
		return memory.read<float>(m_addr + 448);
	}
	float GetAirControl() {
		return memory.read<float>(m_addr + 452);
	}
	float GetAirControlBoostMultiplier() {
		return memory.read<float>(m_addr + 456);
	}
	float GetAirControlBoostVelocityThreshold() {
		return memory.read<float>(m_addr + 460);
	}
	float GetFallingLateralFriction() {
		return memory.read<float>(m_addr + 464);
	}
	float GetCrouchedHalfHeight() {
		return memory.read<float>(m_addr + 468);
	}
	float GetBuoyancy() {
		return memory.read<float>(m_addr + 472);
	}
	float GetPerchRadiusThreshold() {
		return memory.read<float>(m_addr + 476);
	}
	float GetPerchAdditionalHeight() {
		return memory.read<float>(m_addr + 480);
	}
	struct FRotator GetRotationRate() {
		return memory.read<struct FRotator>(m_addr + 484);
	}
	char GetbUseSeparateBrakingFriction() {
		return memory.read<char>(m_addr + 496);
	}
	char GetbApplyGravityWhileJumping() {
		return memory.read<char>(m_addr + 496);
	}
	char GetbUseControllerDesiredRotation() {
		return memory.read<char>(m_addr + 496);
	}
	char GetbOrientRotationToMovement() {
		return memory.read<char>(m_addr + 496);
	}
	char GetbSweepWhileNavWalking() {
		return memory.read<char>(m_addr + 496);
	}
	char GetbMovementInProgress() {
		return memory.read<char>(m_addr + 496);
	}
	char GetbEnableScopedMovementUpdates() {
		return memory.read<char>(m_addr + 496);
	}
	char GetbEnableServerDualMoveScopedMovementUpdates() {
		return memory.read<char>(m_addr + 497);
	}
	char GetbForceMaxAccel() {
		return memory.read<char>(m_addr + 497);
	}
	char GetbRunPhysicsWithNoController() {
		return memory.read<char>(m_addr + 497);
	}
	char GetbForceNextFloorCheck() {
		return memory.read<char>(m_addr + 497);
	}
	char GetbShrinkProxyCapsule() {
		return memory.read<char>(m_addr + 497);
	}
	char GetbCanWalkOffLedges() {
		return memory.read<char>(m_addr + 497);
	}
	char GetbCanWalkOffLedgesWhenCrouching() {
		return memory.read<char>(m_addr + 497);
	}
	char GetbNetworkSkipProxyPredictionOnNetUpdate() {
		return memory.read<char>(m_addr + 498);
	}
	char GetbNetworkAlwaysReplicateTransformUpdateTimestamp() {
		return memory.read<char>(m_addr + 498);
	}
	char GetbDeferUpdateMoveComponent() {
		return memory.read<char>(m_addr + 498);
	}
	char GetbEnablePhysicsInteraction() {
		return memory.read<char>(m_addr + 498);
	}
	char GetbTouchForceScaledToMass() {
		return memory.read<char>(m_addr + 498);
	}
	char GetbPushForceScaledToMass() {
		return memory.read<char>(m_addr + 498);
	}
	char GetbPushForceUsingZOffset() {
		return memory.read<char>(m_addr + 498);
	}
	char GetbScalePushForceToVelocity() {
		return memory.read<char>(m_addr + 499);
	}
	struct USceneComponent GetDeferredUpdatedMoveComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct USceneComponent(ptr_addr);
	}
	float GetMaxOutOfWaterStepHeight() {
		return memory.read<float>(m_addr + 512);
	}
	float GetOutofWaterZ() {
		return memory.read<float>(m_addr + 516);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 520);
	}
	float GetStandingDownwardForceScale() {
		return memory.read<float>(m_addr + 524);
	}
	float GetInitialPushForceFactor() {
		return memory.read<float>(m_addr + 528);
	}
	float GetPushForceFactor() {
		return memory.read<float>(m_addr + 532);
	}
	float GetPushForcePointZOffsetFactor() {
		return memory.read<float>(m_addr + 536);
	}
	float GetTouchForceFactor() {
		return memory.read<float>(m_addr + 540);
	}
	float GetMinTouchForce() {
		return memory.read<float>(m_addr + 544);
	}
	float GetMaxTouchForce() {
		return memory.read<float>(m_addr + 548);
	}
	float GetRepulsionForce() {
		return memory.read<float>(m_addr + 552);
	}
	struct FVector GetAcceleration() {
		return memory.read<struct FVector>(m_addr + 556);
	}
	struct FQuat GetLastUpdateRotation() {
		return memory.read<struct FQuat>(m_addr + 576);
	}
	struct FVector GetLastUpdateLocation() {
		return memory.read<struct FVector>(m_addr + 592);
	}
	struct FVector GetLastUpdateVelocity() {
		return memory.read<struct FVector>(m_addr + 604);
	}
	float GetServerLastTransformUpdateTimeStamp() {
		return memory.read<float>(m_addr + 616);
	}
	float GetServerLastClientGoodMoveAckTime() {
		return memory.read<float>(m_addr + 620);
	}
	float GetServerLastClientAdjustmentTime() {
		return memory.read<float>(m_addr + 624);
	}
	struct FVector GetPendingImpulseToApply() {
		return memory.read<struct FVector>(m_addr + 628);
	}
	struct FVector GetPendingForceToApply() {
		return memory.read<struct FVector>(m_addr + 640);
	}
	float GetAnalogInputModifier() {
		return memory.read<float>(m_addr + 652);
	}
	float GetMaxSimulationTimeStep() {
		return memory.read<float>(m_addr + 668);
	}
	int32_t GetMaxSimulationIterations() {
		return memory.read<int32_t>(m_addr + 672);
	}
	int32_t GetMaxJumpApexAttemptsPerSimulation() {
		return memory.read<int32_t>(m_addr + 676);
	}
	float GetMaxDepenetrationWithGeometry() {
		return memory.read<float>(m_addr + 680);
	}
	float GetMaxDepenetrationWithGeometryAsProxy() {
		return memory.read<float>(m_addr + 684);
	}
	float GetMaxDepenetrationWithPawn() {
		return memory.read<float>(m_addr + 688);
	}
	float GetMaxDepenetrationWithPawnAsProxy() {
		return memory.read<float>(m_addr + 692);
	}
	float GetNetworkSimulatedSmoothLocationTime() {
		return memory.read<float>(m_addr + 696);
	}
	float GetNetworkSimulatedSmoothRotationTime() {
		return memory.read<float>(m_addr + 700);
	}
	float GetListenServerNetworkSimulatedSmoothLocationTime() {
		return memory.read<float>(m_addr + 704);
	}
	float GetListenServerNetworkSimulatedSmoothRotationTime() {
		return memory.read<float>(m_addr + 708);
	}
	float GetNetProxyShrinkRadius() {
		return memory.read<float>(m_addr + 712);
	}
	float GetNetProxyShrinkHalfHeight() {
		return memory.read<float>(m_addr + 716);
	}
	float GetNetworkMaxSmoothUpdateDistance() {
		return memory.read<float>(m_addr + 720);
	}
	float GetNetworkNoSmoothUpdateDistance() {
		return memory.read<float>(m_addr + 724);
	}
	float GetNetworkMinTimeBetweenClientAckGoodMoves() {
		return memory.read<float>(m_addr + 728);
	}
	float GetNetworkMinTimeBetweenClientAdjustments() {
		return memory.read<float>(m_addr + 732);
	}
	float GetNetworkMinTimeBetweenClientAdjustmentsLargeCorrection() {
		return memory.read<float>(m_addr + 736);
	}
	float GetNetworkLargeClientCorrectionDistance() {
		return memory.read<float>(m_addr + 740);
	}
	float GetLedgeCheckThreshold() {
		return memory.read<float>(m_addr + 744);
	}
	float GetJumpOutOfWaterPitch() {
		return memory.read<float>(m_addr + 748);
	}
	struct FFindFloorResult GetCurrentFloor() {
		return memory.read<struct FFindFloorResult>(m_addr + 752);
	}
	enum class EMovementMode GetDefaultLandMovementMode() {
		return memory.read<enum class EMovementMode>(m_addr + 900);
	}
	enum class EMovementMode GetDefaultWaterMovementMode() {
		return memory.read<enum class EMovementMode>(m_addr + 901);
	}
	enum class EMovementMode GetGroundMovementMode() {
		return memory.read<enum class EMovementMode>(m_addr + 902);
	}
	char GetbMaintainHorizontalGroundVelocity() {
		return memory.read<char>(m_addr + 903);
	}
	char GetbImpartBaseVelocityX() {
		return memory.read<char>(m_addr + 903);
	}
	char GetbImpartBaseVelocityY() {
		return memory.read<char>(m_addr + 903);
	}
	char GetbImpartBaseVelocityZ() {
		return memory.read<char>(m_addr + 903);
	}
	char GetbImpartBaseAngularVelocity() {
		return memory.read<char>(m_addr + 903);
	}
	char GetbJustTeleported() {
		return memory.read<char>(m_addr + 903);
	}
	char GetbNetworkUpdateReceived() {
		return memory.read<char>(m_addr + 903);
	}
	char GetbNetworkMovementModeChanged() {
		return memory.read<char>(m_addr + 903);
	}
	char GetbIgnoreClientMovementErrorChecksAndCorrection() {
		return memory.read<char>(m_addr + 904);
	}
	char GetbServerAcceptClientAuthoritativePosition() {
		return memory.read<char>(m_addr + 904);
	}
	char GetbNotifyApex() {
		return memory.read<char>(m_addr + 904);
	}
	char GetbCheatFlying() {
		return memory.read<char>(m_addr + 904);
	}
	char GetbWantsToCrouch() {
		return memory.read<char>(m_addr + 904);
	}
	char GetbCrouchMaintainsBaseLocation() {
		return memory.read<char>(m_addr + 904);
	}
	char GetbIgnoreBaseRotation() {
		return memory.read<char>(m_addr + 904);
	}
	char GetbFastAttachedMove() {
		return memory.read<char>(m_addr + 904);
	}
	char GetbAlwaysCheckFloor() {
		return memory.read<char>(m_addr + 905);
	}
	char GetbUseFlatBaseForFloorChecks() {
		return memory.read<char>(m_addr + 905);
	}
	char GetbPerformingJumpOff() {
		return memory.read<char>(m_addr + 905);
	}
	char GetbWantsToLeaveNavWalking() {
		return memory.read<char>(m_addr + 905);
	}
	char GetbUseRVOAvoidance() {
		return memory.read<char>(m_addr + 905);
	}
	char GetbRequestedMoveUseAcceleration() {
		return memory.read<char>(m_addr + 905);
	}
	char GetbWasSimulatingRootMotion() {
		return memory.read<char>(m_addr + 905);
	}
	char GetbAllowPhysicsRotationDuringAnimRootMotion() {
		return memory.read<char>(m_addr + 906);
	}
	char GetbHasRequestedVelocity() {
		return memory.read<char>(m_addr + 906);
	}
	char GetbRequestedMoveWithMaxSpeed() {
		return memory.read<char>(m_addr + 906);
	}
	char GetbWasAvoidanceUpdated() {
		return memory.read<char>(m_addr + 906);
	}
	char GetbProjectNavMeshWalking() {
		return memory.read<char>(m_addr + 906);
	}
	char GetbProjectNavMeshOnBothWorldChannels() {
		return memory.read<char>(m_addr + 906);
	}
	float GetAvoidanceConsiderationRadius() {
		return memory.read<float>(m_addr + 924);
	}
	struct FVector GetRequestedVelocity() {
		return memory.read<struct FVector>(m_addr + 928);
	}
	int32_t GetAvoidanceUID() {
		return memory.read<int32_t>(m_addr + 940);
	}
	struct FNavAvoidanceMask GetAvoidanceGroup() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 944);
	}
	struct FNavAvoidanceMask GetGroupsToAvoid() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 948);
	}
	struct FNavAvoidanceMask GetGroupsToIgnore() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 952);
	}
	float GetAvoidanceWeight() {
		return memory.read<float>(m_addr + 956);
	}
	struct FVector GetPendingLaunchVelocity() {
		return memory.read<struct FVector>(m_addr + 960);
	}
	float GetNavMeshProjectionInterval() {
		return memory.read<float>(m_addr + 1136);
	}
	float GetNavMeshProjectionTimer() {
		return memory.read<float>(m_addr + 1140);
	}
	float GetNavMeshProjectionInterpSpeed() {
		return memory.read<float>(m_addr + 1144);
	}
	float GetNavMeshProjectionHeightScaleUp() {
		return memory.read<float>(m_addr + 1148);
	}
	float GetNavMeshProjectionHeightScaleDown() {
		return memory.read<float>(m_addr + 1152);
	}
	float GetNavWalkingFloorDistTolerance() {
		return memory.read<float>(m_addr + 1156);
	}
	struct FCharacterMovementComponentPostPhysicsTickFunction GetPostPhysicsTickFunction() {
		return memory.read<struct FCharacterMovementComponentPostPhysicsTickFunction>(m_addr + 1160);
	}
	float GetMinTimeBetweenTimeStampResets() {
		return memory.read<float>(m_addr + 1232);
	}
	struct FRootMotionSourceGroup GetCurrentRootMotion() {
		return memory.read<struct FRootMotionSourceGroup>(m_addr + 2432);
	}
	struct FRootMotionSourceGroup GetServerCorrectionRootMotion() {
		return memory.read<struct FRootMotionSourceGroup>(m_addr + 2488);
	}
	struct FRootMotionMovementParams GetRootMotionParams() {
		return memory.read<struct FRootMotionMovementParams>(m_addr + 2688);
	}
	struct FVector GetAnimRootMotionVelocity() {
		return memory.read<struct FVector>(m_addr + 2752);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistributionFloatUniformCurve
{
public:
	UDistributionFloatUniformCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInterpCurveVector2D GetConstantCurve() {
		return memory.read<struct FInterpCurveVector2D>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimNotifyState_TimedParticleEffect
{
public:
	UAnimNotifyState_TimedParticleEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystem GetPSTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UParticleSystem(ptr_addr);
	}
	int32_t GetMirrorDetailLevel() {
		return memory.read<int32_t>(m_addr + 56);
	}
	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 60);
	}
	struct FVector GetLocationOffset() {
		return memory.read<struct FVector>(m_addr + 68);
	}
	struct FRotator GetRotationOffset() {
		return memory.read<struct FRotator>(m_addr + 80);
	}
	bool GetbDestroyAtEnd() {
		return memory.read<bool>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDataTableFunctionLibrary
{
public:
	UDataTableFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UStereoLayerComponent
{
public:
	UStereoLayerComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbLiveTexture() {
		return memory.read<char>(m_addr + 520);
	}
	char GetbSupportsDepth() {
		return memory.read<char>(m_addr + 520);
	}
	char GetbNoAlphaChannel() {
		return memory.read<char>(m_addr + 520);
	}
	struct UTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 528);
		return struct UTexture(ptr_addr);
	}
	struct UTexture GetLeftTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 536);
		return struct UTexture(ptr_addr);
	}
	char GetbQuadPreserveTextureRatio() {
		return memory.read<char>(m_addr + 544);
	}
	struct FVector2D GetQuadSize() {
		return memory.read<struct FVector2D>(m_addr + 548);
	}
	struct FBox2D GetUVRect() {
		return memory.read<struct FBox2D>(m_addr + 556);
	}
	float GetCylinderRadius() {
		return memory.read<float>(m_addr + 576);
	}
	float GetCylinderOverlayArc() {
		return memory.read<float>(m_addr + 580);
	}
	int32_t GetCylinderHeight() {
		return memory.read<int32_t>(m_addr + 584);
	}
	struct FEquirectProps GetEquirectProps() {
		return memory.read<struct FEquirectProps>(m_addr + 588);
	}
	enum class EStereoLayerType GetStereoLayerType() {
		return memory.read<enum class EStereoLayerType>(m_addr + 660);
	}
	enum class EStereoLayerShape GetStereoLayerShape() {
		return memory.read<enum class EStereoLayerShape>(m_addr + 661);
	}
	struct UStereoLayerShape GetShape() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UStereoLayerShape(ptr_addr);
	}
	int32_t GetPriority() {
		return memory.read<int32_t>(m_addr + 672);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstFloatProp
{
public:
	UInterpTrackInstFloatProp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetResetFloat() {
		return memory.read<float>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDynamicBlueprintBinding
{
public:
	UDynamicBlueprintBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleBeamModifier
{
public:
	UParticleModuleBeamModifier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class BeamModifierType GetModifierType() {
		return memory.read<enum class BeamModifierType>(m_addr + 48);
	}
	struct FBeamModifierOptions GetPositionOptions() {
		return memory.read<struct FBeamModifierOptions>(m_addr + 52);
	}
	struct FRawDistributionVector Getposition() {
		return memory.read<struct FRawDistributionVector>(m_addr + 56);
	}
	struct FBeamModifierOptions GetTangentOptions() {
		return memory.read<struct FBeamModifierOptions>(m_addr + 128);
	}
	struct FRawDistributionVector GetTangent() {
		return memory.read<struct FRawDistributionVector>(m_addr + 136);
	}
	char GetbAbsoluteTangent() {
		return memory.read<char>(m_addr + 208);
	}
	struct FBeamModifierOptions GetStrengthOptions() {
		return memory.read<struct FBeamModifierOptions>(m_addr + 212);
	}
	struct FRawDistributionFloat GetStrength() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAvoidanceManager
{
public:
	UAvoidanceManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDefaultTimeToLive() {
		return memory.read<float>(m_addr + 48);
	}
	float GetLockTimeAfterAvoid() {
		return memory.read<float>(m_addr + 52);
	}
	float GetLockTimeAfterClean() {
		return memory.read<float>(m_addr + 56);
	}
	float GetDeltaTimeToPredict() {
		return memory.read<float>(m_addr + 60);
	}
	float GetArtificialRadiusExpansion() {
		return memory.read<float>(m_addr + 64);
	}
	float GetTestHeightDifference() {
		return memory.read<float>(m_addr + 68);
	}
	float GetHeightCheckMargin() {
		return memory.read<float>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class ATriggerBox
{
public:
	ATriggerBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ASkeletalMeshActor
{
public:
	ASkeletalMeshActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbShouldDoAnimNotifies() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbWakeOnLevelStart() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbUseSkinSnapshot() {
		return memory.read<char>(m_addr + 552);
	}
	struct USkeletalMeshComponent GetSkeletalMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USkeletalMesh GetReplicatedMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct USkeletalMesh(ptr_addr);
	}
	struct UPhysicsAsset GetReplicatedPhysAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UPhysicsAsset(ptr_addr);
	}
	struct UMaterialInterface GetReplicatedMaterial0() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetReplicatedMaterial1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPrimaryDataAsset
{
public:
	UPrimaryDataAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AGameSession
{
public:
	AGameSession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxSpectators() {
		return memory.read<int32_t>(m_addr + 544);
	}
	int32_t GetMaxPlayers() {
		return memory.read<int32_t>(m_addr + 548);
	}
	int32_t GetMaxPartySize() {
		return memory.read<int32_t>(m_addr + 552);
	}
	char GetMaxSplitscreensPerConnection() {
		return memory.read<char>(m_addr + 556);
	}
	bool GetbRequiresPushToTalk() {
		return memory.read<bool>(m_addr + 557);
	}
	struct FName GetSessionName() {
		return memory.read<struct FName>(m_addr + 560);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextRenderComponent
{
public:
	UTextRenderComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 1136);
	}
	struct UMaterialInterface GetTextMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UFont GetFont() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct UFont(ptr_addr);
	}
	enum class EHorizTextAligment GetHorizontalAlignment() {
		return memory.read<enum class EHorizTextAligment>(m_addr + 1176);
	}
	enum class EVerticalTextAligment GetVerticalAlignment() {
		return memory.read<enum class EVerticalTextAligment>(m_addr + 1177);
	}
	struct FColor GetTextRenderColor() {
		return memory.read<struct FColor>(m_addr + 1180);
	}
	float GetXScale() {
		return memory.read<float>(m_addr + 1184);
	}
	float GetYScale() {
		return memory.read<float>(m_addr + 1188);
	}
	float GetWorldSize() {
		return memory.read<float>(m_addr + 1192);
	}
	float GetInvDefaultSize() {
		return memory.read<float>(m_addr + 1196);
	}
	float GetHorizSpacingAdjust() {
		return memory.read<float>(m_addr + 1200);
	}
	float GetVertSpacingAdjust() {
		return memory.read<float>(m_addr + 1204);
	}
	char GetbAlwaysRenderAsText() {
		return memory.read<char>(m_addr + 1208);
	}

private:
	std::uint64_t m_addr = 0;
};


class AController
{
public:
	AController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerState GetPlayerState() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct APlayerState(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnInstigatedAnyDamage() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 568);
	}
	struct FName GetStateName() {
		return memory.read<struct FName>(m_addr + 584);
	}
	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct APawn(ptr_addr);
	}
	struct ACharacter GetCharacter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct ACharacter(ptr_addr);
	}
	struct USceneComponent GetTransformComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct USceneComponent(ptr_addr);
	}
	struct FRotator GetControlRotation() {
		return memory.read<struct FRotator>(m_addr + 648);
	}
	char GetbAttachToPawn() {
		return memory.read<char>(m_addr + 660);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistribution
{
public:
	UDistribution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULocalPlayer
{
public:
	ULocalPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGameViewportClient GetViewportClient() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UGameViewportClient(ptr_addr);
	}
	enum class EAspectRatioAxisConstraint GetAspectRatioAxisConstraint() {
		return memory.read<enum class EAspectRatioAxisConstraint>(m_addr + 148);
	}
	APlayerController GetPendingLevelPlayerControllerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return APlayerController(ptr_addr);
	}
	char GetbSentSplitJoin() {
		return memory.read<char>(m_addr + 160);
	}
	int32_t GetControllerId() {
		return memory.read<int32_t>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCompositeCurveTable
{
public:
	UCompositeCurveTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UCurveTable> GetParentTables() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct TArray<struct UCurveTable>(ptr_addr);
	}
	struct TArray<struct UCurveTable> GetOldParentTables() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct TArray<struct UCurveTable>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPixelNormalWS
{
public:
	UMaterialExpressionPixelNormalWS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlueprintExtension
{
public:
	UBlueprintExtension(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class APlayerController
{
public:
	APlayerController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPlayer GetPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UPlayer(ptr_addr);
	}
	struct APawn GetAcknowledgedPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct APawn(ptr_addr);
	}
	struct UInterpTrackInstDirector GetControllingDirTrackInst() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UInterpTrackInstDirector(ptr_addr);
	}
	struct AHUD GetMyHUD() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct AHUD(ptr_addr);
	}
	struct APlayerCameraManager GetPlayerCameraManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct APlayerCameraManager(ptr_addr);
	}
	APlayerCameraManager GetPlayerCameraManagerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return APlayerCameraManager(ptr_addr);
	}
	bool GetbAutoManageActiveCameraTarget() {
		return memory.read<bool>(m_addr + 712);
	}
	struct FRotator GetTargetViewRotation() {
		return memory.read<struct FRotator>(m_addr + 716);
	}
	float GetSmoothTargetViewRotationSpeed() {
		return memory.read<float>(m_addr + 740);
	}
	struct TArray<struct AActor> GetHiddenActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct TArray<struct AActor>(ptr_addr);
	}
	struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>> GetHiddenPrimitiveComponents() {
		return memory.read<struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>>>(m_addr + 768);
	}
	float GetLastSpectatorStateSynchTime() {
		return memory.read<float>(m_addr + 788);
	}
	struct FVector GetLastSpectatorSyncLocation() {
		return memory.read<struct FVector>(m_addr + 792);
	}
	struct FRotator GetLastSpectatorSyncRotation() {
		return memory.read<struct FRotator>(m_addr + 804);
	}
	int32_t GetClientCap() {
		return memory.read<int32_t>(m_addr + 816);
	}
	struct UCheatManager GetCheatManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UCheatManager(ptr_addr);
	}
	UCheatManager GetCheatClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return UCheatManager(ptr_addr);
	}
	struct UPlayerInput GetPlayerInput() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UPlayerInput(ptr_addr);
	}
	struct TArray<struct FActiveForceFeedbackEffect> GetActiveForceFeedbackEffects() {
		return memory.read<struct TArray<struct FActiveForceFeedbackEffect>>(m_addr + 848);
	}
	char GetbPlayerIsWaiting() {
		return memory.read<char>(m_addr + 992);
	}
	char GetNetPlayerIndex() {
		return memory.read<char>(m_addr + 996);
	}
	struct UNetConnection GetPendingSwapConnection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UNetConnection(ptr_addr);
	}
	struct UNetConnection GetNetConnection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UNetConnection(ptr_addr);
	}
	float GetInputYawScale() {
		return memory.read<float>(m_addr + 1084);
	}
	float GetInputPitchScale() {
		return memory.read<float>(m_addr + 1088);
	}
	float GetInputRollScale() {
		return memory.read<float>(m_addr + 1092);
	}
	char GetbShowMouseCursor() {
		return memory.read<char>(m_addr + 1096);
	}
	char GetbEnableClickEvents() {
		return memory.read<char>(m_addr + 1096);
	}
	char GetbEnableTouchEvents() {
		return memory.read<char>(m_addr + 1096);
	}
	char GetbEnableMouseOverEvents() {
		return memory.read<char>(m_addr + 1096);
	}
	char GetbEnableTouchOverEvents() {
		return memory.read<char>(m_addr + 1096);
	}
	char GetbForceFeedbackEnabled() {
		return memory.read<char>(m_addr + 1096);
	}
	float GetForceFeedbackScale() {
		return memory.read<float>(m_addr + 1100);
	}
	struct TArray<struct FKey> GetClickEventKeys() {
		return memory.read<struct TArray<struct FKey>>(m_addr + 1104);
	}
	enum class EMouseCursor GetDefaultMouseCursor() {
		return memory.read<enum class EMouseCursor>(m_addr + 1120);
	}
	enum class EMouseCursor GetCurrentMouseCursor() {
		return memory.read<enum class EMouseCursor>(m_addr + 1121);
	}
	enum class ECollisionChannel GetDefaultClickTraceChannel() {
		return memory.read<enum class ECollisionChannel>(m_addr + 1122);
	}
	enum class ECollisionChannel GetCurrentClickTraceChannel() {
		return memory.read<enum class ECollisionChannel>(m_addr + 1123);
	}
	float GetHitResultTraceDistance() {
		return memory.read<float>(m_addr + 1124);
	}
	uint16_t GetSeamlessTravelCount() {
		return memory.read<uint16_t>(m_addr + 1128);
	}
	uint16_t GetLastCompletedSeamlessTravelCount() {
		return memory.read<uint16_t>(m_addr + 1130);
	}
	struct UInputComponent GetInactiveStateInputComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1248);
		return struct UInputComponent(ptr_addr);
	}
	char GetbShouldPerformFullTickWhenPaused() {
		return memory.read<char>(m_addr + 1256);
	}
	struct UTouchInterface GetCurrentTouchInterface() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UTouchInterface(ptr_addr);
	}
	struct ASpectatorPawn GetSpectatorPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct ASpectatorPawn(ptr_addr);
	}
	bool GetbIsLocalPlayerController() {
		return memory.read<bool>(m_addr + 1380);
	}
	struct FVector GetSpawnLocation() {
		return memory.read<struct FVector>(m_addr + 1384);
	}

private:
	std::uint64_t m_addr = 0;
};


class APlayerState
{
public:
	APlayerState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetScore() {
		return memory.read<float>(m_addr + 544);
	}
	int32_t GetplayerId() {
		return memory.read<int32_t>(m_addr + 548);
	}
	char GetPing() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbShouldUpdateReplicatedPing() {
		return memory.read<char>(m_addr + 554);
	}
	char GetbIsSpectator() {
		return memory.read<char>(m_addr + 554);
	}
	char GetbOnlySpectator() {
		return memory.read<char>(m_addr + 554);
	}
	char GetbIsABot() {
		return memory.read<char>(m_addr + 554);
	}
	char GetbIsInactive() {
		return memory.read<char>(m_addr + 554);
	}
	char GetbFromPreviousLevel() {
		return memory.read<char>(m_addr + 554);
	}
	int32_t GetStartTime() {
		return memory.read<int32_t>(m_addr + 556);
	}
	ULocalMessage GetEngineMessageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return ULocalMessage(ptr_addr);
	}
	struct FString GetSavedNetworkAddress() {
		return memory.read<struct FString>(m_addr + 576);
	}
	struct FUniqueNetIdRepl GetUniqueId() {
		return memory.read<struct FUniqueNetIdRepl>(m_addr + 592);
	}
	struct APawn GetPawnPrivate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct APawn(ptr_addr);
	}
	struct FString GetPlayerNamePrivate() {
		return memory.read<struct FString>(m_addr + 768);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialFunctionMaterialLayer
{
public:
	UMaterialFunctionMaterialLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ACameraActor
{
public:
	ACameraActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAutoReceiveInput GetAutoActivateForPlayer() {
		return memory.read<enum class EAutoReceiveInput>(m_addr + 544);
	}
	struct UCameraComponent GetCameraComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UCameraComponent(ptr_addr);
	}
	struct USceneComponent GetSceneComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct USceneComponent(ptr_addr);
	}
	char GetbConstrainAspectRatio() {
		return memory.read<char>(m_addr + 576);
	}
	float GetAspectRatio() {
		return memory.read<float>(m_addr + 580);
	}
	float GetFOVAngle() {
		return memory.read<float>(m_addr + 584);
	}
	float GetPostProcessBlendWeight() {
		return memory.read<float>(m_addr + 588);
	}
	struct FPostProcessSettings GetPostProcessSettings() {
		return memory.read<struct FPostProcessSettings>(m_addr + 592);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCameraComponent
{
public:
	UCameraComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFieldOfView() {
		return memory.read<float>(m_addr + 520);
	}
	float GetOrthoWidth() {
		return memory.read<float>(m_addr + 524);
	}
	float GetOrthoNearClipPlane() {
		return memory.read<float>(m_addr + 528);
	}
	float GetOrthoFarClipPlane() {
		return memory.read<float>(m_addr + 532);
	}
	float GetAspectRatio() {
		return memory.read<float>(m_addr + 536);
	}
	char GetbConstrainAspectRatio() {
		return memory.read<char>(m_addr + 540);
	}
	char GetbUseFieldOfViewForLOD() {
		return memory.read<char>(m_addr + 540);
	}
	char GetbLockToHmd() {
		return memory.read<char>(m_addr + 540);
	}
	char GetbUsePawnControlRotation() {
		return memory.read<char>(m_addr + 540);
	}
	char GetbSkipDepthOfFieldTAA() {
		return memory.read<char>(m_addr + 540);
	}
	enum class ECameraMotionBlurMode GetMotionBlurMode() {
		return memory.read<enum class ECameraMotionBlurMode>(m_addr + 541);
	}
	bool GetSkipMaxCascade() {
		return memory.read<bool>(m_addr + 542);
	}
	enum class ECameraProjectionMode GetProjectionMode() {
		return memory.read<enum class ECameraProjectionMode>(m_addr + 544);
	}
	float GetPostProcessBlendWeight() {
		return memory.read<float>(m_addr + 608);
	}
	struct FPostProcessSettings GetPostProcessSettings() {
		return memory.read<struct FPostProcessSettings>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialFunctionMaterialLayerBlend
{
public:
	UMaterialFunctionMaterialLayerBlend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULightComponentBase
{
public:
	ULightComponentBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetLightGuid() {
		return memory.read<struct FGuid>(m_addr + 520);
	}
	float GetBrightness() {
		return memory.read<float>(m_addr + 536);
	}
	float GetIntensity() {
		return memory.read<float>(m_addr + 540);
	}
	struct FColor GetLightColor() {
		return memory.read<struct FColor>(m_addr + 544);
	}
	char GetbAffectsWorld() {
		return memory.read<char>(m_addr + 548);
	}
	char GetCastShadows() {
		return memory.read<char>(m_addr + 548);
	}
	char GetCastStaticShadows() {
		return memory.read<char>(m_addr + 548);
	}
	char GetCastDynamicShadows() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbAffectTranslucentLighting() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbTransmission() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbCastVolumetricShadow() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbCastDeepShadow() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbCastRaytracedShadow() {
		return memory.read<char>(m_addr + 549);
	}
	char GetbAffectReflectionNoRayTracing() {
		return memory.read<char>(m_addr + 549);
	}
	char GetbAffectReflection() {
		return memory.read<char>(m_addr + 549);
	}
	char GetbAffectGlobalIllumination() {
		return memory.read<char>(m_addr + 549);
	}
	float GetDeepShadowLayerDistribution() {
		return memory.read<float>(m_addr + 552);
	}
	float GetIndirectLightingIntensity() {
		return memory.read<float>(m_addr + 556);
	}
	float GetVolumetricScatteringIntensity() {
		return memory.read<float>(m_addr + 560);
	}
	int32_t GetSamplesPerPixel() {
		return memory.read<int32_t>(m_addr + 564);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULightComponent
{
public:
	ULightComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTemperature() {
		return memory.read<float>(m_addr + 568);
	}
	float GetMaxDrawDistance() {
		return memory.read<float>(m_addr + 572);
	}
	float GetMaxDistanceFadeRange() {
		return memory.read<float>(m_addr + 576);
	}
	float GetTexelsPerPixelSpotlight() {
		return memory.read<float>(m_addr + 580);
	}
	char GetbUseTemperature() {
		return memory.read<char>(m_addr + 584);
	}
	int32_t GetShadowMapChannel() {
		return memory.read<int32_t>(m_addr + 588);
	}
	float GetMinRoughness() {
		return memory.read<float>(m_addr + 596);
	}
	float GetSpecularScale() {
		return memory.read<float>(m_addr + 600);
	}
	float GetMinRoughness_K2() {
		return memory.read<float>(m_addr + 604);
	}
	float GetShadowResolutionScale() {
		return memory.read<float>(m_addr + 608);
	}
	float GetShadowBias() {
		return memory.read<float>(m_addr + 612);
	}
	float GetShadowSlopeBias() {
		return memory.read<float>(m_addr + 616);
	}
	float GetShadowSharpen() {
		return memory.read<float>(m_addr + 620);
	}
	float GetContactShadowLength() {
		return memory.read<float>(m_addr + 624);
	}
	char GetContactShadowLengthInWS() {
		return memory.read<char>(m_addr + 628);
	}
	char GetInverseSquaredFalloff() {
		return memory.read<char>(m_addr + 628);
	}
	char GetCastTranslucentShadows() {
		return memory.read<char>(m_addr + 628);
	}
	char GetbCastShadowsFromCinematicObjectsOnly() {
		return memory.read<char>(m_addr + 628);
	}
	char GetbAffectDynamicIndirectLighting() {
		return memory.read<char>(m_addr + 628);
	}
	char GetbForceCachedShadowsForMovablePrimitives() {
		return memory.read<char>(m_addr + 628);
	}
	struct FLightingChannels GetLightingChannels() {
		return memory.read<struct FLightingChannels>(m_addr + 632);
	}
	struct UMaterialInterface GetLightFunctionMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FVector GetLightFunctionScale() {
		return memory.read<struct FVector>(m_addr + 648);
	}
	struct UTextureLightProfile GetIESTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UTextureLightProfile(ptr_addr);
	}
	char GetbUseIESBrightness() {
		return memory.read<char>(m_addr + 672);
	}
	float GetIESBrightnessScale() {
		return memory.read<float>(m_addr + 676);
	}
	float GetLightFunctionFadeDistance() {
		return memory.read<float>(m_addr + 680);
	}
	float GetDisabledBrightness() {
		return memory.read<float>(m_addr + 684);
	}
	char GetbEnableLightShaftBloom() {
		return memory.read<char>(m_addr + 688);
	}
	float GetBloomScale() {
		return memory.read<float>(m_addr + 692);
	}
	float GetBloomThreshold() {
		return memory.read<float>(m_addr + 696);
	}
	float GetBloomMaxBrightness() {
		return memory.read<float>(m_addr + 700);
	}
	struct FColor GetBloomTint() {
		return memory.read<struct FColor>(m_addr + 704);
	}
	bool GetbUseRayTracedDistanceFieldShadows() {
		return memory.read<bool>(m_addr + 708);
	}
	float GetRayStartOffsetDepthScale() {
		return memory.read<float>(m_addr + 712);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionArcsine
{
public:
	UMaterialExpressionArcsine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterface_ActorSubobject
{
public:
	UInterface_ActorSubobject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UChildActorComponent
{
public:
	UChildActorComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	AActor GetChildActorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return AActor(ptr_addr);
	}
	struct AActor GetChildActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 528);
		return struct AActor(ptr_addr);
	}
	struct AActor GetChildActorTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 536);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPointLightComponent
{
public:
	UPointLightComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbUseInverseSquaredFalloff() {
		return memory.read<char>(m_addr + 856);
	}
	float GetLightFalloffExponent() {
		return memory.read<float>(m_addr + 860);
	}
	float GetSourceRadius() {
		return memory.read<float>(m_addr + 864);
	}
	float GetSoftSourceRadius() {
		return memory.read<float>(m_addr + 868);
	}
	float GetSourceLength() {
		return memory.read<float>(m_addr + 872);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstFloatAnimBPParam
{
public:
	UInterpTrackInstFloatAnimBPParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimInstance GetAnimScriptInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UAnimInstance(ptr_addr);
	}
	float GetResetFloat() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpotLightComponent
{
public:
	USpotLightComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInnerConeAngle() {
		return memory.read<float>(m_addr + 880);
	}
	float GetOuterConeAngle() {
		return memory.read<float>(m_addr + 884);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionRuntimeVirtualTextureOutput
{
public:
	UMaterialExpressionRuntimeVirtualTextureOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetBaseColor() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetSpecular() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetRoughness() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	struct FExpressionInput GetNormal() {
		return memory.read<struct FExpressionInput>(m_addr + 124);
	}
	struct FExpressionInput GetWorldHeight() {
		return memory.read<struct FExpressionInput>(m_addr + 144);
	}
	struct FExpressionInput GetOpacity() {
		return memory.read<struct FExpressionInput>(m_addr + 164);
	}
	struct FExpressionInput GetMask() {
		return memory.read<struct FExpressionInput>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameUserSettings
{
public:
	UGameUserSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseVSync() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbUseDynamicResolution() {
		return memory.read<bool>(m_addr + 41);
	}
	int32_t GetDisplayMonitorIndex() {
		return memory.read<int32_t>(m_addr + 128);
	}
	int32_t GetLastUserConfirmedDisplayMonitorIndex() {
		return memory.read<int32_t>(m_addr + 132);
	}
	uint32_t GetDisplayRefreshRateNumerator() {
		return memory.read<uint32_t>(m_addr + 136);
	}
	uint32_t GetDisplayRefreshRateDenominator() {
		return memory.read<uint32_t>(m_addr + 140);
	}
	uint32_t GetLastUserConfirmedDisplayRefreshRateNumerator() {
		return memory.read<uint32_t>(m_addr + 144);
	}
	uint32_t GetLastUserConfirmedDisplayRefreshRateDenominator() {
		return memory.read<uint32_t>(m_addr + 148);
	}
	uint32_t GetResolutionSizeX() {
		return memory.read<uint32_t>(m_addr + 152);
	}
	uint32_t GetResolutionSizeY() {
		return memory.read<uint32_t>(m_addr + 156);
	}
	uint32_t GetLastUserConfirmedResolutionSizeX() {
		return memory.read<uint32_t>(m_addr + 160);
	}
	uint32_t GetLastUserConfirmedResolutionSizeY() {
		return memory.read<uint32_t>(m_addr + 164);
	}
	int32_t GetWindowPosX() {
		return memory.read<int32_t>(m_addr + 168);
	}
	int32_t GetWindowPosY() {
		return memory.read<int32_t>(m_addr + 172);
	}
	int32_t GetFullscreenMode() {
		return memory.read<int32_t>(m_addr + 176);
	}
	int32_t GetLastConfirmedFullscreenMode() {
		return memory.read<int32_t>(m_addr + 180);
	}
	int32_t GetPreferredFullscreenMode() {
		return memory.read<int32_t>(m_addr + 184);
	}
	uint32_t GetVersion() {
		return memory.read<uint32_t>(m_addr + 188);
	}
	int32_t GetAudioQualityLevel() {
		return memory.read<int32_t>(m_addr + 192);
	}
	int32_t GetLastConfirmedAudioQualityLevel() {
		return memory.read<int32_t>(m_addr + 196);
	}
	float GetFrameRateLimit() {
		return memory.read<float>(m_addr + 200);
	}
	int32_t GetDesiredScreenWidth() {
		return memory.read<int32_t>(m_addr + 208);
	}
	bool GetbUseDesiredScreenHeight() {
		return memory.read<bool>(m_addr + 212);
	}
	int32_t GetDesiredScreenHeight() {
		return memory.read<int32_t>(m_addr + 216);
	}
	int32_t GetLastUserConfirmedDesiredScreenWidth() {
		return memory.read<int32_t>(m_addr + 220);
	}
	int32_t GetLastUserConfirmedDesiredScreenHeight() {
		return memory.read<int32_t>(m_addr + 224);
	}
	float GetLastRecommendedScreenWidth() {
		return memory.read<float>(m_addr + 228);
	}
	float GetLastRecommendedScreenHeight() {
		return memory.read<float>(m_addr + 232);
	}
	float GetLastCPUBenchmarkResult() {
		return memory.read<float>(m_addr + 236);
	}
	float GetLastGPUBenchmarkResult() {
		return memory.read<float>(m_addr + 240);
	}
	struct TArray<float> GetLastCPUBenchmarkSteps() {
		return memory.read<struct TArray<float>>(m_addr + 248);
	}
	struct TArray<float> GetLastGPUBenchmarkSteps() {
		return memory.read<struct TArray<float>>(m_addr + 264);
	}
	float GetLastGPUBenchmarkMultiplier() {
		return memory.read<float>(m_addr + 280);
	}
	bool GetbUseHDRDisplayOutput() {
		return memory.read<bool>(m_addr + 284);
	}
	int32_t GetHDRDisplayOutputNits() {
		return memory.read<int32_t>(m_addr + 288);
	}
	struct FMulticastInlineDelegate GetOnGameUserSettingsUINeedsUpdate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 296);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAssetManager
{
public:
	UAssetManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UObject> GetObjectReferenceList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct TArray<struct UObject>(ptr_addr);
	}
	bool GetbIsGlobalAsyncScanEnvironment() {
		return memory.read<bool>(m_addr + 752);
	}
	bool GetbShouldGuessTypeAndName() {
		return memory.read<bool>(m_addr + 753);
	}
	bool GetbShouldUseSynchronousLoad() {
		return memory.read<bool>(m_addr + 754);
	}
	bool GetbIsLoadingFromPakFiles() {
		return memory.read<bool>(m_addr + 755);
	}
	bool GetbShouldAcquireMissingChunksOnLoad() {
		return memory.read<bool>(m_addr + 756);
	}
	bool GetbOnlyCookProductionAssets() {
		return memory.read<bool>(m_addr + 757);
	}
	bool GetbIsBulkScanning() {
		return memory.read<bool>(m_addr + 758);
	}
	bool GetbIsPrimaryAssetDirectoryCurrent() {
		return memory.read<bool>(m_addr + 759);
	}
	bool GetbIsManagementDatabaseCurrent() {
		return memory.read<bool>(m_addr + 760);
	}
	bool GetbUpdateManagementDatabaseAfterScan() {
		return memory.read<bool>(m_addr + 761);
	}
	bool GetbIncludeOnlyOnDiskAssets() {
		return memory.read<bool>(m_addr + 762);
	}
	bool GetbHasCompletedInitialScan() {
		return memory.read<bool>(m_addr + 763);
	}
	int32_t GetNumberOfSpawnedNotifications() {
		return memory.read<int32_t>(m_addr + 764);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimCompress_RemoveEverySecondKey
{
public:
	UAnimCompress_RemoveEverySecondKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMinKeys() {
		return memory.read<int32_t>(m_addr + 64);
	}
	char GetbStartAtSecondKey() {
		return memory.read<char>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCheatManager
{
public:
	UCheatManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ADebugCameraController GetDebugCameraControllerRef() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ADebugCameraController(ptr_addr);
	}
	ADebugCameraController GetDebugCameraControllerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return ADebugCameraController(ptr_addr);
	}
	struct TArray<struct UCheatManagerExtension> GetCheatManagerExtensions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct TArray<struct UCheatManagerExtension>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChildConnection
{
public:
	UChildConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNetConnection GetParent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7080);
		return struct UNetConnection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLight_Seeded
{
public:
	UParticleModuleLight_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEngine
{
public:
	UEngine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFont GetTinyFont() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UFont(ptr_addr);
	}
	struct FSoftObjectPath GetTinyFontName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 56);
	}
	struct UFont GetSmallFont() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UFont(ptr_addr);
	}
	struct FSoftObjectPath GetSmallFontName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 88);
	}
	struct UFont GetMediumFont() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UFont(ptr_addr);
	}
	struct FSoftObjectPath GetMediumFontName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 120);
	}
	struct UFont GetLargeFont() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UFont(ptr_addr);
	}
	struct FSoftObjectPath GetLargeFontName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 152);
	}
	struct UFont GetSubtitleFont() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UFont(ptr_addr);
	}
	struct FSoftObjectPath GetSubtitleFontName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 184);
	}
	struct TArray<struct UFont> GetAdditionalFonts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct TArray<struct UFont>(ptr_addr);
	}
	struct TArray<struct FString> GetAdditionalFontNames() {
		return memory.read<struct TArray<struct FString>>(m_addr + 224);
	}
	UConsole GetConsoleClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return UConsole(ptr_addr);
	}
	struct FSoftClassPath GetConsoleClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 248);
	}
	UGameViewportClient GetGameViewportClientClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return UGameViewportClient(ptr_addr);
	}
	struct FSoftClassPath GetGameViewportClientClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 280);
	}
	ULocalPlayer GetLocalPlayerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return ULocalPlayer(ptr_addr);
	}
	struct FSoftClassPath GetLocalPlayerClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 312);
	}
	AWorldSettings GetWorldSettingsClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 336);
		return AWorldSettings(ptr_addr);
	}
	struct FSoftClassPath GetWorldSettingsClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 344);
	}
	struct FSoftClassPath GetNavigationSystemClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 368);
	}
	UNavigationSystemBase GetNavigationSystemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 392);
		return UNavigationSystemBase(ptr_addr);
	}
	struct FSoftClassPath GetNavigationSystemConfigClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 400);
	}
	UNavigationSystemConfig GetNavigationSystemConfigClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 424);
		return UNavigationSystemConfig(ptr_addr);
	}
	struct FSoftClassPath GetAvoidanceManagerClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 432);
	}
	UAvoidanceManager GetAvoidanceManagerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 456);
		return UAvoidanceManager(ptr_addr);
	}
	struct FSoftClassPath GetAIControllerClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 464);
	}
	UPhysicsCollisionHandler GetPhysicsCollisionHandlerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 488);
		return UPhysicsCollisionHandler(ptr_addr);
	}
	struct FSoftClassPath GetPhysicsCollisionHandlerClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 496);
	}
	struct FSoftClassPath GetGameUserSettingsClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 520);
	}
	UGameUserSettings GetGameUserSettingsClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return UGameUserSettings(ptr_addr);
	}
	struct UGameUserSettings GetGameUserSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UGameUserSettings(ptr_addr);
	}
	ALevelScriptActor GetLevelScriptActorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return ALevelScriptActor(ptr_addr);
	}
	struct FSoftClassPath GetLevelScriptActorClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 568);
	}
	struct FSoftClassPath GetDefaultBlueprintBaseClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 592);
	}
	struct FSoftClassPath GetGameSingletonClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 616);
	}
	struct UObject GetGameSingleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UObject(ptr_addr);
	}
	struct FSoftClassPath GetAssetManagerClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 648);
	}
	struct UAssetManager GetAssetManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UAssetManager(ptr_addr);
	}
	struct UTexture2D GetDefaultTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UTexture2D(ptr_addr);
	}
	struct FSoftObjectPath GetDefaultTextureName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 688);
	}
	struct UTexture GetDefaultDiffuseTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UTexture(ptr_addr);
	}
	struct FSoftObjectPath GetDefaultDiffuseTextureName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 720);
	}
	struct UTexture2D GetDefaultBSPVertexTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UTexture2D(ptr_addr);
	}
	struct FSoftObjectPath GetDefaultBSPVertexTextureName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 752);
	}
	struct UTexture2D GetHighFrequencyNoiseTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UTexture2D(ptr_addr);
	}
	struct FSoftObjectPath GetHighFrequencyNoiseTextureName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 784);
	}
	struct UTexture2D GetDefaultBokehTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UTexture2D(ptr_addr);
	}
	struct FSoftObjectPath GetDefaultBokehTextureName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 816);
	}
	struct UTexture2D GetDefaultBloomKernelTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UTexture2D(ptr_addr);
	}
	struct FSoftObjectPath GetDefaultBloomKernelTextureName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 848);
	}
	struct UMaterial GetWireframeMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetWireframeMaterialName() {
		return memory.read<struct FString>(m_addr + 880);
	}
	struct UMaterial GetDebugMeshMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UMaterial(ptr_addr);
	}
	struct FSoftObjectPath GetDebugMeshMaterialName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 904);
	}
	struct UMaterial GetEmissiveMeshMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UMaterial(ptr_addr);
	}
	struct FSoftObjectPath GetEmissiveMeshMaterialName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 936);
	}
	struct UMaterial GetLevelColorationLitMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetLevelColorationLitMaterialName() {
		return memory.read<struct FString>(m_addr + 968);
	}
	struct UMaterial GetLevelColorationUnlitMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 984);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetLevelColorationUnlitMaterialName() {
		return memory.read<struct FString>(m_addr + 992);
	}
	struct UMaterial GetLightingTexelDensityMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetLightingTexelDensityName() {
		return memory.read<struct FString>(m_addr + 1016);
	}
	struct UMaterial GetShadedLevelColorationLitMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetShadedLevelColorationLitMaterialName() {
		return memory.read<struct FString>(m_addr + 1040);
	}
	struct UMaterial GetShadedLevelColorationUnlitMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetShadedLevelColorationUnlitMaterialName() {
		return memory.read<struct FString>(m_addr + 1064);
	}
	struct UMaterial GetRemoveSurfaceMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UMaterial(ptr_addr);
	}
	struct FSoftObjectPath GetRemoveSurfaceMaterialName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 1088);
	}
	struct UMaterial GetVertexColorMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetVertexColorMaterialName() {
		return memory.read<struct FString>(m_addr + 1120);
	}
	struct UMaterial GetVertexColorViewModeMaterial_ColorOnly() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetVertexColorViewModeMaterialName_ColorOnly() {
		return memory.read<struct FString>(m_addr + 1144);
	}
	struct UMaterial GetVertexColorViewModeMaterial_AlphaAsColor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetVertexColorViewModeMaterialName_AlphaAsColor() {
		return memory.read<struct FString>(m_addr + 1168);
	}
	struct UMaterial GetVertexColorViewModeMaterial_RedOnly() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1184);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetVertexColorViewModeMaterialName_RedOnly() {
		return memory.read<struct FString>(m_addr + 1192);
	}
	struct UMaterial GetVertexColorViewModeMaterial_GreenOnly() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetVertexColorViewModeMaterialName_GreenOnly() {
		return memory.read<struct FString>(m_addr + 1216);
	}
	struct UMaterial GetVertexColorViewModeMaterial_BlueOnly() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1232);
		return struct UMaterial(ptr_addr);
	}
	struct FString GetVertexColorViewModeMaterialName_BlueOnly() {
		return memory.read<struct FString>(m_addr + 1240);
	}
	struct FSoftObjectPath GetDebugEditorMaterialName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 1256);
	}
	struct UMaterial GetConstraintLimitMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UMaterial(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetConstraintLimitMaterialX() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetConstraintLimitMaterialXAxis() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetConstraintLimitMaterialY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetConstraintLimitMaterialYAxis() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetConstraintLimitMaterialZ() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetConstraintLimitMaterialZAxis() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetConstraintLimitMaterialPrismatic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterial GetInvalidLightmapSettingsMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UMaterial(ptr_addr);
	}
	struct FSoftObjectPath GetInvalidLightmapSettingsMaterialName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 1352);
	}
	struct UMaterial GetPreviewShadowsIndicatorMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UMaterial(ptr_addr);
	}
	struct FSoftObjectPath GetPreviewShadowsIndicatorMaterialName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 1384);
	}
	struct UMaterial GetArrowMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UMaterial(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetArrowMaterialYellow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct FSoftObjectPath GetArrowMaterialName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 1424);
	}
	struct FLinearColor GetLightingOnlyBrightness() {
		return memory.read<struct FLinearColor>(m_addr + 1448);
	}
	struct TArray<struct FLinearColor> GetShaderComplexityColors() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 1464);
	}
	struct TArray<struct FLinearColor> GetQuadComplexityColors() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 1480);
	}
	struct TArray<struct FLinearColor> GetLightComplexityColors() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 1496);
	}
	struct TArray<struct FLinearColor> GetStationaryLightOverlapColors() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 1512);
	}
	struct TArray<struct FLinearColor> GetLODColorationColors() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 1528);
	}
	struct TArray<struct FLinearColor> GetDetailModeColorationColors() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 1544);
	}
	struct TArray<struct FLinearColor> GetHLODColorationColors() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 1560);
	}
	struct TArray<struct FLinearColor> GetStreamingAccuracyColors() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 1576);
	}
	float GetMaxPixelShaderAdditiveComplexityCount() {
		return memory.read<float>(m_addr + 1592);
	}
	float GetMaxES3PixelShaderAdditiveComplexityCount() {
		return memory.read<float>(m_addr + 1596);
	}
	int32_t GetDecalStaticShadowMapSizeMin() {
		return memory.read<int32_t>(m_addr + 1600);
	}
	int32_t GetDecalStaticShadowMapSizeMax() {
		return memory.read<int32_t>(m_addr + 1604);
	}
	float GetMinLightMapDensity() {
		return memory.read<float>(m_addr + 1608);
	}
	float GetIdealLightMapDensity() {
		return memory.read<float>(m_addr + 1612);
	}
	float GetMaxLightMapDensity() {
		return memory.read<float>(m_addr + 1616);
	}
	char GetbRenderLightMapDensityGrayscale() {
		return memory.read<char>(m_addr + 1620);
	}
	float GetRenderLightMapDensityGrayscaleScale() {
		return memory.read<float>(m_addr + 1624);
	}
	float GetRenderLightMapDensityColorScale() {
		return memory.read<float>(m_addr + 1628);
	}
	struct FLinearColor GetLightMapDensityVertexMappedColor() {
		return memory.read<struct FLinearColor>(m_addr + 1632);
	}
	struct FLinearColor GetLightMapDensitySelectedColor() {
		return memory.read<struct FLinearColor>(m_addr + 1648);
	}
	struct TArray<struct FStatColorMapping> GetStatColorMappings() {
		return memory.read<struct TArray<struct FStatColorMapping>>(m_addr + 1664);
	}
	struct UPhysicalMaterial GetDefaultPhysMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UPhysicalMaterial(ptr_addr);
	}
	struct FSoftObjectPath GetDefaultPhysMaterialName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 1688);
	}
	struct TArray<struct FGameNameRedirect> GetActiveGameNameRedirects() {
		return memory.read<struct TArray<struct FGameNameRedirect>>(m_addr + 1712);
	}
	struct TArray<struct FClassRedirect> GetActiveClassRedirects() {
		return memory.read<struct TArray<struct FClassRedirect>>(m_addr + 1728);
	}
	struct TArray<struct FPluginRedirect> GetActivePluginRedirects() {
		return memory.read<struct TArray<struct FPluginRedirect>>(m_addr + 1744);
	}
	struct TArray<struct FStructRedirect> GetActiveStructRedirects() {
		return memory.read<struct TArray<struct FStructRedirect>>(m_addr + 1760);
	}
	struct UTexture2D GetPreIntegratedSkinBRDFTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UTexture2D(ptr_addr);
	}
	struct FSoftObjectPath GetPreIntegratedSkinBRDFTextureName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 1784);
	}
	struct UTexture2D GetBlueNoiseTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1808);
		return struct UTexture2D(ptr_addr);
	}
	struct FSoftObjectPath GetBlueNoiseTextureName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 1816);
	}
	struct UTexture2D GetMiniFontTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1840);
		return struct UTexture2D(ptr_addr);
	}
	struct FSoftObjectPath GetMiniFontTextureName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 1848);
	}
	struct UTexture GetWeightMapPlaceholderTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1872);
		return struct UTexture(ptr_addr);
	}
	struct FSoftObjectPath GetWeightMapPlaceholderTextureName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 1880);
	}
	struct UTexture2D GetLightMapDensityTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1904);
		return struct UTexture2D(ptr_addr);
	}
	struct FSoftObjectPath GetLightMapDensityTextureName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 1912);
	}
	struct UGameViewportClient GetGameViewport() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1944);
		return struct UGameViewportClient(ptr_addr);
	}
	struct TArray<struct FString> GetDeferredCommands() {
		return memory.read<struct TArray<struct FString>>(m_addr + 1952);
	}
	float GetNearClipPlane() {
		return memory.read<float>(m_addr + 1968);
	}
	char GetbSubtitlesEnabled() {
		return memory.read<char>(m_addr + 1972);
	}
	char GetbSubtitlesForcedOff() {
		return memory.read<char>(m_addr + 1972);
	}
	int32_t GetMaximumLoopIterationCount() {
		return memory.read<int32_t>(m_addr + 1976);
	}
	char GetbCanBlueprintsTickByDefault() {
		return memory.read<char>(m_addr + 1980);
	}
	char GetbOptimizeAnimBlueprintMemberVariableAccess() {
		return memory.read<char>(m_addr + 1980);
	}
	char GetbAllowMultiThreadedAnimationUpdate() {
		return memory.read<char>(m_addr + 1980);
	}
	char GetbEnableEditorPSysRealtimeLOD() {
		return memory.read<char>(m_addr + 1980);
	}
	char GetbSmoothFrameRate() {
		return memory.read<char>(m_addr + 1980);
	}
	char GetbUseFixedFrameRate() {
		return memory.read<char>(m_addr + 1980);
	}
	float GetFixedFrameRate() {
		return memory.read<float>(m_addr + 1984);
	}
	struct FFloatRange GetSmoothedFrameRateRange() {
		return memory.read<struct FFloatRange>(m_addr + 1988);
	}
	struct UEngineCustomTimeStep GetCustomTimeStep() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2008);
		return struct UEngineCustomTimeStep(ptr_addr);
	}
	struct FSoftClassPath GetCustomTimeStepClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 2048);
	}
	struct UTimecodeProvider GetTimecodeProvider() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2072);
		return struct UTimecodeProvider(ptr_addr);
	}
	struct FSoftClassPath GetTimecodeProviderClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 2112);
	}
	bool GetbGenerateDefaultTimecode() {
		return memory.read<bool>(m_addr + 2136);
	}
	struct FFrameRate GetGenerateDefaultTimecodeFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 2140);
	}
	float GetGenerateDefaultTimecodeFrameDelay() {
		return memory.read<float>(m_addr + 2148);
	}
	char GetbCheckForMultiplePawnsSpawnedInAFrame() {
		return memory.read<char>(m_addr + 2152);
	}
	int32_t GetNumPawnsAllowedToBeSpawnedInAFrame() {
		return memory.read<int32_t>(m_addr + 2156);
	}
	char GetbShouldGenerateLowQualityLightmaps() {
		return memory.read<char>(m_addr + 2160);
	}
	struct FColor GetC_WorldBox() {
		return memory.read<struct FColor>(m_addr + 2164);
	}
	struct FColor GetC_BrushWire() {
		return memory.read<struct FColor>(m_addr + 2168);
	}
	struct FColor GetC_AddWire() {
		return memory.read<struct FColor>(m_addr + 2172);
	}
	struct FColor GetC_SubtractWire() {
		return memory.read<struct FColor>(m_addr + 2176);
	}
	struct FColor GetC_SemiSolidWire() {
		return memory.read<struct FColor>(m_addr + 2180);
	}
	struct FColor GetC_NonSolidWire() {
		return memory.read<struct FColor>(m_addr + 2184);
	}
	struct FColor GetC_WireBackground() {
		return memory.read<struct FColor>(m_addr + 2188);
	}
	struct FColor GetC_ScaleBoxHi() {
		return memory.read<struct FColor>(m_addr + 2192);
	}
	struct FColor GetC_VolumeCollision() {
		return memory.read<struct FColor>(m_addr + 2196);
	}
	struct FColor GetC_BSPCollision() {
		return memory.read<struct FColor>(m_addr + 2200);
	}
	struct FColor GetC_OrthoBackground() {
		return memory.read<struct FColor>(m_addr + 2204);
	}
	struct FColor GetC_Volume() {
		return memory.read<struct FColor>(m_addr + 2208);
	}
	struct FColor GetC_BrushShape() {
		return memory.read<struct FColor>(m_addr + 2212);
	}
	float GetStreamingDistanceFactor() {
		return memory.read<float>(m_addr + 2216);
	}
	struct FDirectoryPath GetGameScreenshotSaveDirectory() {
		return memory.read<struct FDirectoryPath>(m_addr + 2224);
	}
	enum class ETransitionType GetTransitionType() {
		return memory.read<enum class ETransitionType>(m_addr + 2240);
	}
	struct FString GetTransitionDescription() {
		return memory.read<struct FString>(m_addr + 2248);
	}
	struct FString GetTransitionGameMode() {
		return memory.read<struct FString>(m_addr + 2264);
	}
	char GetbAllowMatureLanguage() {
		return memory.read<char>(m_addr + 2280);
	}
	float GetCameraRotationThreshold() {
		return memory.read<float>(m_addr + 2284);
	}
	float GetCameraTranslationThreshold() {
		return memory.read<float>(m_addr + 2288);
	}
	float GetPrimitiveProbablyVisibleTime() {
		return memory.read<float>(m_addr + 2292);
	}
	float GetMaxOcclusionPixelsFraction() {
		return memory.read<float>(m_addr + 2296);
	}
	char GetbPauseOnLossOfFocus() {
		return memory.read<char>(m_addr + 2300);
	}
	int32_t GetMaxParticleResize() {
		return memory.read<int32_t>(m_addr + 2304);
	}
	int32_t GetMaxParticleResizeWarn() {
		return memory.read<int32_t>(m_addr + 2308);
	}
	struct TArray<struct FDropNoteInfo> GetPendingDroppedNotes() {
		return memory.read<struct TArray<struct FDropNoteInfo>>(m_addr + 2312);
	}
	float GetNetClientTicksPerSecond() {
		return memory.read<float>(m_addr + 2328);
	}
	float GetDisplayGamma() {
		return memory.read<float>(m_addr + 2332);
	}
	float GetMinDesiredFrameRate() {
		return memory.read<float>(m_addr + 2336);
	}
	struct FLinearColor GetDefaultSelectedMaterialColor() {
		return memory.read<struct FLinearColor>(m_addr + 2340);
	}
	struct FLinearColor GetSelectedMaterialColor() {
		return memory.read<struct FLinearColor>(m_addr + 2356);
	}
	struct FLinearColor GetSelectionOutlineColor() {
		return memory.read<struct FLinearColor>(m_addr + 2372);
	}
	struct FLinearColor GetSubduedSelectionOutlineColor() {
		return memory.read<struct FLinearColor>(m_addr + 2388);
	}
	struct FLinearColor GetSelectedMaterialColorOverride() {
		return memory.read<struct FLinearColor>(m_addr + 2404);
	}
	bool GetbIsOverridingSelectedColor() {
		return memory.read<bool>(m_addr + 2420);
	}
	char GetbEnableOnScreenDebugMessages() {
		return memory.read<char>(m_addr + 2424);
	}
	char GetbEnableOnScreenDebugMessagesDisplay() {
		return memory.read<char>(m_addr + 2424);
	}
	char GetbSuppressMapWarnings() {
		return memory.read<char>(m_addr + 2424);
	}
	char GetbDisableAILogging() {
		return memory.read<char>(m_addr + 2424);
	}
	uint32_t GetbEnableVisualLogRecordingOnStart() {
		return memory.read<uint32_t>(m_addr + 2428);
	}
	int32_t GetScreenSaverInhibitorSemaphore() {
		return memory.read<int32_t>(m_addr + 2432);
	}
	char GetbLockReadOnlyLevels() {
		return memory.read<char>(m_addr + 2436);
	}
	struct FString GetParticleEventManagerClassPath() {
		return memory.read<struct FString>(m_addr + 2440);
	}
	float GetSelectionHighlightIntensity() {
		return memory.read<float>(m_addr + 2456);
	}
	float GetBSPSelectionHighlightIntensity() {
		return memory.read<float>(m_addr + 2460);
	}
	float GetSelectionHighlightIntensityBillboards() {
		return memory.read<float>(m_addr + 2464);
	}
	struct TArray<struct FNetDriverDefinition> GetNetDriverDefinitions() {
		return memory.read<struct TArray<struct FNetDriverDefinition>>(m_addr + 3088);
	}
	struct TArray<struct FString> GetServerActors() {
		return memory.read<struct TArray<struct FString>>(m_addr + 3104);
	}
	struct TArray<struct FString> GetRuntimeServerActors() {
		return memory.read<struct TArray<struct FString>>(m_addr + 3120);
	}
	float GetNetErrorLogInterval() {
		return memory.read<float>(m_addr + 3136);
	}
	char GetbStartedLoadMapMovie() {
		return memory.read<char>(m_addr + 3140);
	}
	int32_t GetNextWorldContextHandle() {
		return memory.read<int32_t>(m_addr + 3168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleAttractorPointGravity
{
public:
	UParticleModuleAttractorPointGravity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 60);
	}
	struct UDistributionFloat GetStrength() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UDistributionFloat(ptr_addr);
	}
	struct FRawDistributionFloat GetStrengthRaw() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class URectLightComponent
{
public:
	URectLightComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSourceWidth() {
		return memory.read<float>(m_addr + 856);
	}
	float GetSourceHeight() {
		return memory.read<float>(m_addr + 860);
	}
	float GetBarnDoorAngle() {
		return memory.read<float>(m_addr + 864);
	}
	float GetBarnDoorLength() {
		return memory.read<float>(m_addr + 868);
	}
	struct UTexture GetSourceTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UScriptViewportClient
{
public:
	UScriptViewportClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USubsystemBlueprintLibrary
{
public:
	USubsystemBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGameViewportClient
{
public:
	UGameViewportClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UConsole GetViewportConsole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UConsole(ptr_addr);
	}
	struct TArray<struct FDebugDisplayProperty> GetDebugProperties() {
		return memory.read<struct TArray<struct FDebugDisplayProperty>>(m_addr + 72);
	}
	int32_t GetMaxSplitscreenPlayers() {
		return memory.read<int32_t>(m_addr + 104);
	}
	struct UWorld GetWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UWorld(ptr_addr);
	}
	struct UGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct UGameInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFloatingPawnMovement
{
public:
	UFloatingPawnMovement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaxSpeed() {
		return memory.read<float>(m_addr + 312);
	}
	float GetAcceleration() {
		return memory.read<float>(m_addr + 316);
	}
	float GetDeceleration() {
		return memory.read<float>(m_addr + 320);
	}
	float GetTurningBoost() {
		return memory.read<float>(m_addr + 324);
	}
	char GetbPositionCorrected() {
		return memory.read<char>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimMontage
{
public:
	UAnimMontage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAlphaBlend GetBlendIn() {
		return memory.read<struct FAlphaBlend>(m_addr + 168);
	}
	float GetBlendInTime() {
		return memory.read<float>(m_addr + 216);
	}
	struct FAlphaBlend GetBlendOut() {
		return memory.read<struct FAlphaBlend>(m_addr + 224);
	}
	float GetBlendOutTime() {
		return memory.read<float>(m_addr + 272);
	}
	float GetBlendOutTriggerTime() {
		return memory.read<float>(m_addr + 276);
	}
	struct FName GetSyncGroup() {
		return memory.read<struct FName>(m_addr + 280);
	}
	int32_t GetSyncSlotIndex() {
		return memory.read<int32_t>(m_addr + 288);
	}
	struct FMarkerSyncData GetMarkerData() {
		return memory.read<struct FMarkerSyncData>(m_addr + 296);
	}
	struct TArray<struct FCompositeSection> GetCompositeSections() {
		return memory.read<struct TArray<struct FCompositeSection>>(m_addr + 328);
	}
	struct TArray<struct FSlotAnimationTrack> GetSlotAnimTracks() {
		return memory.read<struct TArray<struct FSlotAnimationTrack>>(m_addr + 344);
	}
	struct TArray<struct FBranchingPoint> GetBranchingPoints() {
		return memory.read<struct TArray<struct FBranchingPoint>>(m_addr + 360);
	}
	bool GetbEnableRootMotionTranslation() {
		return memory.read<bool>(m_addr + 376);
	}
	bool GetbEnableRootMotionRotation() {
		return memory.read<bool>(m_addr + 377);
	}
	bool GetbEnableAutoBlendOut() {
		return memory.read<bool>(m_addr + 378);
	}
	enum class ERootMotionRootLock GetRootMotionRootLock() {
		return memory.read<enum class ERootMotionRootLock>(m_addr + 379);
	}
	struct TArray<struct FBranchingPointMarker> GetBranchingPointMarkers() {
		return memory.read<struct TArray<struct FBranchingPointMarker>>(m_addr + 384);
	}
	struct TArray<int32_t> GetBranchingPointStateNotifyIndices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 400);
	}
	struct FTimeStretchCurve GetTimeStretchCurve() {
		return memory.read<struct FTimeStretchCurve>(m_addr + 416);
	}
	struct FName GetTimeStretchCurveName() {
		return memory.read<struct FName>(m_addr + 456);
	}

private:
	std::uint64_t m_addr = 0;
};


class AHUD
{
public:
	AHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct APlayerController(ptr_addr);
	}
	char GetbLostFocusPaused() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbShowHUD() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbShowDebugInfo() {
		return memory.read<char>(m_addr + 552);
	}
	int32_t GetCurrentTargetIndex() {
		return memory.read<int32_t>(m_addr + 556);
	}
	char GetbShowHitBoxDebugInfo() {
		return memory.read<char>(m_addr + 560);
	}
	char GetbShowOverlays() {
		return memory.read<char>(m_addr + 560);
	}
	char GetbEnableDebugTextShadow() {
		return memory.read<char>(m_addr + 560);
	}
	struct TArray<struct AActor> GetPostRenderedActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct TArray<struct AActor>(ptr_addr);
	}
	struct TArray<struct FName> GetDebugDisplay() {
		return memory.read<struct TArray<struct FName>>(m_addr + 592);
	}
	struct TArray<struct FName> GetToggledDebugCategories() {
		return memory.read<struct TArray<struct FName>>(m_addr + 608);
	}
	struct UCanvas GetCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UCanvas(ptr_addr);
	}
	struct UCanvas GetDebugCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UCanvas(ptr_addr);
	}
	struct TArray<struct FDebugTextInfo> GetDebugTextList() {
		return memory.read<struct TArray<struct FDebugTextInfo>>(m_addr + 640);
	}
	AActor GetShowDebugTargetDesiredClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return AActor(ptr_addr);
	}
	struct AActor GetShowDebugTargetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackFloatMaterialParam
{
public:
	UInterpTrackFloatMaterialParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMaterialInterface> GetTargetMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct FName GetParamName() {
		return memory.read<struct FName>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALevelScriptActor
{
public:
	ALevelScriptActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbInputEnabled() {
		return memory.read<char>(m_addr + 544);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeMixer
{
public:
	USoundNodeMixer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetInputVolume() {
		return memory.read<struct TArray<float>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class ADefaultPawn
{
public:
	ADefaultPawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBaseTurnRate() {
		return memory.read<float>(m_addr + 640);
	}
	float GetBaseLookUpRate() {
		return memory.read<float>(m_addr + 644);
	}
	struct UPawnMovementComponent GetMovementComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UPawnMovementComponent(ptr_addr);
	}
	struct USphereComponent GetCollisionComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct USphereComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UStaticMeshComponent(ptr_addr);
	}
	char GetbAddDefaultMovementBindings() {
		return memory.read<char>(m_addr + 672);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimCompress_RemoveLinearKeys
{
public:
	UAnimCompress_RemoveLinearKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaxPosDiff() {
		return memory.read<float>(m_addr + 64);
	}
	float GetMaxAngleDiff() {
		return memory.read<float>(m_addr + 68);
	}
	float GetMaxScaleDiff() {
		return memory.read<float>(m_addr + 72);
	}
	float GetMaxEffectorDiff() {
		return memory.read<float>(m_addr + 76);
	}
	float GetMinEffectorDiff() {
		return memory.read<float>(m_addr + 80);
	}
	float GetEffectorDiffSocket() {
		return memory.read<float>(m_addr + 84);
	}
	float GetParentKeyScale() {
		return memory.read<float>(m_addr + 88);
	}
	char GetbRetarget() {
		return memory.read<char>(m_addr + 92);
	}
	char GetbActuallyFilterLinearKeys() {
		return memory.read<char>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionReflectionCapturePassSwitch
{
public:
	UMaterialExpressionReflectionCapturePassSwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetDefault() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetReflection() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class ASpectatorPawn
{
public:
	ASpectatorPawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInputKeyDelegateBinding
{
public:
	UInputKeyDelegateBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBlueprintInputKeyDelegateBinding> GetInputKeyDelegateBindings() {
		return memory.read<struct TArray<struct FBlueprintInputKeyDelegateBinding>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class AWorldSettings
{
public:
	AWorldSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVisibilityCellSize() {
		return memory.read<int32_t>(m_addr + 552);
	}
	enum class EVisibilityAggressiveness GetVisibilityAggressiveness() {
		return memory.read<enum class EVisibilityAggressiveness>(m_addr + 556);
	}
	char GetbPrecomputeVisibility() {
		return memory.read<char>(m_addr + 557);
	}
	char GetbPlaceCellsOnlyAlongCameraTracks() {
		return memory.read<char>(m_addr + 557);
	}
	char GetbEnableWorldBoundsChecks() {
		return memory.read<char>(m_addr + 557);
	}
	char GetbEnableNavigationSystem() {
		return memory.read<char>(m_addr + 557);
	}
	char GetbEnableAISystem() {
		return memory.read<char>(m_addr + 557);
	}
	char GetbEnableWorldComposition() {
		return memory.read<char>(m_addr + 557);
	}
	char GetbUseClientSideLevelStreamingVolumes() {
		return memory.read<char>(m_addr + 557);
	}
	char GetbEnableWorldOriginRebasing() {
		return memory.read<char>(m_addr + 557);
	}
	char GetbWorldGravitySet() {
		return memory.read<char>(m_addr + 558);
	}
	char GetbGlobalGravitySet() {
		return memory.read<char>(m_addr + 558);
	}
	char GetbMinimizeBSPSections() {
		return memory.read<char>(m_addr + 558);
	}
	char GetbForceNoPrecomputedLighting() {
		return memory.read<char>(m_addr + 558);
	}
	char GetbHighPriorityLoading() {
		return memory.read<char>(m_addr + 558);
	}
	char GetbHighPriorityLoadingLocal() {
		return memory.read<char>(m_addr + 558);
	}
	char GetbOverrideDefaultBroadphaseSettings() {
		return memory.read<char>(m_addr + 558);
	}
	struct UNavigationSystemConfig GetNavigationSystemConfig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UNavigationSystemConfig(ptr_addr);
	}
	struct UNavigationSystemConfig GetNavigationSystemConfigOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UNavigationSystemConfig(ptr_addr);
	}
	float GetWorldToMeters() {
		return memory.read<float>(m_addr + 576);
	}
	float GetKillZ() {
		return memory.read<float>(m_addr + 580);
	}
	UDamageType GetKillZDamageType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return UDamageType(ptr_addr);
	}
	float GetWorldGravityZ() {
		return memory.read<float>(m_addr + 592);
	}
	float GetGlobalGravityZ() {
		return memory.read<float>(m_addr + 596);
	}
	ADefaultPhysicsVolume GetDefaultPhysicsVolumeClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return ADefaultPhysicsVolume(ptr_addr);
	}
	UPhysicsCollisionHandler GetPhysicsCollisionHandlerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return UPhysicsCollisionHandler(ptr_addr);
	}
	AGameModeBase GetDefaultGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return AGameModeBase(ptr_addr);
	}
	AGameNetworkManager GetGameNetworkManagerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return AGameNetworkManager(ptr_addr);
	}
	int32_t GetPackedLightAndShadowMapTextureSize() {
		return memory.read<int32_t>(m_addr + 632);
	}
	float GetMaxRGBMLimitationInReflectionCaptureForAutoDetection() {
		return memory.read<float>(m_addr + 636);
	}
	struct FVector GetDefaultColorScale() {
		return memory.read<struct FVector>(m_addr + 640);
	}
	float GetDefaultMaxDistanceFieldOcclusionDistance() {
		return memory.read<float>(m_addr + 652);
	}
	float GetGlobalDistanceFieldViewDistance() {
		return memory.read<float>(m_addr + 656);
	}
	float GetDynamicIndirectShadowsSelfShadowingIntensity() {
		return memory.read<float>(m_addr + 660);
	}
	struct FReverbSettings GetDefaultReverbSettings() {
		return memory.read<struct FReverbSettings>(m_addr + 664);
	}
	struct FInteriorSettings GetDefaultAmbientZoneSettings() {
		return memory.read<struct FInteriorSettings>(m_addr + 696);
	}
	struct USoundMix GetDefaultBaseSoundMix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct USoundMix(ptr_addr);
	}
	float GetTimeDilation() {
		return memory.read<float>(m_addr + 744);
	}
	float GetMatineeTimeDilation() {
		return memory.read<float>(m_addr + 748);
	}
	float GetDemoPlayTimeDilation() {
		return memory.read<float>(m_addr + 752);
	}
	float GetMinGlobalTimeDilation() {
		return memory.read<float>(m_addr + 756);
	}
	float GetMaxGlobalTimeDilation() {
		return memory.read<float>(m_addr + 760);
	}
	float GetMinUndilatedFrameTime() {
		return memory.read<float>(m_addr + 764);
	}
	float GetMaxUndilatedFrameTime() {
		return memory.read<float>(m_addr + 768);
	}
	struct FBroadphaseSettings GetBroadphaseSettings() {
		return memory.read<struct FBroadphaseSettings>(m_addr + 772);
	}
	struct APlayerState GetPauser() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct APlayerState(ptr_addr);
	}
	struct TArray<struct FNetViewer> GetReplicationViewers() {
		return memory.read<struct TArray<struct FNetViewer>>(m_addr + 848);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}
	struct APlayerState GetPauserPlayerState() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct APlayerState(ptr_addr);
	}
	int32_t GetMaxNumberOfBookmarks() {
		return memory.read<int32_t>(m_addr + 888);
	}
	UBookmarkBase GetDefaultBookmarkClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return UBookmarkBase(ptr_addr);
	}
	struct TArray<struct UBookmarkBase> GetBookmarkArray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct TArray<struct UBookmarkBase>(ptr_addr);
	}
	UBookmarkBase GetLastBookmarkClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return UBookmarkBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionArctangentFast
{
public:
	UMaterialExpressionArctangentFast(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class USphereReflectionCaptureComponent
{
public:
	USphereReflectionCaptureComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInfluenceRadius() {
		return memory.read<float>(m_addr + 752);
	}
	float GetCaptureDistanceScale() {
		return memory.read<float>(m_addr + 756);
	}
	struct UDrawSphereComponent GetPreviewInfluenceRadius() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UDrawSphereComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWorld
{
public:
	UWorld(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevel GetPersistentLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct ULevel(ptr_addr);
	}
	struct UNetDriver GetNetDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UNetDriver(ptr_addr);
	}
	struct ULineBatchComponent GetLineBatcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct ULineBatchComponent(ptr_addr);
	}
	struct ULineBatchComponent GetPersistentLineBatcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct ULineBatchComponent(ptr_addr);
	}
	struct ULineBatchComponent GetForegroundLineBatcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct ULineBatchComponent(ptr_addr);
	}
	struct AGameNetworkManager GetNetworkManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct AGameNetworkManager(ptr_addr);
	}
	struct UPhysicsCollisionHandler GetPhysicsCollisionHandler() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UPhysicsCollisionHandler(ptr_addr);
	}
	struct TArray<struct UObject> GetExtraReferencedObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct TArray<struct UObject>(ptr_addr);
	}
	struct TArray<struct UObject> GetPerModuleDataObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct TArray<struct UObject>(ptr_addr);
	}
	struct TArray<struct ULevelStreaming> GetStreamingLevels() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct TArray<struct ULevelStreaming>(ptr_addr);
	}
	struct FStreamingLevelsToConsider GetStreamingLevelsToConsider() {
		return memory.read<struct FStreamingLevelsToConsider>(m_addr + 152);
	}
	struct FString GetStreamingLevelsPrefix() {
		return memory.read<struct FString>(m_addr + 192);
	}
	struct ULevel GetCurrentLevelPendingVisibility() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct ULevel(ptr_addr);
	}
	struct ULevel GetCurrentLevelPendingInvisibility() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct ULevel(ptr_addr);
	}
	struct UDemoNetDriver GetDemoNetDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct UDemoNetDriver(ptr_addr);
	}
	struct AParticleEventManager GetMyParticleEventManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct AParticleEventManager(ptr_addr);
	}
	struct APhysicsVolume GetDefaultPhysicsVolume() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct APhysicsVolume(ptr_addr);
	}
	char GetbAreConstraintsDirty() {
		return memory.read<char>(m_addr + 270);
	}
	struct UNavigationSystemBase GetNavigationSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct UNavigationSystemBase(ptr_addr);
	}
	struct AGameModeBase GetAuthorityGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 280);
		return struct AGameModeBase(ptr_addr);
	}
	struct AGameStateBase GetGameState() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct AGameStateBase(ptr_addr);
	}
	struct UAISystemBase GetAISystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct UAISystemBase(ptr_addr);
	}
	struct UAvoidanceManager GetAvoidanceManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct UAvoidanceManager(ptr_addr);
	}
	struct TArray<struct ULevel> GetLevels() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct TArray<struct ULevel>(ptr_addr);
	}
	struct TArray<struct FLevelCollection> GetLevelCollections() {
		return memory.read<struct TArray<struct FLevelCollection>>(m_addr + 328);
	}
	struct UGameInstance GetOwningGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 384);
		return struct UGameInstance(ptr_addr);
	}
	struct TArray<struct UMaterialParameterCollectionInstance> GetParameterCollectionInstances() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 392);
		return struct TArray<struct UMaterialParameterCollectionInstance>(ptr_addr);
	}
	struct UCanvas GetCanvasForRenderingToTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 408);
		return struct UCanvas(ptr_addr);
	}
	struct UCanvas GetCanvasForDrawMaterialToRenderTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 416);
		return struct UCanvas(ptr_addr);
	}
	struct UPhysicsFieldComponent GetPhysicsField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct UPhysicsFieldComponent(ptr_addr);
	}
	struct TSet<struct UActorComponent> GetComponentsThatNeedPreEndOfFrameSync() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return struct TSet<struct UActorComponent>(ptr_addr);
	}
	struct TArray<struct UActorComponent> GetComponentsThatNeedEndOfFrameUpdate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct TArray<struct UActorComponent>(ptr_addr);
	}
	struct TArray<struct UActorComponent> GetComponentsThatNeedEndOfFrameUpdate_OnGameThread() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct TArray<struct UActorComponent>(ptr_addr);
	}
	struct UWorldComposition GetWorldComposition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UWorldComposition(ptr_addr);
	}
	struct FWorldPSCPool GetPSCPool() {
		return memory.read<struct FWorldPSCPool>(m_addr + 1656);
	}

private:
	std::uint64_t m_addr = 0;
};


class UActorComponentInstanceDataTransientOuter
{
public:
	UActorComponentInstanceDataTransientOuter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCameraAnimInst
{
public:
	UCameraAnimInst(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraAnim GetCamAnim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UCameraAnim(ptr_addr);
	}
	struct UInterpGroupInst GetInterpGroupInst() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UInterpGroupInst(ptr_addr);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 80);
	}
	struct UInterpTrackMove GetMoveTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UInterpTrackMove(ptr_addr);
	}
	struct UInterpTrackInstMove GetMoveInst() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UInterpTrackInstMove(ptr_addr);
	}
	enum class ECameraShakePlaySpace GetPlaySpace() {
		return memory.read<enum class ECameraShakePlaySpace>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUserDefinedStruct
{
public:
	UUserDefinedStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUserDefinedStructureStatus Getstatus() {
		return memory.read<enum class EUserDefinedStructureStatus>(m_addr + 192);
	}
	struct FGuid GetGuid() {
		return memory.read<struct FGuid>(m_addr + 196);
	}

private:
	std::uint64_t m_addr = 0;
};


class AStaticMeshActor
{
public:
	AStaticMeshActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMeshComponent GetStaticMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UStaticMeshComponent(ptr_addr);
	}
	bool GetbStaticMeshReplicateMovement() {
		return memory.read<bool>(m_addr + 552);
	}
	enum class ENavDataGatheringMode GetNavigationGeometryGatheringMode() {
		return memory.read<enum class ENavDataGatheringMode>(m_addr + 553);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimNotify_ResumeClothingSimulation
{
public:
	UAnimNotify_ResumeClothingSimulation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AGameMode
{
public:
	AGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMatchState() {
		return memory.read<struct FName>(m_addr + 704);
	}
	char GetbDelayedStart() {
		return memory.read<char>(m_addr + 712);
	}
	int32_t GetNumSpectators() {
		return memory.read<int32_t>(m_addr + 716);
	}
	int32_t GetNumPlayers() {
		return memory.read<int32_t>(m_addr + 720);
	}
	int32_t GetNumBots() {
		return memory.read<int32_t>(m_addr + 724);
	}
	float GetMinRespawnDelay() {
		return memory.read<float>(m_addr + 728);
	}
	int32_t GetNumTravellingPlayers() {
		return memory.read<int32_t>(m_addr + 732);
	}
	ULocalMessage GetEngineMessageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return ULocalMessage(ptr_addr);
	}
	struct TArray<struct APlayerState> GetInactivePlayerArray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct TArray<struct APlayerState>(ptr_addr);
	}
	float GetInactivePlayerStateLifeSpan() {
		return memory.read<float>(m_addr + 760);
	}
	int32_t GetMaxInactivePlayers() {
		return memory.read<int32_t>(m_addr + 764);
	}
	bool GetbHandleDedicatedServerReplays() {
		return memory.read<bool>(m_addr + 768);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialBillboardComponent
{
public:
	UMaterialBillboardComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMaterialSpriteElement> GetElements() {
		return memory.read<struct TArray<struct FMaterialSpriteElement>>(m_addr + 1136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionMaterialProxyReplace
{
public:
	UMaterialExpressionMaterialProxyReplace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetRealtime() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetMaterialProxy() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleOrbit
{
public:
	UParticleModuleOrbit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOrbitChainMode GetChainMode() {
		return memory.read<enum class EOrbitChainMode>(m_addr + 56);
	}
	struct FRawDistributionVector GetOffsetAmount() {
		return memory.read<struct FRawDistributionVector>(m_addr + 64);
	}
	struct FOrbitOptions GetOffsetOptions() {
		return memory.read<struct FOrbitOptions>(m_addr + 136);
	}
	struct FRawDistributionVector GetRotationAmount() {
		return memory.read<struct FRawDistributionVector>(m_addr + 144);
	}
	struct FOrbitOptions GetRotationOptions() {
		return memory.read<struct FOrbitOptions>(m_addr + 216);
	}
	struct FRawDistributionVector GetRotationRateAmount() {
		return memory.read<struct FRawDistributionVector>(m_addr + 224);
	}
	struct FOrbitOptions GetRotationRateOptions() {
		return memory.read<struct FOrbitOptions>(m_addr + 296);
	}

private:
	std::uint64_t m_addr = 0;
};


class USelection
{
public:
	USelection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpData
{
public:
	UInterpData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInterpLength() {
		return memory.read<float>(m_addr + 40);
	}
	float GetPathBuildTime() {
		return memory.read<float>(m_addr + 44);
	}
	struct TArray<struct UInterpGroup> GetInterpGroups() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UInterpGroup>(ptr_addr);
	}
	struct UInterpCurveEdSetup GetCurveEdSetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UInterpCurveEdSetup(ptr_addr);
	}
	float GetEdSectionStart() {
		return memory.read<float>(m_addr + 72);
	}
	float GetEdSectionEnd() {
		return memory.read<float>(m_addr + 76);
	}
	char GetbShouldBakeAndPrune() {
		return memory.read<char>(m_addr + 80);
	}
	struct UInterpGroupDirector GetCachedDirectorGroup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UInterpGroupDirector(ptr_addr);
	}
	struct TArray<struct FName> GetAllEventNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleOrientationBase
{
public:
	UParticleModuleOrientationBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticleRandom
{
public:
	UMaterialExpressionParticleRandom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimNotifyState_DisableRootMotion
{
public:
	UAnimNotifyState_DisableRootMotion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AGameState
{
public:
	AGameState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMatchState() {
		return memory.read<struct FName>(m_addr + 624);
	}
	struct FName GetPreviousMatchState() {
		return memory.read<struct FName>(m_addr + 632);
	}
	int32_t GetElapsedTime() {
		return memory.read<int32_t>(m_addr + 640);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSkinningVertexOffsets
{
public:
	UMaterialExpressionSkinningVertexOffsets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ASkyLight
{
public:
	ASkyLight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkyLightComponent GetLightComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct USkyLightComponent(ptr_addr);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 552);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionComment
{
public:
	UMaterialExpressionComment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSizeX() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t GetSizeY() {
		return memory.read<int32_t>(m_addr + 68);
	}
	struct FString GetText() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FLinearColor GetCommentColor() {
		return memory.read<struct FLinearColor>(m_addr + 88);
	}
	int32_t GetFontSize() {
		return memory.read<int32_t>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionRotator
{
public:
	UMaterialExpressionRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetCoordinate() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetTime() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	float GetCenterX() {
		return memory.read<float>(m_addr + 104);
	}
	float GetCenterY() {
		return memory.read<float>(m_addr + 108);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 112);
	}
	uint32_t GetConstCoordinate() {
		return memory.read<uint32_t>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStreamableRenderAsset
{
public:
	UStreamableRenderAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	double GetForceMipLevelsToBeResidentTimestamp() {
		return memory.read<double>(m_addr + 64);
	}
	int32_t GetNumCinematicMipLevels() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetStreamingIndex() {
		return memory.read<int32_t>(m_addr + 76);
	}
	int32_t GetCachedCombinedLODBias() {
		return memory.read<int32_t>(m_addr + 80);
	}
	char GetNeverStream() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbGlobalForceMipLevelsToBeResident() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbHasStreamingUpdatePending() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbForceMiplevelsToBeResident() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbIgnoreStreamingMipBias() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbUseCinematicMipLevels() {
		return memory.read<char>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class ADefaultPhysicsVolume
{
public:
	ADefaultPhysicsVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AEmitterCameraLensEffectBase
{
public:
	AEmitterCameraLensEffectBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystem GetPS_CameraEffect() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UParticleSystem(ptr_addr);
	}
	struct UParticleSystem GetPS_CameraEffectNonExtremeContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UParticleSystem(ptr_addr);
	}
	struct APlayerCameraManager GetBaseCamera() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct APlayerCameraManager(ptr_addr);
	}
	struct FTransform GetRelativeTransform() {
		return memory.read<struct FTransform>(m_addr + 656);
	}
	float GetBaseFOV() {
		return memory.read<float>(m_addr + 704);
	}
	char GetbAllowMultipleInstances() {
		return memory.read<char>(m_addr + 708);
	}
	char GetbResetWhenRetriggered() {
		return memory.read<char>(m_addr + 708);
	}
	struct TArray<AEmitterCameraLensEffectBase> GetEmittersToTreatAsSame() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct TArray<AEmitterCameraLensEffectBase>(ptr_addr);
	}
	float GetDistFromCamera() {
		return memory.read<float>(m_addr + 728);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTexture
{
public:
	UTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetLightingGuid() {
		return memory.read<struct FGuid>(m_addr + 104);
	}
	enum class TextureMipGenSettings GetMipGenSettings() {
		return memory.read<enum class TextureMipGenSettings>(m_addr + 120);
	}
	char GetCompressionNone() {
		return memory.read<char>(m_addr + 124);
	}
	char GetDeferCompression() {
		return memory.read<char>(m_addr + 124);
	}
	int32_t GetLODBias() {
		return memory.read<int32_t>(m_addr + 128);
	}
	enum class TextureCompressionSettings GetCompressionSettings() {
		return memory.read<enum class TextureCompressionSettings>(m_addr + 132);
	}
	enum class TextureFilter GetFilter() {
		return memory.read<enum class TextureFilter>(m_addr + 133);
	}
	enum class ETextureMipLoadOptions GetMipLoadOptions() {
		return memory.read<enum class ETextureMipLoadOptions>(m_addr + 134);
	}
	enum class TextureGroup GetLODGroup() {
		return memory.read<enum class TextureGroup>(m_addr + 135);
	}
	struct FPerPlatformFloat GetDownscale() {
		return memory.read<struct FPerPlatformFloat>(m_addr + 136);
	}
	enum class ETextureDownscaleOptions GetDownscaleOptions() {
		return memory.read<enum class ETextureDownscaleOptions>(m_addr + 140);
	}
	char GetsRGB() {
		return memory.read<char>(m_addr + 141);
	}
	char GetbNoTiling() {
		return memory.read<char>(m_addr + 141);
	}
	char GetVirtualTextureStreaming() {
		return memory.read<char>(m_addr + 141);
	}
	char GetCompressionYCoCg() {
		return memory.read<char>(m_addr + 141);
	}
	char GetbNotOfflineProcessed() {
		return memory.read<char>(m_addr + 141);
	}
	char GetbAsyncResourceReleaseHasBeenStarted() {
		return memory.read<char>(m_addr + 141);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleOrientationAxisLock
{
public:
	UParticleModuleOrientationAxisLock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EParticleAxisLock GetLockAxisFlags() {
		return memory.read<enum class EParticleAxisLock>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextureMipDataProviderFactory
{
public:
	UTextureMipDataProviderFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAISystemBase
{
public:
	UAISystemBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftClassPath GetAISystemClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 40);
	}
	struct FName GetAISystemModuleName() {
		return memory.read<struct FName>(m_addr + 64);
	}
	bool GetbInstantiateAISystemOnClient() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextureCube
{
public:
	UTextureCube(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ACullDistanceVolume
{
public:
	ACullDistanceVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCullDistanceSizePair> GetCullDistances() {
		return memory.read<struct TArray<struct FCullDistanceSizePair>>(m_addr + 600);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 616);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionFloor
{
public:
	UMaterialExpressionFloor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStaticMeshComponent
{
public:
	UStaticMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetForcedLodModel() {
		return memory.read<int32_t>(m_addr + 1192);
	}
	int32_t GetPreviousLODLevel() {
		return memory.read<int32_t>(m_addr + 1196);
	}
	int32_t GetMinLOD() {
		return memory.read<int32_t>(m_addr + 1200);
	}
	int32_t GetSubDivisionStepSize() {
		return memory.read<int32_t>(m_addr + 1204);
	}
	struct UStaticMesh GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct UStaticMesh(ptr_addr);
	}
	struct FColor GetWireframeColorOverride() {
		return memory.read<struct FColor>(m_addr + 1216);
	}
	char GetbEvaluateWorldPositionOffset() {
		return memory.read<char>(m_addr + 1220);
	}
	char GetbOverrideWireframeColor() {
		return memory.read<char>(m_addr + 1220);
	}
	char GetbOverrideMinLod() {
		return memory.read<char>(m_addr + 1220);
	}
	char GetbOverrideNavigationExport() {
		return memory.read<char>(m_addr + 1220);
	}
	char GetbForceNavigationObstacle() {
		return memory.read<char>(m_addr + 1220);
	}
	char GetbDisallowMeshPaintPerInstance() {
		return memory.read<char>(m_addr + 1220);
	}
	char GetbIgnoreInstanceForTextureStreaming() {
		return memory.read<char>(m_addr + 1220);
	}
	char GetbOverrideLightMapRes() {
		return memory.read<char>(m_addr + 1220);
	}
	char GetbCastDistanceFieldIndirectShadow() {
		return memory.read<char>(m_addr + 1221);
	}
	char GetbOverrideDistanceFieldSelfShadowBias() {
		return memory.read<char>(m_addr + 1221);
	}
	char GetbUseSubDivisions() {
		return memory.read<char>(m_addr + 1221);
	}
	char GetbUseDefaultCollision() {
		return memory.read<char>(m_addr + 1221);
	}
	char GetbReverseCulling() {
		return memory.read<char>(m_addr + 1221);
	}
	int32_t GetOverriddenLightMapRes() {
		return memory.read<int32_t>(m_addr + 1224);
	}
	float GetDistanceFieldIndirectShadowMinVisibility() {
		return memory.read<float>(m_addr + 1228);
	}
	float GetDistanceFieldSelfShadowBias() {
		return memory.read<float>(m_addr + 1232);
	}
	float GetStreamingDistanceMultiplier() {
		return memory.read<float>(m_addr + 1236);
	}
	struct TArray<struct FStaticMeshComponentLODInfo> GetLODData() {
		return memory.read<struct TArray<struct FStaticMeshComponentLODInfo>>(m_addr + 1240);
	}
	struct TArray<struct FStreamingTextureBuildInfo> GetStreamingTextureData() {
		return memory.read<struct TArray<struct FStreamingTextureBuildInfo>>(m_addr + 1256);
	}
	char GetbUseMovableStaticMeshLightmass() {
		return memory.read<char>(m_addr + 1272);
	}
	struct FLightmassPrimitiveSettings GetLightmassSettings() {
		return memory.read<struct FLightmassPrimitiveSettings>(m_addr + 1276);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlendableInterface
{
public:
	UBlendableInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModule
{
public:
	UParticleModule(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbSpawnModule() {
		return memory.read<char>(m_addr + 40);
	}
	char GetbUpdateModule() {
		return memory.read<char>(m_addr + 40);
	}
	char GetbFinalUpdateModule() {
		return memory.read<char>(m_addr + 40);
	}
	char GetbUpdateForGPUEmitter() {
		return memory.read<char>(m_addr + 40);
	}
	char GetbCurvesAsColor() {
		return memory.read<char>(m_addr + 40);
	}
	char Getb3DDrawMode() {
		return memory.read<char>(m_addr + 40);
	}
	char GetbSupported3DDrawMode() {
		return memory.read<char>(m_addr + 40);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 40);
	}
	char GetbEditable() {
		return memory.read<char>(m_addr + 41);
	}
	char GetLODDuplicate() {
		return memory.read<char>(m_addr + 41);
	}
	char GetbSupportsRandomSeed() {
		return memory.read<char>(m_addr + 41);
	}
	char GetbRequiresLoopingNotification() {
		return memory.read<char>(m_addr + 41);
	}
	char GetLODValidity() {
		return memory.read<char>(m_addr + 42);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionClamp
{
public:
	UMaterialExpressionClamp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetMin() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetMax() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	enum class EClampMode GetClampMode() {
		return memory.read<enum class EClampMode>(m_addr + 124);
	}
	float GetMinDefault() {
		return memory.read<float>(m_addr + 128);
	}
	float GetMaxDefault() {
		return memory.read<float>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpFilter_Classes
{
public:
	UInterpFilter_Classes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMatineeInterface
{
public:
	UMatineeInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPreviewMeshCollection
{
public:
	UPreviewMeshCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeleton GetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct USkeleton(ptr_addr);
	}
	struct TArray<struct FPreviewMeshCollectionEntry> GetSkeletalMeshes() {
		return memory.read<struct TArray<struct FPreviewMeshCollectionEntry>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHierarchicalInstancedStaticMeshComponent
{
public:
	UHierarchicalInstancedStaticMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetSortedInstances() {
		return memory.read<struct TArray<int32_t>>(m_addr + 1496);
	}
	int32_t GetNumBuiltInstances() {
		return memory.read<int32_t>(m_addr + 1512);
	}
	struct FBox GetBuiltInstanceBounds() {
		return memory.read<struct FBox>(m_addr + 1520);
	}
	struct FBox GetUnbuiltInstanceBounds() {
		return memory.read<struct FBox>(m_addr + 1548);
	}
	struct TArray<struct FBox> GetUnbuiltInstanceBoundsList() {
		return memory.read<struct TArray<struct FBox>>(m_addr + 1576);
	}
	char GetbEnableDensityScaling() {
		return memory.read<char>(m_addr + 1592);
	}
	int32_t GetOcclusionLayerNumNodes() {
		return memory.read<int32_t>(m_addr + 1600);
	}
	struct FBoxSphereBounds GetCacheMeshExtendedBounds() {
		return memory.read<struct FBoxSphereBounds>(m_addr + 1604);
	}
	bool GetbDisableCollision() {
		return memory.read<bool>(m_addr + 1632);
	}
	int32_t GetInstanceCountToRender() {
		return memory.read<int32_t>(m_addr + 1636);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionFontSampleParameter
{
public:
	UMaterialExpressionFontSampleParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 80);
	}
	struct FGuid GetExpressionGUID() {
		return memory.read<struct FGuid>(m_addr + 88);
	}
	struct FName GetGroup() {
		return memory.read<struct FName>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class ABrush
{
public:
	ABrush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBrushType GetBrushType() {
		return memory.read<enum class EBrushType>(m_addr + 544);
	}
	struct FColor GetBrushColor() {
		return memory.read<struct FColor>(m_addr + 548);
	}
	int32_t GetPolyFlags() {
		return memory.read<int32_t>(m_addr + 552);
	}
	char GetbColored() {
		return memory.read<char>(m_addr + 556);
	}
	char GetbSolidWhenSelected() {
		return memory.read<char>(m_addr + 556);
	}
	char GetbPlaceableFromClassBrowser() {
		return memory.read<char>(m_addr + 556);
	}
	char GetbNotForClientOrServer() {
		return memory.read<char>(m_addr + 556);
	}
	struct UModel GetBrush() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UModel(ptr_addr);
	}
	struct UBrushComponent GetBrushComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UBrushComponent(ptr_addr);
	}
	char GetbInManipulation() {
		return memory.read<char>(m_addr + 576);
	}
	struct TArray<struct FGeomSelection> GetSavedSelections() {
		return memory.read<struct TArray<struct FGeomSelection>>(m_addr + 584);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVectorFieldScale
{
public:
	UParticleModuleVectorFieldScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDistributionFloat GetVectorFieldScale() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UDistributionFloat(ptr_addr);
	}
	struct FRawDistributionFloat GetVectorFieldScaleRaw() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionConstant4Vector
{
public:
	UMaterialExpressionConstant4Vector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetConstant() {
		return memory.read<struct FLinearColor>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleAcceleration
{
public:
	UParticleModuleAcceleration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetAcceleration() {
		return memory.read<struct FRawDistributionVector>(m_addr + 56);
	}
	char GetbApplyOwnerScale() {
		return memory.read<char>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class AVolume
{
public:
	AVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDialogueWave
{
public:
	UDialogueWave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbMature() {
		return memory.read<char>(m_addr + 40);
	}
	char GetbOverride_SubtitleOverride() {
		return memory.read<char>(m_addr + 40);
	}
	struct FString GetSpokenText() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetSubtitleOverride() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct TArray<struct FDialogueContextMapping> GetContextMappings() {
		return memory.read<struct TArray<struct FDialogueContextMapping>>(m_addr + 80);
	}
	struct FGuid GetLocalizationGUID() {
		return memory.read<struct FGuid>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEdGraphSchema
{
public:
	UEdGraphSchema(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialInterface
{
public:
	UMaterialInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USubsurfaceProfile GetSubsurfaceProfile() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct USubsurfaceProfile(ptr_addr);
	}
	struct FLightmassMaterialInterfaceSettings GetLightmassSettings() {
		return memory.read<struct FLightmassMaterialInterfaceSettings>(m_addr + 80);
	}
	struct TArray<struct FMaterialTextureInfo> GetTextureStreamingData() {
		return memory.read<struct TArray<struct FMaterialTextureInfo>>(m_addr + 112);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationPrimitiveCylinder
{
public:
	UParticleModuleLocationPrimitiveCylinder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetRadialVelocity() {
		return memory.read<char>(m_addr + 176);
	}
	struct FRawDistributionFloat GetStartRadius() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 184);
	}
	struct FRawDistributionFloat GetStartHeight() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 232);
	}
	enum class CylinderHeightAxis GetHeightAxis() {
		return memory.read<enum class CylinderHeightAxis>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialInstance
{
public:
	UMaterialInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicalMaterial GetPhysMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UPhysicalMaterial(ptr_addr);
	}
	struct UPhysicalMaterial GetPhysicalMaterialMap[8]() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UPhysicalMaterial(ptr_addr);
	}
	struct UMaterialInterface GetParent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct UMaterialInterface(ptr_addr);
	}
	char GetbHasStaticPermutationResource() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbOverrideSubsurfaceProfile() {
		return memory.read<char>(m_addr + 232);
	}
	struct TArray<struct FScalarParameterValue> GetScalarParameterValues() {
		return memory.read<struct TArray<struct FScalarParameterValue>>(m_addr + 248);
	}
	struct TArray<struct FVectorParameterValue> GetVectorParameterValues() {
		return memory.read<struct TArray<struct FVectorParameterValue>>(m_addr + 264);
	}
	struct TArray<struct FTextureParameterValue> GetTextureParameterValues() {
		return memory.read<struct TArray<struct FTextureParameterValue>>(m_addr + 280);
	}
	struct TArray<struct FRuntimeVirtualTextureParameterValue> GetRuntimeVirtualTextureParameterValues() {
		return memory.read<struct TArray<struct FRuntimeVirtualTextureParameterValue>>(m_addr + 296);
	}
	struct TArray<struct FFontParameterValue> GetFontParameterValues() {
		return memory.read<struct TArray<struct FFontParameterValue>>(m_addr + 312);
	}
	struct FMaterialInstanceBasePropertyOverrides GetBasePropertyOverrides() {
		return memory.read<struct FMaterialInstanceBasePropertyOverrides>(m_addr + 328);
	}
	struct FStaticParameterSet GetStaticParameters() {
		return memory.read<struct FStaticParameterSet>(m_addr + 352);
	}
	struct FMaterialCachedParameters GetCachedLayerParameters() {
		return memory.read<struct FMaterialCachedParameters>(m_addr + 416);
	}
	struct TArray<struct UObject> GetCachedReferencedTextures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpGroupInst
{
public:
	UInterpGroupInst(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInterpGroup GetGroup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UInterpGroup(ptr_addr);
	}
	struct AActor GetGroupActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct AActor(ptr_addr);
	}
	struct TArray<struct UInterpTrackInst> GetTrackInst() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UInterpTrackInst>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeMature
{
public:
	USoundNodeMature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialInstanceConstant
{
public:
	UMaterialInstanceConstant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicalMaterialMask GetPhysMaterialMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UPhysicalMaterialMask(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInst
{
public:
	UInterpTrackInst(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UWorldSubsystem
{
public:
	UWorldSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavPathObserverInterface
{
public:
	UNavPathObserverInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTimelineTemplate
{
public:
	UTimelineTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimelineLength() {
		return memory.read<float>(m_addr + 40);
	}
	enum class ETimelineLengthMode GetLengthMode() {
		return memory.read<enum class ETimelineLengthMode>(m_addr + 44);
	}
	char GetbAutoPlay() {
		return memory.read<char>(m_addr + 45);
	}
	char GetbLoop() {
		return memory.read<char>(m_addr + 45);
	}
	char GetbReplicated() {
		return memory.read<char>(m_addr + 45);
	}
	char GetbIgnoreTimeDilation() {
		return memory.read<char>(m_addr + 45);
	}
	struct TArray<struct FTTEventTrack> GetEventTracks() {
		return memory.read<struct TArray<struct FTTEventTrack>>(m_addr + 48);
	}
	struct TArray<struct FTTFloatTrack> GetFloatTracks() {
		return memory.read<struct TArray<struct FTTFloatTrack>>(m_addr + 64);
	}
	struct TArray<struct FTTVectorTrack> GetVectorTracks() {
		return memory.read<struct TArray<struct FTTVectorTrack>>(m_addr + 80);
	}
	struct TArray<struct FTTLinearColorTrack> GetLinearColorTracks() {
		return memory.read<struct TArray<struct FTTLinearColorTrack>>(m_addr + 96);
	}
	struct TArray<struct FBPVariableMetaDataEntry> GetMetaDataArray() {
		return memory.read<struct TArray<struct FBPVariableMetaDataEntry>>(m_addr + 112);
	}
	struct FGuid GetTimelineGuid() {
		return memory.read<struct FGuid>(m_addr + 128);
	}
	enum class ETickingGroup GetTimelineTickGroup() {
		return memory.read<enum class ETickingGroup>(m_addr + 144);
	}
	struct FName GetVariableName() {
		return memory.read<struct FName>(m_addr + 148);
	}
	struct FName GetDirectionPropertyName() {
		return memory.read<struct FName>(m_addr + 156);
	}
	struct FName GetUpdateFunctionName() {
		return memory.read<struct FName>(m_addr + 164);
	}
	struct FName GetFinishedFunctionName() {
		return memory.read<struct FName>(m_addr + 172);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVectorFieldScaleOverLife
{
public:
	UParticleModuleVectorFieldScaleOverLife(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDistributionFloat GetVectorFieldScaleOverLife() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UDistributionFloat(ptr_addr);
	}
	struct FRawDistributionFloat GetVectorFieldScaleOverLifeRaw() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTickableWorldSubsystem
{
public:
	UTickableWorldSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCustomOutput
{
public:
	UMaterialExpressionCustomOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USoundBase
{
public:
	USoundBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundClass GetSoundClassObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct USoundClass(ptr_addr);
	}
	char GetbDebug() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbOverrideConcurrency() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbEnableBusSends() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbEnableBaseSubmix() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbEnableSubmixSends() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbHasDelayNode() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbHasConcatenatorNode() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbBypassVolumeScaleForPriority() {
		return memory.read<char>(m_addr + 56);
	}
	enum class EVirtualizationMode GetVirtualizationMode() {
		return memory.read<enum class EVirtualizationMode>(m_addr + 57);
	}
	struct TSet<struct USoundConcurrency> GetConcurrencySet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TSet<struct USoundConcurrency>(ptr_addr);
	}
	struct FSoundConcurrencySettings GetConcurrencyOverrides() {
		return memory.read<struct FSoundConcurrencySettings>(m_addr + 224);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 264);
	}
	float GetMaxDistance() {
		return memory.read<float>(m_addr + 268);
	}
	float GetTotalSamples() {
		return memory.read<float>(m_addr + 272);
	}
	float GetPriority() {
		return memory.read<float>(m_addr + 276);
	}
	struct USoundAttenuation GetAttenuationSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 280);
		return struct USoundAttenuation(ptr_addr);
	}
	struct USoundSubmixBase GetSoundSubmixObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct USoundSubmixBase(ptr_addr);
	}
	struct TArray<struct FSoundSubmixSendInfo> GetSoundSubmixSends() {
		return memory.read<struct TArray<struct FSoundSubmixSendInfo>>(m_addr + 296);
	}
	struct USoundEffectSourcePresetChain GetSourceEffectChain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct USoundEffectSourcePresetChain(ptr_addr);
	}
	struct TArray<struct FSoundSourceBusSendInfo> GetBusSends() {
		return memory.read<struct TArray<struct FSoundSourceBusSendInfo>>(m_addr + 320);
	}
	struct TArray<struct FSoundSourceBusSendInfo> GetPreEffectBusSends() {
		return memory.read<struct TArray<struct FSoundSourceBusSendInfo>>(m_addr + 336);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 352);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundWave
{
public:
	USoundWave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCompressionQuality() {
		return memory.read<int32_t>(m_addr + 368);
	}
	int32_t GetStreamingPriority() {
		return memory.read<int32_t>(m_addr + 372);
	}
	enum class ESoundwaveSampleRateSettings GetSampleRateQuality() {
		return memory.read<enum class ESoundwaveSampleRateSettings>(m_addr + 376);
	}
	enum class ESoundGroup GetSoundGroup() {
		return memory.read<enum class ESoundGroup>(m_addr + 378);
	}
	char GetbLooping() {
		return memory.read<char>(m_addr + 379);
	}
	char GetbStreaming() {
		return memory.read<char>(m_addr + 379);
	}
	char GetbSeekableStreaming() {
		return memory.read<char>(m_addr + 379);
	}
	enum class ESoundWaveLoadingBehavior GetLoadingBehavior() {
		return memory.read<enum class ESoundWaveLoadingBehavior>(m_addr + 380);
	}
	char GetbMature() {
		return memory.read<char>(m_addr + 381);
	}
	char GetbManualWordWrap() {
		return memory.read<char>(m_addr + 381);
	}
	char GetbSingleLine() {
		return memory.read<char>(m_addr + 382);
	}
	char GetbIsAmbisonics() {
		return memory.read<char>(m_addr + 382);
	}
	struct FSoundModulationDefaultRoutingSettings GetModulationSettings() {
		return memory.read<struct FSoundModulationDefaultRoutingSettings>(m_addr + 384);
	}
	struct TArray<float> GetFrequenciesToAnalyze() {
		return memory.read<struct TArray<float>>(m_addr + 456);
	}
	struct TArray<struct FSoundWaveSpectralTimeData> GetCookedSpectralTimeData() {
		return memory.read<struct TArray<struct FSoundWaveSpectralTimeData>>(m_addr + 472);
	}
	struct TArray<struct FSoundWaveEnvelopeTimeData> GetCookedEnvelopeTimeData() {
		return memory.read<struct TArray<struct FSoundWaveEnvelopeTimeData>>(m_addr + 488);
	}
	int32_t GetInitialChunkSize() {
		return memory.read<int32_t>(m_addr + 504);
	}
	struct FString GetSpokenText() {
		return memory.read<struct FString>(m_addr + 576);
	}
	float GetSubtitlePriority() {
		return memory.read<float>(m_addr + 592);
	}
	float GetVolume() {
		return memory.read<float>(m_addr + 596);
	}
	float GetPitch() {
		return memory.read<float>(m_addr + 600);
	}
	int32_t GetNumChannels() {
		return memory.read<int32_t>(m_addr + 604);
	}
	int32_t GetSampleRate() {
		return memory.read<int32_t>(m_addr + 608);
	}
	struct TArray<struct FSubtitleCue> GetSubtitles() {
		return memory.read<struct TArray<struct FSubtitleCue>>(m_addr + 624);
	}
	struct UCurveTable GetCurves() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UCurveTable(ptr_addr);
	}
	struct UCurveTable GetInternalCurves() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UCurveTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLifetime
{
public:
	UParticleModuleLifetime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetLifeTime() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCanvas
{
public:
	UCanvas(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetOrgX() {
		return memory.read<float>(m_addr + 40);
	}
	float GetOrgY() {
		return memory.read<float>(m_addr + 44);
	}
	float GetClipX() {
		return memory.read<float>(m_addr + 48);
	}
	float GetClipY() {
		return memory.read<float>(m_addr + 52);
	}
	struct FColor GetDrawColor() {
		return memory.read<struct FColor>(m_addr + 56);
	}
	char GetbCenterX() {
		return memory.read<char>(m_addr + 60);
	}
	char GetbCenterY() {
		return memory.read<char>(m_addr + 60);
	}
	char GetbNoSmooth() {
		return memory.read<char>(m_addr + 60);
	}
	int32_t GetSizeX() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t GetSizeY() {
		return memory.read<int32_t>(m_addr + 68);
	}
	struct FPlane GetColorModulate() {
		return memory.read<struct FPlane>(m_addr + 80);
	}
	struct UTexture2D GetDefaultTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetGradientTexture0() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UTexture2D(ptr_addr);
	}
	struct UReporterGraph GetReporterGraph() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UReporterGraph(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlueprint
{
public:
	UBlueprint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetParentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return UObject(ptr_addr);
	}
	enum class EBlueprintType GetBlueprintType() {
		return memory.read<enum class EBlueprintType>(m_addr + 88);
	}
	char GetbRecompileOnLoad() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbHasBeenRegenerated() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbIsRegeneratingOnLoad() {
		return memory.read<char>(m_addr + 89);
	}
	int32_t GetBlueprintSystemVersion() {
		return memory.read<int32_t>(m_addr + 92);
	}
	struct USimpleConstructionScript GetSimpleConstructionScript() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct USimpleConstructionScript(ptr_addr);
	}
	struct TArray<struct UActorComponent> GetComponentTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct TArray<struct UActorComponent>(ptr_addr);
	}
	struct TArray<struct UTimelineTemplate> GetTimelines() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct TArray<struct UTimelineTemplate>(ptr_addr);
	}
	struct TArray<struct FBPComponentClassOverride> GetComponentClassOverrides() {
		return memory.read<struct TArray<struct FBPComponentClassOverride>>(m_addr + 136);
	}
	struct UInheritableComponentHandler GetInheritableComponentHandler() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UInheritableComponentHandler(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistributionVectorUniform
{
public:
	UDistributionVectorUniform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetMax() {
		return memory.read<struct FVector>(m_addr + 56);
	}
	struct FVector GetMin() {
		return memory.read<struct FVector>(m_addr + 68);
	}
	char GetbLockAxes() {
		return memory.read<char>(m_addr + 80);
	}
	enum class EDistributionVectorLockFlags GetLockedAxes() {
		return memory.read<enum class EDistributionVectorLockFlags>(m_addr + 84);
	}
	enum class EDistributionVectorMirrorFlags GetMirrorFlags[3]() {
		return memory.read<enum class EDistributionVectorMirrorFlags>(m_addr + 85);
	}
	char GetbUseExtremes() {
		return memory.read<char>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UModel
{
public:
	UModel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPlatformInterfaceWebResponse
{
public:
	UPlatformInterfaceWebResponse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOriginalURL() {
		return memory.read<struct FString>(m_addr + 40);
	}
	int32_t GetResponseCode() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetTag() {
		return memory.read<int32_t>(m_addr + 60);
	}
	struct FString GetStringResponse() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct TArray<char> GetBinaryResponse() {
		return memory.read<struct TArray<char>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChannel
{
public:
	UChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNetConnection GetConnection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UNetConnection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UActorChannel
{
public:
	UActorChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct AActor(ptr_addr);
	}
	struct TArray<struct UObject> GetCreateSubObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 344);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UKismetArrayLibrary
{
public:
	UKismetArrayLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimNotify_ResetClothingSimulation
{
public:
	UAnimNotify_ResetClothingSimulation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimationAsset
{
public:
	UAnimationAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeleton GetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct USkeleton(ptr_addr);
	}
	struct TArray<struct UAnimMetaData> GetMetaData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct TArray<struct UAnimMetaData>(ptr_addr);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlendSpaceBase
{
public:
	UBlendSpaceBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbRotationBlendInMeshSpace() {
		return memory.read<bool>(m_addr + 136);
	}
	float GetAnimLength() {
		return memory.read<float>(m_addr + 140);
	}
	struct FInterpolationParameter GetInterpolationParam[3]() {
		return memory.read<struct FInterpolationParameter>(m_addr + 144);
	}
	float GetTargetWeightInterpolationSpeedPerSec() {
		return memory.read<float>(m_addr + 168);
	}
	enum class ENotifyTriggerMode GetNotifyTriggerMode() {
		return memory.read<enum class ENotifyTriggerMode>(m_addr + 172);
	}
	struct TArray<struct FPerBoneInterpolation> GetPerBoneBlend() {
		return memory.read<struct TArray<struct FPerBoneInterpolation>>(m_addr + 176);
	}
	int32_t GetSampleIndexWithMarkers() {
		return memory.read<int32_t>(m_addr + 192);
	}
	struct TArray<struct FBlendSample> GetSampleData() {
		return memory.read<struct TArray<struct FBlendSample>>(m_addr + 200);
	}
	struct TArray<struct FEditorElement> GetGridSamples() {
		return memory.read<struct TArray<struct FEditorElement>>(m_addr + 216);
	}
	struct FBlendParameter GetBlendParameters[3]() {
		return memory.read<struct FBlendParameter>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCrossProduct
{
public:
	UMaterialExpressionCrossProduct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleKillBase
{
public:
	UParticleModuleKillBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionAppendVector
{
public:
	UMaterialExpressionAppendVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlendSpace
{
public:
	UBlendSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBlendSpaceAxis GetAxisToScaleAnimation() {
		return memory.read<enum class EBlendSpaceAxis>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAimOffsetBlendSpace
{
public:
	UAimOffsetBlendSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCameraVectorWS
{
public:
	UMaterialExpressionCameraVectorWS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInGameAdManager
{
public:
	UInGameAdManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbShouldPauseWhileAdOpen() {
		return memory.read<char>(m_addr + 56);
	}
	struct TArray<struct FDelegate> GetClickedBannerDelegates() {
		return memory.read<struct TArray<struct FDelegate>>(m_addr + 64);
	}
	struct TArray<struct FDelegate> GetClosedAdDelegates() {
		return memory.read<struct TArray<struct FDelegate>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCloudStorageBase
{
public:
	UCloudStorageBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetLocalCloudFiles() {
		return memory.read<struct TArray<struct FString>>(m_addr + 56);
	}
	char GetbSuppressDelegateCalls() {
		return memory.read<char>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundClass
{
public:
	USoundClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoundClassProperties GetProperties() {
		return memory.read<struct FSoundClassProperties>(m_addr + 40);
	}
	struct TArray<struct USoundClass> GetChildClasses() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct TArray<struct USoundClass>(ptr_addr);
	}
	struct TArray<struct FPassiveSoundMixModifier> GetPassiveSoundMixModifiers() {
		return memory.read<struct TArray<struct FPassiveSoundMixModifier>>(m_addr + 176);
	}
	struct USoundClass GetParentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct USoundClass(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AReflectionCapture
{
public:
	AReflectionCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UReflectionCaptureComponent GetCaptureComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UReflectionCaptureComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlendSpace1D
{
public:
	UBlendSpace1D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbScaleAnimation() {
		return memory.read<bool>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterface_PostProcessVolume
{
public:
	UInterface_PostProcessVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleBeamBase
{
public:
	UParticleModuleBeamBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAimOffsetBlendSpace1D
{
public:
	UAimOffsetBlendSpace1D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionViewProperty
{
public:
	UMaterialExpressionViewProperty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMaterialExposedViewProperty GetProperty() {
		return memory.read<enum class EMaterialExposedViewProperty>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionAtmosphericLightColor
{
public:
	UMaterialExpressionAtmosphericLightColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULightmassPrimitiveSettingsObject
{
public:
	ULightmassPrimitiveSettingsObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLightmassPrimitiveSettings GetLightmassSettings() {
		return memory.read<struct FLightmassPrimitiveSettings>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAmbientSound
{
public:
	AAmbientSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAudioComponent GetAudioComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UAudioComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTimelineComponent
{
public:
	UTimelineComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimeline GetTheTimeline() {
		return memory.read<struct FTimeline>(m_addr + 176);
	}
	char GetbIgnoreTimeDilation() {
		return memory.read<char>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimationSettings
{
public:
	UAnimationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCompressCommandletVersion() {
		return memory.read<int32_t>(m_addr + 56);
	}
	struct TArray<struct FString> GetKeyEndEffectorsMatchNameArray() {
		return memory.read<struct TArray<struct FString>>(m_addr + 64);
	}
	bool GetForceRecompression() {
		return memory.read<bool>(m_addr + 80);
	}
	bool GetbForceBelowThreshold() {
		return memory.read<bool>(m_addr + 81);
	}
	bool GetbFirstRecompressUsingCurrentOrDefault() {
		return memory.read<bool>(m_addr + 82);
	}
	bool GetbRaiseMaxErrorToExisting() {
		return memory.read<bool>(m_addr + 83);
	}
	bool GetbEnablePerformanceLog() {
		return memory.read<bool>(m_addr + 84);
	}
	bool GetbStripAnimationDataOnDedicatedServer() {
		return memory.read<bool>(m_addr + 85);
	}
	bool GetbTickAnimationOnSkeletalMeshInit() {
		return memory.read<bool>(m_addr + 86);
	}
	struct TArray<struct FCustomAttributeSetting> GetBoneCustomAttributesNames() {
		return memory.read<struct TArray<struct FCustomAttributeSetting>>(m_addr + 88);
	}
	struct TArray<struct FString> GetBoneNamesWithCustomAttributes() {
		return memory.read<struct TArray<struct FString>>(m_addr + 104);
	}
	struct TMap<struct FName, enum class ECustomAttributeBlendType> GetAttributeBlendModes() {
		return memory.read<struct TMap<struct FName, enum class ECustomAttributeBlendType>>(m_addr + 120);
	}
	enum class ECustomAttributeBlendType GetDefaultAttributeBlendMode() {
		return memory.read<enum class ECustomAttributeBlendType>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeLooping
{
public:
	USoundNodeLooping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLoopCount() {
		return memory.read<int32_t>(m_addr + 72);
	}
	char GetbLoopIndefinitely() {
		return memory.read<char>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimBlueprint
{
public:
	UAnimBlueprint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeleton GetTargetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct USkeleton(ptr_addr);
	}
	struct TArray<struct FAnimGroupInfo> GetGroups() {
		return memory.read<struct TArray<struct FAnimGroupInfo>>(m_addr + 176);
	}
	bool GetbUseMultiThreadedAnimationUpdate() {
		return memory.read<bool>(m_addr + 192);
	}
	bool GetbWarnAboutBlueprintUsage() {
		return memory.read<bool>(m_addr + 193);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCustom
{
public:
	UMaterialExpressionCustom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getcode() {
		return memory.read<struct FString>(m_addr + 64);
	}
	enum class ECustomMaterialOutputType GetOutputType() {
		return memory.read<enum class ECustomMaterialOutputType>(m_addr + 80);
	}
	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct TArray<struct FCustomInput> GetInputs() {
		return memory.read<struct TArray<struct FCustomInput>>(m_addr + 104);
	}
	struct TArray<struct FCustomOutput> GetAdditionalOutputs() {
		return memory.read<struct TArray<struct FCustomOutput>>(m_addr + 120);
	}
	struct TArray<struct FCustomDefine> GetAdditionalDefines() {
		return memory.read<struct TArray<struct FCustomDefine>>(m_addr + 136);
	}
	struct TArray<struct FString> GetIncludeFilePaths() {
		return memory.read<struct TArray<struct FString>>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimBlueprintGeneratedClass
{
public:
	UAnimBlueprintGeneratedClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBakedAnimationStateMachine> GetBakedStateMachines() {
		return memory.read<struct TArray<struct FBakedAnimationStateMachine>>(m_addr + 816);
	}
	struct USkeleton GetTargetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct USkeleton(ptr_addr);
	}
	struct TArray<struct FAnimNotifyEvent> GetAnimNotifies() {
		return memory.read<struct TArray<struct FAnimNotifyEvent>>(m_addr + 840);
	}
	struct TMap<struct FName, struct FCachedPoseIndices> GetOrderedSavedPoseIndicesMap() {
		return memory.read<struct TMap<struct FName, struct FCachedPoseIndices>>(m_addr + 856);
	}
	struct TArray<struct FName> GetSyncGroupNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1064);
	}
	struct TArray<struct FExposedValueHandler> GetEvaluateGraphExposedInputs() {
		return memory.read<struct TArray<struct FExposedValueHandler>>(m_addr + 1080);
	}
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GetGraphAssetPlayerInformation() {
		return memory.read<struct TMap<struct FName, struct FGraphAssetPlayerInformation>>(m_addr + 1096);
	}
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GetGraphBlendOptions() {
		return memory.read<struct TMap<struct FName, struct FAnimGraphBlendOptions>>(m_addr + 1176);
	}
	struct FPropertyAccessLibrary GetPropertyAccessLibrary() {
		return memory.read<struct FPropertyAccessLibrary>(m_addr + 1256);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDialogueVoice
{
public:
	UDialogueVoice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGrammaticalGender GetGender() {
		return memory.read<enum class EGrammaticalGender>(m_addr + 40);
	}
	enum class EGrammaticalNumber GetPlurality() {
		return memory.read<enum class EGrammaticalNumber>(m_addr + 41);
	}
	struct FGuid GetLocalizationGUID() {
		return memory.read<struct FGuid>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionVertexInterpolator
{
public:
	UMaterialExpressionVertexInterpolator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULODSyncComponent
{
public:
	ULODSyncComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumLODs() {
		return memory.read<int32_t>(m_addr + 176);
	}
	int32_t GetForcedLOD() {
		return memory.read<int32_t>(m_addr + 180);
	}
	struct TArray<struct FComponentSync> GetComponentsToSync() {
		return memory.read<struct TArray<struct FComponentSync>>(m_addr + 184);
	}
	struct TMap<struct FName, struct FLODMappingData> GetCustomLODMapping() {
		return memory.read<struct TMap<struct FName, struct FLODMappingData>>(m_addr + 200);
	}
	int32_t GetCurrentLOD() {
		return memory.read<int32_t>(m_addr + 280);
	}
	int32_t GetCurrentNumLODs() {
		return memory.read<int32_t>(m_addr + 284);
	}
	struct TArray<struct UPrimitiveComponent> GetDriveComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct TArray<struct UPrimitiveComponent>(ptr_addr);
	}
	struct TArray<struct UPrimitiveComponent> GetSubComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct TArray<struct UPrimitiveComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ARuntimeVirtualTextureVolume
{
public:
	ARuntimeVirtualTextureVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URuntimeVirtualTextureComponent GetVirtualTextureComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct URuntimeVirtualTextureComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimBoneCompressionSettings
{
public:
	UAnimBoneCompressionSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAnimBoneCompressionCodec> GetCodecs() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UAnimBoneCompressionCodec>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDestructibleInterface
{
public:
	UDestructibleInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimClassData
{
public:
	UAnimClassData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBakedAnimationStateMachine> GetBakedStateMachines() {
		return memory.read<struct TArray<struct FBakedAnimationStateMachine>>(m_addr + 48);
	}
	struct USkeleton GetTargetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct USkeleton(ptr_addr);
	}
	struct TArray<struct FAnimNotifyEvent> GetAnimNotifies() {
		return memory.read<struct TArray<struct FAnimNotifyEvent>>(m_addr + 72);
	}
	struct TMap<struct FName, struct FCachedPoseIndices> GetOrderedSavedPoseIndicesMap() {
		return memory.read<struct TMap<struct FName, struct FCachedPoseIndices>>(m_addr + 88);
	}
	struct TArray<struct FAnimBlueprintFunction> GetAnimBlueprintFunctions() {
		return memory.read<struct TArray<struct FAnimBlueprintFunction>>(m_addr + 168);
	}
	struct TArray<struct FAnimBlueprintFunctionData> GetAnimBlueprintFunctionData() {
		return memory.read<struct TArray<struct FAnimBlueprintFunctionData>>(m_addr + 184);
	}
	struct TArray<struct TFieldPath<FNone>> GetAnimNodeProperties() {
		return memory.read<struct TArray<struct TFieldPath<FNone>>>(m_addr + 200);
	}
	struct TArray<struct TFieldPath<FNone>> GetLinkedAnimGraphNodeProperties() {
		return memory.read<struct TArray<struct TFieldPath<FNone>>>(m_addr + 232);
	}
	struct TArray<struct TFieldPath<FNone>> GetLinkedAnimLayerNodeProperties() {
		return memory.read<struct TArray<struct TFieldPath<FNone>>>(m_addr + 264);
	}
	struct TArray<struct TFieldPath<FNone>> GetPreUpdateNodeProperties() {
		return memory.read<struct TArray<struct TFieldPath<FNone>>>(m_addr + 296);
	}
	struct TArray<struct TFieldPath<FNone>> GetDynamicResetNodeProperties() {
		return memory.read<struct TArray<struct TFieldPath<FNone>>>(m_addr + 328);
	}
	struct TArray<struct TFieldPath<FNone>> GetStateMachineNodeProperties() {
		return memory.read<struct TArray<struct TFieldPath<FNone>>>(m_addr + 360);
	}
	struct TArray<struct TFieldPath<FNone>> GetInitializationNodeProperties() {
		return memory.read<struct TArray<struct TFieldPath<FNone>>>(m_addr + 392);
	}
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GetGraphNameAssetPlayers() {
		return memory.read<struct TMap<struct FName, struct FGraphAssetPlayerInformation>>(m_addr + 424);
	}
	struct TArray<struct FName> GetSyncGroupNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 504);
	}
	struct TArray<struct FExposedValueHandler> GetEvaluateGraphExposedInputs() {
		return memory.read<struct TArray<struct FExposedValueHandler>>(m_addr + 520);
	}
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GetGraphBlendOptions() {
		return memory.read<struct TMap<struct FName, struct FAnimGraphBlendOptions>>(m_addr + 536);
	}
	struct FPropertyAccessLibrary GetPropertyAccessLibrary() {
		return memory.read<struct FPropertyAccessLibrary>(m_addr + 616);
	}

private:
	std::uint64_t m_addr = 0;
};


class APhysicsConstraintActor
{
public:
	APhysicsConstraintActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicsConstraintComponent GetConstraintComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UPhysicsConstraintComponent(ptr_addr);
	}
	struct AActor GetConstraintActor1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct AActor(ptr_addr);
	}
	struct AActor GetConstraintActor2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct AActor(ptr_addr);
	}
	char GetbDisableCollision() {
		return memory.read<char>(m_addr + 568);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimClassInterface
{
public:
	UAnimClassInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstParticleReplay
{
public:
	UInterpTrackInstParticleReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLastUpdatePosition() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimSequenceBase
{
public:
	UAnimSequenceBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAnimNotifyEvent> GetNotifies() {
		return memory.read<struct TArray<struct FAnimNotifyEvent>>(m_addr + 128);
	}
	float GetSequenceLength() {
		return memory.read<float>(m_addr + 144);
	}
	float GetRateScale() {
		return memory.read<float>(m_addr + 148);
	}
	struct FRawCurveTracks GetRawCurveData() {
		return memory.read<struct FRawCurveTracks>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULocalPlayerSubsystem
{
public:
	ULocalPlayerSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDirectionalLightComponent
{
public:
	UDirectionalLightComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetShadowCascadeBiasDistribution() {
		return memory.read<float>(m_addr + 832);
	}
	char GetbEnableLightShaftOcclusion() {
		return memory.read<char>(m_addr + 836);
	}
	float GetOcclusionMaskDarkness() {
		return memory.read<float>(m_addr + 840);
	}
	float GetOcclusionDepthRange() {
		return memory.read<float>(m_addr + 844);
	}
	struct FVector GetLightShaftOverrideDirection() {
		return memory.read<struct FVector>(m_addr + 848);
	}
	float GetWholeSceneDynamicShadowRadius() {
		return memory.read<float>(m_addr + 860);
	}
	float GetDynamicShadowDistanceMovableLight() {
		return memory.read<float>(m_addr + 864);
	}
	float GetDynamicShadowDistanceStationaryLight() {
		return memory.read<float>(m_addr + 868);
	}
	int32_t GetDynamicShadowCascades() {
		return memory.read<int32_t>(m_addr + 872);
	}
	int32_t GetMaxCascadeStaticObjects() {
		return memory.read<int32_t>(m_addr + 876);
	}
	int32_t GetMaxCascadeDynamicObjects() {
		return memory.read<int32_t>(m_addr + 880);
	}
	float GetCascadeDistributionExponent() {
		return memory.read<float>(m_addr + 884);
	}
	float GetCascadeTransitionFraction() {
		return memory.read<float>(m_addr + 888);
	}
	float GetShadowDistanceFadeoutFraction() {
		return memory.read<float>(m_addr + 892);
	}
	char GetbUseInsetShadowsForMovableObjects() {
		return memory.read<char>(m_addr + 896);
	}
	int32_t GetFarShadowCascadeCount() {
		return memory.read<int32_t>(m_addr + 900);
	}
	float GetFarShadowDistance() {
		return memory.read<float>(m_addr + 904);
	}
	float GetDistanceFieldShadowDistance() {
		return memory.read<float>(m_addr + 908);
	}
	float GetLightSourceAngle() {
		return memory.read<float>(m_addr + 912);
	}
	float GetLightSourceSoftAngle() {
		return memory.read<float>(m_addr + 916);
	}
	float GetShadowSourceAngleFactor() {
		return memory.read<float>(m_addr + 920);
	}
	float GetTraceDistance() {
		return memory.read<float>(m_addr + 924);
	}
	char GetbUsedAsAtmosphereSunLight() {
		return memory.read<char>(m_addr + 928);
	}
	int32_t GetAtmosphereSunLightIndex() {
		return memory.read<int32_t>(m_addr + 932);
	}
	struct FLinearColor GetAtmosphereSunDiskColorScale() {
		return memory.read<struct FLinearColor>(m_addr + 936);
	}
	char GetbPerPixelAtmosphereTransmittance() {
		return memory.read<char>(m_addr + 952);
	}
	char GetbCastShadowsOnClouds() {
		return memory.read<char>(m_addr + 952);
	}
	char GetbCastShadowsOnAtmosphere() {
		return memory.read<char>(m_addr + 952);
	}
	char GetbCastCloudShadows() {
		return memory.read<char>(m_addr + 952);
	}
	float GetCloudShadowStrength() {
		return memory.read<float>(m_addr + 956);
	}
	float GetCloudShadowOnAtmosphereStrength() {
		return memory.read<float>(m_addr + 960);
	}
	float GetCloudShadowOnSurfaceStrength() {
		return memory.read<float>(m_addr + 964);
	}
	float GetCloudShadowDepthBias() {
		return memory.read<float>(m_addr + 968);
	}
	float GetCloudShadowExtent() {
		return memory.read<float>(m_addr + 972);
	}
	float GetCloudShadowMapResolutionScale() {
		return memory.read<float>(m_addr + 976);
	}
	float GetCloudShadowRaySampleCountScale() {
		return memory.read<float>(m_addr + 980);
	}
	struct FLinearColor GetCloudScatteredLuminanceScale() {
		return memory.read<struct FLinearColor>(m_addr + 984);
	}
	struct FLightmassDirectionalLightSettings GetLightmassSettings() {
		return memory.read<struct FLightmassDirectionalLightSettings>(m_addr + 1000);
	}
	char GetbCastModulatedShadows() {
		return memory.read<char>(m_addr + 1016);
	}
	struct FColor GetModulatedShadowColor() {
		return memory.read<struct FColor>(m_addr + 1020);
	}
	float GetShadowAmount() {
		return memory.read<float>(m_addr + 1024);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicsAsset
{
public:
	UPhysicsAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetBoundsBodies() {
		return memory.read<struct TArray<int32_t>>(m_addr + 48);
	}
	struct TArray<struct USkeletalBodySetup> GetSkeletalBodySetups() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct TArray<struct USkeletalBodySetup>(ptr_addr);
	}
	struct TArray<struct UPhysicsConstraintTemplate> GetConstraintSetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TArray<struct UPhysicsConstraintTemplate>(ptr_addr);
	}
	struct FSolverIterations GetSolverIterations() {
		return memory.read<struct FSolverIterations>(m_addr + 96);
	}
	enum class EPhysicsAssetSolverType GetSolverType() {
		return memory.read<enum class EPhysicsAssetSolverType>(m_addr + 124);
	}
	char GetbNotForDedicatedServer() {
		return memory.read<char>(m_addr + 125);
	}
	struct UThumbnailInfo GetThumbnailInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct UThumbnailInfo(ptr_addr);
	}
	struct TArray<struct UBodySetup> GetBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct TArray<struct UBodySetup>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTexture2D
{
public:
	UTexture2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLevelIndex() {
		return memory.read<int32_t>(m_addr + 376);
	}
	int32_t GetFirstResourceMemMip() {
		return memory.read<int32_t>(m_addr + 380);
	}
	char GetbTemporarilyDisableStreaming() {
		return memory.read<char>(m_addr + 384);
	}
	enum class TextureAddress GetAddressX() {
		return memory.read<enum class TextureAddress>(m_addr + 385);
	}
	enum class TextureAddress GetAddressY() {
		return memory.read<enum class TextureAddress>(m_addr + 386);
	}
	struct FIntPoint GetImportedSize() {
		return memory.read<struct FIntPoint>(m_addr + 388);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleSystem
{
public:
	UParticleSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetUpdateTime_FPS() {
		return memory.read<float>(m_addr + 48);
	}
	float GetUpdateTime_Delta() {
		return memory.read<float>(m_addr + 52);
	}
	float GetWarmupTime() {
		return memory.read<float>(m_addr + 56);
	}
	float GetWarmupTickRate() {
		return memory.read<float>(m_addr + 60);
	}
	struct TArray<struct UParticleEmitter> GetEmitters() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct TArray<struct UParticleEmitter>(ptr_addr);
	}
	struct UParticleSystemComponent GetPreviewComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UInterpCurveEdSetup GetCurveEdSetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UInterpCurveEdSetup(ptr_addr);
	}
	float GetLODDistanceCheckTime() {
		return memory.read<float>(m_addr + 96);
	}
	float GetMacroUVRadius() {
		return memory.read<float>(m_addr + 100);
	}
	struct TArray<float> GetLODDistances() {
		return memory.read<struct TArray<float>>(m_addr + 104);
	}
	struct TArray<struct FParticleSystemLOD> GetLODSettings() {
		return memory.read<struct TArray<struct FParticleSystemLOD>>(m_addr + 120);
	}
	struct FBox GetFixedRelativeBoundingBox() {
		return memory.read<struct FBox>(m_addr + 136);
	}
	float GetSecondsBeforeInactive() {
		return memory.read<float>(m_addr + 164);
	}
	float GetDelay() {
		return memory.read<float>(m_addr + 168);
	}
	float GetDelayLow() {
		return memory.read<float>(m_addr + 172);
	}
	char GetbOrientZAxisTowardCamera() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbUseFixedRelativeBoundingBox() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbShouldResetPeakCounts() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbHasPhysics() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbUseRealtimeThumbnail() {
		return memory.read<char>(m_addr + 176);
	}
	char GetThumbnailImageOutOfDate() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbUseDelayRange() {
		return memory.read<char>(m_addr + 177);
	}
	char GetbAllowManagedTicking() {
		return memory.read<char>(m_addr + 177);
	}
	char GetbInfluencedLocalPawnActive() {
		return memory.read<char>(m_addr + 177);
	}
	char GetbInfluencedLocalPawnDetail() {
		return memory.read<char>(m_addr + 177);
	}
	char GetbAutoDeactivate() {
		return memory.read<char>(m_addr + 177);
	}
	char GetbRegenerateLODDuplicate() {
		return memory.read<char>(m_addr + 177);
	}
	enum class EParticleSystemUpdateMode GetSystemUpdateMode() {
		return memory.read<enum class EParticleSystemUpdateMode>(m_addr + 178);
	}
	enum class ParticleSystemLODMethod GetLODMethod() {
		return memory.read<enum class ParticleSystemLODMethod>(m_addr + 179);
	}
	enum class EParticleSystemInsignificanceReaction GetInsignificantReaction() {
		return memory.read<enum class EParticleSystemInsignificanceReaction>(m_addr + 180);
	}
	enum class EParticleSystemOcclusionBoundsMethod GetOcclusionBoundsMethod() {
		return memory.read<enum class EParticleSystemOcclusionBoundsMethod>(m_addr + 181);
	}
	enum class EParticleSignificanceLevel GetMaxSignificanceLevel() {
		return memory.read<enum class EParticleSignificanceLevel>(m_addr + 183);
	}
	uint32_t GetMinTimeBetweenTicks() {
		return memory.read<uint32_t>(m_addr + 184);
	}
	float GetInsignificanceDelay() {
		return memory.read<float>(m_addr + 188);
	}
	struct FVector GetMacroUVPosition() {
		return memory.read<struct FVector>(m_addr + 192);
	}
	struct FBox GetCustomOcclusionBounds() {
		return memory.read<struct FBox>(m_addr + 204);
	}
	struct TArray<struct FLODSoloTrack> GetSoloTracking() {
		return memory.read<struct TArray<struct FLODSoloTrack>>(m_addr + 232);
	}
	struct TArray<struct FNamedEmitterMaterial> GetNamedMaterialSlots() {
		return memory.read<struct TArray<struct FNamedEmitterMaterial>>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimCompositeBase
{
public:
	UAnimCompositeBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionRayTracingQualitySwitch
{
public:
	UMaterialExpressionRayTracingQualitySwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetNormal() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetRayTraced() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class AGameNetworkManager
{
public:
	AGameNetworkManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBadPacketLossThreshold() {
		return memory.read<float>(m_addr + 544);
	}
	float GetSeverePacketLossThreshold() {
		return memory.read<float>(m_addr + 548);
	}
	int32_t GetBadPingThreshold() {
		return memory.read<int32_t>(m_addr + 552);
	}
	int32_t GetSeverePingThreshold() {
		return memory.read<int32_t>(m_addr + 556);
	}
	int32_t GetAdjustedNetSpeed() {
		return memory.read<int32_t>(m_addr + 560);
	}
	float GetLastNetSpeedUpdateTime() {
		return memory.read<float>(m_addr + 564);
	}
	int32_t GetTotalNetBandwidth() {
		return memory.read<int32_t>(m_addr + 568);
	}
	int32_t GetMinDynamicBandwidth() {
		return memory.read<int32_t>(m_addr + 572);
	}
	int32_t GetMaxDynamicBandwidth() {
		return memory.read<int32_t>(m_addr + 576);
	}
	char GetbIsStandbyCheckingEnabled() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbHasStandbyCheatTriggered() {
		return memory.read<char>(m_addr + 580);
	}
	float GetStandbyRxCheatTime() {
		return memory.read<float>(m_addr + 584);
	}
	float GetStandbyTxCheatTime() {
		return memory.read<float>(m_addr + 588);
	}
	float GetPercentMissingForRxStandby() {
		return memory.read<float>(m_addr + 592);
	}
	float GetPercentMissingForTxStandby() {
		return memory.read<float>(m_addr + 596);
	}
	float GetPercentForBadPing() {
		return memory.read<float>(m_addr + 600);
	}
	float GetJoinInProgressStandbyWaitTime() {
		return memory.read<float>(m_addr + 604);
	}
	float GetMoveRepSize() {
		return memory.read<float>(m_addr + 608);
	}
	float GetMAXPOSITIONERRORSQUARED() {
		return memory.read<float>(m_addr + 612);
	}
	float GetMAXNEARZEROVELOCITYSQUARED() {
		return memory.read<float>(m_addr + 616);
	}
	float GetCLIENTADJUSTUPDATECOST() {
		return memory.read<float>(m_addr + 620);
	}
	float GetMAXCLIENTUPDATEINTERVAL() {
		return memory.read<float>(m_addr + 624);
	}
	float GetMaxClientForcedUpdateDuration() {
		return memory.read<float>(m_addr + 628);
	}
	float GetServerForcedUpdateHitchThreshold() {
		return memory.read<float>(m_addr + 632);
	}
	float GetServerForcedUpdateHitchCooldown() {
		return memory.read<float>(m_addr + 636);
	}
	float GetMaxMoveDeltaTime() {
		return memory.read<float>(m_addr + 640);
	}
	float GetMaxClientSmoothingDeltaTime() {
		return memory.read<float>(m_addr + 644);
	}
	float GetClientNetSendMoveDeltaTime() {
		return memory.read<float>(m_addr + 648);
	}
	float GetClientNetSendMoveDeltaTimeThrottled() {
		return memory.read<float>(m_addr + 652);
	}
	float GetClientNetSendMoveDeltaTimeStationary() {
		return memory.read<float>(m_addr + 656);
	}
	int32_t GetClientNetSendMoveThrottleAtNetSpeed() {
		return memory.read<int32_t>(m_addr + 660);
	}
	int32_t GetClientNetSendMoveThrottleOverPlayerCount() {
		return memory.read<int32_t>(m_addr + 664);
	}
	bool GetClientAuthorativePosition() {
		return memory.read<bool>(m_addr + 668);
	}
	float GetClientErrorUpdateRateLimit() {
		return memory.read<float>(m_addr + 672);
	}
	float GetClientNetCamUpdateDeltaTime() {
		return memory.read<float>(m_addr + 676);
	}
	float GetClientNetCamUpdatePositionLimit() {
		return memory.read<float>(m_addr + 680);
	}
	bool GetbMovementTimeDiscrepancyDetection() {
		return memory.read<bool>(m_addr + 684);
	}
	bool GetbMovementTimeDiscrepancyResolution() {
		return memory.read<bool>(m_addr + 685);
	}
	float GetMovementTimeDiscrepancyMaxTimeMargin() {
		return memory.read<float>(m_addr + 688);
	}
	float GetMovementTimeDiscrepancyMinTimeMargin() {
		return memory.read<float>(m_addr + 692);
	}
	float GetMovementTimeDiscrepancyResolutionRate() {
		return memory.read<float>(m_addr + 696);
	}
	float GetMovementTimeDiscrepancyDriftAllowance() {
		return memory.read<float>(m_addr + 700);
	}
	bool GetbMovementTimeDiscrepancyForceCorrectionsDuringResolution() {
		return memory.read<bool>(m_addr + 704);
	}
	bool GetbUseDistanceBasedRelevancy() {
		return memory.read<bool>(m_addr + 705);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimComposite
{
public:
	UAnimComposite(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAnimTrack GetAnimationTrack() {
		return memory.read<struct FAnimTrack>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDrawFrustumComponent
{
public:
	UDrawFrustumComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FColor GetFrustumColor() {
		return memory.read<struct FColor>(m_addr + 1136);
	}
	float GetFrustumAngle() {
		return memory.read<float>(m_addr + 1140);
	}
	float GetFrustumAspectRatio() {
		return memory.read<float>(m_addr + 1144);
	}
	float GetFrustumStartDist() {
		return memory.read<float>(m_addr + 1148);
	}
	float GetFrustumEndDist() {
		return memory.read<float>(m_addr + 1152);
	}
	struct UTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimCompress
{
public:
	UAnimCompress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbNeedsSkeleton() {
		return memory.read<char>(m_addr + 56);
	}
	enum class AnimationCompressionFormat GetTranslationCompressionFormat() {
		return memory.read<enum class AnimationCompressionFormat>(m_addr + 60);
	}
	enum class AnimationCompressionFormat GetRotationCompressionFormat() {
		return memory.read<enum class AnimationCompressionFormat>(m_addr + 61);
	}
	enum class AnimationCompressionFormat GetScaleCompressionFormat() {
		return memory.read<enum class AnimationCompressionFormat>(m_addr + 62);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimCompress_BitwiseCompressOnly
{
public:
	UAnimCompress_BitwiseCompressOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimCompress_PerTrackCompression
{
public:
	UAnimCompress_PerTrackCompression(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaxZeroingThreshold() {
		return memory.read<float>(m_addr + 96);
	}
	float GetMaxPosDiffBitwise() {
		return memory.read<float>(m_addr + 100);
	}
	float GetMaxAngleDiffBitwise() {
		return memory.read<float>(m_addr + 104);
	}
	float GetMaxScaleDiffBitwise() {
		return memory.read<float>(m_addr + 108);
	}
	struct TArray<enum class AnimationCompressionFormat> GetAllowedRotationFormats() {
		return memory.read<struct TArray<enum class AnimationCompressionFormat>>(m_addr + 112);
	}
	struct TArray<enum class AnimationCompressionFormat> GetAllowedTranslationFormats() {
		return memory.read<struct TArray<enum class AnimationCompressionFormat>>(m_addr + 128);
	}
	struct TArray<enum class AnimationCompressionFormat> GetAllowedScaleFormats() {
		return memory.read<struct TArray<enum class AnimationCompressionFormat>>(m_addr + 144);
	}
	char GetbResampleAnimation() {
		return memory.read<char>(m_addr + 160);
	}
	float GetResampledFramerate() {
		return memory.read<float>(m_addr + 164);
	}
	int32_t GetMinKeysForResampling() {
		return memory.read<int32_t>(m_addr + 168);
	}
	char GetbUseAdaptiveError() {
		return memory.read<char>(m_addr + 172);
	}
	char GetbUseOverrideForEndEffectors() {
		return memory.read<char>(m_addr + 172);
	}
	int32_t GetTrackHeightBias() {
		return memory.read<int32_t>(m_addr + 176);
	}
	float GetParentingDivisor() {
		return memory.read<float>(m_addr + 180);
	}
	float GetParentingDivisorExponent() {
		return memory.read<float>(m_addr + 184);
	}
	char GetbUseAdaptiveError2() {
		return memory.read<char>(m_addr + 188);
	}
	float GetRotationErrorSourceRatio() {
		return memory.read<float>(m_addr + 192);
	}
	float GetTranslationErrorSourceRatio() {
		return memory.read<float>(m_addr + 196);
	}
	float GetScaleErrorSourceRatio() {
		return memory.read<float>(m_addr + 200);
	}
	float GetMaxErrorPerTrackRatio() {
		return memory.read<float>(m_addr + 204);
	}
	float GetPerturbationProbeSize() {
		return memory.read<float>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class ADebugCameraHUD
{
public:
	ADebugCameraHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimCompress_RemoveTrivialKeys
{
public:
	UAnimCompress_RemoveTrivialKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaxPosDiff() {
		return memory.read<float>(m_addr + 64);
	}
	float GetMaxAngleDiff() {
		return memory.read<float>(m_addr + 68);
	}
	float GetMaxScaleDiff() {
		return memory.read<float>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavAreaBase
{
public:
	UNavAreaBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDistributionFloatParticleParameter
{
public:
	UDistributionFloatParticleParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimCurveCompressionCodec_CompressedRichCurve
{
public:
	UAnimCurveCompressionCodec_CompressedRichCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UHLODEngineSubsystem
{
public:
	UHLODEngineSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimCurveCompressionCodec_UniformIndexable
{
public:
	UAnimCurveCompressionCodec_UniformIndexable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleTypeDataRibbon
{
public:
	UParticleModuleTypeDataRibbon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxTessellationBetweenParticles() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetSheetsPerTrail() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetMaxTrailCount() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetMaxParticleInTrailCount() {
		return memory.read<int32_t>(m_addr + 60);
	}
	char GetbDeadTrailsOnDeactivate() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbDeadTrailsOnSourceLoss() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbClipSourceSegement() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbEnablePreviousTangentRecalculation() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbTangentRecalculationEveryFrame() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbSpawnInitialParticle() {
		return memory.read<char>(m_addr + 64);
	}
	enum class ETrailsRenderAxisOption GetRenderAxis() {
		return memory.read<enum class ETrailsRenderAxisOption>(m_addr + 68);
	}
	float GetTangentSpawningScalar() {
		return memory.read<float>(m_addr + 72);
	}
	char GetbRenderGeometry() {
		return memory.read<char>(m_addr + 76);
	}
	char GetbRenderSpawnPoints() {
		return memory.read<char>(m_addr + 76);
	}
	char GetbRenderTangents() {
		return memory.read<char>(m_addr + 76);
	}
	char GetbRenderTessellation() {
		return memory.read<char>(m_addr + 76);
	}
	float GetTilingDistance() {
		return memory.read<float>(m_addr + 80);
	}
	float GetDistanceTessellationStepSize() {
		return memory.read<float>(m_addr + 84);
	}
	char GetbEnableTangentDiffInterpScale() {
		return memory.read<char>(m_addr + 88);
	}
	char GetbUseLocalRender() {
		return memory.read<char>(m_addr + 88);
	}
	float GetTangentTessellationScalar() {
		return memory.read<float>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVelocityCone
{
public:
	UParticleModuleVelocityCone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetAngle() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 56);
	}
	struct FRawDistributionFloat GetVelocity() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 104);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDebugDrawService
{
public:
	UDebugDrawService(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USkeleton
{
public:
	USkeleton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBoneNode> GetBoneTree() {
		return memory.read<struct TArray<struct FBoneNode>>(m_addr + 56);
	}
	struct TArray<struct FTransform> GetRefLocalPoses() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 72);
	}
	struct FGuid GetVirtualBoneGuid() {
		return memory.read<struct FGuid>(m_addr + 368);
	}
	struct TArray<struct FVirtualBone> GetVirtualBones() {
		return memory.read<struct TArray<struct FVirtualBone>>(m_addr + 384);
	}
	struct TArray<struct USkeletalMeshSocket> GetSockets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 400);
		return struct TArray<struct USkeletalMeshSocket>(ptr_addr);
	}
	struct FSmartNameContainer GetSmartNames() {
		return memory.read<struct FSmartNameContainer>(m_addr + 496);
	}
	struct TArray<struct UBlendProfile> GetBlendProfiles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct TArray<struct UBlendProfile>(ptr_addr);
	}
	struct TArray<struct FAnimSlotGroup> GetSlotGroups() {
		return memory.read<struct TArray<struct FAnimSlotGroup>>(m_addr + 640);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimCurveCompressionCodec_UniformlySampled
{
public:
	UAnimCurveCompressionCodec_UniformlySampled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimCurveCompressionSettings
{
public:
	UAnimCurveCompressionSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimCurveCompressionCodec GetCodec() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UAnimCurveCompressionCodec(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHapticFeedbackEffect_Base
{
public:
	UHapticFeedbackEffect_Base(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNullNavSysConfig
{
public:
	UNullNavSysConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimLayerInterface
{
public:
	UAnimLayerInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCurveAtlasRowParameter
{
public:
	UMaterialExpressionCurveAtlasRowParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCurveLinearColor GetCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UCurveLinearColor(ptr_addr);
	}
	struct UCurveLinearColorAtlas GetAtlas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UCurveLinearColorAtlas(ptr_addr);
	}
	struct FExpressionInput GetInputTime() {
		return memory.read<struct FExpressionInput>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimNotify_PlayParticleEffect
{
public:
	UAnimNotify_PlayParticleEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystem GetPSTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UParticleSystem(ptr_addr);
	}
	int32_t GetMirrorDetailLevel() {
		return memory.read<int32_t>(m_addr + 64);
	}
	struct FVector GetLocationOffset() {
		return memory.read<struct FVector>(m_addr + 68);
	}
	struct FRotator GetRotationOffset() {
		return memory.read<struct FRotator>(m_addr + 80);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 92);
	}
	char GetAttached() {
		return memory.read<char>(m_addr + 128);
	}
	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class UShapeComponent
{
public:
	UShapeComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBodySetup GetShapeBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UBodySetup(ptr_addr);
	}
	UNavAreaBase GetAreaClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return UNavAreaBase(ptr_addr);
	}
	struct FColor GetShapeColor() {
		return memory.read<struct FColor>(m_addr + 1152);
	}
	char GetbDrawOnlyIfSelected() {
		return memory.read<char>(m_addr + 1156);
	}
	char GetbShouldCollideWhenPlacing() {
		return memory.read<char>(m_addr + 1156);
	}
	char GetbDynamicObstacle() {
		return memory.read<char>(m_addr + 1156);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimNotify_PlaySound
{
public:
	UAnimNotify_PlaySound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundBase GetSound() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct USoundBase(ptr_addr);
	}
	float GetVolumeMultiplier() {
		return memory.read<float>(m_addr + 64);
	}
	float GetPitchMultiplier() {
		return memory.read<float>(m_addr + 68);
	}
	char GetbFollow() {
		return memory.read<char>(m_addr + 72);
	}
	struct FName GetAttachName() {
		return memory.read<struct FName>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationPrimitiveTriangle
{
public:
	UParticleModuleLocationPrimitiveTriangle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetStartOffset() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	struct FRawDistributionFloat GetHeight() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 120);
	}
	struct FRawDistributionFloat GetAngle() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 168);
	}
	struct FRawDistributionFloat GetThickness() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlueprintPathsLibrary
{
public:
	UBlueprintPathsLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimNotify_ResetDynamics
{
public:
	UAnimNotify_ResetDynamics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBillboardComponent
{
public:
	UBillboardComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetSprite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UTexture2D(ptr_addr);
	}
	char GetbIsScreenSizeScaled() {
		return memory.read<char>(m_addr + 1144);
	}
	float GetScreenSize() {
		return memory.read<float>(m_addr + 1148);
	}
	float GetU() {
		return memory.read<float>(m_addr + 1152);
	}
	float GetUL() {
		return memory.read<float>(m_addr + 1156);
	}
	float GetV() {
		return memory.read<float>(m_addr + 1160);
	}
	float GetVL() {
		return memory.read<float>(m_addr + 1164);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackLinearColorBase
{
public:
	UInterpTrackLinearColorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInterpCurveLinearColor GetLinearColorTrack() {
		return memory.read<struct FInterpCurveLinearColor>(m_addr + 112);
	}
	float GetCurveTension() {
		return memory.read<float>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundfieldSubmix
{
public:
	USoundfieldSubmix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSoundfieldEncodingFormat() {
		return memory.read<struct FName>(m_addr + 64);
	}
	struct USoundfieldEncodingSettingsBase GetEncodingSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct USoundfieldEncodingSettingsBase(ptr_addr);
	}
	struct TArray<struct USoundfieldEffectBase> GetSoundfieldEffectChain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TArray<struct USoundfieldEffectBase>(ptr_addr);
	}
	USoundfieldEncodingSettingsBase GetEncodingSettingsClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return USoundfieldEncodingSettingsBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULineBatchComponent
{
public:
	ULineBatchComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAnimNotifyState_Trail
{
public:
	UAnimNotifyState_Trail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystem GetPSTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UParticleSystem(ptr_addr);
	}
	int32_t GetMirrorDetailLevel() {
		return memory.read<int32_t>(m_addr + 56);
	}
	struct FName GetFirstSocketName() {
		return memory.read<struct FName>(m_addr + 60);
	}
	struct FName GetSecondSocketName() {
		return memory.read<struct FName>(m_addr + 68);
	}
	enum class ETrailWidthMode GetWidthScaleMode() {
		return memory.read<enum class ETrailWidthMode>(m_addr + 76);
	}
	struct FName GetWidthScaleCurve() {
		return memory.read<struct FName>(m_addr + 80);
	}
	char GetbRecycleSpawnedSystems() {
		return memory.read<char>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialFunctionInterface
{
public:
	UMaterialFunctionInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetStateId() {
		return memory.read<struct FGuid>(m_addr + 40);
	}
	enum class EMaterialFunctionUsage GetMaterialFunctionUsage() {
		return memory.read<enum class EMaterialFunctionUsage>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundConcurrency
{
public:
	USoundConcurrency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoundConcurrencySettings GetConcurrency() {
		return memory.read<struct FSoundConcurrencySettings>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterial
{
public:
	UMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicalMaterial GetPhysMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UPhysicalMaterial(ptr_addr);
	}
	struct UPhysicalMaterialMask GetPhysMaterialMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UPhysicalMaterialMask(ptr_addr);
	}
	struct UPhysicalMaterial GetPhysicalMaterialMap[8]() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UPhysicalMaterial(ptr_addr);
	}
	struct FScalarMaterialInput GetMetallic() {
		return memory.read<struct FScalarMaterialInput>(m_addr + 232);
	}
	struct FScalarMaterialInput GetSpecular() {
		return memory.read<struct FScalarMaterialInput>(m_addr + 252);
	}
	struct FScalarMaterialInput GetAnisotropy() {
		return memory.read<struct FScalarMaterialInput>(m_addr + 272);
	}
	struct FVectorMaterialInput GetNormal() {
		return memory.read<struct FVectorMaterialInput>(m_addr + 292);
	}
	struct FVectorMaterialInput GetTangent() {
		return memory.read<struct FVectorMaterialInput>(m_addr + 312);
	}
	struct FColorMaterialInput GetEmissiveColor() {
		return memory.read<struct FColorMaterialInput>(m_addr + 332);
	}
	enum class EMaterialDomain GetMaterialDomain() {
		return memory.read<enum class EMaterialDomain>(m_addr + 352);
	}
	enum class EBlendMode GetBlendMode() {
		return memory.read<enum class EBlendMode>(m_addr + 353);
	}
	enum class EDecalBlendMode GetDecalBlendMode() {
		return memory.read<enum class EDecalBlendMode>(m_addr + 354);
	}
	enum class EMaterialDecalResponse GetMaterialDecalResponse() {
		return memory.read<enum class EMaterialDecalResponse>(m_addr + 355);
	}
	enum class EMaterialShadingModel GetShadingModel() {
		return memory.read<enum class EMaterialShadingModel>(m_addr + 356);
	}
	char GetbCastDynamicShadowAsMasked() {
		return memory.read<char>(m_addr + 357);
	}
	struct FMaterialShadingModelField GetShadingModels() {
		return memory.read<struct FMaterialShadingModelField>(m_addr + 358);
	}
	float GetOpacityMaskClipValue() {
		return memory.read<float>(m_addr + 360);
	}
	struct FVectorMaterialInput GetWorldPositionOffset() {
		return memory.read<struct FVectorMaterialInput>(m_addr + 364);
	}
	struct FScalarMaterialInput GetRefraction() {
		return memory.read<struct FScalarMaterialInput>(m_addr + 384);
	}
	struct FMaterialAttributesInput GetMaterialAttributes() {
		return memory.read<struct FMaterialAttributesInput>(m_addr + 404);
	}
	struct FScalarMaterialInput GetPixelDepthOffset() {
		return memory.read<struct FScalarMaterialInput>(m_addr + 428);
	}
	struct FShadingModelMaterialInput GetShadingModelFromMaterialExpression() {
		return memory.read<struct FShadingModelMaterialInput>(m_addr + 448);
	}
	char GetbEnableSeparateTranslucency() {
		return memory.read<char>(m_addr + 468);
	}
	char GetbEnableResponsiveAA() {
		return memory.read<char>(m_addr + 468);
	}
	char GetbScreenSpaceReflections() {
		return memory.read<char>(m_addr + 468);
	}
	char GetbContactShadows() {
		return memory.read<char>(m_addr + 468);
	}
	char GetTwoSided() {
		return memory.read<char>(m_addr + 468);
	}
	enum class ECastShadowCullMode GetCastShadowCullMode() {
		return memory.read<enum class ECastShadowCullMode>(m_addr + 469);
	}
	char GetDitheredLODTransition() {
		return memory.read<char>(m_addr + 470);
	}
	char GetDitherOpacityMask() {
		return memory.read<char>(m_addr + 470);
	}
	char GetbAllowNegativeEmissiveColor() {
		return memory.read<char>(m_addr + 470);
	}
	enum class ETranslucencyLightingMode GetTranslucencyLightingMode() {
		return memory.read<enum class ETranslucencyLightingMode>(m_addr + 471);
	}
	char GetbEnableMobileSeparateTranslucency() {
		return memory.read<char>(m_addr + 472);
	}
	int32_t GetNumCustomizedUVs() {
		return memory.read<int32_t>(m_addr + 476);
	}
	float GetTranslucencyDirectionalLightingIntensity() {
		return memory.read<float>(m_addr + 480);
	}
	float GetTranslucentShadowDensityScale() {
		return memory.read<float>(m_addr + 484);
	}
	float GetTranslucentSelfShadowDensityScale() {
		return memory.read<float>(m_addr + 488);
	}
	float GetTranslucentSelfShadowSecondDensityScale() {
		return memory.read<float>(m_addr + 492);
	}
	float GetTranslucentSelfShadowSecondOpacity() {
		return memory.read<float>(m_addr + 496);
	}
	float GetTranslucentBackscatteringExponent() {
		return memory.read<float>(m_addr + 500);
	}
	struct FLinearColor GetTranslucentMultipleScatteringExtinction() {
		return memory.read<struct FLinearColor>(m_addr + 504);
	}
	float GetTranslucentShadowStartOffset() {
		return memory.read<float>(m_addr + 520);
	}
	char GetbDisableDepthTest() {
		return memory.read<char>(m_addr + 524);
	}
	char GetbWriteOnlyAlpha() {
		return memory.read<char>(m_addr + 524);
	}
	char GetbGenerateSphericalParticleNormals() {
		return memory.read<char>(m_addr + 524);
	}
	char GetbTangentSpaceNormal() {
		return memory.read<char>(m_addr + 524);
	}
	char GetbUseEmissiveForDynamicAreaLighting() {
		return memory.read<char>(m_addr + 524);
	}
	char GetbBlockGI() {
		return memory.read<char>(m_addr + 524);
	}
	char GetbUsedAsSpecialEngineMaterial() {
		return memory.read<char>(m_addr + 524);
	}
	char GetbUsedWithSkeletalMesh() {
		return memory.read<char>(m_addr + 524);
	}
	char GetbUsedWithEditorCompositing() {
		return memory.read<char>(m_addr + 525);
	}
	char GetbUsedWithParticleSprites() {
		return memory.read<char>(m_addr + 525);
	}
	char GetbUsedWithBeamTrails() {
		return memory.read<char>(m_addr + 525);
	}
	char GetbUsedWithMeshParticles() {
		return memory.read<char>(m_addr + 525);
	}
	char GetbUsedWithNiagaraSprites() {
		return memory.read<char>(m_addr + 525);
	}
	char GetbUsedWithNiagaraRibbons() {
		return memory.read<char>(m_addr + 525);
	}
	char GetbUsedWithNiagaraMeshParticles() {
		return memory.read<char>(m_addr + 525);
	}
	char GetbUsedWithGeometryCache() {
		return memory.read<char>(m_addr + 525);
	}
	char GetbUsedWithStaticLighting() {
		return memory.read<char>(m_addr + 526);
	}
	char GetbUsedWithMorphTargets() {
		return memory.read<char>(m_addr + 526);
	}
	char GetbUsedWithSplineMeshes() {
		return memory.read<char>(m_addr + 526);
	}
	char GetbUsedWithInstancedStaticMeshes() {
		return memory.read<char>(m_addr + 526);
	}
	char GetbUsedWithGeometryCollections() {
		return memory.read<char>(m_addr + 526);
	}
	char GetbUsesDistortion() {
		return memory.read<char>(m_addr + 526);
	}
	char GetbUsedWithClothing() {
		return memory.read<char>(m_addr + 526);
	}
	char GetbUsedWithWater() {
		return memory.read<char>(m_addr + 528);
	}
	char GetbUsedWithHairStrands() {
		return memory.read<char>(m_addr + 528);
	}
	char GetbUsedWithLidarPointCloud() {
		return memory.read<char>(m_addr + 528);
	}
	char GetbUsedWithVirtualHeightfieldMesh() {
		return memory.read<char>(m_addr + 528);
	}
	char GetbUsedWithUI() {
		return memory.read<char>(m_addr + 532);
	}
	char GetbAutomaticallySetUsageInEditor() {
		return memory.read<char>(m_addr + 532);
	}
	char GetbFullyRough() {
		return memory.read<char>(m_addr + 532);
	}
	char GetbFullyRoughOnMobile() {
		return memory.read<char>(m_addr + 532);
	}
	char GetbMicroShadowing() {
		return memory.read<char>(m_addr + 536);
	}
	char GetbSimpleAO() {
		return memory.read<char>(m_addr + 536);
	}
	char GetbMinRoughnessToSpecularScale() {
		return memory.read<char>(m_addr + 536);
	}
	char GetbForwardScreenSpaceReflection() {
		return memory.read<char>(m_addr + 536);
	}
	char GetbTranslucentForwardSSR() {
		return memory.read<char>(m_addr + 536);
	}
	char GetbDrawDecalWithLightingOnMobile() {
		return memory.read<char>(m_addr + 536);
	}
	char GetbForceSingleScatteringBRDF() {
		return memory.read<char>(m_addr + 536);
	}
	char GetbUseFullPrecision() {
		return memory.read<char>(m_addr + 540);
	}
	char GetbUseLightmapDirectionality() {
		return memory.read<char>(m_addr + 540);
	}
	char GetbUseAlphaToCoverage() {
		return memory.read<char>(m_addr + 540);
	}
	char GetbForwardRenderUsePreintegratedGFForSimpleIBL() {
		return memory.read<char>(m_addr + 544);
	}
	char GetbUseHQForwardReflections() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbForceLQForwardReflectionsOnMobile() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbUseTranslucentDepth() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbForwardBlendsSkyLightCubemaps() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbUsePlanarForwardReflections() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbForceNoPlanarReflectionsOnMobile() {
		return memory.read<char>(m_addr + 548);
	}
	char GetbNormalCurvatureToRoughness() {
		return memory.read<char>(m_addr + 548);
	}
	enum class EMaterialTessellationMode GetD3D11TessellationMode() {
		return memory.read<enum class EMaterialTessellationMode>(m_addr + 549);
	}
	char GetbEnableCrackFreeDisplacement() {
		return memory.read<char>(m_addr + 550);
	}
	char GetbEnableAdaptiveTessellation() {
		return memory.read<char>(m_addr + 550);
	}
	char GetAllowTranslucentCustomDepthWrites() {
		return memory.read<char>(m_addr + 550);
	}
	char GetWireframe() {
		return memory.read<char>(m_addr + 550);
	}
	char GetWriteDepthToTranslucentMaterial() {
		return memory.read<char>(m_addr + 550);
	}
	enum class EMaterialShadingRate GetShadingRate() {
		return memory.read<enum class EMaterialShadingRate>(m_addr + 551);
	}
	char GetbCanMaskedBeAssumedOpaque() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbIsMasked() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbIsPreviewMaterial() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbIsFunctionPreviewMaterial() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbUseMaterialAttributes() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbCastRayTracedShadows() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbUseTranslucencyVertexFog() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbApplyCloudFogging() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbIsSky() {
		return memory.read<char>(m_addr + 553);
	}
	char GetbComputeFogPerPixel() {
		return memory.read<char>(m_addr + 553);
	}
	char GetbOutputTranslucentVelocity() {
		return memory.read<char>(m_addr + 553);
	}
	char GetbAllowDevelopmentShaderCompile() {
		return memory.read<char>(m_addr + 553);
	}
	char GetbIsMaterialEditorStatsMaterial() {
		return memory.read<char>(m_addr + 553);
	}
	enum class EBlendableLocation GetBlendableLocation() {
		return memory.read<enum class EBlendableLocation>(m_addr + 554);
	}
	char GetBlendableOutputAlpha() {
		return memory.read<char>(m_addr + 555);
	}
	char GetbEnableStencilTest() {
		return memory.read<char>(m_addr + 555);
	}
	enum class EMaterialStencilCompare GetStencilCompare() {
		return memory.read<enum class EMaterialStencilCompare>(m_addr + 556);
	}
	char GetStencilRefValue() {
		return memory.read<char>(m_addr + 557);
	}
	enum class ERefractionMode GetRefractionMode() {
		return memory.read<enum class ERefractionMode>(m_addr + 558);
	}
	int32_t GetBlendablePriority() {
		return memory.read<int32_t>(m_addr + 560);
	}
	char GetbIsBlendable() {
		return memory.read<char>(m_addr + 564);
	}
	uint32_t GetUsageFlagWarnings() {
		return memory.read<uint32_t>(m_addr + 568);
	}
	float GetRefractionDepthBias() {
		return memory.read<float>(m_addr + 572);
	}
	struct FGuid GetStateId() {
		return memory.read<struct FGuid>(m_addr + 576);
	}
	float GetMaxDisplacement() {
		return memory.read<float>(m_addr + 592);
	}
	struct FMaterialCachedExpressionData GetCachedExpressionData() {
		return memory.read<struct FMaterialCachedExpressionData>(m_addr + 648);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimSequence
{
public:
	UAnimSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumFrames() {
		return memory.read<int32_t>(m_addr + 168);
	}
	struct TArray<struct FTrackToSkeletonMap> GetTrackToSkeletonMapTable() {
		return memory.read<struct TArray<struct FTrackToSkeletonMap>>(m_addr + 176);
	}
	struct UAnimBoneCompressionSettings GetBoneCompressionSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UAnimBoneCompressionSettings(ptr_addr);
	}
	struct UAnimCurveCompressionSettings GetCurveCompressionSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct UAnimCurveCompressionSettings(ptr_addr);
	}
	enum class EAdditiveAnimationType GetAdditiveAnimType() {
		return memory.read<enum class EAdditiveAnimationType>(m_addr + 336);
	}
	enum class EAdditiveBasePoseType GetRefPoseType() {
		return memory.read<enum class EAdditiveBasePoseType>(m_addr + 337);
	}
	struct UAnimSequence GetRefPoseSeq() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 344);
		return struct UAnimSequence(ptr_addr);
	}
	int32_t GetRefFrameIndex() {
		return memory.read<int32_t>(m_addr + 352);
	}
	struct FName GetRetargetSource() {
		return memory.read<struct FName>(m_addr + 356);
	}
	struct TArray<struct FTransform> GetRetargetSourceAssetReferencePose() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 368);
	}
	enum class EAnimInterpolationType GetInterpolation() {
		return memory.read<enum class EAnimInterpolationType>(m_addr + 384);
	}
	bool GetbEnableRootMotion() {
		return memory.read<bool>(m_addr + 385);
	}
	enum class ERootMotionRootLock GetRootMotionRootLock() {
		return memory.read<enum class ERootMotionRootLock>(m_addr + 386);
	}
	bool GetbForceRootLock() {
		return memory.read<bool>(m_addr + 387);
	}
	bool GetbUseNormalizedRootMotionScale() {
		return memory.read<bool>(m_addr + 388);
	}
	bool GetbRootMotionSettingsCopiedFromMontage() {
		return memory.read<bool>(m_addr + 389);
	}
	struct TArray<struct FAnimSyncMarker> GetAuthoredSyncMarkers() {
		return memory.read<struct TArray<struct FAnimSyncMarker>>(m_addr + 392);
	}
	struct TArray<struct FBakedCustomAttributePerBoneData> GetBakedPerBoneCustomAttributeData() {
		return memory.read<struct TArray<struct FBakedCustomAttributePerBoneData>>(m_addr + 432);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSSSColorOutput
{
public:
	UMaterialExpressionSSSColorOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimSet
{
public:
	UAnimSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbAnimRotationOnly() {
		return memory.read<char>(m_addr + 40);
	}
	struct TArray<struct FName> GetTrackBoneNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 48);
	}
	struct TArray<struct FAnimSetMeshLinkup> GetLinkupCache() {
		return memory.read<struct TArray<struct FAnimSetMeshLinkup>>(m_addr + 64);
	}
	struct TArray<char> GetBoneUseAnimTranslation() {
		return memory.read<struct TArray<char>>(m_addr + 80);
	}
	struct TArray<char> GetForceUseMeshTranslation() {
		return memory.read<struct TArray<char>>(m_addr + 96);
	}
	struct TArray<struct FName> GetUseTranslationBoneNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 112);
	}
	struct TArray<struct FName> GetForceMeshTranslationBoneNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 128);
	}
	struct FName GetPreviewSkelMeshName() {
		return memory.read<struct FName>(m_addr + 144);
	}
	struct FName GetBestRatioSkelMeshName() {
		return memory.read<struct FName>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStreamingSettings
{
public:
	UStreamingSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetAsyncLoadingThreadEnabled() {
		return memory.read<char>(m_addr + 56);
	}
	char GetWarnIfTimeLimitExceeded() {
		return memory.read<char>(m_addr + 56);
	}
	float GetTimeLimitExceededMultiplier() {
		return memory.read<float>(m_addr + 60);
	}
	float GetTimeLimitExceededMinTime() {
		return memory.read<float>(m_addr + 64);
	}
	int32_t GetMinBulkDataSizeForAsyncLoading() {
		return memory.read<int32_t>(m_addr + 68);
	}
	char GetUseBackgroundLevelStreaming() {
		return memory.read<char>(m_addr + 72);
	}
	char GetAsyncLoadingUseFullTimeLimit() {
		return memory.read<char>(m_addr + 72);
	}
	float GetAsyncLoadingTimeLimit() {
		return memory.read<float>(m_addr + 76);
	}
	float GetPriorityAsyncLoadingExtraTime() {
		return memory.read<float>(m_addr + 80);
	}
	float GetLevelStreamingActorsUpdateTimeLimit() {
		return memory.read<float>(m_addr + 84);
	}
	float GetPriorityLevelStreamingActorsUpdateExtraTime() {
		return memory.read<float>(m_addr + 88);
	}
	int32_t GetLevelStreamingComponentsRegistrationGranularity() {
		return memory.read<int32_t>(m_addr + 92);
	}
	float GetLevelStreamingUnregisterComponentsTimeLimit() {
		return memory.read<float>(m_addr + 96);
	}
	int32_t GetLevelStreamingComponentsUnregistrationGranularity() {
		return memory.read<int32_t>(m_addr + 100);
	}
	char GetFlushStreamingOnExit() {
		return memory.read<char>(m_addr + 104);
	}
	char GetEventDrivenLoaderEnabled() {
		return memory.read<char>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimSingleNodeInstance
{
public:
	UAnimSingleNodeInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimationAsset GetCurrentAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UAnimationAsset(ptr_addr);
	}
	struct FDelegate GetPostEvaluateAnimEvent() {
		return memory.read<struct FDelegate>(m_addr + 704);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALevelStreamingVolume
{
public:
	ALevelStreamingVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetStreamingLevelNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 600);
	}
	char GetbEditorPreVisOnly() {
		return memory.read<char>(m_addr + 616);
	}
	char GetbDisabled() {
		return memory.read<char>(m_addr + 616);
	}
	enum class EStreamingVolumeUsage GetStreamingUsage() {
		return memory.read<enum class EStreamingVolumeUsage>(m_addr + 620);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterface_CollisionDataProvider
{
public:
	UInterface_CollisionDataProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPhysicsSpringComponent
{
public:
	UPhysicsSpringComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSpringStiffness() {
		return memory.read<float>(m_addr + 520);
	}
	float GetSpringDamping() {
		return memory.read<float>(m_addr + 524);
	}
	float GetSpringLengthAtRest() {
		return memory.read<float>(m_addr + 528);
	}
	float GetSpringRadius() {
		return memory.read<float>(m_addr + 532);
	}
	enum class ECollisionChannel GetSpringChannel() {
		return memory.read<enum class ECollisionChannel>(m_addr + 536);
	}
	bool GetbIgnoreSelf() {
		return memory.read<bool>(m_addr + 537);
	}
	float GetSpringCompression() {
		return memory.read<float>(m_addr + 540);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimStreamable
{
public:
	UAnimStreamable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumFrames() {
		return memory.read<int32_t>(m_addr + 168);
	}
	enum class EAnimInterpolationType GetInterpolation() {
		return memory.read<enum class EAnimInterpolationType>(m_addr + 172);
	}
	struct FName GetRetargetSource() {
		return memory.read<struct FName>(m_addr + 176);
	}
	struct UAnimBoneCompressionSettings GetBoneCompressionSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UAnimBoneCompressionSettings(ptr_addr);
	}
	struct UAnimCurveCompressionSettings GetCurveCompressionSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UAnimCurveCompressionSettings(ptr_addr);
	}
	bool GetbEnableRootMotion() {
		return memory.read<bool>(m_addr + 216);
	}
	enum class ERootMotionRootLock GetRootMotionRootLock() {
		return memory.read<enum class ERootMotionRootLock>(m_addr + 217);
	}
	bool GetbForceRootLock() {
		return memory.read<bool>(m_addr + 218);
	}
	bool GetbUseNormalizedRootMotionScale() {
		return memory.read<bool>(m_addr + 219);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHLODProxyDesc
{
public:
	UHLODProxyDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAsyncActionHandleSaveGame
{
public:
	UAsyncActionHandleSaveGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate Getcompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct USaveGame GetSaveGameObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct USaveGame(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UApplicationLifecycleComponent
{
public:
	UApplicationLifecycleComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetApplicationWillDeactivateDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 176);
	}
	struct FMulticastInlineDelegate GetApplicationHasReactivatedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 192);
	}
	struct FMulticastInlineDelegate GetApplicationWillEnterBackgroundDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 208);
	}
	struct FMulticastInlineDelegate GetApplicationHasEnteredForegroundDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 224);
	}
	struct FMulticastInlineDelegate GetApplicationWillTerminateDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 240);
	}
	struct FMulticastInlineDelegate GetApplicationShouldUnloadResourcesDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 256);
	}
	struct FMulticastInlineDelegate GetApplicationReceivedStartupArgumentsDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 272);
	}
	struct FMulticastInlineDelegate GetOnTemperatureChangeDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 288);
	}
	struct FMulticastInlineDelegate GetOnLowPowerModeDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 304);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleRotation_Seeded
{
public:
	UParticleModuleRotation_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEngineBaseTypes
{
public:
	UEngineBaseTypes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UArrowComponent
{
public:
	UArrowComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FColor GetArrowColor() {
		return memory.read<struct FColor>(m_addr + 1136);
	}
	float GetArrowSize() {
		return memory.read<float>(m_addr + 1140);
	}
	float GetArrowLength() {
		return memory.read<float>(m_addr + 1144);
	}
	float GetScreenSize() {
		return memory.read<float>(m_addr + 1148);
	}
	char GetbIsScreenSizeScaled() {
		return memory.read<char>(m_addr + 1152);
	}
	char GetbTreatAsASprite() {
		return memory.read<char>(m_addr + 1152);
	}

private:
	std::uint64_t m_addr = 0;
};


class ADocumentationActor
{
public:
	ADocumentationActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AVectorFieldVolume
{
public:
	AVectorFieldVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVectorFieldComponent GetVectorFieldComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UVectorFieldComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAssetExportTask
{
public:
	UAssetExportTask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UObject(ptr_addr);
	}
	struct UExporter GetExporter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UExporter(ptr_addr);
	}
	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 56);
	}
	bool GetbSelected() {
		return memory.read<bool>(m_addr + 72);
	}
	bool GetbReplaceIdentical() {
		return memory.read<bool>(m_addr + 73);
	}
	bool GetbPrompt() {
		return memory.read<bool>(m_addr + 74);
	}
	bool GetbAutomated() {
		return memory.read<bool>(m_addr + 75);
	}
	bool GetbUseFileArchive() {
		return memory.read<bool>(m_addr + 76);
	}
	bool GetbWriteEmptyFiles() {
		return memory.read<bool>(m_addr + 77);
	}
	struct TArray<struct UObject> GetIgnoreObjectList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TArray<struct UObject>(ptr_addr);
	}
	struct UObject GetOptions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct FString> Geterrors() {
		return memory.read<struct TArray<struct FString>>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAssetManagerSettings
{
public:
	UAssetManagerSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPrimaryAssetTypeInfo> GetPrimaryAssetTypesToScan() {
		return memory.read<struct TArray<struct FPrimaryAssetTypeInfo>>(m_addr + 56);
	}
	struct TArray<struct FDirectoryPath> GetDirectoriesToExclude() {
		return memory.read<struct TArray<struct FDirectoryPath>>(m_addr + 72);
	}
	struct TArray<struct FPrimaryAssetRulesOverride> GetPrimaryAssetRules() {
		return memory.read<struct TArray<struct FPrimaryAssetRulesOverride>>(m_addr + 88);
	}
	struct TArray<struct FPrimaryAssetRulesCustomOverride> GetCustomPrimaryAssetRules() {
		return memory.read<struct TArray<struct FPrimaryAssetRulesCustomOverride>>(m_addr + 104);
	}
	bool GetbOnlyCookProductionAssets() {
		return memory.read<bool>(m_addr + 120);
	}
	bool GetbShouldManagerDetermineTypeAndName() {
		return memory.read<bool>(m_addr + 121);
	}
	bool GetbShouldGuessTypeAndNameInEditor() {
		return memory.read<bool>(m_addr + 122);
	}
	bool GetbShouldAcquireMissingChunksOnLoad() {
		return memory.read<bool>(m_addr + 123);
	}
	struct TArray<struct FAssetManagerRedirect> GetPrimaryAssetIdRedirects() {
		return memory.read<struct TArray<struct FAssetManagerRedirect>>(m_addr + 128);
	}
	struct TArray<struct FAssetManagerRedirect> GetPrimaryAssetTypeRedirects() {
		return memory.read<struct TArray<struct FAssetManagerRedirect>>(m_addr + 144);
	}
	struct TArray<struct FAssetManagerRedirect> GetAssetPathRedirects() {
		return memory.read<struct TArray<struct FAssetManagerRedirect>>(m_addr + 160);
	}
	struct TSet<struct FName> GetMetaDataTagsForAssetRegistry() {
		return memory.read<struct TSet<struct FName>>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPixelDepth
{
public:
	UMaterialExpressionPixelDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackFade
{
public:
	UInterpTrackFade(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbPersistFade() {
		return memory.read<char>(m_addr + 144);
	}
	char GetbFadeAudio() {
		return memory.read<char>(m_addr + 144);
	}
	struct FLinearColor GetFadeColor() {
		return memory.read<struct FLinearColor>(m_addr + 148);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAsyncActionLoadPrimaryAssetBase
{
public:
	UAsyncActionLoadPrimaryAssetBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAsyncActionLoadPrimaryAsset
{
public:
	UAsyncActionLoadPrimaryAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate Getcompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackBoolProp
{
public:
	UInterpTrackBoolProp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBoolTrackKey> GetBoolTrack() {
		return memory.read<struct TArray<struct FBoolTrackKey>>(m_addr + 112);
	}
	struct FName GetPropertyName() {
		return memory.read<struct FName>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAsyncActionLoadPrimaryAssetClass
{
public:
	UAsyncActionLoadPrimaryAssetClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate Getcompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCheckBoxStyleAsset
{
public:
	UCheckBoxStyleAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCheckBoxStyle GetCheckBoxStyle() {
		return memory.read<struct FCheckBoxStyle>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class URuntimeVirtualTexture
{
public:
	URuntimeVirtualTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTileCount() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetTileSize() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetTileBorderSize() {
		return memory.read<int32_t>(m_addr + 48);
	}
	enum class ERuntimeVirtualTextureMaterialType GetMaterialType() {
		return memory.read<enum class ERuntimeVirtualTextureMaterialType>(m_addr + 52);
	}
	bool GetbCompressTextures() {
		return memory.read<bool>(m_addr + 53);
	}
	bool GetbClearTextures() {
		return memory.read<bool>(m_addr + 54);
	}
	bool GetbSinglePhysicalSpace() {
		return memory.read<bool>(m_addr + 55);
	}
	bool GetbPrivateSpace() {
		return memory.read<bool>(m_addr + 56);
	}
	bool GetbAdaptive() {
		return memory.read<bool>(m_addr + 57);
	}
	bool GetbContinuousUpdate() {
		return memory.read<bool>(m_addr + 58);
	}
	int32_t GetRemoveLowMips() {
		return memory.read<int32_t>(m_addr + 60);
	}
	enum class TextureGroup GetLODGroup() {
		return memory.read<enum class TextureGroup>(m_addr + 64);
	}
	int32_t GetSize() {
		return memory.read<int32_t>(m_addr + 68);
	}
	struct URuntimeVirtualTextureStreamingProxy GetStreamingTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct URuntimeVirtualTextureStreamingProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USceneCaptureComponentCube
{
public:
	USceneCaptureComponentCube(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextureRenderTargetCube GetTextureTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UTextureRenderTargetCube(ptr_addr);
	}
	bool GetbCaptureRotation() {
		return memory.read<bool>(m_addr + 720);
	}
	struct UTextureRenderTargetCube GetTextureTargetLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UTextureRenderTargetCube(ptr_addr);
	}
	struct UTextureRenderTargetCube GetTextureTargetRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UTextureRenderTargetCube(ptr_addr);
	}
	struct UTextureRenderTarget2D GetTextureTargetODS() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	float GetIPD() {
		return memory.read<float>(m_addr + 752);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAsyncActionLoadPrimaryAssetList
{
public:
	UAsyncActionLoadPrimaryAssetList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate Getcompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureSampleParameterSubUV
{
public:
	UMaterialExpressionTextureSampleParameterSubUV(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbBlend() {
		return memory.read<char>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAsyncActionLoadPrimaryAssetClassList
{
public:
	UAsyncActionLoadPrimaryAssetClassList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate Getcompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSizeBase
{
public:
	UParticleModuleSizeBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionAbs
{
public:
	UMaterialExpressionAbs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleLODLevel
{
public:
	UParticleLODLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLevel() {
		return memory.read<int32_t>(m_addr + 40);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 44);
	}
	struct UParticleModuleRequired GetRequiredModule() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UParticleModuleRequired(ptr_addr);
	}
	struct TArray<struct UParticleModule> GetModules() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UParticleModule>(ptr_addr);
	}
	struct UParticleModuleTypeDataBase GetTypeDataModule() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UParticleModuleTypeDataBase(ptr_addr);
	}
	struct UParticleModuleSpawn GetSpawnModule() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UParticleModuleSpawn(ptr_addr);
	}
	struct UParticleModuleEventGenerator GetEventGenerator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UParticleModuleEventGenerator(ptr_addr);
	}
	struct TArray<struct UParticleModuleSpawnBase> GetSpawningModules() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct TArray<struct UParticleModuleSpawnBase>(ptr_addr);
	}
	struct TArray<struct UParticleModule> GetSpawnModules() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct TArray<struct UParticleModule>(ptr_addr);
	}
	struct TArray<struct UParticleModule> GetUpdateModules() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct TArray<struct UParticleModule>(ptr_addr);
	}
	struct TArray<struct UParticleModuleOrbit> GetOrbitModules() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UParticleModuleOrbit>(ptr_addr);
	}
	struct TArray<struct UParticleModuleEventReceiverBase> GetEventReceiverModules() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct TArray<struct UParticleModuleEventReceiverBase>(ptr_addr);
	}
	char GetConvertedModules() {
		return memory.read<char>(m_addr + 176);
	}
	int32_t GetPeakActiveParticles() {
		return memory.read<int32_t>(m_addr + 180);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAsyncActionChangePrimaryAssetBundles
{
public:
	UAsyncActionChangePrimaryAssetBundles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate Getcompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAtmosphericFogCacheComponent
{
public:
	UAtmosphericFogCacheComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ATextRenderActor
{
public:
	ATextRenderActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextRenderComponent GetTextRender() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UTextRenderComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAtmosphericFogComponent
{
public:
	UAtmosphericFogComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSunMultiplier() {
		return memory.read<float>(m_addr + 520);
	}
	float GetFogMultiplier() {
		return memory.read<float>(m_addr + 524);
	}
	float GetDensityMultiplier() {
		return memory.read<float>(m_addr + 528);
	}
	float GetDensityOffset() {
		return memory.read<float>(m_addr + 532);
	}
	float GetDistanceScale() {
		return memory.read<float>(m_addr + 536);
	}
	float GetAltitudeScale() {
		return memory.read<float>(m_addr + 540);
	}
	float GetDistanceOffset() {
		return memory.read<float>(m_addr + 544);
	}
	float GetGroundOffset() {
		return memory.read<float>(m_addr + 548);
	}
	float GetStartDistance() {
		return memory.read<float>(m_addr + 552);
	}
	float GetCacheDegree() {
		return memory.read<float>(m_addr + 556);
	}
	float GetSunDiscScale() {
		return memory.read<float>(m_addr + 560);
	}
	float GetDefaultBrightness() {
		return memory.read<float>(m_addr + 564);
	}
	struct FColor GetDefaultLightColor() {
		return memory.read<struct FColor>(m_addr + 568);
	}
	char GetbDisableSunDisk() {
		return memory.read<char>(m_addr + 572);
	}
	char GetbAtmosphereAffectsSunIlluminance() {
		return memory.read<char>(m_addr + 572);
	}
	char GetbDisableGroundScattering() {
		return memory.read<char>(m_addr + 572);
	}
	struct FVector GetCacheRate() {
		return memory.read<struct FVector>(m_addr + 576);
	}
	struct FAtmospherePrecomputeParameters GetPrecomputeParams() {
		return memory.read<struct FAtmospherePrecomputeParameters>(m_addr + 588);
	}
	struct UTexture2D GetTransmittanceTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetIrradianceTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTexture2D(ptr_addr);
	}
	struct UTextureRenderTarget2D GetDebugTextureTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UTextureRenderTarget2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAudioBus
{
public:
	UAudioBus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAudioBusChannels GetAudioBusChannels() {
		return memory.read<enum class EAudioBusChannels>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterface_AssetUserData
{
public:
	UInterface_AssetUserData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBookmarkBase
{
public:
	UBookmarkBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAudioSettings
{
public:
	UAudioSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftObjectPath GetDefaultSoundClassName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 56);
	}
	struct FSoftObjectPath GetDefaultMediaSoundClassName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 80);
	}
	struct FSoftObjectPath GetDefaultSoundConcurrencyName() {
		return memory.read<struct FSoftObjectPath>(m_addr + 104);
	}
	struct FSoftObjectPath GetDefaultBaseSoundMix() {
		return memory.read<struct FSoftObjectPath>(m_addr + 128);
	}
	struct FSoftObjectPath GetVoiPSoundClass() {
		return memory.read<struct FSoftObjectPath>(m_addr + 152);
	}
	struct FSoftObjectPath GetMasterSubmix() {
		return memory.read<struct FSoftObjectPath>(m_addr + 176);
	}
	struct FSoftObjectPath GetBaseDefaultSubmix() {
		return memory.read<struct FSoftObjectPath>(m_addr + 200);
	}
	struct FSoftObjectPath GetReverbSubmix() {
		return memory.read<struct FSoftObjectPath>(m_addr + 224);
	}
	struct FSoftObjectPath GetEQSubmix() {
		return memory.read<struct FSoftObjectPath>(m_addr + 248);
	}
	enum class EVoiceSampleRate GetVoiPSampleRate() {
		return memory.read<enum class EVoiceSampleRate>(m_addr + 272);
	}
	float GetDefaultReverbSendLevel() {
		return memory.read<float>(m_addr + 276);
	}
	int32_t GetMaximumConcurrentStreams() {
		return memory.read<int32_t>(m_addr + 280);
	}
	float GetGlobalMinPitchScale() {
		return memory.read<float>(m_addr + 284);
	}
	float GetGlobalMaxPitchScale() {
		return memory.read<float>(m_addr + 288);
	}
	struct TArray<struct FAudioQualitySettings> GetQualityLevels() {
		return memory.read<struct TArray<struct FAudioQualitySettings>>(m_addr + 296);
	}
	char GetbAllowPlayWhenSilent() {
		return memory.read<char>(m_addr + 312);
	}
	char GetbDisableMasterEQ() {
		return memory.read<char>(m_addr + 312);
	}
	char GetbAllowCenterChannel3DPanning() {
		return memory.read<char>(m_addr + 312);
	}
	uint32_t GetNumStoppingSources() {
		return memory.read<uint32_t>(m_addr + 316);
	}
	enum class EPanningMethod GetPanningMethod() {
		return memory.read<enum class EPanningMethod>(m_addr + 320);
	}
	enum class EMonoChannelUpmixMethod GetMonoChannelUpmixMethod() {
		return memory.read<enum class EMonoChannelUpmixMethod>(m_addr + 321);
	}
	struct FString GetDialogueFilenameFormat() {
		return memory.read<struct FString>(m_addr + 328);
	}
	struct TArray<struct FSoundDebugEntry> GetDebugSounds() {
		return memory.read<struct TArray<struct FSoundDebugEntry>>(m_addr + 344);
	}
	struct TArray<struct FDefaultAudioBusSettings> GetDefaultAudioBuses() {
		return memory.read<struct TArray<struct FDefaultAudioBusSettings>>(m_addr + 360);
	}
	struct USoundClass GetDefaultSoundClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 376);
		return struct USoundClass(ptr_addr);
	}
	struct USoundClass GetDefaultMediaSoundClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 384);
		return struct USoundClass(ptr_addr);
	}
	struct USoundConcurrency GetDefaultSoundConcurrency() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 392);
		return struct USoundConcurrency(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlueprintMapLibrary
{
public:
	UBlueprintMapLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInputVectorAxisDelegateBinding
{
public:
	UInputVectorAxisDelegateBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVectorFieldStatic
{
public:
	UVectorFieldStatic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSizeX() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetSizeY() {
		return memory.read<int32_t>(m_addr + 76);
	}
	int32_t GetSizeZ() {
		return memory.read<int32_t>(m_addr + 80);
	}
	bool GetbAllowCPUAccess() {
		return memory.read<bool>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDepthOfFieldFunction
{
public:
	UMaterialExpressionDepthOfFieldFunction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDepthOfFieldFunctionValue GetFunctionValue() {
		return memory.read<enum class EDepthOfFieldFunctionValue>(m_addr + 64);
	}
	struct FExpressionInput GetDepth() {
		return memory.read<struct FExpressionInput>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAudioVolume
{
public:
	AAudioVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPriority() {
		return memory.read<float>(m_addr + 600);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 604);
	}
	struct FReverbSettings GetSettings() {
		return memory.read<struct FReverbSettings>(m_addr + 608);
	}
	struct FInteriorSettings GetAmbientZoneSettings() {
		return memory.read<struct FInteriorSettings>(m_addr + 640);
	}
	struct TArray<struct FAudioVolumeSubmixSendSettings> GetSubmixSendSettings() {
		return memory.read<struct TArray<struct FAudioVolumeSubmixSendSettings>>(m_addr + 680);
	}
	struct TArray<struct FAudioVolumeSubmixOverrideSettings> GetSubmixOverrideSettings() {
		return memory.read<struct TArray<struct FAudioVolumeSubmixOverrideSettings>>(m_addr + 696);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLightmapUVs
{
public:
	UMaterialExpressionLightmapUVs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDialogueSoundWaveProxy
{
public:
	UDialogueSoundWaveProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AServerStatReplicator
{
public:
	AServerStatReplicator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUpdateStatNet() {
		return memory.read<bool>(m_addr + 544);
	}
	bool GetbOverwriteClientStats() {
		return memory.read<bool>(m_addr + 545);
	}
	uint32_t GetChannels() {
		return memory.read<uint32_t>(m_addr + 548);
	}
	uint32_t GetInRate() {
		return memory.read<uint32_t>(m_addr + 552);
	}
	uint32_t GetOutRate() {
		return memory.read<uint32_t>(m_addr + 556);
	}
	uint32_t GetMaxPacketOverhead() {
		return memory.read<uint32_t>(m_addr + 564);
	}
	uint32_t GetInRateClientMax() {
		return memory.read<uint32_t>(m_addr + 568);
	}
	uint32_t GetInRateClientMin() {
		return memory.read<uint32_t>(m_addr + 572);
	}
	uint32_t GetInRateClientAvg() {
		return memory.read<uint32_t>(m_addr + 576);
	}
	uint32_t GetInPacketsClientMax() {
		return memory.read<uint32_t>(m_addr + 580);
	}
	uint32_t GetInPacketsClientMin() {
		return memory.read<uint32_t>(m_addr + 584);
	}
	uint32_t GetInPacketsClientAvg() {
		return memory.read<uint32_t>(m_addr + 588);
	}
	uint32_t GetOutRateClientMax() {
		return memory.read<uint32_t>(m_addr + 592);
	}
	uint32_t GetOutRateClientMin() {
		return memory.read<uint32_t>(m_addr + 596);
	}
	uint32_t GetOutRateClientAvg() {
		return memory.read<uint32_t>(m_addr + 600);
	}
	uint32_t GetOutPacketsClientMax() {
		return memory.read<uint32_t>(m_addr + 604);
	}
	uint32_t GetOutPacketsClientMin() {
		return memory.read<uint32_t>(m_addr + 608);
	}
	uint32_t GetOutPacketsClientAvg() {
		return memory.read<uint32_t>(m_addr + 612);
	}
	uint32_t GetNetNumClients() {
		return memory.read<uint32_t>(m_addr + 616);
	}
	uint32_t GetInPackets() {
		return memory.read<uint32_t>(m_addr + 620);
	}
	uint32_t GetOutPackets() {
		return memory.read<uint32_t>(m_addr + 624);
	}
	uint32_t GetInBunches() {
		return memory.read<uint32_t>(m_addr + 628);
	}
	uint32_t GetOutBunches() {
		return memory.read<uint32_t>(m_addr + 632);
	}
	uint32_t GetOutLoss() {
		return memory.read<uint32_t>(m_addr + 636);
	}
	uint32_t GetInLoss() {
		return memory.read<uint32_t>(m_addr + 640);
	}
	uint32_t GetVoiceBytesSent() {
		return memory.read<uint32_t>(m_addr + 644);
	}
	uint32_t GetVoiceBytesRecv() {
		return memory.read<uint32_t>(m_addr + 648);
	}
	uint32_t GetVoicePacketsSent() {
		return memory.read<uint32_t>(m_addr + 652);
	}
	uint32_t GetVoicePacketsRecv() {
		return memory.read<uint32_t>(m_addr + 656);
	}
	uint32_t GetPercentInVoice() {
		return memory.read<uint32_t>(m_addr + 660);
	}
	uint32_t GetPercentOutVoice() {
		return memory.read<uint32_t>(m_addr + 664);
	}
	uint32_t GetNumActorChannels() {
		return memory.read<uint32_t>(m_addr + 668);
	}
	uint32_t GetNumConsideredActors() {
		return memory.read<uint32_t>(m_addr + 672);
	}
	uint32_t GetPrioritizedActors() {
		return memory.read<uint32_t>(m_addr + 676);
	}
	uint32_t GetNumRelevantActors() {
		return memory.read<uint32_t>(m_addr + 680);
	}
	uint32_t GetNumRelevantDeletedActors() {
		return memory.read<uint32_t>(m_addr + 684);
	}
	uint32_t GetNumReplicatedActorAttempts() {
		return memory.read<uint32_t>(m_addr + 688);
	}
	uint32_t GetNumReplicatedActors() {
		return memory.read<uint32_t>(m_addr + 692);
	}
	uint32_t GetNumActors() {
		return memory.read<uint32_t>(m_addr + 696);
	}
	uint32_t GetNumNetActors() {
		return memory.read<uint32_t>(m_addr + 700);
	}
	uint32_t GetNumDormantActors() {
		return memory.read<uint32_t>(m_addr + 704);
	}
	uint32_t GetNumInitiallyDormantActors() {
		return memory.read<uint32_t>(m_addr + 708);
	}
	uint32_t GetNumNetGUIDsAckd() {
		return memory.read<uint32_t>(m_addr + 712);
	}
	uint32_t GetNumNetGUIDsPending() {
		return memory.read<uint32_t>(m_addr + 716);
	}
	uint32_t GetNumNetGUIDsUnAckd() {
		return memory.read<uint32_t>(m_addr + 720);
	}
	uint32_t GetObjPathBytes() {
		return memory.read<uint32_t>(m_addr + 724);
	}
	uint32_t GetNetGUIDOutRate() {
		return memory.read<uint32_t>(m_addr + 728);
	}
	uint32_t GetNetGUIDInRate() {
		return memory.read<uint32_t>(m_addr + 732);
	}
	uint32_t GetNetSaturated() {
		return memory.read<uint32_t>(m_addr + 736);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAutoDestroySubsystem
{
public:
	UAutoDestroySubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetActorsToPoll() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionRound
{
public:
	UMaterialExpressionRound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpToMovementComponent
{
public:
	UInterpToMovementComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDuration() {
		return memory.read<float>(m_addr + 240);
	}
	char GetbPauseOnImpact() {
		return memory.read<char>(m_addr + 244);
	}
	bool GetbSweep() {
		return memory.read<bool>(m_addr + 248);
	}
	enum class ETeleportType GetTeleportType() {
		return memory.read<enum class ETeleportType>(m_addr + 249);
	}
	enum class EInterpToBehaviourType GetBehaviourType() {
		return memory.read<enum class EInterpToBehaviourType>(m_addr + 250);
	}
	bool GetbCheckIfStillInWorld() {
		return memory.read<bool>(m_addr + 251);
	}
	char GetbForceSubStepping() {
		return memory.read<char>(m_addr + 252);
	}
	struct FMulticastInlineDelegate GetOnInterpToReverse() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 256);
	}
	struct FMulticastInlineDelegate GetOnInterpToStop() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 272);
	}
	struct FMulticastInlineDelegate GetOnWaitBeginDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 288);
	}
	struct FMulticastInlineDelegate GetOnWaitEndDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 304);
	}
	struct FMulticastInlineDelegate GetOnResetDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 320);
	}
	float GetMaxSimulationTimeStep() {
		return memory.read<float>(m_addr + 336);
	}
	int32_t GetMaxSimulationIterations() {
		return memory.read<int32_t>(m_addr + 340);
	}
	struct TArray<struct FInterpControlPoint> GetControlPoints() {
		return memory.read<struct TArray<struct FInterpControlPoint>>(m_addr + 344);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAutomationTestSettings
{
public:
	UAutomationTestSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetEngineTestModules() {
		return memory.read<struct TArray<struct FString>>(m_addr + 40);
	}
	struct TArray<struct FString> GetEditorTestModules() {
		return memory.read<struct TArray<struct FString>>(m_addr + 56);
	}
	struct FSoftObjectPath GetAutomationTestmap() {
		return memory.read<struct FSoftObjectPath>(m_addr + 72);
	}
	struct TArray<struct FEditorMapPerformanceTestDefinition> GetEditorPerformanceTestMaps() {
		return memory.read<struct TArray<struct FEditorMapPerformanceTestDefinition>>(m_addr + 96);
	}
	struct TArray<struct FSoftObjectPath> GetAssetsToOpen() {
		return memory.read<struct TArray<struct FSoftObjectPath>>(m_addr + 112);
	}
	struct TArray<struct FString> GetMapsToPIETest() {
		return memory.read<struct TArray<struct FString>>(m_addr + 128);
	}
	struct FBuildPromotionTestSettings GetBuildPromotionTest() {
		return memory.read<struct FBuildPromotionTestSettings>(m_addr + 144);
	}
	struct FMaterialEditorPromotionSettings GetMaterialEditorPromotionTest() {
		return memory.read<struct FMaterialEditorPromotionSettings>(m_addr + 640);
	}
	struct FParticleEditorPromotionSettings GetParticleEditorPromotionTest() {
		return memory.read<struct FParticleEditorPromotionSettings>(m_addr + 688);
	}
	struct FBlueprintEditorPromotionSettings GetBlueprintEditorPromotionTest() {
		return memory.read<struct FBlueprintEditorPromotionSettings>(m_addr + 704);
	}
	struct TArray<struct FString> GetTestLevelFolders() {
		return memory.read<struct TArray<struct FString>>(m_addr + 752);
	}
	struct TArray<struct FExternalToolDefinition> GetExternalTools() {
		return memory.read<struct TArray<struct FExternalToolDefinition>>(m_addr + 768);
	}
	struct TArray<struct FEditorImportExportTestDefinition> GetImportExportTestDefinitions() {
		return memory.read<struct TArray<struct FEditorImportExportTestDefinition>>(m_addr + 784);
	}
	struct TArray<struct FLaunchOnTestSettings> GetLaunchOnSettings() {
		return memory.read<struct TArray<struct FLaunchOnTestSettings>>(m_addr + 800);
	}
	struct FIntPoint GetDefaultScreenshotResolution() {
		return memory.read<struct FIntPoint>(m_addr + 816);
	}
	float GetPIETestDuration() {
		return memory.read<float>(m_addr + 824);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLightVector
{
public:
	UMaterialExpressionLightVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UStaticMeshSocket
{
public:
	UStaticMeshSocket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	struct FVector GetRelativeLocation() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FRotator GetRelativeRotation() {
		return memory.read<struct FRotator>(m_addr + 60);
	}
	struct FVector GetRelativeScale() {
		return memory.read<struct FVector>(m_addr + 72);
	}
	struct FString GetTag() {
		return memory.read<struct FString>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPerInstanceRandom
{
public:
	UMaterialExpressionPerInstanceRandom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ABandwidthTestActor
{
public:
	ABandwidthTestActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBandwidthTestGenerator GetBandwidthGenerator() {
		return memory.read<struct FBandwidthTestGenerator>(m_addr + 544);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionArccosineFast
{
public:
	UMaterialExpressionArccosineFast(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class USCS_Node
{
public:
	USCS_Node(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return UObject(ptr_addr);
	}
	struct UActorComponent GetComponentTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UActorComponent(ptr_addr);
	}
	struct FBlueprintCookedComponentInstancingData GetCookedComponentInstancingData() {
		return memory.read<struct FBlueprintCookedComponentInstancingData>(m_addr + 56);
	}
	struct FName GetAttachToName() {
		return memory.read<struct FName>(m_addr + 128);
	}
	struct FName GetParentComponentOrVariableName() {
		return memory.read<struct FName>(m_addr + 136);
	}
	struct FName GetParentComponentOwnerClassName() {
		return memory.read<struct FName>(m_addr + 144);
	}
	bool GetbIsParentComponentNative() {
		return memory.read<bool>(m_addr + 152);
	}
	struct TArray<struct USCS_Node> GetChildNodes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct TArray<struct USCS_Node>(ptr_addr);
	}
	struct TArray<struct FBPVariableMetaDataEntry> GetMetaDataArray() {
		return memory.read<struct TArray<struct FBPVariableMetaDataEntry>>(m_addr + 176);
	}
	struct FGuid GetVariableGuid() {
		return memory.read<struct FGuid>(m_addr + 192);
	}
	struct FName GetInternalVariableName() {
		return memory.read<struct FName>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class ABoxReflectionCapture
{
public:
	ABoxReflectionCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlendProfile
{
public:
	UBlendProfile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeleton GetOwningSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct USkeleton(ptr_addr);
	}
	struct TArray<struct FBlendProfileBoneEntry> GetProfileEntries() {
		return memory.read<struct TArray<struct FBlendProfileBoneEntry>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class USplineMetadata
{
public:
	USplineMetadata(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ABlockingVolume
{
public:
	ABlockingVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPlatformGameInstance
{
public:
	UPlatformGameInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetApplicationWillDeactivateDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 424);
	}
	struct FMulticastInlineDelegate GetApplicationHasReactivatedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 440);
	}
	struct FMulticastInlineDelegate GetApplicationWillEnterBackgroundDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 456);
	}
	struct FMulticastInlineDelegate GetApplicationHasEnteredForegroundDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 472);
	}
	struct FMulticastInlineDelegate GetApplicationWillTerminateDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 488);
	}
	struct FMulticastInlineDelegate GetApplicationShouldUnloadResourcesDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 504);
	}
	struct FMulticastInlineDelegate GetApplicationReceivedStartupArgumentsDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 520);
	}
	struct FMulticastInlineDelegate GetApplicationRegisteredForRemoteNotificationsDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 536);
	}
	struct FMulticastInlineDelegate GetApplicationRegisteredForUserNotificationsDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 552);
	}
	struct FMulticastInlineDelegate GetApplicationFailedToRegisterForRemoteNotificationsDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 568);
	}
	struct FMulticastInlineDelegate GetApplicationReceivedRemoteNotificationDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 584);
	}
	struct FMulticastInlineDelegate GetApplicationReceivedLocalNotificationDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 600);
	}
	struct FMulticastInlineDelegate GetApplicationReceivedScreenOrientationChangedNotificationDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 616);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionVolumetricAdvancedMaterialInput
{
public:
	UMaterialExpressionVolumetricAdvancedMaterialInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpGroupCamera
{
public:
	UInterpGroupCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraAnim GetCameraAnimInst() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UCameraAnim(ptr_addr);
	}
	float GetCompressTolerance() {
		return memory.read<float>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlueprintPlatformLibrary
{
public:
	UBlueprintPlatformLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ADecalActor
{
public:
	ADecalActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDecalComponent GetDecal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UDecalComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVolumeTexture
{
public:
	UVolumeTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlueprintSetLibrary
{
public:
	UBlueprintSetLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UForceFeedbackAttenuation
{
public:
	UForceFeedbackAttenuation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FForceFeedbackAttenuationSettings GetAttenuation() {
		return memory.read<struct FForceFeedbackAttenuationSettings>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBodySetup
{
public:
	UBodySetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKAggregateGeom GetAggGeom() {
		return memory.read<struct FKAggregateGeom>(m_addr + 72);
	}
	char GetbAlwaysFullAnimWeight() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbConsiderForBounds() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbMeshCollideAll() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbDoubleSidedGeometry() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbGenerateNonMirroredCollision() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbSharedCookedData() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbGenerateMirroredCollision() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbSupportUVsAndFaceRemap() {
		return memory.read<char>(m_addr + 160);
	}
	struct UPhysicalMaterial GetPhysMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UPhysicalMaterial(ptr_addr);
	}
	struct FWalkableSlopeOverride GetWalkableSlopeOverride() {
		return memory.read<struct FWalkableSlopeOverride>(m_addr + 176);
	}
	struct FBodyInstance GetDefaultInstance() {
		return memory.read<struct FBodyInstance>(m_addr + 296);
	}
	struct FVector GetBuildScale3D() {
		return memory.read<struct FVector>(m_addr + 648);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNetworkPredictionInterface
{
public:
	UNetworkPredictionInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBoundsCopyComponent
{
public:
	UBoundsCopyComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<AActor> GetBoundsSourceActor() {
		return memory.read<struct TSoftObjectPtr<AActor>>(m_addr + 176);
	}
	bool GetbUseCollidingComponentsForSourceBounds() {
		return memory.read<bool>(m_addr + 216);
	}
	bool GetbKeepOwnBoundsScale() {
		return memory.read<bool>(m_addr + 217);
	}
	bool GetbUseCollidingComponentsForOwnBounds() {
		return memory.read<bool>(m_addr + 218);
	}
	struct FTransform GetPostTransform() {
		return memory.read<struct FTransform>(m_addr + 224);
	}
	bool GetbCopyXBounds() {
		return memory.read<bool>(m_addr + 272);
	}
	bool GetbCopyYBounds() {
		return memory.read<bool>(m_addr + 273);
	}
	bool GetbCopyZBounds() {
		return memory.read<bool>(m_addr + 274);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBoxComponent
{
public:
	UBoxComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetBoxExtent() {
		return memory.read<struct FVector>(m_addr + 1160);
	}
	float GetLineThickness() {
		return memory.read<float>(m_addr + 1172);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReflectionCaptureComponent
{
public:
	UReflectionCaptureComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBillboardComponent GetCaptureOffsetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UBillboardComponent(ptr_addr);
	}
	enum class EReflectionSourceType GetReflectionSourceType() {
		return memory.read<enum class EReflectionSourceType>(m_addr + 528);
	}
	enum class EMobileReflectionCompression GetMobileReflectionCompression() {
		return memory.read<enum class EMobileReflectionCompression>(m_addr + 529);
	}
	struct UTextureCube GetCubemap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 536);
		return struct UTextureCube(ptr_addr);
	}
	float GetSourceCubemapAngle() {
		return memory.read<float>(m_addr + 544);
	}
	float GetBrightness() {
		return memory.read<float>(m_addr + 548);
	}
	bool GetbModifyMaxValueRGBM() {
		return memory.read<bool>(m_addr + 552);
	}
	float GetMaxValueRGBM() {
		return memory.read<float>(m_addr + 556);
	}
	struct FVector GetCaptureOffset() {
		return memory.read<struct FVector>(m_addr + 560);
	}
	struct FGuid GetMapBuildDataId() {
		return memory.read<struct FGuid>(m_addr + 572);
	}
	bool GetbUseDiffuseIndirect() {
		return memory.read<bool>(m_addr + 588);
	}
	struct FVector4 GetDiffuseSH[7]() {
		return memory.read<struct FVector4>(m_addr + 592);
	}
	struct UTextureCube GetCachedEncodedHDRCubemap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UTextureCube(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistributionVectorParticleParameter
{
public:
	UDistributionVectorParticleParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstColorScale
{
public:
	UInterpTrackInstColorScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBoxReflectionCaptureComponent
{
public:
	UBoxReflectionCaptureComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBoxTransitionDistance() {
		return memory.read<float>(m_addr + 752);
	}
	struct UBoxComponent GetPreviewInfluenceBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UBoxComponent(ptr_addr);
	}
	struct UBoxComponent GetPreviewCaptureBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UBoxComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBreakpoint
{
public:
	UBreakpoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbEnabled() {
		return memory.read<char>(m_addr + 40);
	}
	struct UEdGraphNode GetNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UEdGraphNode(ptr_addr);
	}
	char GetbStepOnce() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbStepOnce_WasPreviouslyDisabled() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbStepOnce_RemoveAfterHit() {
		return memory.read<char>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPreSkinnedPosition
{
public:
	UMaterialExpressionPreSkinnedPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UKismetInternationalizationLibrary
{
public:
	UKismetInternationalizationLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPanner
{
public:
	UMaterialExpressionPanner(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetCoordinate() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetTime() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetSpeed() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	float GetSpeedX() {
		return memory.read<float>(m_addr + 124);
	}
	float GetSpeedY() {
		return memory.read<float>(m_addr + 128);
	}
	uint32_t GetConstCoordinate() {
		return memory.read<uint32_t>(m_addr + 132);
	}
	bool GetbFractionalPart() {
		return memory.read<bool>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALevelBounds
{
public:
	ALevelBounds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBoxComponent GetBoxComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UBoxComponent(ptr_addr);
	}
	bool GetbAutoUpdateBounds() {
		return memory.read<bool>(m_addr + 552);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCheatManagerExtension
{
public:
	UCheatManagerExtension(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ACameraShakeSourceActor
{
public:
	ACameraShakeSourceActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraShakeSourceComponent GetCameraShakeSourceComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UCameraShakeSourceComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPrimaryAssetLabel
{
public:
	UPrimaryAssetLabel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPrimaryAssetRules GetRules() {
		return memory.read<struct FPrimaryAssetRules>(m_addr + 48);
	}
	char GetbLabelAssetsInMyDirectory() {
		return memory.read<char>(m_addr + 60);
	}
	char GetbIsRuntimeLabel() {
		return memory.read<char>(m_addr + 60);
	}
	struct TArray<struct TSoftObjectPtr<UObject>> GetExplicitAssets() {
		return memory.read<struct TArray<struct TSoftObjectPtr<UObject>>>(m_addr + 64);
	}
	struct TArray<struct TSoftClassPtr<UObject>> GetExplicitBlueprints() {
		return memory.read<struct TArray<struct TSoftClassPtr<UObject>>>(m_addr + 80);
	}
	struct FCollectionReference GetAssetCollection() {
		return memory.read<struct FCollectionReference>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBrushBuilder
{
public:
	UBrushBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetBitmapFilename() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetToolTip() {
		return memory.read<struct FString>(m_addr + 56);
	}
	char GetNotifyBadParams() {
		return memory.read<char>(m_addr + 72);
	}
	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 80);
	}
	struct TArray<struct FBuilderPoly> GetPolys() {
		return memory.read<struct TArray<struct FBuilderPoly>>(m_addr + 96);
	}
	struct FName GetLayer() {
		return memory.read<struct FName>(m_addr + 112);
	}
	char GetMergeCoplanars() {
		return memory.read<char>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDemoNetConnection
{
public:
	UDemoNetConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ALODActor
{
public:
	ALODActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMeshComponent GetStaticMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct TMap<struct FHLODInstancingKey, struct UInstancedStaticMeshComponent> GetInstancedStaticMeshComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct TMap<struct FHLODInstancingKey, struct UInstancedStaticMeshComponent>(ptr_addr);
	}
	struct UHLODProxy GetProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UHLODProxy(ptr_addr);
	}
	struct FName GetKey() {
		return memory.read<struct FName>(m_addr + 640);
	}
	float GetLODDrawDistance() {
		return memory.read<float>(m_addr + 648);
	}
	int32_t GetLODLevel() {
		return memory.read<int32_t>(m_addr + 652);
	}
	struct TArray<struct AActor> GetSubActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct TArray<struct AActor>(ptr_addr);
	}
	char GetCachedNumHLODLevels() {
		return memory.read<char>(m_addr + 672);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInputComponent
{
public:
	UInputComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCachedKeyToActionInfo> GetCachedKeyToActionInfo() {
		return memory.read<struct TArray<struct FCachedKeyToActionInfo>>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBrushComponent
{
public:
	UBrushComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UModel GetBrush() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UModel(ptr_addr);
	}
	struct UBodySetup GetBrushBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct UBodySetup(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ABrushShape
{
public:
	ABrushShape(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionRerouteBase
{
public:
	UMaterialExpressionRerouteBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionConstant3Vector
{
public:
	UMaterialExpressionConstant3Vector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetConstant() {
		return memory.read<struct FLinearColor>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UButtonStyleAsset
{
public:
	UButtonStyleAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FButtonStyle GetButtonStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCameraAnim
{
public:
	UCameraAnim(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInterpGroup GetCameraInterpGroup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UInterpGroup(ptr_addr);
	}
	float GetAnimLength() {
		return memory.read<float>(m_addr + 48);
	}
	struct FBox GetBoundingBox() {
		return memory.read<struct FBox>(m_addr + 52);
	}
	char GetbRelativeToInitialTransform() {
		return memory.read<char>(m_addr + 80);
	}
	char GetbRelativeToInitialFOV() {
		return memory.read<char>(m_addr + 80);
	}
	float GetBaseFOV() {
		return memory.read<float>(m_addr + 84);
	}
	struct FPostProcessSettings GetBasePostProcessSettings() {
		return memory.read<struct FPostProcessSettings>(m_addr + 96);
	}
	float GetBasePostProcessBlendWeight() {
		return memory.read<float>(m_addr + 1584);
	}

private:
	std::uint64_t m_addr = 0;
};


class ACameraBlockingVolume
{
public:
	ACameraBlockingVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialFunction
{
public:
	UMaterialFunction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 64);
	}
	char GetbExposeToLibrary() {
		return memory.read<char>(m_addr + 80);
	}
	char GetbPrefixParameterNames() {
		return memory.read<char>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReporterGraph
{
public:
	UReporterGraph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCameraModifier
{
public:
	UCameraModifier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbDebug() {
		return memory.read<char>(m_addr + 40);
	}
	char GetbExclusive() {
		return memory.read<char>(m_addr + 40);
	}
	char GetPriority() {
		return memory.read<char>(m_addr + 44);
	}
	struct APlayerCameraManager GetCameraOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct APlayerCameraManager(ptr_addr);
	}
	float GetAlphaInTime() {
		return memory.read<float>(m_addr + 56);
	}
	float GetAlphaOutTime() {
		return memory.read<float>(m_addr + 60);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVectorFieldRotationRate
{
public:
	UParticleModuleVectorFieldRotationRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetRotationRate() {
		return memory.read<struct FVector>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDotProduct
{
public:
	UMaterialExpressionDotProduct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCameraModifier_CameraShake
{
public:
	UCameraModifier_CameraShake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FActiveCameraShakeInfo> GetActiveShakes() {
		return memory.read<struct TArray<struct FActiveCameraShakeInfo>>(m_addr + 72);
	}
	struct TMap<UCameraShakeBase, struct FPooledCameraShakes> GetExpiredPooledShakesMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct TMap<UCameraShakeBase, struct FPooledCameraShakes>(ptr_addr);
	}
	float GetSplitScreenShakeScale() {
		return memory.read<float>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSkyAtmosphereViewLuminance
{
public:
	UMaterialExpressionSkyAtmosphereViewLuminance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpGroupInstDirector
{
public:
	UInterpGroupInstDirector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVectorField
{
public:
	UVectorField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBox GetBounds() {
		return memory.read<struct FBox>(m_addr + 40);
	}
	float GetIntensity() {
		return memory.read<float>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCameraShakeSourceComponent
{
public:
	UCameraShakeSourceComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECameraShakeAttenuation GetAttenuation() {
		return memory.read<enum class ECameraShakeAttenuation>(m_addr + 520);
	}
	float GetInnerAttenuationRadius() {
		return memory.read<float>(m_addr + 524);
	}
	float GetOuterAttenuationRadius() {
		return memory.read<float>(m_addr + 528);
	}
	UCameraShakeBase GetCameraShake() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 536);
		return UCameraShakeBase(ptr_addr);
	}
	bool GetbAutoStart() {
		return memory.read<bool>(m_addr + 544);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextureRenderTarget
{
public:
	UTextureRenderTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTargetGamma() {
		return memory.read<float>(m_addr + 376);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextureRenderTarget2D
{
public:
	UTextureRenderTarget2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSizeX() {
		return memory.read<int32_t>(m_addr + 384);
	}
	int32_t GetSizeY() {
		return memory.read<int32_t>(m_addr + 388);
	}
	struct FLinearColor GetClearColor() {
		return memory.read<struct FLinearColor>(m_addr + 392);
	}
	enum class TextureAddress GetAddressX() {
		return memory.read<enum class TextureAddress>(m_addr + 408);
	}
	enum class TextureAddress GetAddressY() {
		return memory.read<enum class TextureAddress>(m_addr + 409);
	}
	char GetbForceLinearGamma() {
		return memory.read<char>(m_addr + 410);
	}
	char GetbHDR() {
		return memory.read<char>(m_addr + 410);
	}
	char GetbGPUSharedFlag() {
		return memory.read<char>(m_addr + 410);
	}
	enum class ETextureRenderTargetFormat GetRenderTargetFormat() {
		return memory.read<enum class ETextureRenderTargetFormat>(m_addr + 411);
	}
	char GetbAutoGenerateMips() {
		return memory.read<char>(m_addr + 412);
	}
	enum class TextureFilter GetMipsSamplerFilter() {
		return memory.read<enum class TextureFilter>(m_addr + 413);
	}
	enum class TextureAddress GetMipsAddressU() {
		return memory.read<enum class TextureAddress>(m_addr + 414);
	}
	enum class TextureAddress GetMipsAddressV() {
		return memory.read<enum class TextureAddress>(m_addr + 415);
	}
	enum class EPixelFormat GetOverrideFormat() {
		return memory.read<enum class EPixelFormat>(m_addr + 416);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCanvasRenderTarget2D
{
public:
	UCanvasRenderTarget2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnCanvasRenderTargetUpdate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 424);
	}
	struct TWeakObjectPtr<UWorld> GetWorld() {
		return memory.read<struct TWeakObjectPtr<UWorld>>(m_addr + 440);
	}
	bool GetbShouldClearRenderTargetOnReceiveUpdate() {
		return memory.read<bool>(m_addr + 448);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCapsuleComponent
{
public:
	UCapsuleComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCapsuleHalfHeight() {
		return memory.read<float>(m_addr + 1160);
	}
	float GetCapsuleRadius() {
		return memory.read<float>(m_addr + 1164);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlatformInterfaceBase
{
public:
	UPlatformInterfaceBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FDelegateArray> GetAllDelegates() {
		return memory.read<struct TArray<struct FDelegateArray>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCollisionProfile
{
public:
	UCollisionProfile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCollisionResponseTemplate> GetProfiles() {
		return memory.read<struct TArray<struct FCollisionResponseTemplate>>(m_addr + 56);
	}
	struct TArray<struct FCustomChannelSetup> GetDefaultChannelResponses() {
		return memory.read<struct TArray<struct FCustomChannelSetup>>(m_addr + 72);
	}
	struct TArray<struct FCustomProfile> GetEditProfiles() {
		return memory.read<struct TArray<struct FCustomProfile>>(m_addr + 88);
	}
	struct TArray<struct FRedirector> GetProfileRedirects() {
		return memory.read<struct TArray<struct FRedirector>>(m_addr + 104);
	}
	struct TArray<struct FRedirector> GetCollisionChannelRedirects() {
		return memory.read<struct TArray<struct FRedirector>>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstFloatMaterialParam
{
public:
	UInterpTrackInstFloatMaterialParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMaterialInstanceDynamic> GetMaterialInstances() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<float> GetResetFloats() {
		return memory.read<struct TArray<float>>(m_addr + 56);
	}
	struct TArray<struct FPrimitiveMaterialRef> GetPrimitiveMaterialRefs() {
		return memory.read<struct TArray<struct FPrimitiveMaterialRef>>(m_addr + 72);
	}
	struct UInterpTrackFloatMaterialParam GetInstancedTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UInterpTrackFloatMaterialParam(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UComponentDelegateBinding
{
public:
	UComponentDelegateBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBlueprintComponentDelegateBinding> GetComponentDelegateBindings() {
		return memory.read<struct TArray<struct FBlueprintComponentDelegateBinding>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDataTable
{
public:
	UDataTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UScriptStruct GetRowStruct() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UScriptStruct(ptr_addr);
	}
	char GetbStripFromClientBuilds() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbIgnoreExtraFields() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbIgnoreMissingFields() {
		return memory.read<char>(m_addr + 128);
	}
	struct FString GetImportKeyField() {
		return memory.read<struct FString>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCompositeDataTable
{
public:
	UCompositeDataTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UDataTable> GetParentTables() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct TArray<struct UDataTable>(ptr_addr);
	}
	struct TArray<struct UDataTable> GetOldParentTables() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct TArray<struct UDataTable>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionAnisotropyOutput
{
public:
	UMaterialExpressionAnisotropyOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UControlChannel
{
public:
	UControlChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVisualLoggerDebugSnapshotInterface
{
public:
	UVisualLoggerDebugSnapshotInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGarbageCollectionSettings
{
public:
	UGarbageCollectionSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeBetweenPurgingPendingKillObjects() {
		return memory.read<float>(m_addr + 56);
	}
	char GetFlushStreamingOnGC() {
		return memory.read<char>(m_addr + 60);
	}
	char GetAllowParallelGC() {
		return memory.read<char>(m_addr + 60);
	}
	char GetIncrementalBeginDestroyEnabled() {
		return memory.read<char>(m_addr + 60);
	}
	char GetMultithreadedDestructionEnabled() {
		return memory.read<char>(m_addr + 60);
	}
	char GetCreateGCClusters() {
		return memory.read<char>(m_addr + 60);
	}
	char GetAssetClusteringEnabled() {
		return memory.read<char>(m_addr + 60);
	}
	char GetActorClusteringEnabled() {
		return memory.read<char>(m_addr + 60);
	}
	char GetBlueprintClusteringEnabled() {
		return memory.read<char>(m_addr + 60);
	}
	char GetUseDisregardForGCOnDedicatedServers() {
		return memory.read<char>(m_addr + 61);
	}
	int32_t GetMinGCClusterSize() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t GetNumRetriesBeforeForcingGC() {
		return memory.read<int32_t>(m_addr + 68);
	}
	int32_t GetMaxObjectsNotConsideredByGC() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetSizeOfPermanentObjectPool() {
		return memory.read<int32_t>(m_addr + 76);
	}
	int32_t GetMaxObjectsInGame() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetMaxObjectsInEditor() {
		return memory.read<int32_t>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCurveBase
{
public:
	UCurveBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGameplayStatics
{
public:
	UGameplayStatics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCurveEdPresetCurve
{
public:
	UCurveEdPresetCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleAccelerationBase
{
public:
	UParticleModuleAccelerationBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbAlwaysInWorldSpace() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModulePivotOffset
{
public:
	UParticleModulePivotOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetPivotOffset() {
		return memory.read<struct FVector2D>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionBumpOffset
{
public:
	UMaterialExpressionBumpOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetCoordinate() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetHeight() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetHeightRatioInput() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	float GetHeightRatio() {
		return memory.read<float>(m_addr + 124);
	}
	float GetReferencePlane() {
		return memory.read<float>(m_addr + 128);
	}
	uint32_t GetConstCoordinate() {
		return memory.read<uint32_t>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterface_PreviewMeshProvider
{
public:
	UInterface_PreviewMeshProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticlePositionWS
{
public:
	UMaterialExpressionParticlePositionWS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UKismetTextLibrary
{
public:
	UKismetTextLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureSampleParameter2DArray
{
public:
	UMaterialExpressionTextureSampleParameter2DArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleColor
{
public:
	UParticleModuleColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetStartColor() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	struct FRawDistributionFloat GetStartAlpha() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 120);
	}
	char GetbClampAlpha() {
		return memory.read<char>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCurveFloat
{
public:
	UCurveFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRichCurve GetFloatCurve() {
		return memory.read<struct FRichCurve>(m_addr + 48);
	}
	bool GetbIsEventCurve() {
		return memory.read<bool>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionWrapOutput
{
public:
	UMaterialExpressionWrapOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class AKillZVolume
{
public:
	AKillZVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCurveLinearColor
{
public:
	UCurveLinearColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRichCurve GetFloatCurves[4]() {
		return memory.read<struct FRichCurve>(m_addr + 48);
	}
	float GetAdjustHue() {
		return memory.read<float>(m_addr + 560);
	}
	float GetAdjustSaturation() {
		return memory.read<float>(m_addr + 564);
	}
	float GetAdjustBrightness() {
		return memory.read<float>(m_addr + 568);
	}
	float GetAdjustBrightnessCurve() {
		return memory.read<float>(m_addr + 572);
	}
	float GetAdjustVibrance() {
		return memory.read<float>(m_addr + 576);
	}
	float GetAdjustMinAlpha() {
		return memory.read<float>(m_addr + 580);
	}
	float GetAdjustMaxAlpha() {
		return memory.read<float>(m_addr + 584);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDivide
{
public:
	UMaterialExpressionDivide(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	float GetConstA() {
		return memory.read<float>(m_addr + 104);
	}
	float GetConstB() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCurveLinearColorAtlas
{
public:
	UCurveLinearColorAtlas(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetTextureSize() {
		return memory.read<uint32_t>(m_addr + 416);
	}
	char GetbSquareResolution() {
		return memory.read<char>(m_addr + 420);
	}
	uint32_t GetTextureHeight() {
		return memory.read<uint32_t>(m_addr + 424);
	}
	struct TArray<struct UCurveLinearColor> GetGradientCurves() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 432);
		return struct TArray<struct UCurveLinearColor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCurveSourceInterface
{
public:
	UCurveSourceInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDamageType
{
public:
	UDamageType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbCausedByWorld() {
		return memory.read<char>(m_addr + 40);
	}
	char GetbScaleMomentumByMass() {
		return memory.read<char>(m_addr + 40);
	}
	char GetbRadialDamageVelChange() {
		return memory.read<char>(m_addr + 40);
	}
	float GetDamageImpulse() {
		return memory.read<float>(m_addr + 44);
	}
	float GetDestructibleImpulse() {
		return memory.read<float>(m_addr + 48);
	}
	float GetDestructibleDamageSpreadScale() {
		return memory.read<float>(m_addr + 52);
	}
	float GetDamageFalloff() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleEventGenerator
{
public:
	UParticleModuleEventGenerator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FParticleEvent_GenerateInfo> Getevents() {
		return memory.read<struct TArray<struct FParticleEvent_GenerateInfo>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDataDrivenCVarEngineSubsystem
{
public:
	UDataDrivenCVarEngineSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnDataDrivenCVarDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSceneDepthWithoutWater
{
public:
	UMaterialExpressionSceneDepthWithoutWater(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMaterialSceneAttributeInputMode GetInputMode() {
		return memory.read<enum class EMaterialSceneAttributeInputMode>(m_addr + 64);
	}
	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 68);
	}
	struct FVector2D GetConstInput() {
		return memory.read<struct FVector2D>(m_addr + 88);
	}
	float GetFallbackDepth() {
		return memory.read<float>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackFloatAnimBPParam
{
public:
	UInterpTrackFloatAnimBPParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetAnimBlueprintClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return UObject(ptr_addr);
	}
	UAnimInstance GetAnimClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return UAnimInstance(ptr_addr);
	}
	struct FName GetParamName() {
		return memory.read<struct FName>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDataDrivenConsoleVariableSettings
{
public:
	UDataDrivenConsoleVariableSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FDataDrivenConsoleVariable> GetCVarsArray() {
		return memory.read<struct TArray<struct FDataDrivenConsoleVariable>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class ADebugCameraController
{
public:
	ADebugCameraController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbShowSelectedInfo() {
		return memory.read<char>(m_addr + 1408);
	}
	char GetbIsFrozenRendering() {
		return memory.read<char>(m_addr + 1408);
	}
	char GetbIsOrbitingSelectedActor() {
		return memory.read<char>(m_addr + 1408);
	}
	char GetbOrbitPivotUseCenter() {
		return memory.read<char>(m_addr + 1408);
	}
	char GetbEnableBufferVisualization() {
		return memory.read<char>(m_addr + 1408);
	}
	char GetbEnableBufferVisualizationFullMode() {
		return memory.read<char>(m_addr + 1408);
	}
	char GetbIsBufferVisualizationInputSetup() {
		return memory.read<char>(m_addr + 1408);
	}
	char GetbLastDisplayEnabled() {
		return memory.read<char>(m_addr + 1408);
	}
	struct UDrawFrustumComponent GetDrawFrustum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UDrawFrustumComponent(ptr_addr);
	}
	struct AActor GetSelectedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetSelectedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FHitResult GetSelectedHitPoint() {
		return memory.read<struct FHitResult>(m_addr + 1440);
	}
	struct APlayerController GetOriginalControllerRef() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct APlayerController(ptr_addr);
	}
	struct UPlayer GetOriginalPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UPlayer(ptr_addr);
	}
	float GetSpeedScale() {
		return memory.read<float>(m_addr + 1592);
	}
	float GetInitialMaxSpeed() {
		return memory.read<float>(m_addr + 1596);
	}
	float GetInitialAccel() {
		return memory.read<float>(m_addr + 1600);
	}
	float GetInitialDecel() {
		return memory.read<float>(m_addr + 1604);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDebugCameraControllerSettings
{
public:
	UDebugCameraControllerSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FDebugCameraControllerSettingsViewModeIndex> GetCycleViewModes() {
		return memory.read<struct TArray<struct FDebugCameraControllerSettingsViewModeIndex>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class APhysicsVolume
{
public:
	APhysicsVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTerminalVelocity() {
		return memory.read<float>(m_addr + 600);
	}
	int32_t GetPriority() {
		return memory.read<int32_t>(m_addr + 604);
	}
	float GetFluidFriction() {
		return memory.read<float>(m_addr + 608);
	}
	char GetbWaterVolume() {
		return memory.read<char>(m_addr + 612);
	}
	char GetbPhysicsOnContact() {
		return memory.read<char>(m_addr + 612);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDemoNetDriver
{
public:
	UDemoNetDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FRollbackNetStartupActorInfo> GetRollbackNetStartupActors() {
		return memory.read<struct TMap<struct FString, struct FRollbackNetStartupActorInfo>>(m_addr + 2136);
	}
	float GetCheckpointSaveMaxMSPerFrame() {
		return memory.read<float>(m_addr + 2564);
	}
	struct TArray<struct FMulticastRecordOptions> GetMulticastRecordOptions() {
		return memory.read<struct TArray<struct FMulticastRecordOptions>>(m_addr + 2600);
	}
	bool GetbIsLocalReplay() {
		return memory.read<bool>(m_addr + 2616);
	}
	struct TArray<struct APlayerController> GetSpectatorControllers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2624);
		return struct TArray<struct APlayerController>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPendingNetGame
{
public:
	UPendingNetGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNetDriver GetNetDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UNetDriver(ptr_addr);
	}
	struct UDemoNetDriver GetDemoNetDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UDemoNetDriver(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureObjectParameter
{
public:
	UMaterialExpressionTextureObjectParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionShadingModel
{
public:
	UMaterialExpressionShadingModel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMaterialShadingModel GetShadingModel() {
		return memory.read<enum class EMaterialShadingModel>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDemoPendingNetGame
{
public:
	UDemoPendingNetGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTextureLODSettings
{
public:
	UTextureLODSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTextureLODGroup> GetTextureLODGroups() {
		return memory.read<struct TArray<struct FTextureLODGroup>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class USystemTimeTimecodeProvider
{
public:
	USystemTimeTimecodeProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameRate GetFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 48);
	}
	bool GetbGenerateFullFrame() {
		return memory.read<bool>(m_addr + 56);
	}
	bool GetbUseHighPerformanceClock() {
		return memory.read<bool>(m_addr + 57);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDeviceProfile
{
public:
	UDeviceProfile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDeviceType() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetBaseProfileName() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct UObject GetParent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct FString> GetCVars() {
		return memory.read<struct TArray<struct FString>>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDeviceProfileFragment
{
public:
	UDeviceProfileFragment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionFrac
{
public:
	UMaterialExpressionFrac(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDeviceProfileManager
{
public:
	UDeviceProfileManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UObject> GetProfiles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationPrimitiveBase
{
public:
	UParticleModuleLocationPrimitiveBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetPositive_X() {
		return memory.read<char>(m_addr + 48);
	}
	char GetPositive_Y() {
		return memory.read<char>(m_addr + 48);
	}
	char GetPositive_Z() {
		return memory.read<char>(m_addr + 48);
	}
	char GetNegative_X() {
		return memory.read<char>(m_addr + 48);
	}
	char GetNegative_Y() {
		return memory.read<char>(m_addr + 48);
	}
	char GetNegative_Z() {
		return memory.read<char>(m_addr + 48);
	}
	char GetSurfaceOnly() {
		return memory.read<char>(m_addr + 48);
	}
	char GetVelocity() {
		return memory.read<char>(m_addr + 48);
	}
	struct FRawDistributionFloat GetVelocityScale() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 56);
	}
	struct FRawDistributionVector GetStartLocation() {
		return memory.read<struct FRawDistributionVector>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTangentOutput
{
public:
	UMaterialExpressionTangentOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistributionFloat
{
public:
	UDistributionFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbCanBeBaked() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbBakedDataSuccesfully() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSkyAtmosphereLightDirection
{
public:
	UMaterialExpressionSkyAtmosphereLightDirection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLightIndex() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistributionFloatConstant
{
public:
	UDistributionFloatConstant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetConstant() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleCollisionBase
{
public:
	UParticleModuleCollisionBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDistributionFloatConstantCurve
{
public:
	UDistributionFloatConstantCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInterpCurveFloat GetConstantCurve() {
		return memory.read<struct FInterpCurveFloat>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistributionFloatParameterBase
{
public:
	UDistributionFloatParameterBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 64);
	}
	float GetMinInput() {
		return memory.read<float>(m_addr + 72);
	}
	float GetMaxInput() {
		return memory.read<float>(m_addr + 76);
	}
	float GetMinOutput() {
		return memory.read<float>(m_addr + 80);
	}
	float GetMaxOutput() {
		return memory.read<float>(m_addr + 84);
	}
	enum class DistributionParamMode GetParamMode() {
		return memory.read<enum class DistributionParamMode>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistributionFloatUniform
{
public:
	UDistributionFloatUniform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMin() {
		return memory.read<float>(m_addr + 56);
	}
	float GetMax() {
		return memory.read<float>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULocalMessage
{
public:
	ULocalMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDistributionVector
{
public:
	UDistributionVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbCanBeBaked() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbIsDirty() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbBakedDataSuccesfully() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionMobileShadowBlendOutput
{
public:
	UMaterialExpressionMobileShadowBlendOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistributionVectorConstant
{
public:
	UDistributionVectorConstant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetConstant() {
		return memory.read<struct FVector>(m_addr + 56);
	}
	char GetbLockAxes() {
		return memory.read<char>(m_addr + 68);
	}
	enum class EDistributionVectorLockFlags GetLockedAxes() {
		return memory.read<enum class EDistributionVectorLockFlags>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistributionVectorConstantCurve
{
public:
	UDistributionVectorConstantCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInterpCurveVector GetConstantCurve() {
		return memory.read<struct FInterpCurveVector>(m_addr + 56);
	}
	char GetbLockAxes() {
		return memory.read<char>(m_addr + 80);
	}
	enum class EDistributionVectorLockFlags GetLockedAxes() {
		return memory.read<enum class EDistributionVectorLockFlags>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistributionVectorParameterBase
{
public:
	UDistributionVectorParameterBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 80);
	}
	struct FVector GetMinInput() {
		return memory.read<struct FVector>(m_addr + 88);
	}
	struct FVector GetMaxInput() {
		return memory.read<struct FVector>(m_addr + 100);
	}
	struct FVector GetMinOutput() {
		return memory.read<struct FVector>(m_addr + 112);
	}
	struct FVector GetMaxOutput() {
		return memory.read<struct FVector>(m_addr + 124);
	}
	enum class DistributionParamMode GetParamModes[3]() {
		return memory.read<enum class DistributionParamMode>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstLinearColorProp
{
public:
	UInterpTrackInstLinearColorProp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetResetColor() {
		return memory.read<struct FLinearColor>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDistributionVectorUniformCurve
{
public:
	UDistributionVectorUniformCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInterpCurveTwoVectors GetConstantCurve() {
		return memory.read<struct FInterpCurveTwoVectors>(m_addr + 56);
	}
	char GetbLockAxes1() {
		return memory.read<char>(m_addr + 80);
	}
	char GetbLockAxes2() {
		return memory.read<char>(m_addr + 80);
	}
	enum class EDistributionVectorLockFlags GetLockedAxes[2]() {
		return memory.read<enum class EDistributionVectorLockFlags>(m_addr + 84);
	}
	enum class EDistributionVectorMirrorFlags GetMirrorFlags[3]() {
		return memory.read<enum class EDistributionVectorMirrorFlags>(m_addr + 86);
	}
	char GetbUseExtremes() {
		return memory.read<char>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCameraPositionWS
{
public:
	UMaterialExpressionCameraPositionWS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULayer
{
public:
	ULayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetLayerName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	char GetbIsVisible() {
		return memory.read<char>(m_addr + 48);
	}
	struct TArray<struct FLayerActorStats> GetActorStats() {
		return memory.read<struct TArray<struct FLayerActorStats>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionObjectBounds
{
public:
	UMaterialExpressionObjectBounds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USphereComponent
{
public:
	USphereComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSphereRadius() {
		return memory.read<float>(m_addr + 1160);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackVectorBase
{
public:
	UInterpTrackVectorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInterpCurveVector GetVectorTrack() {
		return memory.read<struct FInterpCurveVector>(m_addr + 112);
	}
	float GetCurveTension() {
		return memory.read<float>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDrawSphereComponent
{
public:
	UDrawSphereComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEdGraph
{
public:
	UEdGraph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UEdGraphSchema GetSchema() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return UEdGraphSchema(ptr_addr);
	}
	struct TArray<struct UEdGraphNode> Getnodes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UEdGraphNode>(ptr_addr);
	}
	char GetbEditable() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbAllowDeletion() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbAllowRenaming() {
		return memory.read<char>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionInverseLinearInterpolate
{
public:
	UMaterialExpressionInverseLinearInterpolate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetValue() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	float GetConstA() {
		return memory.read<float>(m_addr + 124);
	}
	float GetConstB() {
		return memory.read<float>(m_addr + 128);
	}
	float GetConstValue() {
		return memory.read<float>(m_addr + 132);
	}
	bool GetbClampResult() {
		return memory.read<bool>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleParameterDynamic
{
public:
	UParticleModuleParameterDynamic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEmitterDynamicParameter> GetDynamicParams() {
		return memory.read<struct TArray<struct FEmitterDynamicParameter>>(m_addr + 48);
	}
	int32_t GetUpdateFlags() {
		return memory.read<int32_t>(m_addr + 64);
	}
	char GetbUsesVelocity() {
		return memory.read<char>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMatineeAnimInterface
{
public:
	UMatineeAnimInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULightMapVirtualTexture
{
public:
	ULightMapVirtualTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGraphNodeContextMenuContext
{
public:
	UGraphNodeContextMenuContext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBlueprint GetBlueprint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UBlueprint(ptr_addr);
	}
	struct UEdGraph GetGraph() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UEdGraph(ptr_addr);
	}
	struct UEdGraphNode GetNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UEdGraphNode(ptr_addr);
	}
	bool GetbIsDebugging() {
		return memory.read<bool>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEdGraphNode
{
public:
	UEdGraphNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UEdGraphPin_Deprecated> GetDeprecatedPins() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UEdGraphPin_Deprecated>(ptr_addr);
	}
	int32_t GetNodePosX() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetNodePosY() {
		return memory.read<int32_t>(m_addr + 76);
	}
	int32_t GetNodeWidth() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetNodeHeight() {
		return memory.read<int32_t>(m_addr + 84);
	}
	enum class ENodeAdvancedPins GetAdvancedPinDisplay() {
		return memory.read<enum class ENodeAdvancedPins>(m_addr + 88);
	}
	enum class ENodeEnabledState GetEnabledState() {
		return memory.read<enum class ENodeEnabledState>(m_addr + 89);
	}
	char GetbDisplayAsDisabled() {
		return memory.read<char>(m_addr + 91);
	}
	char GetbUserSetEnabledState() {
		return memory.read<char>(m_addr + 91);
	}
	char GetbIsNodeEnabled() {
		return memory.read<char>(m_addr + 91);
	}
	char GetbHasCompilerMessage() {
		return memory.read<char>(m_addr + 91);
	}
	struct FString GetNodeComment() {
		return memory.read<struct FString>(m_addr + 96);
	}
	int32_t GetErrorType() {
		return memory.read<int32_t>(m_addr + 112);
	}
	struct FString GetErrorMsg() {
		return memory.read<struct FString>(m_addr + 120);
	}
	struct FGuid GetNodeGuid() {
		return memory.read<struct FGuid>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEdGraphPin_Deprecated
{
public:
	UEdGraphPin_Deprecated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPinName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetPinToolTip() {
		return memory.read<struct FString>(m_addr + 56);
	}
	enum class EEdGraphPinDirection GetDirection() {
		return memory.read<enum class EEdGraphPinDirection>(m_addr + 72);
	}
	struct FEdGraphPinType GetPinType() {
		return memory.read<struct FEdGraphPinType>(m_addr + 80);
	}
	struct FString GetDefaultValue() {
		return memory.read<struct FString>(m_addr + 168);
	}
	struct FString GetAutogeneratedDefaultValue() {
		return memory.read<struct FString>(m_addr + 184);
	}
	struct UObject GetDefaultObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UObject(ptr_addr);
	}
	struct FText GetDefaultTextValue() {
		return memory.read<struct FText>(m_addr + 208);
	}
	struct TArray<struct UEdGraphPin_Deprecated> GetLinkedTo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct TArray<struct UEdGraphPin_Deprecated>(ptr_addr);
	}
	struct TArray<struct UEdGraphPin_Deprecated> GetSubPins() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct TArray<struct UEdGraphPin_Deprecated>(ptr_addr);
	}
	struct UEdGraphPin_Deprecated GetParentPin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UEdGraphPin_Deprecated(ptr_addr);
	}
	struct UEdGraphPin_Deprecated GetReferencePassThroughConnection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct UEdGraphPin_Deprecated(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class APlayerStart
{
public:
	APlayerStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPlayerStartTag() {
		return memory.read<struct FName>(m_addr + 584);
	}

private:
	std::uint64_t m_addr = 0;
};


class AEmitter
{
public:
	AEmitter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystemComponent GetParticleSystemComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UParticleSystemComponent(ptr_addr);
	}
	char GetbDestroyOnSystemFinish() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbPostUpdateTickGroup() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbCurrentlyActive() {
		return memory.read<char>(m_addr + 552);
	}
	struct FMulticastInlineDelegate GetOnParticleSpawn() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 560);
	}
	struct FMulticastInlineDelegate GetOnParticleBurst() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 576);
	}
	struct FMulticastInlineDelegate GetOnParticleDeath() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 592);
	}
	struct FMulticastInlineDelegate GetOnParticleCollide() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 608);
	}

private:
	std::uint64_t m_addr = 0;
};


class UIntSerialization
{
public:
	UIntSerialization(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetUnsignedInt16Variable() {
		return memory.read<uint16_t>(m_addr + 40);
	}
	uint32_t GetUnsignedInt32Variable() {
		return memory.read<uint32_t>(m_addr + 44);
	}
	uint64_t GetUnsignedInt64Variable() {
		return memory.read<uint64_t>(m_addr + 48);
	}
	int8_t GetSignedInt8Variable() {
		return memory.read<int8_t>(m_addr + 56);
	}
	int16_t GetSignedInt16Variable() {
		return memory.read<int16_t>(m_addr + 58);
	}
	int64_t GetSignedInt64Variable() {
		return memory.read<int64_t>(m_addr + 64);
	}
	char GetUnsignedInt8Variable() {
		return memory.read<char>(m_addr + 72);
	}
	int32_t GetSignedInt32Variable() {
		return memory.read<int32_t>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class UViewModeUtils
{
public:
	UViewModeUtils(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USceneCaptureComponent2D
{
public:
	USceneCaptureComponent2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECameraProjectionMode GetProjectionType() {
		return memory.read<enum class ECameraProjectionMode>(m_addr + 712);
	}
	float GetFOVAngle() {
		return memory.read<float>(m_addr + 716);
	}
	float GetOrthoWidth() {
		return memory.read<float>(m_addr + 720);
	}
	struct UTextureRenderTarget2D GetTextureTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	enum class ESceneCaptureCompositeMode GetCompositeMode() {
		return memory.read<enum class ESceneCaptureCompositeMode>(m_addr + 736);
	}
	struct FPostProcessSettings GetPostProcessSettings() {
		return memory.read<struct FPostProcessSettings>(m_addr + 752);
	}
	float GetPostProcessBlendWeight() {
		return memory.read<float>(m_addr + 2240);
	}
	char GetbOverride_CustomNearClippingPlane() {
		return memory.read<char>(m_addr + 2244);
	}
	float GetCustomNearClippingPlane() {
		return memory.read<float>(m_addr + 2248);
	}
	bool GetbUseCustomProjectionMatrix() {
		return memory.read<bool>(m_addr + 2252);
	}
	struct FMatrix GetCustomProjectionMatrix() {
		return memory.read<struct FMatrix>(m_addr + 2256);
	}
	bool GetbEnableClipPlane() {
		return memory.read<bool>(m_addr + 2320);
	}
	struct FVector GetClipPlaneBase() {
		return memory.read<struct FVector>(m_addr + 2324);
	}
	struct FVector GetClipPlaneNormal() {
		return memory.read<struct FVector>(m_addr + 2336);
	}
	float GetUpdateFrame() {
		return memory.read<float>(m_addr + 2348);
	}
	enum class EDetailMode GetRenderDetailMode() {
		return memory.read<enum class EDetailMode>(m_addr + 2352);
	}
	int32_t GetRenderMirrorDetailLevel() {
		return memory.read<int32_t>(m_addr + 2356);
	}
	bool GetbUseCustomAA() {
		return memory.read<bool>(m_addr + 2360);
	}
	enum class EAntiAliasingMethod GetCustomAAMethod() {
		return memory.read<enum class EAntiAliasingMethod>(m_addr + 2361);
	}
	int32_t GetCustomAAQuality() {
		return memory.read<int32_t>(m_addr + 2364);
	}
	bool GetbUseFXAAGreenAsLuma() {
		return memory.read<bool>(m_addr + 2368);
	}
	char GetbCameraCutThisFrame() {
		return memory.read<char>(m_addr + 2372);
	}
	char GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent() {
		return memory.read<char>(m_addr + 2372);
	}
	int32_t GetMaxCascadeDynamicShadows() {
		return memory.read<int32_t>(m_addr + 2376);
	}
	int32_t GetMaxCascadeStaticShadows() {
		return memory.read<int32_t>(m_addr + 2380);
	}
	float GetStaticViewDistanceScale() {
		return memory.read<float>(m_addr + 2384);
	}
	float GetMovableViewDistanceScale() {
		return memory.read<float>(m_addr + 2388);
	}
	bool GetbIsMirror() {
		return memory.read<bool>(m_addr + 2392);
	}
	bool GetbDisableFlipCopyGLES() {
		return memory.read<bool>(m_addr + 2393);
	}
	bool GetbMakeOpacityFinalColorLDR() {
		return memory.read<bool>(m_addr + 2394);
	}
	bool GetbTrimEdgeLDRColor() {
		return memory.read<bool>(m_addr + 2395);
	}
	bool GetbUseAlphaFXAA() {
		return memory.read<bool>(m_addr + 2396);
	}
	bool GetbSkipBrightnessContrastAdjustment() {
		return memory.read<bool>(m_addr + 2397);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEngineHandlerComponentFactory
{
public:
	UEngineHandlerComponentFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class APrecomputedVisibilityOverrideVolume
{
public:
	APrecomputedVisibilityOverrideVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetOverrideVisibleActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct TArray<struct AActor>(ptr_addr);
	}
	struct TArray<struct AActor> GetOverrideInvisibleActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct TArray<struct AActor>(ptr_addr);
	}
	struct TArray<struct FName> GetOverrideInvisibleLevels() {
		return memory.read<struct TArray<struct FName>>(m_addr + 632);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEngineMessage
{
public:
	UEngineMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFailedPlaceMessage() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetMaxedOutMessage() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetEnteredMessage() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FString GetLeftMessage() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetGlobalNameChange() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString GetSpecEnteredMessage() {
		return memory.read<struct FString>(m_addr + 120);
	}
	struct FString GetNewPlayerMessage() {
		return memory.read<struct FString>(m_addr + 136);
	}
	struct FString GetNewSpecMessage() {
		return memory.read<struct FString>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackColorProp
{
public:
	UInterpTrackColorProp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPropertyName() {
		return memory.read<struct FName>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEngineTypes
{
public:
	UEngineTypes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USoundNodeOscillator
{
public:
	USoundNodeOscillator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbModulateVolume() {
		return memory.read<char>(m_addr + 72);
	}
	char GetbModulatePitch() {
		return memory.read<char>(m_addr + 72);
	}
	float GetAmplitudeMin() {
		return memory.read<float>(m_addr + 76);
	}
	float GetAmplitudeMax() {
		return memory.read<float>(m_addr + 80);
	}
	float GetFrequencyMin() {
		return memory.read<float>(m_addr + 84);
	}
	float GetFrequencyMax() {
		return memory.read<float>(m_addr + 88);
	}
	float GetOffsetMin() {
		return memory.read<float>(m_addr + 92);
	}
	float GetOffsetMax() {
		return memory.read<float>(m_addr + 96);
	}
	float GetCenterMin() {
		return memory.read<float>(m_addr + 100);
	}
	float GetCenterMax() {
		return memory.read<float>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelStreamingAlwaysLoaded
{
public:
	ULevelStreamingAlwaysLoaded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UExporter
{
public:
	UExporter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetSupportedClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return UObject(ptr_addr);
	}
	struct UObject GetExportRootScope() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct FString> GetFormatExtension() {
		return memory.read<struct TArray<struct FString>>(m_addr + 56);
	}
	struct TArray<struct FString> GetFormatDescription() {
		return memory.read<struct TArray<struct FString>>(m_addr + 72);
	}
	int32_t GetPreferredFormatIndex() {
		return memory.read<int32_t>(m_addr + 88);
	}
	int32_t GetTextIndent() {
		return memory.read<int32_t>(m_addr + 92);
	}
	char GetbText() {
		return memory.read<char>(m_addr + 96);
	}
	char GetbSelectedOnly() {
		return memory.read<char>(m_addr + 96);
	}
	char GetbForceFileOperations() {
		return memory.read<char>(m_addr + 96);
	}
	struct UAssetExportTask GetExportTask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UAssetExportTask(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionArctangent2
{
public:
	UMaterialExpressionArctangent2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetY() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetX() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFontFace
{
public:
	UFontFace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSourceFilename() {
		return memory.read<struct FString>(m_addr + 48);
	}
	enum class EFontHinting GetHinting() {
		return memory.read<enum class EFontHinting>(m_addr + 64);
	}
	enum class EFontLoadingPolicy GetLoadingPolicy() {
		return memory.read<enum class EFontLoadingPolicy>(m_addr + 65);
	}
	enum class EFontLayoutMethod GetLayoutMethod() {
		return memory.read<enum class EFontLayoutMethod>(m_addr + 66);
	}

private:
	std::uint64_t m_addr = 0;
};


class UForceFeedbackComponent
{
public:
	UForceFeedbackComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UForceFeedbackEffect GetForceFeedbackEffect() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UForceFeedbackEffect(ptr_addr);
	}
	char GetbAutoDestroy() {
		return memory.read<char>(m_addr + 528);
	}
	char GetbStopWhenOwnerDestroyed() {
		return memory.read<char>(m_addr + 528);
	}
	char GetbLooping() {
		return memory.read<char>(m_addr + 528);
	}
	char GetbIgnoreTimeDilation() {
		return memory.read<char>(m_addr + 528);
	}
	char GetbOverrideAttenuation() {
		return memory.read<char>(m_addr + 528);
	}
	float GetIntensityMultiplier() {
		return memory.read<float>(m_addr + 532);
	}
	struct UForceFeedbackAttenuation GetAttenuationSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 536);
		return struct UForceFeedbackAttenuation(ptr_addr);
	}
	struct FForceFeedbackAttenuationSettings GetAttenuationOverrides() {
		return memory.read<struct FForceFeedbackAttenuationSettings>(m_addr + 544);
	}
	struct FMulticastInlineDelegate GetOnForceFeedbackFinished() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 720);
	}

private:
	std::uint64_t m_addr = 0;
};


class UForceFeedbackEffect
{
public:
	UForceFeedbackEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FForceFeedbackChannelDetails> GetChannelDetails() {
		return memory.read<struct TArray<struct FForceFeedbackChannelDetails>>(m_addr + 40);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVectorFieldLocal
{
public:
	UParticleModuleVectorFieldLocal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVectorField GetVectorField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UVectorField(ptr_addr);
	}
	struct FVector GetRelativeTranslation() {
		return memory.read<struct FVector>(m_addr + 56);
	}
	struct FRotator GetRelativeRotation() {
		return memory.read<struct FRotator>(m_addr + 68);
	}
	struct FVector GetRelativeScale3D() {
		return memory.read<struct FVector>(m_addr + 80);
	}
	float GetIntensity() {
		return memory.read<float>(m_addr + 92);
	}
	float GetTightness() {
		return memory.read<float>(m_addr + 96);
	}
	char GetbIgnoreComponentTransform() {
		return memory.read<char>(m_addr + 100);
	}
	char GetbTileX() {
		return memory.read<char>(m_addr + 100);
	}
	char GetbTileY() {
		return memory.read<char>(m_addr + 100);
	}
	char GetbTileZ() {
		return memory.read<char>(m_addr + 100);
	}
	char GetbUseFixDT() {
		return memory.read<char>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameEngine
{
public:
	UGameEngine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaxDeltaTime() {
		return memory.read<float>(m_addr + 3384);
	}
	float GetServerFlushLogInterval() {
		return memory.read<float>(m_addr + 3388);
	}
	struct UGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 3392);
		return struct UGameInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleAccelerationDrag
{
public:
	UParticleModuleAccelerationDrag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDistributionFloat GetDragCoefficient() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UDistributionFloat(ptr_addr);
	}
	struct FRawDistributionFloat GetDragCoefficientRaw() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class AGeneratedMeshAreaLight
{
public:
	AGeneratedMeshAreaLight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UHapticFeedbackEffect_Buffer
{
public:
	UHapticFeedbackEffect_Buffer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetAmplitudes() {
		return memory.read<struct TArray<char>>(m_addr + 40);
	}
	int32_t GetSampleRate() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHapticFeedbackEffect_Curve
{
public:
	UHapticFeedbackEffect_Curve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHapticFeedbackDetails_Curve GetHapticDetails() {
		return memory.read<struct FHapticFeedbackDetails_Curve>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStereoLayerFunctionLibrary
{
public:
	UStereoLayerFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UHealthSnapshotBlueprintLibrary
{
public:
	UHealthSnapshotBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UImportanceSamplingLibrary
{
public:
	UImportanceSamplingLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UImportantToggleSettingInterface
{
public:
	UImportantToggleSettingInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class APainCausingVolume
{
public:
	APainCausingVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbPainCausing() {
		return memory.read<char>(m_addr + 616);
	}
	float GetDamagePerSec() {
		return memory.read<float>(m_addr + 620);
	}
	UDamageType GetDamageType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return UDamageType(ptr_addr);
	}
	float GetPainInterval() {
		return memory.read<float>(m_addr + 632);
	}
	char GetbEntryPain() {
		return memory.read<char>(m_addr + 636);
	}
	char GetBACKUP_bPainCausing() {
		return memory.read<char>(m_addr + 636);
	}
	struct AController GetDamageInstigator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct AController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInheritableComponentHandler
{
public:
	UInheritableComponentHandler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FComponentOverrideRecord> GetRecords() {
		return memory.read<struct TArray<struct FComponentOverrideRecord>>(m_addr + 40);
	}
	struct TArray<struct UActorComponent> GetUnnecessaryComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UActorComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionNamedRerouteBase
{
public:
	UMaterialExpressionNamedRerouteBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInputDelegateBinding
{
public:
	UInputDelegateBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInputActionDelegateBinding
{
public:
	UInputActionDelegateBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBlueprintInputActionDelegateBinding> GetInputActionDelegateBindings() {
		return memory.read<struct TArray<struct FBlueprintInputActionDelegateBinding>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSpawn
{
public:
	UParticleModuleSpawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetRate() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 56);
	}
	struct FRawDistributionFloat GetRateScale() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 104);
	}
	enum class EParticleBurstMethod GetParticleBurstMethod() {
		return memory.read<enum class EParticleBurstMethod>(m_addr + 152);
	}
	struct TArray<struct FParticleBurst> GetBurstList() {
		return memory.read<struct TArray<struct FParticleBurst>>(m_addr + 160);
	}
	struct FRawDistributionFloat GetBurstScale() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 176);
	}
	char GetbApplyGlobalSpawnRateScale() {
		return memory.read<char>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCollectionParameter
{
public:
	UMaterialExpressionCollectionParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialParameterCollection GetCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UMaterialParameterCollection(ptr_addr);
	}
	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 72);
	}
	struct FGuid GetParameterId() {
		return memory.read<struct FGuid>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPluginCommandlet
{
public:
	UPluginCommandlet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInputAxisDelegateBinding
{
public:
	UInputAxisDelegateBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBlueprintInputAxisDelegateBinding> GetInputAxisDelegateBindings() {
		return memory.read<struct TArray<struct FBlueprintInputAxisDelegateBinding>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInputAxisKeyDelegateBinding
{
public:
	UInputAxisKeyDelegateBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBlueprintInputAxisKeyDelegateBinding> GetInputAxisKeyDelegateBindings() {
		return memory.read<struct TArray<struct FBlueprintInputAxisKeyDelegateBinding>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVelocity_Seeded
{
public:
	UParticleModuleVelocity_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCosine
{
public:
	UMaterialExpressionCosine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	float GetPeriod() {
		return memory.read<float>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInputTouchDelegateBinding
{
public:
	UInputTouchDelegateBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBlueprintInputTouchDelegateBinding> GetInputTouchDelegateBindings() {
		return memory.read<struct TArray<struct FBlueprintInputTouchDelegateBinding>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpCurveEdSetup
{
public:
	UInterpCurveEdSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCurveEdTab> GetTabs() {
		return memory.read<struct TArray<struct FCurveEdTab>>(m_addr + 40);
	}
	int32_t GetActiveTab() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionFunctionInput
{
public:
	UMaterialExpressionFunctionInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput Getpreview() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FName GetInputName() {
		return memory.read<struct FName>(m_addr + 84);
	}
	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FGuid GetID() {
		return memory.read<struct FGuid>(m_addr + 112);
	}
	enum class EFunctionInputType GetInputType() {
		return memory.read<enum class EFunctionInputType>(m_addr + 128);
	}
	struct FVector4 GetPreviewValue() {
		return memory.read<struct FVector4>(m_addr + 144);
	}
	char GetbUsePreviewValueAsDefault() {
		return memory.read<char>(m_addr + 160);
	}
	int32_t GetSortPriority() {
		return memory.read<int32_t>(m_addr + 164);
	}
	char GetbCompilingFunctionPreview() {
		return memory.read<char>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpFilter
{
public:
	UInterpFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCaption() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleBeamNoise
{
public:
	UParticleModuleBeamNoise(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbLowFreq_Enabled() {
		return memory.read<char>(m_addr + 48);
	}
	int32_t GetFrequency() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetFrequency_LowRange() {
		return memory.read<int32_t>(m_addr + 56);
	}
	struct FRawDistributionVector GetNoiseRange() {
		return memory.read<struct FRawDistributionVector>(m_addr + 64);
	}
	struct FRawDistributionFloat GetNoiseRangeScale() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 136);
	}
	char GetbNRScaleEmitterTime() {
		return memory.read<char>(m_addr + 184);
	}
	struct FRawDistributionVector GetNoiseSpeed() {
		return memory.read<struct FRawDistributionVector>(m_addr + 192);
	}
	char GetbSmooth() {
		return memory.read<char>(m_addr + 264);
	}
	float GetNoiseLockRadius() {
		return memory.read<float>(m_addr + 268);
	}
	char GetbNoiseLock() {
		return memory.read<char>(m_addr + 272);
	}
	char GetbOscillate() {
		return memory.read<char>(m_addr + 272);
	}
	float GetNoiseLockTime() {
		return memory.read<float>(m_addr + 276);
	}
	float GetNoiseTension() {
		return memory.read<float>(m_addr + 280);
	}
	char GetbUseNoiseTangents() {
		return memory.read<char>(m_addr + 284);
	}
	struct FRawDistributionFloat GetNoiseTangentStrength() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 288);
	}
	int32_t GetNoiseTessellation() {
		return memory.read<int32_t>(m_addr + 336);
	}
	char GetbTargetNoise() {
		return memory.read<char>(m_addr + 340);
	}
	float GetFrequencyDistance() {
		return memory.read<float>(m_addr + 344);
	}
	char GetbApplyNoiseScale() {
		return memory.read<char>(m_addr + 348);
	}
	struct FRawDistributionFloat GetNoiseScale() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 352);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpFilter_Custom
{
public:
	UInterpFilter_Custom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTextureRenderTargetVolume
{
public:
	UTextureRenderTargetVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSizeX() {
		return memory.read<int32_t>(m_addr + 384);
	}
	int32_t GetSizeY() {
		return memory.read<int32_t>(m_addr + 388);
	}
	int32_t GetSizeZ() {
		return memory.read<int32_t>(m_addr + 392);
	}
	struct FLinearColor GetClearColor() {
		return memory.read<struct FLinearColor>(m_addr + 396);
	}
	enum class EPixelFormat GetOverrideFormat() {
		return memory.read<enum class EPixelFormat>(m_addr + 412);
	}
	char GetbHDR() {
		return memory.read<char>(m_addr + 413);
	}
	char GetbForceLinearGamma() {
		return memory.read<char>(m_addr + 413);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstEvent
{
public:
	UInterpTrackInstEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLastUpdatePosition() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpGroup
{
public:
	UInterpGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UInterpTrack> GetInterpTracks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UInterpTrack>(ptr_addr);
	}
	struct FName GetGroupName() {
		return memory.read<struct FName>(m_addr + 64);
	}
	struct FColor GetGroupColor() {
		return memory.read<struct FColor>(m_addr + 72);
	}
	char GetbCollapsed() {
		return memory.read<char>(m_addr + 76);
	}
	char GetbVisible() {
		return memory.read<char>(m_addr + 76);
	}
	char GetbIsFolder() {
		return memory.read<char>(m_addr + 76);
	}
	char GetbIsParented() {
		return memory.read<char>(m_addr + 76);
	}
	char GetbIsSelected() {
		return memory.read<char>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class URadialForceComponent
{
public:
	URadialForceComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 520);
	}
	enum class ERadialImpulseFalloff GetFalloff() {
		return memory.read<enum class ERadialImpulseFalloff>(m_addr + 524);
	}
	float GetImpulseStrength() {
		return memory.read<float>(m_addr + 528);
	}
	char GetbImpulseVelChange() {
		return memory.read<char>(m_addr + 532);
	}
	char GetbIgnoreOwningActor() {
		return memory.read<char>(m_addr + 532);
	}
	float GetForceStrength() {
		return memory.read<float>(m_addr + 536);
	}
	float GetDestructibleDamage() {
		return memory.read<float>(m_addr + 540);
	}
	struct TArray<enum class EObjectTypeQuery> GetObjectTypesToAffect() {
		return memory.read<struct TArray<enum class EObjectTypeQuery>>(m_addr + 544);
	}

private:
	std::uint64_t m_addr = 0;
};


class UKismetRenderingLibrary
{
public:
	UKismetRenderingLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpGroupDirector
{
public:
	UInterpGroupDirector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpGroupInstCamera
{
public:
	UInterpGroupInstCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleAttractorParticle
{
public:
	UParticleModuleAttractorParticle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEmitterName() {
		return memory.read<struct FName>(m_addr + 48);
	}
	struct FRawDistributionFloat GetRange() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 56);
	}
	char GetbStrengthByDistance() {
		return memory.read<char>(m_addr + 104);
	}
	struct FRawDistributionFloat GetStrength() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 112);
	}
	char GetbAffectBaseVelocity() {
		return memory.read<char>(m_addr + 160);
	}
	enum class EAttractorParticleSelectionMethod GetSelectionMethod() {
		return memory.read<enum class EAttractorParticleSelectionMethod>(m_addr + 164);
	}
	char GetbRenewSource() {
		return memory.read<char>(m_addr + 168);
	}
	char GetbInheritSourceVel() {
		return memory.read<char>(m_addr + 168);
	}
	int32_t GetLastSelIndex() {
		return memory.read<int32_t>(m_addr + 172);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleMaterialBase
{
public:
	UParticleModuleMaterialBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrack
{
public:
	UInterpTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UInterpTrack> GetSubTracks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UInterpTrack>(ptr_addr);
	}
	UInterpTrackInst GetTrackInstClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return UInterpTrackInst(ptr_addr);
	}
	enum class ETrackActiveCondition GetActiveCondition() {
		return memory.read<enum class ETrackActiveCondition>(m_addr + 80);
	}
	struct FString GetTrackTitle() {
		return memory.read<struct FString>(m_addr + 88);
	}
	char GetbOnePerGroup() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbDirGroupOnly() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbDisableTrack() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbIsSelected() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbIsAnimControlTrack() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbSubTrackOnly() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbVisible() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbIsRecording() {
		return memory.read<char>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackFloatBase
{
public:
	UInterpTrackFloatBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInterpCurveFloat GetFloatTrack() {
		return memory.read<struct FInterpCurveFloat>(m_addr + 112);
	}
	float GetCurveTension() {
		return memory.read<float>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackAnimControl
{
public:
	UInterpTrackAnimControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 144);
	}
	struct TArray<struct FAnimControlTrackKey> GetAnimSeqs() {
		return memory.read<struct TArray<struct FAnimControlTrackKey>>(m_addr + 152);
	}
	char GetbSkipAnimNotifiers() {
		return memory.read<char>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UThumbnailInfo
{
public:
	UThumbnailInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ASplineMeshActor
{
public:
	ASplineMeshActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USplineMeshComponent GetSplineMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct USplineMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackAudioMaster
{
public:
	UInterpTrackAudioMaster(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULevelStreaming
{
public:
	ULevelStreaming(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UWorld> GetWorldAsset() {
		return memory.read<struct TSoftObjectPtr<UWorld>>(m_addr + 40);
	}
	struct FName GetPackageNameToLoad() {
		return memory.read<struct FName>(m_addr + 80);
	}
	struct TArray<struct FName> GetLODPackageNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 88);
	}
	struct FTransform GetLevelTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	int32_t GetLevelLODIndex() {
		return memory.read<int32_t>(m_addr + 176);
	}
	int32_t GetStreamingPriority() {
		return memory.read<int32_t>(m_addr + 180);
	}
	char GetbShouldBeVisible() {
		return memory.read<char>(m_addr + 186);
	}
	char GetbShouldBeLoaded() {
		return memory.read<char>(m_addr + 186);
	}
	char GetbLocked() {
		return memory.read<char>(m_addr + 186);
	}
	char GetbIsStatic() {
		return memory.read<char>(m_addr + 186);
	}
	char GetbShouldBlockOnLoad() {
		return memory.read<char>(m_addr + 186);
	}
	char GetbShouldBlockOnUnload() {
		return memory.read<char>(m_addr + 187);
	}
	char GetbDisableDistanceStreaming() {
		return memory.read<char>(m_addr + 187);
	}
	char GetbDrawOnLevelStatusMap() {
		return memory.read<char>(m_addr + 187);
	}
	struct FLinearColor GetLevelColor() {
		return memory.read<struct FLinearColor>(m_addr + 188);
	}
	struct TArray<struct ALevelStreamingVolume> GetEditorStreamingVolumes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct TArray<struct ALevelStreamingVolume>(ptr_addr);
	}
	float GetMinTimeBetweenVolumeUnloadRequests() {
		return memory.read<float>(m_addr + 224);
	}
	enum class ELevelStreamingType GetLevelStreamingType() {
		return memory.read<enum class ELevelStreamingType>(m_addr + 228);
	}
	enum class EDetailMode GetLevelDetailMode() {
		return memory.read<enum class EDetailMode>(m_addr + 229);
	}
	struct FMulticastInlineDelegate GetOnLevelLoaded() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 240);
	}
	struct FMulticastInlineDelegate GetOnLevelUnloaded() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 256);
	}
	struct FMulticastInlineDelegate GetOnLevelShown() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 272);
	}
	struct FMulticastInlineDelegate GetOnLevelHidden() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 288);
	}
	struct ULevel GetLoadedLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct ULevel(ptr_addr);
	}
	struct ULevel GetPendingUnloadLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct ULevel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPathFollowingAgentInterface
{
public:
	UPathFollowingAgentInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSSRWeightOutput
{
public:
	UMaterialExpressionSSRWeightOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackColorScale
{
public:
	UInterpTrackColorScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackDirector
{
public:
	UInterpTrackDirector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FDirectorTrackCut> GetCutTrack() {
		return memory.read<struct TArray<struct FDirectorTrackCut>>(m_addr + 112);
	}
	char GetbSimulateCameraCutsOnClients() {
		return memory.read<char>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVelocityOverLifetime
{
public:
	UParticleModuleVelocityOverLifetime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetVelOverLife() {
		return memory.read<struct FRawDistributionVector>(m_addr + 56);
	}
	char GetAbsolute() {
		return memory.read<char>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackEvent
{
public:
	UInterpTrackEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEventTrackKey> GetEventTrack() {
		return memory.read<struct TArray<struct FEventTrackKey>>(m_addr + 112);
	}
	char GetbFireEventsWhenForwards() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbFireEventsWhenBackwards() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbFireEventsWhenJumpingForwards() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbUseCustomEventName() {
		return memory.read<char>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundfieldEndpointSubmix
{
public:
	USoundfieldEndpointSubmix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSoundfieldEndpointType() {
		return memory.read<struct FName>(m_addr + 56);
	}
	UAudioEndpointSettingsBase GetEndpointSettingsClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return UAudioEndpointSettingsBase(ptr_addr);
	}
	struct USoundfieldEndpointSettingsBase GetEndpointSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct USoundfieldEndpointSettingsBase(ptr_addr);
	}
	USoundfieldEncodingSettingsBase GetEncodingSettingsClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return USoundfieldEncodingSettingsBase(ptr_addr);
	}
	struct USoundfieldEncodingSettingsBase GetEncodingSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct USoundfieldEncodingSettingsBase(ptr_addr);
	}
	struct TArray<struct USoundfieldEffectBase> GetSoundfieldEffectChain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct TArray<struct USoundfieldEffectBase>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackFloatProp
{
public:
	UInterpTrackFloatProp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPropertyName() {
		return memory.read<struct FName>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstAnimControl
{
public:
	UInterpTrackInstAnimControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLastUpdatePosition() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstAudioMaster
{
public:
	UInterpTrackInstAudioMaster(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstProperty
{
public:
	UInterpTrackInstProperty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TFieldPath<FNone> GetInterpProperty() {
		return memory.read<struct TFieldPath<FNone>>(m_addr + 40);
	}
	struct UObject GetPropertyOuterObjectInst() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstBoolProp
{
public:
	UInterpTrackInstBoolProp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetResetBool() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstColorProp
{
public:
	UInterpTrackInstColorProp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FColor GetResetColor() {
		return memory.read<struct FColor>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstDirector
{
public:
	UInterpTrackInstDirector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOldViewTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVoiceChannel
{
public:
	UVoiceChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstFade
{
public:
	UInterpTrackInstFade(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstFloatParticleParam
{
public:
	UInterpTrackInstFloatParticleParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetResetFloat() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UObjectReferencer
{
public:
	UObjectReferencer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UObject> GetReferencedObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstMove
{
public:
	UInterpTrackInstMove(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetResetLocation() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	struct FRotator GetResetRotation() {
		return memory.read<struct FRotator>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionComponentMask
{
public:
	UMaterialExpressionComponentMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	char GetR() {
		return memory.read<char>(m_addr + 84);
	}
	char GetG() {
		return memory.read<char>(m_addr + 84);
	}
	char GetB() {
		return memory.read<char>(m_addr + 84);
	}
	char GetA() {
		return memory.read<char>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstVectorMaterialParam
{
public:
	UInterpTrackInstVectorMaterialParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMaterialInstanceDynamic> GetMaterialInstances() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct FVector> GetResetVectors() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 56);
	}
	struct TArray<struct FPrimitiveMaterialRef> GetPrimitiveMaterialRefs() {
		return memory.read<struct TArray<struct FPrimitiveMaterialRef>>(m_addr + 72);
	}
	struct UInterpTrackVectorMaterialParam GetInstancedTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UInterpTrackVectorMaterialParam(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundSourceBus
{
public:
	USoundSourceBus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESourceBusChannels GetSourceBusChannels() {
		return memory.read<enum class ESourceBusChannels>(m_addr + 880);
	}
	float GetSourceBusDuration() {
		return memory.read<float>(m_addr + 884);
	}
	struct UAudioBus GetAudioBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UAudioBus(ptr_addr);
	}
	char GetbAutoDeactivateWhenSilent() {
		return memory.read<char>(m_addr + 896);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstSlomo
{
public:
	UInterpTrackInstSlomo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetOldTimeDilation() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstSound
{
public:
	UInterpTrackInstSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLastUpdatePosition() {
		return memory.read<float>(m_addr + 40);
	}
	struct UAudioComponent GetPlayAudioComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UAudioComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AWindDirectionalSource
{
public:
	AWindDirectionalSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWindDirectionalSourceComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UWindDirectionalSourceComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionVectorParameter
{
public:
	UMaterialExpressionVectorParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetDefaultValue() {
		return memory.read<struct FLinearColor>(m_addr + 88);
	}
	bool GetbUseCustomPrimitiveData() {
		return memory.read<bool>(m_addr + 104);
	}
	char GetPrimitiveDataIndex() {
		return memory.read<char>(m_addr + 105);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstToggle
{
public:
	UInterpTrackInstToggle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETrackToggleAction GetAction() {
		return memory.read<enum class ETrackToggleAction>(m_addr + 40);
	}
	float GetLastUpdatePosition() {
		return memory.read<float>(m_addr + 44);
	}
	char GetbSavedActiveState() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackInstVisibility
{
public:
	UInterpTrackInstVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EVisibilityTrackAction GetAction() {
		return memory.read<enum class EVisibilityTrackAction>(m_addr + 40);
	}
	float GetLastUpdatePosition() {
		return memory.read<float>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackMove
{
public:
	UInterpTrackMove(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInterpCurveVector GetPosTrack() {
		return memory.read<struct FInterpCurveVector>(m_addr + 112);
	}
	struct FInterpCurveVector GetEulerTrack() {
		return memory.read<struct FInterpCurveVector>(m_addr + 136);
	}
	struct FInterpLookupTrack GetLookupTrack() {
		return memory.read<struct FInterpLookupTrack>(m_addr + 160);
	}
	struct FName GetLookAtGroupName() {
		return memory.read<struct FName>(m_addr + 176);
	}
	float GetLinCurveTension() {
		return memory.read<float>(m_addr + 184);
	}
	float GetAngCurveTension() {
		return memory.read<float>(m_addr + 188);
	}
	char GetbUseQuatInterpolation() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbShowArrowAtKeys() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbDisableMovement() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbShowTranslationOnCurveEd() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbShowRotationOnCurveEd() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbHide3DTrack() {
		return memory.read<char>(m_addr + 192);
	}
	enum class EInterpTrackMoveRotMode GetRotMode() {
		return memory.read<enum class EInterpTrackMoveRotMode>(m_addr + 196);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCloudSampleAttribute
{
public:
	UMaterialExpressionCloudSampleAttribute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackSlomo
{
public:
	UInterpTrackSlomo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDDX
{
public:
	UMaterialExpressionDDX(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetValue() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleKillHeight
{
public:
	UParticleModuleKillHeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetHeight() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 48);
	}
	char GetbAbsolute() {
		return memory.read<char>(m_addr + 96);
	}
	char GetbFloor() {
		return memory.read<char>(m_addr + 96);
	}
	char GetbApplyPSysScale() {
		return memory.read<char>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionRuntimeVirtualTextureReplace
{
public:
	UMaterialExpressionRuntimeVirtualTextureReplace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetDefault() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetVirtualTextureOutput() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackToggle
{
public:
	UInterpTrackToggle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FToggleTrackKey> GetToggleTrack() {
		return memory.read<struct TArray<struct FToggleTrackKey>>(m_addr + 112);
	}
	char GetbActivateSystemEachUpdate() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbActivateWithJustAttachedFlag() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbFireEventsWhenForwards() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbFireEventsWhenBackwards() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbFireEventsWhenJumpingForwards() {
		return memory.read<char>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleBeamSource
{
public:
	UParticleModuleBeamSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class Beam2SourceTargetMethod GetSourceMethod() {
		return memory.read<enum class Beam2SourceTargetMethod>(m_addr + 48);
	}
	struct FName GetSourceName() {
		return memory.read<struct FName>(m_addr + 52);
	}
	char GetbSourceAbsolute() {
		return memory.read<char>(m_addr + 60);
	}
	struct FRawDistributionVector GetSource() {
		return memory.read<struct FRawDistributionVector>(m_addr + 64);
	}
	char GetbLockSource() {
		return memory.read<char>(m_addr + 136);
	}
	enum class Beam2SourceTargetTangentMethod GetSourceTangentMethod() {
		return memory.read<enum class Beam2SourceTargetTangentMethod>(m_addr + 140);
	}
	struct FRawDistributionVector GetSourceTangent() {
		return memory.read<struct FRawDistributionVector>(m_addr + 144);
	}
	char GetbLockSourceTangent() {
		return memory.read<char>(m_addr + 216);
	}
	struct FRawDistributionFloat GetSourceStrength() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 224);
	}
	char GetbLockSourceStength() {
		return memory.read<char>(m_addr + 272);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackVectorProp
{
public:
	UInterpTrackVectorProp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPropertyName() {
		return memory.read<struct FName>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInterpTrackVisibility
{
public:
	UInterpTrackVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVisibilityTrackKey> GetVisibilityTrack() {
		return memory.read<struct TArray<struct FVisibilityTrackKey>>(m_addr + 112);
	}
	char GetbFireEventsWhenForwards() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbFireEventsWhenBackwards() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbFireEventsWhenJumpingForwards() {
		return memory.read<char>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UKismetGuidLibrary
{
public:
	UKismetGuidLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleColor_Seeded
{
public:
	UParticleModuleColor_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UKismetInputLibrary
{
public:
	UKismetInputLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UKismetMathLibrary
{
public:
	UKismetMathLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDeriveNormalZ
{
public:
	UMaterialExpressionDeriveNormalZ(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInXY() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UKismetNodeHelperLibrary
{
public:
	UKismetNodeHelperLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class APointLight
{
public:
	APointLight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPointLightComponent GetPointLightComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UPointLightComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleTypeDataMesh
{
public:
	UParticleModuleTypeDataMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMesh GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UStaticMesh(ptr_addr);
	}
	float GetLODSizeScale() {
		return memory.read<float>(m_addr + 64);
	}
	char GetbUseStaticMeshLODs() {
		return memory.read<char>(m_addr + 68);
	}
	char GetCastShadows() {
		return memory.read<char>(m_addr + 68);
	}
	char GetDoCollisions() {
		return memory.read<char>(m_addr + 68);
	}
	enum class EMeshScreenAlignment GetMeshAlignment() {
		return memory.read<enum class EMeshScreenAlignment>(m_addr + 69);
	}
	char GetbOverrideMaterial() {
		return memory.read<char>(m_addr + 70);
	}
	char GetbOverrideDefaultMotionBlurSettings() {
		return memory.read<char>(m_addr + 70);
	}
	char GetbEnableMotionBlur() {
		return memory.read<char>(m_addr + 70);
	}
	struct FRawDistributionVector GetRollPitchYawRange() {
		return memory.read<struct FRawDistributionVector>(m_addr + 72);
	}
	enum class EParticleAxisLock GetAxisLockOption() {
		return memory.read<enum class EParticleAxisLock>(m_addr + 144);
	}
	char GetbCameraFacing() {
		return memory.read<char>(m_addr + 145);
	}
	enum class EMeshCameraFacingUpAxis GetCameraFacingUpAxisOption() {
		return memory.read<enum class EMeshCameraFacingUpAxis>(m_addr + 146);
	}
	enum class EMeshCameraFacingOptions GetCameraFacingOption() {
		return memory.read<enum class EMeshCameraFacingOptions>(m_addr + 147);
	}
	char GetbApplyParticleRotationAsSpin() {
		return memory.read<char>(m_addr + 148);
	}
	char GetbFaceCameraDirectionRatherThanPosition() {
		return memory.read<char>(m_addr + 148);
	}
	char GetbCollisionsConsiderPartilceSize() {
		return memory.read<char>(m_addr + 148);
	}

private:
	std::uint64_t m_addr = 0;
};


class UKismetStringLibrary
{
public:
	UKismetStringLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ANote
{
public:
	ANote(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULevel
{
public:
	ULevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetOwningWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UWorld(ptr_addr);
	}
	struct UModel GetModel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct UModel(ptr_addr);
	}
	struct TArray<struct UModelComponent> GetModelComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct TArray<struct UModelComponent>(ptr_addr);
	}
	struct ULevelActorContainer GetActorCluster() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct ULevelActorContainer(ptr_addr);
	}
	int32_t GetNumTextureStreamingUnbuiltComponents() {
		return memory.read<int32_t>(m_addr + 224);
	}
	int32_t GetNumTextureStreamingDirtyResources() {
		return memory.read<int32_t>(m_addr + 228);
	}
	struct ALevelScriptActor GetLevelScriptActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct ALevelScriptActor(ptr_addr);
	}
	struct ANavigationObjectBase GetNavListStart() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct ANavigationObjectBase(ptr_addr);
	}
	struct ANavigationObjectBase GetNavListEnd() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct ANavigationObjectBase(ptr_addr);
	}
	struct TArray<struct UNavigationDataChunk> GetNavDataChunks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct TArray<struct UNavigationDataChunk>(ptr_addr);
	}
	float GetLightmapTotalSize() {
		return memory.read<float>(m_addr + 272);
	}
	float GetShadowmapTotalSize() {
		return memory.read<float>(m_addr + 276);
	}
	struct TArray<struct FVector> GetStaticNavigableGeometry() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 280);
	}
	struct TArray<struct FGuid> GetStreamingTextureGuids() {
		return memory.read<struct TArray<struct FGuid>>(m_addr + 296);
	}
	struct FGuid GetLevelBuildDataId() {
		return memory.read<struct FGuid>(m_addr + 464);
	}
	struct UMapBuildDataRegistry GetMapBuildData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 480);
		return struct UMapBuildDataRegistry(ptr_addr);
	}
	struct FIntVector GetLightBuildLevelOffset() {
		return memory.read<struct FIntVector>(m_addr + 488);
	}
	char GetbIsLightingScenario() {
		return memory.read<char>(m_addr + 500);
	}
	char GetbTextureStreamingRotationChanged() {
		return memory.read<char>(m_addr + 500);
	}
	char GetbStaticComponentsRegisteredInStreamingManager() {
		return memory.read<char>(m_addr + 500);
	}
	char GetbIsVisible() {
		return memory.read<char>(m_addr + 500);
	}
	struct AWorldSettings GetWorldSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct AWorldSettings(ptr_addr);
	}
	enum class ELightMapCooking GetLightMapCooking() {
		return memory.read<enum class ELightMapCooking>(m_addr + 616);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}
	struct TArray<struct FReplicatedStaticActorDestructionInfo> GetDestroyedReplicatedStaticActors() {
		return memory.read<struct TArray<struct FReplicatedStaticActorDestructionInfo>>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULightmappedSurfaceCollection
{
public:
	ULightmappedSurfaceCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UModel GetSourceModel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UModel(ptr_addr);
	}
	struct TArray<int32_t> GetSurfaces() {
		return memory.read<struct TArray<int32_t>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelActorContainer
{
public:
	ULevelActorContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelScriptBlueprint
{
public:
	ULevelScriptBlueprint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULevelStreamingDynamic
{
public:
	ULevelStreamingDynamic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbInitiallyLoaded() {
		return memory.read<char>(m_addr + 336);
	}
	char GetbInitiallyVisible() {
		return memory.read<char>(m_addr + 336);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSceneTexture
{
public:
	UMaterialExpressionSceneTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetCoordinates() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	enum class ESceneTextureId GetSceneTextureId() {
		return memory.read<enum class ESceneTextureId>(m_addr + 84);
	}
	bool GetbFiltered() {
		return memory.read<bool>(m_addr + 85);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVolumetricCloudComponent
{
public:
	UVolumetricCloudComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLayerBottomAltitude() {
		return memory.read<float>(m_addr + 520);
	}
	float GetLayerHeight() {
		return memory.read<float>(m_addr + 524);
	}
	float GetTracingStartMaxDistance() {
		return memory.read<float>(m_addr + 528);
	}
	float GetTracingMaxDistance() {
		return memory.read<float>(m_addr + 532);
	}
	float GetPlanetRadius() {
		return memory.read<float>(m_addr + 536);
	}
	struct FColor GetGroundAlbedo() {
		return memory.read<struct FColor>(m_addr + 540);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UMaterialInterface(ptr_addr);
	}
	char GetbUsePerSampleAtmosphericLightTransmittance() {
		return memory.read<char>(m_addr + 552);
	}
	float GetSkyLightCloudBottomOcclusion() {
		return memory.read<float>(m_addr + 556);
	}
	float GetViewSampleCountScale() {
		return memory.read<float>(m_addr + 560);
	}
	float GetReflectionSampleCountScale() {
		return memory.read<float>(m_addr + 564);
	}
	float GetShadowViewSampleCountScale() {
		return memory.read<float>(m_addr + 568);
	}
	float GetShadowReflectionSampleCountScale() {
		return memory.read<float>(m_addr + 572);
	}
	float GetShadowTracingDistance() {
		return memory.read<float>(m_addr + 576);
	}
	float GetStopTracingTransmittanceThreshold() {
		return memory.read<float>(m_addr + 580);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelStreamingPersistent
{
public:
	ULevelStreamingPersistent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULightMapTexture2D
{
public:
	ULightMapTexture2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleKillBox
{
public:
	UParticleModuleKillBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetLowerLeftCorner() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	struct FRawDistributionVector GetUpperRightCorner() {
		return memory.read<struct FRawDistributionVector>(m_addr + 120);
	}
	char GetbAbsolute() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbKillInside() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbAxisAlignedAndFixedSize() {
		return memory.read<char>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULightMapVirtualTexture2D
{
public:
	ULightMapVirtualTexture2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int8_t> GetTypeToLayer() {
		return memory.read<struct TArray<int8_t>>(m_addr + 416);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionClearCoatNormalCustomOutput
{
public:
	UMaterialExpressionClearCoatNormalCustomOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALightmassImportanceVolume
{
public:
	ALightmassImportanceVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ALightmassMobileNoShadowProbeVolume
{
public:
	ALightmassMobileNoShadowProbeVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetShadowMask() {
		return memory.read<float>(m_addr + 600);
	}
	float GetShadowBlend() {
		return memory.read<float>(m_addr + 604);
	}

private:
	std::uint64_t m_addr = 0;
};


class ASceneCapture
{
public:
	ASceneCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMeshComponent GetMeshComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct USceneComponent GetSceneComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALightmassPortal
{
public:
	ALightmassPortal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULightmassPortalComponent GetPortalComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct ULightmassPortalComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionRuntimeVirtualTextureSample
{
public:
	UMaterialExpressionRuntimeVirtualTextureSample(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetCoordinates() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetWorldPosition() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetMipValue() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	struct URuntimeVirtualTexture GetVirtualTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct URuntimeVirtualTexture(ptr_addr);
	}
	enum class ERuntimeVirtualTextureMaterialType GetMaterialType() {
		return memory.read<enum class ERuntimeVirtualTextureMaterialType>(m_addr + 136);
	}
	bool GetbSinglePhysicalSpace() {
		return memory.read<bool>(m_addr + 137);
	}
	bool GetbAdaptive() {
		return memory.read<bool>(m_addr + 138);
	}
	enum class ERuntimeVirtualTextureMipValueMode GetMipValueMode() {
		return memory.read<enum class ERuntimeVirtualTextureMipValueMode>(m_addr + 139);
	}
	enum class ERuntimeVirtualTextureTextureAddressMode GetTextureAddressMode() {
		return memory.read<enum class ERuntimeVirtualTextureTextureAddressMode>(m_addr + 140);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULODSyncInterface
{
public:
	ULODSyncInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMapBuildDataRegistry
{
public:
	UMapBuildDataRegistry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELightingBuildQuality GetLevelLightingQuality() {
		return memory.read<enum class ELightingBuildQuality>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionActorPositionWS
{
public:
	UMaterialExpressionActorPositionWS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionAdd
{
public:
	UMaterialExpressionAdd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	float GetConstA() {
		return memory.read<float>(m_addr + 104);
	}
	float GetConstB() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionArctangent2Fast
{
public:
	UMaterialExpressionArctangent2Fast(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetY() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetX() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionAntialiasedTextureMask
{
public:
	UMaterialExpressionAntialiasedTextureMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetThreshold() {
		return memory.read<float>(m_addr + 128);
	}
	enum class ETextureColorChannel GetChannel() {
		return memory.read<enum class ETextureColorChannel>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionFmod
{
public:
	UMaterialExpressionFmod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionArccosine
{
public:
	UMaterialExpressionArccosine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionArcsineFast
{
public:
	UMaterialExpressionArcsineFast(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTransformPosition
{
public:
	UMaterialExpressionTransformPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	enum class EMaterialPositionTransformSource GetTransformSourceType() {
		return memory.read<enum class EMaterialPositionTransformSource>(m_addr + 84);
	}
	enum class EMaterialPositionTransformSource GetTransformType() {
		return memory.read<enum class EMaterialPositionTransformSource>(m_addr + 85);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionArctangent
{
public:
	UMaterialExpressionArctangent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionAtmosphericFogColor
{
public:
	UMaterialExpressionAtmosphericFogColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetWorldPosition() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLightmassReplace
{
public:
	UMaterialExpressionLightmassReplace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetRealtime() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetLightmass() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionAtmosphericLightVector
{
public:
	UMaterialExpressionAtmosphericLightVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionBentNormalCustomOutput
{
public:
	UMaterialExpressionBentNormalCustomOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class ATriggerCapsule
{
public:
	ATriggerCapsule(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavigationDataChunk
{
public:
	UNavigationDataChunk(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNavigationDataName() {
		return memory.read<struct FName>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationPrimitiveCylinder_Seeded
{
public:
	UParticleModuleLocationPrimitiveCylinder_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};


class APostProcessVolume
{
public:
	APostProcessVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPostProcessSettings GetSettings() {
		return memory.read<struct FPostProcessSettings>(m_addr + 608);
	}
	float GetPriority() {
		return memory.read<float>(m_addr + 2096);
	}
	float GetBlendRadius() {
		return memory.read<float>(m_addr + 2100);
	}
	float GetBlendWeight() {
		return memory.read<float>(m_addr + 2104);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 2108);
	}
	char GetbUnbound() {
		return memory.read<char>(m_addr + 2108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionBlackBody
{
public:
	UMaterialExpressionBlackBody(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetTemp() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleColorOverLife
{
public:
	UParticleModuleColorOverLife(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetColorOverLife() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	struct FRawDistributionFloat GetAlphaOverLife() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 120);
	}
	char GetbClampAlpha() {
		return memory.read<char>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionBlendMaterialAttributes
{
public:
	UMaterialExpressionBlendMaterialAttributes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMaterialAttributesInput GetA() {
		return memory.read<struct FMaterialAttributesInput>(m_addr + 64);
	}
	struct FMaterialAttributesInput GetB() {
		return memory.read<struct FMaterialAttributesInput>(m_addr + 88);
	}
	struct FExpressionInput GetAlpha() {
		return memory.read<struct FExpressionInput>(m_addr + 112);
	}
	enum class EMaterialAttributeBlend GetPixelAttributeBlendType() {
		return memory.read<enum class EMaterialAttributeBlend>(m_addr + 132);
	}
	enum class EMaterialAttributeBlend GetVertexAttributeBlendType() {
		return memory.read<enum class EMaterialAttributeBlend>(m_addr + 133);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionBreakMaterialAttributes
{
public:
	UMaterialExpressionBreakMaterialAttributes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMaterialAttributesInput GetMaterialAttributes() {
		return memory.read<struct FMaterialAttributesInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class APlanarReflection
{
public:
	APlanarReflection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPlanarReflectionComponent GetPlanarReflectionComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UPlanarReflectionComponent(ptr_addr);
	}
	bool GetbShowPreviewPlane() {
		return memory.read<bool>(m_addr + 568);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCeil
{
public:
	UMaterialExpressionCeil(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProxyLODMeshSimplificationSettings
{
public:
	UProxyLODMeshSimplificationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetProxyLODMeshReductionModuleName() {
		return memory.read<struct FName>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParameter
{
public:
	UMaterialExpressionParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 64);
	}
	struct FGuid GetExpressionGUID() {
		return memory.read<struct FGuid>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSaturate
{
public:
	UMaterialExpressionSaturate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionChannelMaskParameter
{
public:
	UMaterialExpressionChannelMaskParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EChannelMaskParameterColor GetMaskChannel() {
		return memory.read<enum class EChannelMaskParameterColor>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionConstant
{
public:
	UMaterialExpressionConstant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetR() {
		return memory.read<float>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionConstant2Vector
{
public:
	UMaterialExpressionConstant2Vector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetR() {
		return memory.read<float>(m_addr + 64);
	}
	float GetG() {
		return memory.read<float>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionConstantBiasScale
{
public:
	UMaterialExpressionConstantBiasScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	float GetBias() {
		return memory.read<float>(m_addr + 84);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionClearCoatReflectionOutput
{
public:
	UMaterialExpressionClearCoatReflectionOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTwoSidedSign
{
public:
	UMaterialExpressionTwoSidedSign(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionScalarParameter
{
public:
	UMaterialExpressionScalarParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDefaultValue() {
		return memory.read<float>(m_addr + 88);
	}
	bool GetbUseCustomPrimitiveData() {
		return memory.read<bool>(m_addr + 92);
	}
	char GetPrimitiveDataIndex() {
		return memory.read<char>(m_addr + 93);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDDY
{
public:
	UMaterialExpressionDDY(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetValue() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDecalMipmapLevel
{
public:
	UMaterialExpressionDecalMipmapLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetTextureSize() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	float GetConstWidth() {
		return memory.read<float>(m_addr + 84);
	}
	float GetConstHeight() {
		return memory.read<float>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDeltaTime
{
public:
	UMaterialExpressionDeltaTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleAccelerationDragScaleOverLife
{
public:
	UParticleModuleAccelerationDragScaleOverLife(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDistributionFloat GetDragScale() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UDistributionFloat(ptr_addr);
	}
	struct FRawDistributionFloat GetDragScaleRaw() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDepthFade
{
public:
	UMaterialExpressionDepthFade(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInOpacity() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetFadeDistance() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	float GetOpacityDefault() {
		return memory.read<float>(m_addr + 104);
	}
	float GetFadeDistanceDefault() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDesaturation
{
public:
	UMaterialExpressionDesaturation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetFraction() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FLinearColor GetLuminanceFactors() {
		return memory.read<struct FLinearColor>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlatformEventsComponent
{
public:
	UPlatformEventsComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetPlatformChangedToLaptopModeDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 176);
	}
	struct FMulticastInlineDelegate GetPlatformChangedToTabletModeDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDistance
{
public:
	UMaterialExpressionDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class URendererOverrideSettings
{
public:
	URendererOverrideSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbSupportAllShaderPermutations() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbForceRecomputeTangents() {
		return memory.read<char>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDistanceCullFade
{
public:
	UMaterialExpressionDistanceCullFade(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionWorldPosition
{
public:
	UMaterialExpressionWorldPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWorldPositionIncludedOffsets GetWorldPositionShaderOffset() {
		return memory.read<enum class EWorldPositionIncludedOffsets>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDistanceFieldsRenderingSwitch
{
public:
	UMaterialExpressionDistanceFieldsRenderingSwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetNo() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetYes() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDistanceToNearestSurface
{
public:
	UMaterialExpressionDistanceToNearestSurface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput Getposition() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionDynamicParameter
{
public:
	UMaterialExpressionDynamicParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetParamNames() {
		return memory.read<struct TArray<struct FString>>(m_addr + 64);
	}
	struct FLinearColor GetDefaultValue() {
		return memory.read<struct FLinearColor>(m_addr + 80);
	}
	uint32_t GetParameterIndex() {
		return memory.read<uint32_t>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionEyeAdaptation
{
public:
	UMaterialExpressionEyeAdaptation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionFeatureLevelSwitch
{
public:
	UMaterialExpressionFeatureLevelSwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetDefault() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionFontSample
{
public:
	UMaterialExpressionFontSample(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFont GetFont() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UFont(ptr_addr);
	}
	int32_t GetFontTexturePage() {
		return memory.read<int32_t>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleSpriteEmitter
{
public:
	UParticleSpriteEmitter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVirtualTexturePoolConfig
{
public:
	UVirtualTexturePoolConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDefaultSizeInMegabyte() {
		return memory.read<int32_t>(m_addr + 40);
	}
	struct TArray<struct FVirtualTextureSpacePoolConfig> GetPools() {
		return memory.read<struct TArray<struct FVirtualTextureSpacePoolConfig>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionFresnel
{
public:
	UMaterialExpressionFresnel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetExponentIn() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	float GetExponent() {
		return memory.read<float>(m_addr + 84);
	}
	struct FExpressionInput GetBaseReflectFractionIn() {
		return memory.read<struct FExpressionInput>(m_addr + 88);
	}
	float GetBaseReflectFraction() {
		return memory.read<float>(m_addr + 108);
	}
	struct FExpressionInput GetNormal() {
		return memory.read<struct FExpressionInput>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionFunctionOutput
{
public:
	UMaterialExpressionFunctionOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetOutputName() {
		return memory.read<struct FName>(m_addr + 64);
	}
	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 72);
	}
	int32_t GetSortPriority() {
		return memory.read<int32_t>(m_addr + 88);
	}
	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 92);
	}
	char GetbLastPreviewed() {
		return memory.read<char>(m_addr + 112);
	}
	struct FGuid GetID() {
		return memory.read<struct FGuid>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVectorFieldComponent
{
public:
	UVectorFieldComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVectorField GetVectorField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UVectorField(ptr_addr);
	}
	float GetIntensity() {
		return memory.read<float>(m_addr + 1144);
	}
	float GetTightness() {
		return memory.read<float>(m_addr + 1148);
	}
	char GetbPreviewVectorField() {
		return memory.read<char>(m_addr + 1152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionGetMaterialAttributes
{
public:
	UMaterialExpressionGetMaterialAttributes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMaterialAttributesInput GetMaterialAttributes() {
		return memory.read<struct FMaterialAttributesInput>(m_addr + 64);
	}
	struct TArray<struct FGuid> GetAttributeGetTypes() {
		return memory.read<struct TArray<struct FGuid>>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class USceneCaptureComponent
{
public:
	USceneCaptureComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESceneCapturePrimitiveRenderMode GetPrimitiveRenderMode() {
		return memory.read<enum class ESceneCapturePrimitiveRenderMode>(m_addr + 520);
	}
	enum class ESceneCaptureSource GetCaptureSource() {
		return memory.read<enum class ESceneCaptureSource>(m_addr + 521);
	}
	char GetbCaptureEveryFrame() {
		return memory.read<char>(m_addr + 522);
	}
	char GetbCaptureOnMovement() {
		return memory.read<char>(m_addr + 522);
	}
	bool GetbAlwaysPersistRenderingState() {
		return memory.read<bool>(m_addr + 523);
	}
	struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>> GetHiddenComponents() {
		return memory.read<struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>>>(m_addr + 528);
	}
	struct TArray<struct AActor> GetHiddenActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct TArray<struct AActor>(ptr_addr);
	}
	struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>> GetShowOnlyComponents() {
		return memory.read<struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>>>(m_addr + 560);
	}
	struct TArray<struct AActor> GetShowOnlyActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct TArray<struct AActor>(ptr_addr);
	}
	float GetLODDistanceFactor() {
		return memory.read<float>(m_addr + 592);
	}
	float GetMaxViewDistanceOverride() {
		return memory.read<float>(m_addr + 596);
	}
	int32_t GetCaptureSortPriority() {
		return memory.read<int32_t>(m_addr + 600);
	}
	bool GetbUseRayTracingIfEnabled() {
		return memory.read<bool>(m_addr + 604);
	}
	struct TArray<struct FEngineShowFlagsSetting> GetShowFlagSettings() {
		return memory.read<struct TArray<struct FEngineShowFlagsSetting>>(m_addr + 608);
	}
	struct FString GetProfilingEventName() {
		return memory.read<struct FString>(m_addr + 672);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionGIReplace
{
public:
	UMaterialExpressionGIReplace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetDefault() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetStaticIndirect() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetDynamicIndirect() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticleDirection
{
public:
	UMaterialExpressionParticleDirection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionHairColor
{
public:
	UMaterialExpressionHairColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetMelanin() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetRedness() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetDyeColor() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionIf
{
public:
	UMaterialExpressionIf(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetAGreaterThanB() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	struct FExpressionInput GetAEqualsB() {
		return memory.read<struct FExpressionInput>(m_addr + 124);
	}
	struct FExpressionInput GetALessThanB() {
		return memory.read<struct FExpressionInput>(m_addr + 144);
	}
	float GetEqualsThreshold() {
		return memory.read<float>(m_addr + 164);
	}
	float GetConstB() {
		return memory.read<float>(m_addr + 168);
	}
	float GetConstAEqualsB() {
		return memory.read<float>(m_addr + 172);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStereoLayerShapeEquirect
{
public:
	UStereoLayerShapeEquirect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBox2D GetLeftUVRect() {
		return memory.read<struct FBox2D>(m_addr + 40);
	}
	struct FBox2D GetRightUVRect() {
		return memory.read<struct FBox2D>(m_addr + 60);
	}
	struct FVector2D GetLeftScale() {
		return memory.read<struct FVector2D>(m_addr + 80);
	}
	struct FVector2D GetRightScale() {
		return memory.read<struct FVector2D>(m_addr + 88);
	}
	struct FVector2D GetLeftBias() {
		return memory.read<struct FVector2D>(m_addr + 96);
	}
	struct FVector2D GetRightBias() {
		return memory.read<struct FVector2D>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCurvatureOutput
{
public:
	UMaterialExpressionCurvatureOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSheenOutput
{
public:
	UMaterialExpressionSheenOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSubUVMovie
{
public:
	UParticleModuleSubUVMovie(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbUseEmitterTime() {
		return memory.read<char>(m_addr + 112);
	}
	struct FRawDistributionFloat GetFrameRate() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 120);
	}
	int32_t GetStartingFrame() {
		return memory.read<int32_t>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionClearCoatOutput
{
public:
	UMaterialExpressionClearCoatOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavRelevantInterface
{
public:
	UNavRelevantInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPhysicsConstraintComponent
{
public:
	UPhysicsConstraintComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetConstraintActor1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct AActor(ptr_addr);
	}
	struct FConstrainComponentPropName GetComponentName1() {
		return memory.read<struct FConstrainComponentPropName>(m_addr + 528);
	}
	struct AActor GetConstraintActor2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 536);
		return struct AActor(ptr_addr);
	}
	struct FConstrainComponentPropName GetComponentName2() {
		return memory.read<struct FConstrainComponentPropName>(m_addr + 544);
	}
	struct UPhysicsConstraintTemplate GetConstraintSetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UPhysicsConstraintTemplate(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnConstraintBroken() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 576);
	}
	struct FConstraintInstance GetConstraintInstance() {
		return memory.read<struct FConstraintInstance>(m_addr + 592);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionClearCoatTintOutput
{
public:
	UMaterialExpressionClearCoatTintOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMicroTransactionBase
{
public:
	UMicroTransactionBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPurchaseInfo> GetAvailableProducts() {
		return memory.read<struct TArray<struct FPurchaseInfo>>(m_addr + 56);
	}
	struct FString GetLastError() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FString GetLastErrorSolution() {
		return memory.read<struct FString>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionClearCoatNormalOutput
{
public:
	UMaterialExpressionClearCoatNormalOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionStaticBoolParameter
{
public:
	UMaterialExpressionStaticBoolParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetDefaultValue() {
		return memory.read<char>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTranslucentParamOutput
{
public:
	UMaterialExpressionTranslucentParamOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTranslucentColorOutput
{
public:
	UMaterialExpressionTranslucentColorOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundSubmix
{
public:
	USoundSubmix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbMuteWhenBackgrounded() {
		return memory.read<char>(m_addr + 64);
	}
	struct TArray<struct USoundEffectSubmixPreset> GetSubmixEffectChain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct TArray<struct USoundEffectSubmixPreset>(ptr_addr);
	}
	struct USoundfieldEncodingSettingsBase GetAmbisonicsPluginSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct USoundfieldEncodingSettingsBase(ptr_addr);
	}
	int32_t GetEnvelopeFollowerAttackTime() {
		return memory.read<int32_t>(m_addr + 96);
	}
	int32_t GetEnvelopeFollowerReleaseTime() {
		return memory.read<int32_t>(m_addr + 100);
	}
	enum class EGainParamMode GetGainMode() {
		return memory.read<enum class EGainParamMode>(m_addr + 104);
	}
	float GetOutputVolume() {
		return memory.read<float>(m_addr + 108);
	}
	float GetWetLevel() {
		return memory.read<float>(m_addr + 112);
	}
	float GetDryLevel() {
		return memory.read<float>(m_addr + 116);
	}
	struct FSoundModulationDestinationSettings GetOutputVolumeModulation() {
		return memory.read<struct FSoundModulationDestinationSettings>(m_addr + 120);
	}
	struct FSoundModulationDestinationSettings GetWetLevelModulation() {
		return memory.read<struct FSoundModulationDestinationSettings>(m_addr + 136);
	}
	struct FSoundModulationDestinationSettings GetDryLevelModulation() {
		return memory.read<struct FSoundModulationDestinationSettings>(m_addr + 152);
	}
	struct FMulticastInlineDelegate GetOnSubmixRecordedFileDone() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionNoEnvmapOutput
{
public:
	UMaterialExpressionNoEnvmapOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionMobileShadowMaskOutput
{
public:
	UMaterialExpressionMobileShadowMaskOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTexture2DDynamic
{
public:
	UTexture2DDynamic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPixelFormat GetFormat() {
		return memory.read<enum class EPixelFormat>(m_addr + 384);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSSRMaxRoughnessOutput
{
public:
	UMaterialExpressionSSRMaxRoughnessOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSSRNormalWarpOutput
{
public:
	UMaterialExpressionSSRNormalWarpOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSSAOWeightOutput
{
public:
	UMaterialExpressionSSAOWeightOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNodeMappingProviderInterface
{
public:
	UNodeMappingProviderInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionCustomSpecularIBLOutput
{
public:
	UMaterialExpressionCustomSpecularIBLOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLinearInterpolate
{
public:
	UMaterialExpressionLinearInterpolate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetAlpha() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	float GetConstA() {
		return memory.read<float>(m_addr + 124);
	}
	float GetConstB() {
		return memory.read<float>(m_addr + 128);
	}
	float GetConstAlpha() {
		return memory.read<float>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLogarithm10
{
public:
	UMaterialExpressionLogarithm10(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetX() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionMakeMaterialAttributes
{
public:
	UMaterialExpressionMakeMaterialAttributes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetBaseColor() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetMetallic() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetSpecular() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	struct FExpressionInput GetRoughness() {
		return memory.read<struct FExpressionInput>(m_addr + 124);
	}
	struct FExpressionInput GetAnisotropy() {
		return memory.read<struct FExpressionInput>(m_addr + 144);
	}
	struct FExpressionInput GetEmissiveColor() {
		return memory.read<struct FExpressionInput>(m_addr + 164);
	}
	struct FExpressionInput GetOpacity() {
		return memory.read<struct FExpressionInput>(m_addr + 184);
	}
	struct FExpressionInput GetOpacityMask() {
		return memory.read<struct FExpressionInput>(m_addr + 204);
	}
	struct FExpressionInput GetNormal() {
		return memory.read<struct FExpressionInput>(m_addr + 224);
	}
	struct FExpressionInput GetTangent() {
		return memory.read<struct FExpressionInput>(m_addr + 244);
	}
	struct FExpressionInput GetWorldPositionOffset() {
		return memory.read<struct FExpressionInput>(m_addr + 264);
	}
	struct FExpressionInput GetWorldDisplacement() {
		return memory.read<struct FExpressionInput>(m_addr + 284);
	}
	struct FExpressionInput GetTessellationMultiplier() {
		return memory.read<struct FExpressionInput>(m_addr + 304);
	}
	struct FExpressionInput GetSubsurfaceColor() {
		return memory.read<struct FExpressionInput>(m_addr + 324);
	}
	struct FExpressionInput GetClearCoat() {
		return memory.read<struct FExpressionInput>(m_addr + 344);
	}
	struct FExpressionInput GetClearCoatRoughness() {
		return memory.read<struct FExpressionInput>(m_addr + 364);
	}
	struct FExpressionInput GetAmbientOcclusion() {
		return memory.read<struct FExpressionInput>(m_addr + 384);
	}
	struct FExpressionInput GetRefraction() {
		return memory.read<struct FExpressionInput>(m_addr + 404);
	}
	struct FExpressionInput GetCustomizedUVs[8]() {
		return memory.read<struct FExpressionInput>(m_addr + 424);
	}
	struct FExpressionInput GetPixelDepthOffset() {
		return memory.read<struct FExpressionInput>(m_addr + 584);
	}
	struct FExpressionInput GetShadingModel() {
		return memory.read<struct FExpressionInput>(m_addr + 604);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSign
{
public:
	UMaterialExpressionSign(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSobol
{
public:
	UMaterialExpressionSobol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetCell() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetIndex() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetSeed() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	uint32_t GetConstIndex() {
		return memory.read<uint32_t>(m_addr + 124);
	}
	struct FVector2D GetConstSeed() {
		return memory.read<struct FVector2D>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionMapARPassthroughCameraUV
{
public:
	UMaterialExpressionMapARPassthroughCameraUV(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetCoordinates() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionMaterialAttributeLayers
{
public:
	UMaterialExpressionMaterialAttributeLayers(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 64);
	}
	struct FGuid GetExpressionGUID() {
		return memory.read<struct FGuid>(m_addr + 72);
	}
	struct FMaterialAttributesInput GetInput() {
		return memory.read<struct FMaterialAttributesInput>(m_addr + 88);
	}
	struct FMaterialLayersFunctions GetDefaultLayers() {
		return memory.read<struct FMaterialLayersFunctions>(m_addr + 112);
	}
	struct TArray<struct UMaterialExpressionMaterialFunctionCall> GetLayerCallers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct TArray<struct UMaterialExpressionMaterialFunctionCall>(ptr_addr);
	}
	int32_t GetNumActiveLayerCallers() {
		return memory.read<int32_t>(m_addr + 192);
	}
	struct TArray<struct UMaterialExpressionMaterialFunctionCall> GetBlendCallers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct TArray<struct UMaterialExpressionMaterialFunctionCall>(ptr_addr);
	}
	int32_t GetNumActiveBlendCallers() {
		return memory.read<int32_t>(m_addr + 216);
	}
	bool GetbIsLayerGraphBuilt() {
		return memory.read<bool>(m_addr + 220);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionMaterialFunctionCall
{
public:
	UMaterialExpressionMaterialFunctionCall(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialFunctionInterface GetMaterialFunction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UMaterialFunctionInterface(ptr_addr);
	}
	struct FMaterialParameterInfo GetFunctionParameterInfo() {
		return memory.read<struct FMaterialParameterInfo>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionMaterialLayerOutput
{
public:
	UMaterialExpressionMaterialLayerOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionStep
{
public:
	UMaterialExpressionStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetY() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetX() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	float GetConstY() {
		return memory.read<float>(m_addr + 104);
	}
	float GetConstX() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionMax
{
public:
	UMaterialExpressionMax(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	float GetConstA() {
		return memory.read<float>(m_addr + 104);
	}
	float GetConstB() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionMin
{
public:
	UMaterialExpressionMin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	float GetConstA() {
		return memory.read<float>(m_addr + 104);
	}
	float GetConstB() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionMultiply
{
public:
	UMaterialExpressionMultiply(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	float GetConstA() {
		return memory.read<float>(m_addr + 104);
	}
	float GetConstB() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionNamedRerouteUsage
{
public:
	UMaterialExpressionNamedRerouteUsage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialExpressionNamedRerouteDeclaration GetDeclaration() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UMaterialExpressionNamedRerouteDeclaration(ptr_addr);
	}
	struct FGuid GetDeclarationGuid() {
		return memory.read<struct FGuid>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionNoise
{
public:
	UMaterialExpressionNoise(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput Getposition() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetFilterWidth() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 104);
	}
	int32_t GetQuality() {
		return memory.read<int32_t>(m_addr + 108);
	}
	enum class ENoiseFunction GetNoiseFunction() {
		return memory.read<enum class ENoiseFunction>(m_addr + 112);
	}
	char GetbTurbulence() {
		return memory.read<char>(m_addr + 116);
	}
	int32_t GetLevels() {
		return memory.read<int32_t>(m_addr + 120);
	}
	float GetOutputMin() {
		return memory.read<float>(m_addr + 124);
	}
	float GetOutputMax() {
		return memory.read<float>(m_addr + 128);
	}
	float GetLevelScale() {
		return memory.read<float>(m_addr + 132);
	}
	char GetbTiling() {
		return memory.read<char>(m_addr + 136);
	}
	uint32_t GetRepeatSize() {
		return memory.read<uint32_t>(m_addr + 140);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionNormalize
{
public:
	UMaterialExpressionNormalize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetVectorInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionObjectOrientation
{
public:
	UMaterialExpressionObjectOrientation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionObjectPositionWS
{
public:
	UMaterialExpressionObjectPositionWS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVOIPTalker
{
public:
	UVOIPTalker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVoiceSettings GetSettings() {
		return memory.read<struct FVoiceSettings>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionObjectRadius
{
public:
	UMaterialExpressionObjectRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSceneDepth
{
public:
	UMaterialExpressionSceneDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMaterialSceneAttributeInputMode GetInputMode() {
		return memory.read<enum class EMaterialSceneAttributeInputMode>(m_addr + 64);
	}
	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 68);
	}
	struct FExpressionInput GetCoordinates() {
		return memory.read<struct FExpressionInput>(m_addr + 88);
	}
	struct FVector2D GetConstInput() {
		return memory.read<struct FVector2D>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionOneMinus
{
public:
	UMaterialExpressionOneMinus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticleColor
{
public:
	UMaterialExpressionParticleColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USkyAtmosphereComponent
{
public:
	USkyAtmosphereComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESkyAtmosphereTransformMode GetTransformMode() {
		return memory.read<enum class ESkyAtmosphereTransformMode>(m_addr + 520);
	}
	float GetBottomRadius() {
		return memory.read<float>(m_addr + 524);
	}
	struct FColor GetGroundAlbedo() {
		return memory.read<struct FColor>(m_addr + 528);
	}
	float GetAtmosphereHeight() {
		return memory.read<float>(m_addr + 532);
	}
	float GetMultiScatteringFactor() {
		return memory.read<float>(m_addr + 536);
	}
	float GetTraceSampleCountScale() {
		return memory.read<float>(m_addr + 540);
	}
	float GetRayleighScatteringScale() {
		return memory.read<float>(m_addr + 544);
	}
	struct FLinearColor GetRayleighScattering() {
		return memory.read<struct FLinearColor>(m_addr + 548);
	}
	float GetRayleighExponentialDistribution() {
		return memory.read<float>(m_addr + 564);
	}
	float GetMieScatteringScale() {
		return memory.read<float>(m_addr + 568);
	}
	struct FLinearColor GetMieScattering() {
		return memory.read<struct FLinearColor>(m_addr + 572);
	}
	float GetMieAbsorptionScale() {
		return memory.read<float>(m_addr + 588);
	}
	struct FLinearColor GetMieAbsorption() {
		return memory.read<struct FLinearColor>(m_addr + 592);
	}
	float GetMieAnisotropy() {
		return memory.read<float>(m_addr + 608);
	}
	float GetMieExponentialDistribution() {
		return memory.read<float>(m_addr + 612);
	}
	float GetOtherAbsorptionScale() {
		return memory.read<float>(m_addr + 616);
	}
	struct FLinearColor GetOtherAbsorption() {
		return memory.read<struct FLinearColor>(m_addr + 620);
	}
	struct FTentDistribution GetOtherTentDistribution() {
		return memory.read<struct FTentDistribution>(m_addr + 636);
	}
	struct FLinearColor GetSkyLuminanceFactor() {
		return memory.read<struct FLinearColor>(m_addr + 648);
	}
	float GetAerialPespectiveViewDistanceScale() {
		return memory.read<float>(m_addr + 664);
	}
	float GetHeightFogContribution() {
		return memory.read<float>(m_addr + 668);
	}
	float GetTransmittanceMinLightElevationAngle() {
		return memory.read<float>(m_addr + 672);
	}
	float GetAerialPerspectiveStartDepth() {
		return memory.read<float>(m_addr + 676);
	}
	struct FGuid GetbStaticLightingBuiltGUID() {
		return memory.read<struct FGuid>(m_addr + 716);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVisualLoggerAutomationTests
{
public:
	UVisualLoggerAutomationTests(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticleMacroUV
{
public:
	UMaterialExpressionParticleMacroUV(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTireType
{
public:
	UTireType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrictionScale() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticleRadius
{
public:
	UMaterialExpressionParticleRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UObjectTraceWorldSubsystem
{
public:
	UObjectTraceWorldSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticleRelativeTime
{
public:
	UMaterialExpressionParticleRelativeTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleRotationRateBase
{
public:
	UParticleModuleRotationRateBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticleSize
{
public:
	UMaterialExpressionParticleSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticleSpeed
{
public:
	UMaterialExpressionParticleSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticleSubUV
{
public:
	UMaterialExpressionParticleSubUV(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbBlend() {
		return memory.read<char>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeDoppler
{
public:
	USoundNodeDoppler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDopplerIntensity() {
		return memory.read<float>(m_addr + 72);
	}
	bool GetbUseSmoothing() {
		return memory.read<bool>(m_addr + 76);
	}
	float GetSmoothingInterpSpeed() {
		return memory.read<float>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionParticleSubUVProperties
{
public:
	UMaterialExpressionParticleSubUVProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPerInstanceCustomData
{
public:
	UMaterialExpressionPerInstanceCustomData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetDefaultValue() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	float GetConstDefaultValue() {
		return memory.read<float>(m_addr + 84);
	}
	uint32_t GetDataIndex() {
		return memory.read<uint32_t>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPerInstanceFadeAmount
{
public:
	UMaterialExpressionPerInstanceFadeAmount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSamplePhysicsVectorField
{
public:
	UMaterialExpressionSamplePhysicsVectorField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetWorldPosition() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	enum class EFieldVectorType GetFieldTarget() {
		return memory.read<enum class EFieldVectorType>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocation_Seeded
{
public:
	UParticleModuleLocation_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPower
{
public:
	UMaterialExpressionPower(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetBase() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetExponent() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	float GetConstExponent() {
		return memory.read<float>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPreSkinnedLocalBounds
{
public:
	UMaterialExpressionPreSkinnedLocalBounds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPreSkinnedNormal
{
public:
	UMaterialExpressionPreSkinnedNormal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionPreviousFrameSwitch
{
public:
	UMaterialExpressionPreviousFrameSwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetCurrentFrame() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetPreviousFrame() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionReflectionVectorWS
{
public:
	UMaterialExpressionReflectionVectorWS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetCustomWorldNormal() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	char GetbNormalizeCustomWorldNormal() {
		return memory.read<char>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleMeshRotation
{
public:
	UParticleModuleMeshRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetStartRotation() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	char GetbInheritParent() {
		return memory.read<char>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionReroute
{
public:
	UMaterialExpressionReroute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionRotateAboutAxis
{
public:
	UMaterialExpressionRotateAboutAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetNormalizedRotationAxis() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetRotationAngle() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetPivotPoint() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	struct FExpressionInput Getposition() {
		return memory.read<struct FExpressionInput>(m_addr + 124);
	}
	float GetPeriod() {
		return memory.read<float>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionShaderStageSwitch
{
public:
	UMaterialExpressionShaderStageSwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetPixelShader() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetVertexShader() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionRuntimeVirtualTextureSampleParameter
{
public:
	UMaterialExpressionRuntimeVirtualTextureSampleParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 144);
	}
	struct FGuid GetExpressionGUID() {
		return memory.read<struct FGuid>(m_addr + 152);
	}
	struct FName GetGroup() {
		return memory.read<struct FName>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSamplePhysicsScalarField
{
public:
	UMaterialExpressionSamplePhysicsScalarField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetWorldPosition() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	enum class EFieldScalarType GetFieldTarget() {
		return memory.read<enum class EFieldScalarType>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSamplePhysicsIntegerField
{
public:
	UMaterialExpressionSamplePhysicsIntegerField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetWorldPosition() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	enum class EFieldIntegerType GetFieldTarget() {
		return memory.read<enum class EFieldIntegerType>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSceneColor
{
public:
	UMaterialExpressionSceneColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMaterialSceneAttributeInputMode GetInputMode() {
		return memory.read<enum class EMaterialSceneAttributeInputMode>(m_addr + 64);
	}
	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 68);
	}
	struct FExpressionInput GetOffsetFraction() {
		return memory.read<struct FExpressionInput>(m_addr + 88);
	}
	struct FVector2D GetConstInput() {
		return memory.read<struct FVector2D>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplicationDriver
{
public:
	UReplicationDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSceneTexelSize
{
public:
	UMaterialExpressionSceneTexelSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionFakeSceneTexture
{
public:
	UMaterialExpressionFakeSceneTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetCoordinates() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	enum class ESceneTextureId GetSceneTextureId() {
		return memory.read<enum class ESceneTextureId>(m_addr + 84);
	}
	bool GetbFiltered() {
		return memory.read<bool>(m_addr + 85);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSkyAtmosphereLightIlluminance
{
public:
	UMaterialExpressionSkyAtmosphereLightIlluminance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLightIndex() {
		return memory.read<int32_t>(m_addr + 64);
	}
	struct FExpressionInput GetWorldPosition() {
		return memory.read<struct FExpressionInput>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSetMaterialAttributes
{
public:
	UMaterialExpressionSetMaterialAttributes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FExpressionInput> GetInputs() {
		return memory.read<struct TArray<struct FExpressionInput>>(m_addr + 64);
	}
	struct TArray<struct FGuid> GetAttributeSetTypes() {
		return memory.read<struct TArray<struct FGuid>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSine
{
public:
	UMaterialExpressionSine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	float GetPeriod() {
		return memory.read<float>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSingleLayerWaterMaterialOutput
{
public:
	UMaterialExpressionSingleLayerWaterMaterialOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetScatteringCoefficients() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetAbsorptionCoefficients() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetPhaseG() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	struct FExpressionInput GetColorScaleBehindWater() {
		return memory.read<struct FExpressionInput>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSkyAtmosphereLightDiskLuminance
{
public:
	UMaterialExpressionSkyAtmosphereLightDiskLuminance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLightIndex() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSkyAtmosphereAerialPerspective
{
public:
	UMaterialExpressionSkyAtmosphereAerialPerspective(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetWorldPosition() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance
{
public:
	UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USpringArmComponent
{
public:
	USpringArmComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTargetArmLength() {
		return memory.read<float>(m_addr + 520);
	}
	struct FVector GetSocketOffset() {
		return memory.read<struct FVector>(m_addr + 524);
	}
	struct FVector GetTargetOffset() {
		return memory.read<struct FVector>(m_addr + 536);
	}
	float GetProbeSize() {
		return memory.read<float>(m_addr + 548);
	}
	enum class ECollisionChannel GetProbeChannel() {
		return memory.read<enum class ECollisionChannel>(m_addr + 552);
	}
	char GetbDoCollisionTest() {
		return memory.read<char>(m_addr + 556);
	}
	char GetbUsePawnControlRotation() {
		return memory.read<char>(m_addr + 556);
	}
	char GetbInheritPitch() {
		return memory.read<char>(m_addr + 556);
	}
	char GetbInheritYaw() {
		return memory.read<char>(m_addr + 556);
	}
	char GetbInheritRoll() {
		return memory.read<char>(m_addr + 556);
	}
	char GetbEnableCameraLag() {
		return memory.read<char>(m_addr + 556);
	}
	char GetbEnableCameraRotationLag() {
		return memory.read<char>(m_addr + 556);
	}
	char GetbUseCameraLagSubstepping() {
		return memory.read<char>(m_addr + 556);
	}
	char GetbDrawDebugLagMarkers() {
		return memory.read<char>(m_addr + 557);
	}
	float GetCameraLagSpeed() {
		return memory.read<float>(m_addr + 560);
	}
	float GetCameraRotationLagSpeed() {
		return memory.read<float>(m_addr + 564);
	}
	float GetCameraLagMaxTimeStep() {
		return memory.read<float>(m_addr + 568);
	}
	float GetCameraLagMaxDistance() {
		return memory.read<float>(m_addr + 572);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSmoothStep
{
public:
	UMaterialExpressionSmoothStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetMin() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetMax() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetValue() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	float GetConstMin() {
		return memory.read<float>(m_addr + 124);
	}
	float GetConstMax() {
		return memory.read<float>(m_addr + 128);
	}
	float GetConstValue() {
		return memory.read<float>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSpeedTree
{
public:
	UMaterialExpressionSpeedTree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetGeometryInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetWindInput() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetLODInput() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	struct FExpressionInput GetExtraBendWS() {
		return memory.read<struct FExpressionInput>(m_addr + 124);
	}
	enum class ESpeedTreeGeometryType GetGeometryType() {
		return memory.read<enum class ESpeedTreeGeometryType>(m_addr + 144);
	}
	enum class ESpeedTreeWindType GetWindType() {
		return memory.read<enum class ESpeedTreeWindType>(m_addr + 145);
	}
	enum class ESpeedTreeLODType GetLODType() {
		return memory.read<enum class ESpeedTreeLODType>(m_addr + 146);
	}
	float GetBillboardThreshold() {
		return memory.read<float>(m_addr + 148);
	}
	bool GetbAccurateWindVelocities() {
		return memory.read<bool>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSphereMask
{
public:
	UMaterialExpressionSphereMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetRadius() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	struct FExpressionInput GetHardness() {
		return memory.read<struct FExpressionInput>(m_addr + 124);
	}
	float GetAttenuationRadius() {
		return memory.read<float>(m_addr + 144);
	}
	float GetHardnessPercent() {
		return memory.read<float>(m_addr + 148);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSphericalParticleOpacity
{
public:
	UMaterialExpressionSphericalParticleOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetDensity() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	float GetConstantDensity() {
		return memory.read<float>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNodeMappingContainer
{
public:
	UNodeMappingContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FNodeItem> GetSourceItems() {
		return memory.read<struct TMap<struct FName, struct FNodeItem>>(m_addr + 40);
	}
	struct TMap<struct FName, struct FNodeItem> GetTargetItems() {
		return memory.read<struct TMap<struct FName, struct FNodeItem>>(m_addr + 120);
	}
	struct TMap<struct FName, struct FName> GetSourceToTarget() {
		return memory.read<struct TMap<struct FName, struct FName>>(m_addr + 200);
	}
	struct TSoftObjectPtr<UObject> GetSourceAsset() {
		return memory.read<struct TSoftObjectPtr<UObject>>(m_addr + 280);
	}
	struct TSoftObjectPtr<UObject> GetTargetAsset() {
		return memory.read<struct TSoftObjectPtr<UObject>>(m_addr + 320);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSquareRoot
{
public:
	UMaterialExpressionSquareRoot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionStaticBool
{
public:
	UMaterialExpressionStaticBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetValue() {
		return memory.read<char>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionStaticComponentMaskParameter
{
public:
	UMaterialExpressionStaticComponentMaskParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetDefaultR() {
		return memory.read<char>(m_addr + 88);
	}
	char GetDefaultG() {
		return memory.read<char>(m_addr + 88);
	}
	char GetDefaultB() {
		return memory.read<char>(m_addr + 88);
	}
	char GetDefaultA() {
		return memory.read<char>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionStaticSwitch
{
public:
	UMaterialExpressionStaticSwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetDefaultValue() {
		return memory.read<char>(m_addr + 64);
	}
	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 68);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 88);
	}
	struct FExpressionInput GetValue() {
		return memory.read<struct FExpressionInput>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionStaticSwitchParameter
{
public:
	UMaterialExpressionStaticSwitchParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionSubtract
{
public:
	UMaterialExpressionSubtract(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetA() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetB() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	float GetConstA() {
		return memory.read<float>(m_addr + 104);
	}
	float GetConstB() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTangent
{
public:
	UMaterialExpressionTangent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	float GetPeriod() {
		return memory.read<float>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTemporalSobol
{
public:
	UMaterialExpressionTemporalSobol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetIndex() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetSeed() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	uint32_t GetConstIndex() {
		return memory.read<uint32_t>(m_addr + 104);
	}
	struct FVector2D GetConstSeed() {
		return memory.read<struct FVector2D>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureCoordinate
{
public:
	UMaterialExpressionTextureCoordinate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCoordinateIndex() {
		return memory.read<int32_t>(m_addr + 64);
	}
	float GetUTiling() {
		return memory.read<float>(m_addr + 68);
	}
	float GetVTiling() {
		return memory.read<float>(m_addr + 72);
	}
	char GetUnMirrorU() {
		return memory.read<char>(m_addr + 76);
	}
	char GetUnMirrorV() {
		return memory.read<char>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleOrbitBase
{
public:
	UParticleModuleOrbitBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbUseEmitterTime() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureObject
{
public:
	UMaterialExpressionTextureObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureProperty
{
public:
	UMaterialExpressionTextureProperty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetTextureObject() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	enum class EMaterialExposedTextureProperty GetProperty() {
		return memory.read<enum class EMaterialExposedTextureProperty>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleCameraBase
{
public:
	UParticleModuleCameraBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureSampleParameterCube
{
public:
	UMaterialExpressionTextureSampleParameterCube(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USoundNodeQualityLevel
{
public:
	USoundNodeQualityLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCookedQualityLevelIndex() {
		return memory.read<int32_t>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleMeshMaterial
{
public:
	UParticleModuleMeshMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMaterialInterface> GetMeshMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTextureSampleParameterVolume
{
public:
	UMaterialExpressionTextureSampleParameterVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionThinTranslucentMaterialOutput
{
public:
	UMaterialExpressionThinTranslucentMaterialOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetTransmittanceColor() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTime
{
public:
	UMaterialExpressionTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbIgnorePause() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbOverride_Period() {
		return memory.read<char>(m_addr + 64);
	}
	float GetPeriod() {
		return memory.read<float>(m_addr + 68);
	}
	struct FExpressionInput GetPeriodInput() {
		return memory.read<struct FExpressionInput>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTransform
{
public:
	UMaterialExpressionTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	enum class EMaterialVectorCoordTransformSource GetTransformSourceType() {
		return memory.read<enum class EMaterialVectorCoordTransformSource>(m_addr + 84);
	}
	enum class EMaterialVectorCoordTransform GetTransformType() {
		return memory.read<enum class EMaterialVectorCoordTransform>(m_addr + 85);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionTruncate
{
public:
	UMaterialExpressionTruncate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionVectorNoise
{
public:
	UMaterialExpressionVectorNoise(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput Getposition() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	enum class EVectorNoiseFunction GetNoiseFunction() {
		return memory.read<enum class EVectorNoiseFunction>(m_addr + 84);
	}
	int32_t GetQuality() {
		return memory.read<int32_t>(m_addr + 88);
	}
	char GetbTiling() {
		return memory.read<char>(m_addr + 92);
	}
	uint32_t GetTileSize() {
		return memory.read<uint32_t>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class ARadialForceActor
{
public:
	ARadialForceActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URadialForceComponent GetForceComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct URadialForceComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicsFieldComponent
{
public:
	UPhysicsFieldComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionVertexColor
{
public:
	UMaterialExpressionVertexColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTextureRenderTarget2DArray
{
public:
	UTextureRenderTarget2DArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSizeX() {
		return memory.read<int32_t>(m_addr + 384);
	}
	int32_t GetSizeY() {
		return memory.read<int32_t>(m_addr + 388);
	}
	int32_t GetSlices() {
		return memory.read<int32_t>(m_addr + 392);
	}
	struct FLinearColor GetClearColor() {
		return memory.read<struct FLinearColor>(m_addr + 396);
	}
	enum class EPixelFormat GetOverrideFormat() {
		return memory.read<enum class EPixelFormat>(m_addr + 412);
	}
	char GetbHDR() {
		return memory.read<char>(m_addr + 413);
	}
	char GetbForceLinearGamma() {
		return memory.read<char>(m_addr + 413);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionVertexTangentWS
{
public:
	UMaterialExpressionVertexTangentWS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionViewSize
{
public:
	UMaterialExpressionViewSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USoundCue
{
public:
	USoundCue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbPrimeOnLoad() {
		return memory.read<char>(m_addr + 368);
	}
	struct USoundNode GetFirstNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 376);
		return struct USoundNode(ptr_addr);
	}
	float GetVolumeMultiplier() {
		return memory.read<float>(m_addr + 384);
	}
	float GetPitchMultiplier() {
		return memory.read<float>(m_addr + 388);
	}
	struct FSoundAttenuationSettings GetAttenuationOverrides() {
		return memory.read<struct FSoundAttenuationSettings>(m_addr + 392);
	}
	float GetSubtitlePriority() {
		return memory.read<float>(m_addr + 1320);
	}
	char GetbOverrideAttenuation() {
		return memory.read<char>(m_addr + 1328);
	}
	char GetbExcludeFromRandomNodeBranchCulling() {
		return memory.read<char>(m_addr + 1328);
	}
	int32_t GetCookedQualityIndex() {
		return memory.read<int32_t>(m_addr + 1332);
	}
	char GetbHasPlayWhenSilent() {
		return memory.read<char>(m_addr + 1336);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionVirtualTextureFeatureSwitch
{
public:
	UMaterialExpressionVirtualTextureFeatureSwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetNo() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetYes() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionVolumetricAdvancedMaterialOutput
{
public:
	UMaterialExpressionVolumetricAdvancedMaterialOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetPhaseG() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetPhaseG2() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FExpressionInput GetPhaseBlend() {
		return memory.read<struct FExpressionInput>(m_addr + 104);
	}
	struct FExpressionInput GetMultiScatteringContribution() {
		return memory.read<struct FExpressionInput>(m_addr + 124);
	}
	struct FExpressionInput GetMultiScatteringOcclusion() {
		return memory.read<struct FExpressionInput>(m_addr + 144);
	}
	struct FExpressionInput GetMultiScatteringEccentricity() {
		return memory.read<struct FExpressionInput>(m_addr + 164);
	}
	struct FExpressionInput GetConservativeDensity() {
		return memory.read<struct FExpressionInput>(m_addr + 184);
	}
	float GetConstPhaseG() {
		return memory.read<float>(m_addr + 204);
	}
	float GetConstPhaseG2() {
		return memory.read<float>(m_addr + 208);
	}
	float GetConstPhaseBlend() {
		return memory.read<float>(m_addr + 212);
	}
	bool GetPerSamplePhaseEvaluation() {
		return memory.read<bool>(m_addr + 216);
	}
	uint32_t GetMultiScatteringApproximationOctaveCount() {
		return memory.read<uint32_t>(m_addr + 220);
	}
	float GetConstMultiScatteringContribution() {
		return memory.read<float>(m_addr + 224);
	}
	float GetConstMultiScatteringOcclusion() {
		return memory.read<float>(m_addr + 228);
	}
	float GetConstMultiScatteringEccentricity() {
		return memory.read<float>(m_addr + 232);
	}
	bool GetbGroundContribution() {
		return memory.read<bool>(m_addr + 236);
	}
	bool GetbGrayScaleMaterial() {
		return memory.read<bool>(m_addr + 237);
	}
	bool GetbRayMarchVolumeShadow() {
		return memory.read<bool>(m_addr + 238);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshSimplificationSettings
{
public:
	UMeshSimplificationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMeshReductionModuleName() {
		return memory.read<struct FName>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialFunctionInstance
{
public:
	UMaterialFunctionInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialFunctionInterface GetParent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UMaterialFunctionInterface(ptr_addr);
	}
	struct UMaterialFunctionInterface GetBase() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UMaterialFunctionInterface(ptr_addr);
	}
	struct TArray<struct FScalarParameterValue> GetScalarParameterValues() {
		return memory.read<struct TArray<struct FScalarParameterValue>>(m_addr + 80);
	}
	struct TArray<struct FVectorParameterValue> GetVectorParameterValues() {
		return memory.read<struct TArray<struct FVectorParameterValue>>(m_addr + 96);
	}
	struct TArray<struct FTextureParameterValue> GetTextureParameterValues() {
		return memory.read<struct TArray<struct FTextureParameterValue>>(m_addr + 112);
	}
	struct TArray<struct FFontParameterValue> GetFontParameterValues() {
		return memory.read<struct TArray<struct FFontParameterValue>>(m_addr + 128);
	}
	struct TArray<struct FStaticSwitchParameter> GetStaticSwitchParameterValues() {
		return memory.read<struct TArray<struct FStaticSwitchParameter>>(m_addr + 144);
	}
	struct TArray<struct FStaticComponentMaskParameter> GetStaticComponentMaskParameterValues() {
		return memory.read<struct TArray<struct FStaticComponentMaskParameter>>(m_addr + 160);
	}
	struct TArray<struct FRuntimeVirtualTextureParameterValue> GetRuntimeVirtualTextureParameterValues() {
		return memory.read<struct TArray<struct FRuntimeVirtualTextureParameterValue>>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialFunctionMaterialLayerInstance
{
public:
	UMaterialFunctionMaterialLayerInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialFunctionMaterialLayerBlendInstance
{
public:
	UMaterialFunctionMaterialLayerBlendInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialInstanceDynamic
{
public:
	UMaterialInstanceDynamic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AMaterialInstanceActor
{
public:
	AMaterialInstanceActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetTargetActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialParameterCollectionInstance
{
public:
	UMaterialParameterCollectionInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialParameterCollection GetCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UMaterialParameterCollection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AMatineeActor
{
public:
	AMatineeActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInterpData GetMatineeData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UInterpData(ptr_addr);
	}
	struct FName GetMatineeControllerName() {
		return memory.read<struct FName>(m_addr + 552);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 560);
	}
	char GetbPlayOnLevelLoad() {
		return memory.read<char>(m_addr + 564);
	}
	char GetbForceStartPos() {
		return memory.read<char>(m_addr + 564);
	}
	float GetForceStartPosition() {
		return memory.read<float>(m_addr + 568);
	}
	char GetbLooping() {
		return memory.read<char>(m_addr + 572);
	}
	char GetbRewindOnPlay() {
		return memory.read<char>(m_addr + 572);
	}
	char GetbNoResetOnRewind() {
		return memory.read<char>(m_addr + 572);
	}
	char GetbRewindIfAlreadyPlaying() {
		return memory.read<char>(m_addr + 572);
	}
	char GetbDisableRadioFilter() {
		return memory.read<char>(m_addr + 572);
	}
	char GetbClientSideOnly() {
		return memory.read<char>(m_addr + 572);
	}
	char GetbSkipUpdateIfNotVisible() {
		return memory.read<char>(m_addr + 572);
	}
	char GetbIsSkippable() {
		return memory.read<char>(m_addr + 572);
	}
	int32_t GetPreferredSplitScreenNum() {
		return memory.read<int32_t>(m_addr + 576);
	}
	char GetbDisableMovementInput() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbDisableLookAtInput() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbHidePlayer() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbHideHud() {
		return memory.read<char>(m_addr + 580);
	}
	struct TArray<struct FInterpGroupActorInfo> GetGroupActorInfos() {
		return memory.read<struct TArray<struct FInterpGroupActorInfo>>(m_addr + 584);
	}
	char GetbShouldShowGore() {
		return memory.read<char>(m_addr + 600);
	}
	struct TArray<struct UInterpGroupInst> GetGroupInst() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct TArray<struct UInterpGroupInst>(ptr_addr);
	}
	struct TArray<struct FCameraCutInfo> GetCameraCuts() {
		return memory.read<struct TArray<struct FCameraCutInfo>>(m_addr + 624);
	}
	char GetbIsPlaying() {
		return memory.read<char>(m_addr + 640);
	}
	char GetbReversePlayback() {
		return memory.read<char>(m_addr + 640);
	}
	char GetbPaused() {
		return memory.read<char>(m_addr + 640);
	}
	char GetbPendingStop() {
		return memory.read<char>(m_addr + 640);
	}
	float GetInterpPosition() {
		return memory.read<float>(m_addr + 644);
	}
	char GetReplicationForceIsPlaying() {
		return memory.read<char>(m_addr + 652);
	}
	struct FMulticastInlineDelegate GetOnPlay() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 656);
	}
	struct FMulticastInlineDelegate GetOnStop() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 672);
	}
	struct FMulticastInlineDelegate GetOnPause() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 688);
	}

private:
	std::uint64_t m_addr = 0;
};


class AMatineeActorCameraAnim
{
public:
	AMatineeActorCameraAnim(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraAnim GetCameraAnim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UCameraAnim(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleAttractorLine
{
public:
	UParticleModuleAttractorLine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetEndPoint0() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetEndPoint1() {
		return memory.read<struct FVector>(m_addr + 60);
	}
	struct FRawDistributionFloat GetRange() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 72);
	}
	struct FRawDistributionFloat GetStrength() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UViewportStatsSubsystem
{
public:
	UViewportStatsSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AMeshMergeCullingVolume
{
public:
	AMeshMergeCullingVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshVertexPainterKismetLibrary
{
public:
	UMeshVertexPainterKismetLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UModelComponent
{
public:
	UModelComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBodySetup GetModelBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UBodySetup(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleAccelerationOverLifetime
{
public:
	UParticleModuleAccelerationOverLifetime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetAccelOverLife() {
		return memory.read<struct FRawDistributionVector>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMorphTarget
{
public:
	UMorphTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMesh GetBaseSkelMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct USkeletalMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavAgentInterface
{
public:
	UNavAgentInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavCollisionBase
{
public:
	UNavCollisionBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbIsDynamicObstacle() {
		return memory.read<char>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavEdgeProviderInterface
{
public:
	UNavEdgeProviderInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPawnNoiseEmitterComponent
{
public:
	UPawnNoiseEmitterComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbAIPerceptionSystemCompatibilityMode() {
		return memory.read<char>(m_addr + 176);
	}
	struct FVector GetLastRemoteNoisePosition() {
		return memory.read<struct FVector>(m_addr + 180);
	}
	float GetNoiseLifetime() {
		return memory.read<float>(m_addr + 192);
	}
	float GetLastRemoteNoiseVolume() {
		return memory.read<float>(m_addr + 196);
	}
	float GetLastRemoteNoiseTime() {
		return memory.read<float>(m_addr + 200);
	}
	float GetLastLocalNoiseVolume() {
		return memory.read<float>(m_addr + 204);
	}
	float GetLastLocalNoiseTime() {
		return memory.read<float>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLifetimeBase
{
public:
	UParticleModuleLifetimeBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavigationDataInterface
{
public:
	UNavigationDataInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ANavigationObjectBase
{
public:
	ANavigationObjectBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCapsuleComponent GetCapsuleComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UCapsuleComponent(ptr_addr);
	}
	struct UBillboardComponent GetGoodSprite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UBillboardComponent(ptr_addr);
	}
	struct UBillboardComponent GetBadSprite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UBillboardComponent(ptr_addr);
	}
	char GetbIsPIEPlayerStart() {
		return memory.read<char>(m_addr + 576);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavigationSystemBase
{
public:
	UNavigationSystemBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavigationSystemConfig
{
public:
	UNavigationSystemConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftClassPath GetNavigationSystemClass() {
		return memory.read<struct FSoftClassPath>(m_addr + 40);
	}
	struct FNavAgentSelector GetSupportedAgentsMask() {
		return memory.read<struct FNavAgentSelector>(m_addr + 64);
	}
	struct FName GetDefaultAgentName() {
		return memory.read<struct FName>(m_addr + 68);
	}
	char GetbIsOverriden() {
		return memory.read<char>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavLinkDefinition
{
public:
	UNavLinkDefinition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNavigationLink> GetLinks() {
		return memory.read<struct TArray<struct FNavigationLink>>(m_addr + 40);
	}
	struct TArray<struct FNavigationSegmentLink> GetSegmentLinks() {
		return memory.read<struct TArray<struct FNavigationSegmentLink>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class USimulatedClientNetConnection
{
public:
	USimulatedClientNetConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNetPushModelHelpers
{
public:
	UNetPushModelHelpers(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNetworkSettings
{
public:
	UNetworkSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbVerifyPeer() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbEnableMultiplayerWorldOriginRebasing() {
		return memory.read<char>(m_addr + 56);
	}
	int32_t GetMaxRepArraySize() {
		return memory.read<int32_t>(m_addr + 60);
	}
	int32_t GetMaxRepArrayMemory() {
		return memory.read<int32_t>(m_addr + 64);
	}
	struct TArray<struct FNetworkEmulationProfileDescription> GetNetworkEmulationProfiles() {
		return memory.read<struct TArray<struct FNetworkEmulationProfileDescription>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UObjectLibrary
{
public:
	UObjectLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetObjectBaseClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return UObject(ptr_addr);
	}
	bool GetbHasBlueprintClasses() {
		return memory.read<bool>(m_addr + 48);
	}
	struct TArray<struct UObject> GetObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UObject>(ptr_addr);
	}
	struct TArray<struct TWeakObjectPtr<UObject>> GetWeakObjects() {
		return memory.read<struct TArray<struct TWeakObjectPtr<UObject>>>(m_addr + 72);
	}
	bool GetbUseWeakReferences() {
		return memory.read<bool>(m_addr + 88);
	}
	bool GetbIsFullyLoaded() {
		return memory.read<bool>(m_addr + 89);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStereoLayerShapeQuad
{
public:
	UStereoLayerShapeQuad(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleEmitter
{
public:
	UParticleEmitter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEmitterName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	int32_t GetSubUVDataOffset() {
		return memory.read<int32_t>(m_addr + 48);
	}
	enum class EEmitterRenderMode GetEmitterRenderMode() {
		return memory.read<enum class EEmitterRenderMode>(m_addr + 52);
	}
	enum class EParticleSignificanceLevel GetSignificanceLevel() {
		return memory.read<enum class EParticleSignificanceLevel>(m_addr + 53);
	}
	char GetbUseLegacySpawningBehavior() {
		return memory.read<char>(m_addr + 55);
	}
	char GetConvertedModules() {
		return memory.read<char>(m_addr + 55);
	}
	char GetbIsSoloing() {
		return memory.read<char>(m_addr + 55);
	}
	char GetbCookedOut() {
		return memory.read<char>(m_addr + 55);
	}
	char GetbDisabledLODsKeepEmitterAlive() {
		return memory.read<char>(m_addr + 55);
	}
	char GetbDisableWhenInsignficant() {
		return memory.read<char>(m_addr + 56);
	}
	struct TArray<struct UParticleLODLevel> GetLODLevels() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct TArray<struct UParticleLODLevel>(ptr_addr);
	}
	int32_t GetPeakActiveParticles() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetInitialAllocationCount() {
		return memory.read<int32_t>(m_addr + 84);
	}
	float GetQualityLevelSpawnRateScale() {
		return memory.read<float>(m_addr + 88);
	}
	uint32_t GetDetailModeBitmask() {
		return memory.read<uint32_t>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};


class AParticleEventManager
{
public:
	AParticleEventManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleAccelerationConstant
{
public:
	UParticleModuleAccelerationConstant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetAcceleration() {
		return memory.read<struct FVector>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleAttractorPoint
{
public:
	UParticleModuleAttractorPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector Getposition() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	struct FRawDistributionFloat GetRange() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 120);
	}
	struct FRawDistributionFloat GetStrength() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 168);
	}
	char GetStrengthByDistance() {
		return memory.read<char>(m_addr + 216);
	}
	char GetbAffectBaseVelocity() {
		return memory.read<char>(m_addr + 216);
	}
	char GetbOverrideVelocity() {
		return memory.read<char>(m_addr + 216);
	}
	char GetbUseWorldSpacePosition() {
		return memory.read<char>(m_addr + 216);
	}
	char GetPositive_X() {
		return memory.read<char>(m_addr + 216);
	}
	char GetPositive_Y() {
		return memory.read<char>(m_addr + 216);
	}
	char GetPositive_Z() {
		return memory.read<char>(m_addr + 216);
	}
	char GetNegative_X() {
		return memory.read<char>(m_addr + 216);
	}
	char GetNegative_Y() {
		return memory.read<char>(m_addr + 217);
	}
	char GetNegative_Z() {
		return memory.read<char>(m_addr + 217);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleBeamTarget
{
public:
	UParticleModuleBeamTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class Beam2SourceTargetMethod GetTargetMethod() {
		return memory.read<enum class Beam2SourceTargetMethod>(m_addr + 48);
	}
	struct FName GetTargetName() {
		return memory.read<struct FName>(m_addr + 52);
	}
	struct FRawDistributionVector GetTarget() {
		return memory.read<struct FRawDistributionVector>(m_addr + 64);
	}
	char GetbTargetAbsolute() {
		return memory.read<char>(m_addr + 136);
	}
	char GetbLockTarget() {
		return memory.read<char>(m_addr + 136);
	}
	enum class Beam2SourceTargetTangentMethod GetTargetTangentMethod() {
		return memory.read<enum class Beam2SourceTargetTangentMethod>(m_addr + 140);
	}
	struct FRawDistributionVector GetTargetTangent() {
		return memory.read<struct FRawDistributionVector>(m_addr + 144);
	}
	char GetbLockTargetTangent() {
		return memory.read<char>(m_addr + 216);
	}
	struct FRawDistributionFloat GetTargetStrength() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 224);
	}
	char GetbLockTargetStength() {
		return memory.read<char>(m_addr + 272);
	}
	float GetLockRadius() {
		return memory.read<float>(m_addr + 276);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleCameraOffset
{
public:
	UParticleModuleCameraOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetCameraOffset() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 48);
	}
	char GetbSpawnTimeOnly() {
		return memory.read<char>(m_addr + 96);
	}
	enum class EParticleCameraOffsetUpdateMethod GetUpdateMethod() {
		return memory.read<enum class EParticleCameraOffsetUpdateMethod>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplaySubsystem
{
public:
	UReplaySubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbLoadDefaultMapOnStop() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleCollision
{
public:
	UParticleModuleCollision(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetDampingFactor() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	struct FRawDistributionVector GetDampingFactorRotation() {
		return memory.read<struct FRawDistributionVector>(m_addr + 120);
	}
	struct FRawDistributionFloat GetMaxCollisions() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 192);
	}
	enum class EParticleCollisionComplete GetCollisionCompletionOption() {
		return memory.read<enum class EParticleCollisionComplete>(m_addr + 240);
	}
	struct TArray<enum class EObjectTypeQuery> GetCollisionTypes() {
		return memory.read<struct TArray<enum class EObjectTypeQuery>>(m_addr + 248);
	}
	char GetbApplyPhysics() {
		return memory.read<char>(m_addr + 272);
	}
	char GetbIgnoreTriggerVolumes() {
		return memory.read<char>(m_addr + 272);
	}
	struct FRawDistributionFloat GetParticleMass() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 280);
	}
	float GetDirScalar() {
		return memory.read<float>(m_addr + 328);
	}
	char GetbPawnsDoNotDecrementCount() {
		return memory.read<char>(m_addr + 332);
	}
	char GetbOnlyVerticalNormalsDecrementCount() {
		return memory.read<char>(m_addr + 332);
	}
	float GetVerticalFudgeFactor() {
		return memory.read<float>(m_addr + 336);
	}
	struct FRawDistributionFloat GetDelayAmount() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 344);
	}
	char GetbDropDetail() {
		return memory.read<char>(m_addr + 392);
	}
	char GetbCollideOnlyIfVisible() {
		return memory.read<char>(m_addr + 392);
	}
	char GetbIgnoreSourceActor() {
		return memory.read<char>(m_addr + 392);
	}
	float GetMaxCollisionDistance() {
		return memory.read<float>(m_addr + 396);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleColorBase
{
public:
	UParticleModuleColorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleEventBase
{
public:
	UParticleModuleEventBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UStereoLayerShape
{
public:
	UStereoLayerShape(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleEventReceiverBase
{
public:
	UParticleModuleEventReceiverBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EParticleEventType GetEventGeneratorType() {
		return memory.read<enum class EParticleEventType>(m_addr + 48);
	}
	struct FName GetEventName() {
		return memory.read<struct FName>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleEventReceiverKillParticles
{
public:
	UParticleModuleEventReceiverKillParticles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbStopSpawning() {
		return memory.read<char>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleEventSendToGame
{
public:
	UParticleModuleEventSendToGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ASceneCapture2D
{
public:
	ASceneCapture2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneCaptureComponent2D GetCaptureComponent2D() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct USceneCaptureComponent2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLifetime_Seeded
{
public:
	UParticleModuleLifetime_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLightBase
{
public:
	UParticleModuleLightBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationPrimitiveSphere_Seeded
{
public:
	UParticleModuleLocationPrimitiveSphere_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLight
{
public:
	UParticleModuleLight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseInverseSquaredFalloff() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetbAffectsTranslucency() {
		return memory.read<bool>(m_addr + 49);
	}
	bool GetbPreviewLightRadius() {
		return memory.read<bool>(m_addr + 50);
	}
	float GetSpawnFraction() {
		return memory.read<float>(m_addr + 52);
	}
	struct FRawDistributionVector GetColorScaleOverLife() {
		return memory.read<struct FRawDistributionVector>(m_addr + 56);
	}
	struct FRawDistributionFloat GetBrightnessOverLife() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 128);
	}
	struct FRawDistributionFloat GetRadiusScale() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 176);
	}
	struct FRawDistributionFloat GetLightExponent() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 224);
	}
	struct FLightingChannels GetLightingChannels() {
		return memory.read<struct FLightingChannels>(m_addr + 272);
	}
	float GetVolumetricScatteringIntensity() {
		return memory.read<float>(m_addr + 276);
	}
	bool GetbHighQualityLights() {
		return memory.read<bool>(m_addr + 280);
	}
	bool GetbShadowCastingLights() {
		return memory.read<bool>(m_addr + 281);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationBase
{
public:
	UParticleModuleLocationBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPlayerInput
{
public:
	UPlayerInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKeyBind> GetDebugExecBindings() {
		return memory.read<struct TArray<struct FKeyBind>>(m_addr + 288);
	}
	struct TArray<struct FName> GetInvertedAxis() {
		return memory.read<struct TArray<struct FName>>(m_addr + 352);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocation
{
public:
	UParticleModuleLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetStartLocation() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	float GetDistributeOverNPoints() {
		return memory.read<float>(m_addr + 120);
	}
	float GetDistributeThreshold() {
		return memory.read<float>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationBoneSocket
{
public:
	UParticleModuleLocationBoneSocket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELocationBoneSocketSource GetSourceType() {
		return memory.read<enum class ELocationBoneSocketSource>(m_addr + 48);
	}
	struct FVector GetUniversalOffset() {
		return memory.read<struct FVector>(m_addr + 52);
	}
	struct TArray<struct FLocationBoneSocketInfo> GetSourceLocations() {
		return memory.read<struct TArray<struct FLocationBoneSocketInfo>>(m_addr + 64);
	}
	enum class ELocationBoneSocketSelectionMethod GetSelectionMethod() {
		return memory.read<enum class ELocationBoneSocketSelectionMethod>(m_addr + 80);
	}
	char GetbUpdatePositionEachFrame() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbOrientMeshEmitters() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbInheritBoneVelocity() {
		return memory.read<char>(m_addr + 84);
	}
	float GetInheritVelocityScale() {
		return memory.read<float>(m_addr + 88);
	}
	struct FName GetSkelMeshActorParamName() {
		return memory.read<struct FName>(m_addr + 92);
	}
	int32_t GetNumPreSelectedIndices() {
		return memory.read<int32_t>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationDirect
{
public:
	UParticleModuleLocationDirect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetLocation() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	struct FRawDistributionVector GetLocationOffset() {
		return memory.read<struct FRawDistributionVector>(m_addr + 120);
	}
	struct FRawDistributionVector GetScaleFactor() {
		return memory.read<struct FRawDistributionVector>(m_addr + 192);
	}
	struct FRawDistributionVector GetDirection() {
		return memory.read<struct FRawDistributionVector>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationEmitter
{
public:
	UParticleModuleLocationEmitter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEmitterName() {
		return memory.read<struct FName>(m_addr + 48);
	}
	enum class ELocationEmitterSelectionMethod GetSelectionMethod() {
		return memory.read<enum class ELocationEmitterSelectionMethod>(m_addr + 56);
	}
	char GetInheritSourceVelocity() {
		return memory.read<char>(m_addr + 60);
	}
	float GetInheritSourceVelocityScale() {
		return memory.read<float>(m_addr + 64);
	}
	char GetbInheritSourceRotation() {
		return memory.read<char>(m_addr + 68);
	}
	float GetInheritSourceRotationScale() {
		return memory.read<float>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationEmitterDirect
{
public:
	UParticleModuleLocationEmitterDirect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEmitterName() {
		return memory.read<struct FName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationPrimitiveSphere
{
public:
	UParticleModuleLocationPrimitiveSphere(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetStartRadius() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationSkelVertSurface
{
public:
	UParticleModuleLocationSkelVertSurface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELocationSkelVertSurfaceSource GetSourceType() {
		return memory.read<enum class ELocationSkelVertSurfaceSource>(m_addr + 48);
	}
	struct FVector GetUniversalOffset() {
		return memory.read<struct FVector>(m_addr + 52);
	}
	char GetbUpdatePositionEachFrame() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbOrientMeshEmitters() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbInheritBoneVelocity() {
		return memory.read<char>(m_addr + 64);
	}
	float GetInheritVelocityScale() {
		return memory.read<float>(m_addr + 68);
	}
	struct FName GetSkelMeshActorParamName() {
		return memory.read<struct FName>(m_addr + 72);
	}
	struct TArray<struct FName> GetValidAssociatedBones() {
		return memory.read<struct TArray<struct FName>>(m_addr + 80);
	}
	char GetbEnforceNormalCheck() {
		return memory.read<char>(m_addr + 96);
	}
	struct FVector GetNormalToCompare() {
		return memory.read<struct FVector>(m_addr + 100);
	}
	float GetNormalCheckToleranceDegrees() {
		return memory.read<float>(m_addr + 112);
	}
	float GetNormalCheckTolerance() {
		return memory.read<float>(m_addr + 116);
	}
	struct TArray<int32_t> GetValidMaterialIndices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 120);
	}
	char GetbInheritVertexColor() {
		return memory.read<char>(m_addr + 136);
	}
	char GetbInheritUV() {
		return memory.read<char>(m_addr + 136);
	}
	uint32_t GetInheritUVChannel() {
		return memory.read<uint32_t>(m_addr + 140);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationWorldOffset
{
public:
	UParticleModuleLocationWorldOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleLocationWorldOffset_Seeded
{
public:
	UParticleModuleLocationWorldOffset_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVirtualTexture
{
public:
	UVirtualTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleRotationBase
{
public:
	UParticleModuleRotationBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleMeshRotation_Seeded
{
public:
	UParticleModuleMeshRotation_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleMeshRotationRateOverLife
{
public:
	UParticleModuleMeshRotationRateOverLife(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetRotRate() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	char GetbScaleRotRate() {
		return memory.read<char>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleMeshRotationRate
{
public:
	UParticleModuleMeshRotationRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetStartRotationRate() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleMeshRotationRate_Seeded
{
public:
	UParticleModuleMeshRotationRate_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleParameterDynamic_Seeded
{
public:
	UParticleModuleParameterDynamic_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStaticMesh
{
public:
	UStaticMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPerPlatformInt GetMinLOD() {
		return memory.read<struct FPerPlatformInt>(m_addr + 128);
	}
	float GetLpvBiasMultiplier() {
		return memory.read<float>(m_addr + 132);
	}
	struct TArray<struct FStaticMaterial> GetStaticMaterials() {
		return memory.read<struct TArray<struct FStaticMaterial>>(m_addr + 136);
	}
	float GetLightmapUVDensity() {
		return memory.read<float>(m_addr + 152);
	}
	int32_t GetLightMapResolution() {
		return memory.read<int32_t>(m_addr + 156);
	}
	int32_t GetLightMapCoordinateIndex() {
		return memory.read<int32_t>(m_addr + 160);
	}
	float GetDistanceFieldSelfShadowBias() {
		return memory.read<float>(m_addr + 164);
	}
	struct UBodySetup GetBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UBodySetup(ptr_addr);
	}
	int32_t GetLODForCollision() {
		return memory.read<int32_t>(m_addr + 176);
	}
	char GetbGenerateMeshDistanceField() {
		return memory.read<char>(m_addr + 180);
	}
	char GetbStripComplexCollisionForConsole() {
		return memory.read<char>(m_addr + 180);
	}
	char GetbHasNavigationData() {
		return memory.read<char>(m_addr + 180);
	}
	char GetbSupportUniformlyDistributedSampling() {
		return memory.read<char>(m_addr + 180);
	}
	char GetbSupportPhysicalMaterialMasks() {
		return memory.read<char>(m_addr + 180);
	}
	char GetbSupportRayTracing() {
		return memory.read<char>(m_addr + 180);
	}
	char GetbIsBuiltAtRuntime() {
		return memory.read<char>(m_addr + 180);
	}
	char GetbAllowCPUAccess() {
		return memory.read<char>(m_addr + 181);
	}
	char GetbSupportGpuUniformlyDistributedSampling() {
		return memory.read<char>(m_addr + 181);
	}
	struct TArray<struct UStaticMeshSocket> GetSockets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct TArray<struct UStaticMeshSocket>(ptr_addr);
	}
	struct FVector GetPositiveBoundsExtension() {
		return memory.read<struct FVector>(m_addr + 248);
	}
	struct FVector GetNegativeBoundsExtension() {
		return memory.read<struct FVector>(m_addr + 260);
	}
	struct FBoxSphereBounds GetExtendedBounds() {
		return memory.read<struct FBoxSphereBounds>(m_addr + 272);
	}
	int32_t GetElementToIgnoreForTexFactor() {
		return memory.read<int32_t>(m_addr + 300);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}
	struct UObject GetEditableMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct UObject(ptr_addr);
	}
	struct UNavCollisionBase GetNavCollision() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct UNavCollisionBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleMeshRotationRateMultiplyLife
{
public:
	UParticleModuleMeshRotationRateMultiplyLife(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetLifeMultiplier() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVectorFieldBase
{
public:
	UParticleModuleVectorFieldBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleParameterBase
{
public:
	UParticleModuleParameterBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleRequired
{
public:
	UParticleModuleRequired(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UMaterialInterface(ptr_addr);
	}
	float GetMinFacingCameraBlendDistance() {
		return memory.read<float>(m_addr + 56);
	}
	float GetMaxFacingCameraBlendDistance() {
		return memory.read<float>(m_addr + 60);
	}
	struct FVector GetEmitterOrigin() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	struct FRotator GetEmitterRotation() {
		return memory.read<struct FRotator>(m_addr + 76);
	}
	enum class EParticleScreenAlignment GetScreenAlignment() {
		return memory.read<enum class EParticleScreenAlignment>(m_addr + 88);
	}
	char GetbUseLocalSpace() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbKillOnDeactivate() {
		return memory.read<char>(m_addr + 89);
	}
	char GetbKillOnCompleted() {
		return memory.read<char>(m_addr + 89);
	}
	enum class EParticleSortMode GetSortMode() {
		return memory.read<enum class EParticleSortMode>(m_addr + 90);
	}
	char GetbUseLegacyEmitterTime() {
		return memory.read<char>(m_addr + 91);
	}
	char GetbRemoveHMDRoll() {
		return memory.read<char>(m_addr + 91);
	}
	char GetbEmitterDurationUseRange() {
		return memory.read<char>(m_addr + 91);
	}
	float GetEmitterDuration() {
		return memory.read<float>(m_addr + 92);
	}
	struct FRawDistributionFloat GetSpawnRate() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 96);
	}
	struct TArray<struct FParticleBurst> GetBurstList() {
		return memory.read<struct TArray<struct FParticleBurst>>(m_addr + 144);
	}
	float GetEmitterDelay() {
		return memory.read<float>(m_addr + 160);
	}
	float GetEmitterDelayLow() {
		return memory.read<float>(m_addr + 164);
	}
	char GetbDelayFirstLoopOnly() {
		return memory.read<char>(m_addr + 168);
	}
	enum class EParticleSubUVInterpMethod GetInterpolationMethod() {
		return memory.read<enum class EParticleSubUVInterpMethod>(m_addr + 169);
	}
	char GetbScaleUV() {
		return memory.read<char>(m_addr + 170);
	}
	char GetbEmitterDelayUseRange() {
		return memory.read<char>(m_addr + 170);
	}
	enum class EParticleBurstMethod GetParticleBurstMethod() {
		return memory.read<enum class EParticleBurstMethod>(m_addr + 171);
	}
	char GetbOverrideSystemMacroUV() {
		return memory.read<char>(m_addr + 172);
	}
	char GetbUseMaxDrawCount() {
		return memory.read<char>(m_addr + 172);
	}
	enum class EOpacitySourceMode GetOpacitySourceMode() {
		return memory.read<enum class EOpacitySourceMode>(m_addr + 173);
	}
	enum class EEmitterNormalsMode GetEmitterNormalsMode() {
		return memory.read<enum class EEmitterNormalsMode>(m_addr + 174);
	}
	char GetbOrbitModuleAffectsVelocityAlignment() {
		return memory.read<char>(m_addr + 175);
	}
	int32_t GetSubImages_Horizontal() {
		return memory.read<int32_t>(m_addr + 176);
	}
	int32_t GetSubImages_Vertical() {
		return memory.read<int32_t>(m_addr + 180);
	}
	float GetRandomImageTime() {
		return memory.read<float>(m_addr + 184);
	}
	int32_t GetRandomImageChanges() {
		return memory.read<int32_t>(m_addr + 188);
	}
	struct FVector GetMacroUVPosition() {
		return memory.read<struct FVector>(m_addr + 192);
	}
	float GetMacroUVRadius() {
		return memory.read<float>(m_addr + 204);
	}
	enum class EParticleUVFlipMode GetUVFlippingMode() {
		return memory.read<enum class EParticleUVFlipMode>(m_addr + 208);
	}
	enum class ESubUVBoundingVertexCount GetBoundingMode() {
		return memory.read<enum class ESubUVBoundingVertexCount>(m_addr + 209);
	}
	char GetbDurationRecalcEachLoop() {
		return memory.read<char>(m_addr + 210);
	}
	struct FVector GetNormalsSphereCenter() {
		return memory.read<struct FVector>(m_addr + 212);
	}
	float GetAlphaThreshold() {
		return memory.read<float>(m_addr + 224);
	}
	int32_t GetEmitterLoops() {
		return memory.read<int32_t>(m_addr + 228);
	}
	struct UTexture2D GetCutoutTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UTexture2D(ptr_addr);
	}
	int32_t GetMaxDrawCount() {
		return memory.read<int32_t>(m_addr + 240);
	}
	float GetEmitterDurationLow() {
		return memory.read<float>(m_addr + 244);
	}
	struct FVector GetNormalsCylinderDirection() {
		return memory.read<struct FVector>(m_addr + 248);
	}
	struct TArray<struct FName> GetNamedMaterialOverrides() {
		return memory.read<struct TArray<struct FName>>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleRotation
{
public:
	UParticleModuleRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetStartRotation() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleRotationOverLifetime
{
public:
	UParticleModuleRotationOverLifetime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetRotationOverLife() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 48);
	}
	char GetScale() {
		return memory.read<char>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleRotationRate
{
public:
	UParticleModuleRotationRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetStartRotationRate() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleRotationRate_Seeded
{
public:
	UParticleModuleRotationRate_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleRotationRateMultiplyLife
{
public:
	UParticleModuleRotationRateMultiplyLife(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionFloat GetLifeMultiplier() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSize
{
public:
	UParticleModuleSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetStartSize() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSize_Seeded
{
public:
	UParticleModuleSize_Seeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FParticleRandomSeedInfo GetRandomSeedInfo() {
		return memory.read<struct FParticleRandomSeedInfo>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTwitterIntegrationBase
{
public:
	UTwitterIntegrationBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSizeMultiplyLife
{
public:
	UParticleModuleSizeMultiplyLife(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetLifeMultiplier() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}
	char GetMultiplyX() {
		return memory.read<char>(m_addr + 120);
	}
	char GetMultiplyY() {
		return memory.read<char>(m_addr + 120);
	}
	char GetMultiplyZ() {
		return memory.read<char>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPostProcessComponent
{
public:
	UPostProcessComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPostProcessSettings GetSettings() {
		return memory.read<struct FPostProcessSettings>(m_addr + 528);
	}
	float GetPriority() {
		return memory.read<float>(m_addr + 2016);
	}
	float GetBlendRadius() {
		return memory.read<float>(m_addr + 2020);
	}
	float GetBlendWeight() {
		return memory.read<float>(m_addr + 2024);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 2028);
	}
	char GetbUnbound() {
		return memory.read<char>(m_addr + 2028);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSizeScaleBySpeed
{
public:
	UParticleModuleSizeScaleBySpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetSpeedScale() {
		return memory.read<struct FVector2D>(m_addr + 48);
	}
	struct FVector2D GetMaxScale() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSourceMovement
{
public:
	UParticleModuleSourceMovement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetSourceMovementScale() {
		return memory.read<struct FRawDistributionVector>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSpawnBase
{
public:
	UParticleModuleSpawnBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbProcessSpawnRate() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbProcessBurstList() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSpawnPerUnit
{
public:
	UParticleModuleSpawnPerUnit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetUnitScalar() {
		return memory.read<float>(m_addr + 56);
	}
	float GetMovementTolerance() {
		return memory.read<float>(m_addr + 60);
	}
	struct FRawDistributionFloat GetSpawnPerUnit() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 64);
	}
	float GetMaxFrameDistance() {
		return memory.read<float>(m_addr + 112);
	}
	char GetbIgnoreSpawnRateWhenMoving() {
		return memory.read<char>(m_addr + 116);
	}
	char GetbIgnoreMovementAlongX() {
		return memory.read<char>(m_addr + 116);
	}
	char GetbIgnoreMovementAlongY() {
		return memory.read<char>(m_addr + 116);
	}
	char GetbIgnoreMovementAlongZ() {
		return memory.read<char>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSubUVBase
{
public:
	UParticleModuleSubUVBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleSubUV
{
public:
	UParticleModuleSubUV(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USubUVAnimation GetAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct USubUVAnimation(ptr_addr);
	}
	struct FRawDistributionFloat GetSubImageIndex() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 56);
	}
	char GetbUseRealTime() {
		return memory.read<char>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundSubmixBase
{
public:
	USoundSubmixBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct USoundSubmixBase> GetChildSubmixes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct USoundSubmixBase>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleTrailSource
{
public:
	UParticleModuleTrailSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETrail2SourceMethod GetSourceMethod() {
		return memory.read<enum class ETrail2SourceMethod>(m_addr + 48);
	}
	struct FName GetSourceName() {
		return memory.read<struct FName>(m_addr + 52);
	}
	struct FRawDistributionFloat GetSourceStrength() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 64);
	}
	char GetbLockSourceStength() {
		return memory.read<char>(m_addr + 112);
	}
	int32_t GetSourceOffsetCount() {
		return memory.read<int32_t>(m_addr + 116);
	}
	struct TArray<struct FVector> GetSourceOffsetDefaults() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 120);
	}
	enum class EParticleSourceSelectionMethod GetSelectionMethod() {
		return memory.read<enum class EParticleSourceSelectionMethod>(m_addr + 136);
	}
	char GetbInheritRotation() {
		return memory.read<char>(m_addr + 140);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleSystemComponent
{
public:
	UParticleSystemComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystem GetTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UParticleSystem(ptr_addr);
	}
	struct TArray<struct UMaterialInterface> GetEmitterMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct TArray<struct USkeletalMeshComponent> GetSkelMeshComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct TArray<struct USkeletalMeshComponent>(ptr_addr);
	}
	char GetbResetOnDetach() {
		return memory.read<char>(m_addr + 1177);
	}
	char GetbUpdateOnDedicatedServer() {
		return memory.read<char>(m_addr + 1177);
	}
	char GetbAllowRecycling() {
		return memory.read<char>(m_addr + 1177);
	}
	char GetbAutoManageAttachment() {
		return memory.read<char>(m_addr + 1177);
	}
	char GetbAutoAttachWeldSimulatedBodies() {
		return memory.read<char>(m_addr + 1177);
	}
	char GetbWarmingUp() {
		return memory.read<char>(m_addr + 1178);
	}
	char GetbOverrideLODMethod() {
		return memory.read<char>(m_addr + 1178);
	}
	char GetbSkipUpdateDynamicDataDuringTick() {
		return memory.read<char>(m_addr + 1178);
	}
	enum class ParticleSystemLODMethod GetLODMethod() {
		return memory.read<enum class ParticleSystemLODMethod>(m_addr + 1189);
	}
	enum class EParticleSignificanceLevel GetRequiredSignificance() {
		return memory.read<enum class EParticleSignificanceLevel>(m_addr + 1190);
	}
	struct TArray<struct FParticleSysParam> GetInstanceParameters() {
		return memory.read<struct TArray<struct FParticleSysParam>>(m_addr + 1192);
	}
	struct FMulticastInlineDelegate GetOnParticleSpawn() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1208);
	}
	struct FMulticastInlineDelegate GetOnParticleBurst() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1224);
	}
	struct FMulticastInlineDelegate GetOnParticleDeath() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1240);
	}
	struct FMulticastInlineDelegate GetOnParticleCollide() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1256);
	}
	bool GetbOldPositionValid() {
		return memory.read<bool>(m_addr + 1272);
	}
	struct FVector GetOldPosition() {
		return memory.read<struct FVector>(m_addr + 1276);
	}
	struct FVector GetPartSysVelocity() {
		return memory.read<struct FVector>(m_addr + 1288);
	}
	float GetWarmupTime() {
		return memory.read<float>(m_addr + 1300);
	}
	float GetWarmupTickRate() {
		return memory.read<float>(m_addr + 1304);
	}
	float GetSecondsBeforeInactive() {
		return memory.read<float>(m_addr + 1312);
	}
	float GetMaxTimeBeforeForceUpdateTransform() {
		return memory.read<float>(m_addr + 1320);
	}
	struct TArray<struct UParticleSystemReplay> GetReplayClips() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct TArray<struct UParticleSystemReplay>(ptr_addr);
	}
	float GetCustomTimeDilation() {
		return memory.read<float>(m_addr + 1376);
	}
	struct TWeakObjectPtr<USceneComponent> GetAutoAttachParent() {
		return memory.read<struct TWeakObjectPtr<USceneComponent>>(m_addr + 1464);
	}
	struct FName GetAutoAttachSocketName() {
		return memory.read<struct FName>(m_addr + 1472);
	}
	enum class EAttachmentRule GetAutoAttachLocationRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 1480);
	}
	enum class EAttachmentRule GetAutoAttachRotationRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 1481);
	}
	enum class EAttachmentRule GetAutoAttachScaleRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 1482);
	}
	struct FMulticastInlineDelegate GetOnSystemFinished() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1528);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReporterBase
{
public:
	UReporterBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleTypeDataBase
{
public:
	UParticleModuleTypeDataBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleTypeDataAnimTrail
{
public:
	UParticleModuleTypeDataAnimTrail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbDeadTrailsOnDeactivate() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbEnablePreviousTangentRecalculation() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbTangentRecalculationEveryFrame() {
		return memory.read<char>(m_addr + 48);
	}
	float GetTilingDistance() {
		return memory.read<float>(m_addr + 52);
	}
	float GetDistanceTessellationStepSize() {
		return memory.read<float>(m_addr + 56);
	}
	float GetTangentTessellationStepSize() {
		return memory.read<float>(m_addr + 60);
	}
	float GetWidthTessellationStepSize() {
		return memory.read<float>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleTypeDataGpu
{
public:
	UParticleModuleTypeDataGpu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGPUSpriteEmitterInfo GetEmitterInfo() {
		return memory.read<struct FGPUSpriteEmitterInfo>(m_addr + 48);
	}
	struct FGPUSpriteResourceData GetResourceData() {
		return memory.read<struct FGPUSpriteResourceData>(m_addr + 688);
	}
	float GetCameraMotionBlurAmount() {
		return memory.read<float>(m_addr + 1040);
	}
	char GetbClearExistingParticlesOnInit() {
		return memory.read<char>(m_addr + 1044);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVectorFieldGlobal
{
public:
	UParticleModuleVectorFieldGlobal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbOverrideGlobalVectorFieldTightness() {
		return memory.read<char>(m_addr + 48);
	}
	float GetGlobalVectorFieldScale() {
		return memory.read<float>(m_addr + 52);
	}
	float GetGlobalVectorFieldTightness() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVectorFieldRotation
{
public:
	UParticleModuleVectorFieldRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetMinInitialRotation() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetMaxInitialRotation() {
		return memory.read<struct FVector>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeRandom
{
public:
	USoundNodeRandom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetWeights() {
		return memory.read<struct TArray<float>>(m_addr + 72);
	}
	struct TArray<bool> GetHasBeenUsed() {
		return memory.read<struct TArray<bool>>(m_addr + 88);
	}
	int32_t GetNumRandomUsed() {
		return memory.read<int32_t>(m_addr + 104);
	}
	int32_t GetPreselectAtLevelLoad() {
		return memory.read<int32_t>(m_addr + 108);
	}
	char GetbShouldExcludeFromBranchCulling() {
		return memory.read<char>(m_addr + 112);
	}
	char GetbSoundCueExcludedFromBranchCulling() {
		return memory.read<char>(m_addr + 112);
	}
	char GetbRandomizeWithoutReplacement() {
		return memory.read<char>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVelocityBase
{
public:
	UParticleModuleVelocityBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbInWorldSpace() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbApplyOwnerScale() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVelocity
{
public:
	UParticleModuleVelocity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetStartVelocity() {
		return memory.read<struct FRawDistributionVector>(m_addr + 56);
	}
	struct FRawDistributionFloat GetStartVelocityRadial() {
		return memory.read<struct FRawDistributionFloat>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UParticleModuleVelocityInheritParent
{
public:
	UParticleModuleVelocityInheritParent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRawDistributionVector GetScale() {
		return memory.read<struct FRawDistributionVector>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicalAnimationComponent
{
public:
	UPhysicalAnimationComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrengthMultiplyer() {
		return memory.read<float>(m_addr + 176);
	}
	struct USkeletalMeshComponent GetSkeletalMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct USkeletalMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicalMaterialMask
{
public:
	UPhysicalMaterialMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetUVChannelIndex() {
		return memory.read<int32_t>(m_addr + 40);
	}
	enum class TextureAddress GetAddressX() {
		return memory.read<enum class TextureAddress>(m_addr + 44);
	}
	enum class TextureAddress GetAddressY() {
		return memory.read<enum class TextureAddress>(m_addr + 45);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkeletalBodySetup
{
public:
	USkeletalBodySetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSkipScaleFromAnimation() {
		return memory.read<bool>(m_addr + 672);
	}
	struct TArray<struct FPhysicalAnimationProfile> GetPhysicalAnimationData() {
		return memory.read<struct TArray<struct FPhysicalAnimationProfile>>(m_addr + 680);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeWavePlayer
{
public:
	USoundNodeWavePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<USoundWave> GetSoundWaveAssetPtr() {
		return memory.read<struct TSoftObjectPtr<USoundWave>>(m_addr + 72);
	}
	struct USoundWave GetSoundWave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct USoundWave(ptr_addr);
	}
	char GetbLooping() {
		return memory.read<char>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkeletalMeshLODSettings
{
public:
	USkeletalMeshLODSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPerPlatformInt GetMinLOD() {
		return memory.read<struct FPerPlatformInt>(m_addr + 48);
	}
	struct FPerPlatformBool GetDisableBelowMinLodStripping() {
		return memory.read<struct FPerPlatformBool>(m_addr + 52);
	}
	bool GetbOverrideLODStreamingSettings() {
		return memory.read<bool>(m_addr + 53);
	}
	struct FPerPlatformBool GetbSupportLODStreaming() {
		return memory.read<struct FPerPlatformBool>(m_addr + 54);
	}
	struct FPerPlatformInt GetMaxNumStreamedLODs() {
		return memory.read<struct FPerPlatformInt>(m_addr + 56);
	}
	struct FPerPlatformInt GetMaxNumOptionalLODs() {
		return memory.read<struct FPerPlatformInt>(m_addr + 60);
	}
	struct TArray<struct FSkeletalMeshLODGroupSettings> GetLODGroups() {
		return memory.read<struct TArray<struct FSkeletalMeshLODGroupSettings>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicsCollisionHandler
{
public:
	UPhysicsCollisionHandler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetImpactThreshold() {
		return memory.read<float>(m_addr + 40);
	}
	float GetImpactReFireDelay() {
		return memory.read<float>(m_addr + 44);
	}
	struct USoundBase GetDefaultImpactSound() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct USoundBase(ptr_addr);
	}
	float GetLastImpactSoundTime() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class ARigidBodyBase
{
public:
	ARigidBodyBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPhysicsConstraintTemplate
{
public:
	UPhysicsConstraintTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FConstraintInstance GetDefaultInstance() {
		return memory.read<struct FConstraintInstance>(m_addr + 40);
	}
	struct TArray<struct FPhysicsConstraintProfileHandle> GetProfileHandles() {
		return memory.read<struct TArray<struct FPhysicsConstraintProfileHandle>>(m_addr + 496);
	}
	struct FConstraintProfileProperties GetDefaultProfile() {
		return memory.read<struct FConstraintProfileProperties>(m_addr + 512);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicsHandleComponent
{
public:
	UPhysicsHandleComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetGrabbedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UPrimitiveComponent(ptr_addr);
	}
	char GetbSoftAngularConstraint() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbSoftLinearConstraint() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbInterpolateTarget() {
		return memory.read<char>(m_addr + 192);
	}
	float GetLinearDamping() {
		return memory.read<float>(m_addr + 196);
	}
	float GetLinearStiffness() {
		return memory.read<float>(m_addr + 200);
	}
	float GetAngularDamping() {
		return memory.read<float>(m_addr + 204);
	}
	float GetAngularStiffness() {
		return memory.read<float>(m_addr + 208);
	}
	float GetInterpolationSpeed() {
		return memory.read<float>(m_addr + 320);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicsSettings
{
public:
	UPhysicsSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigidBodyErrorCorrection GetPhysicErrorCorrection() {
		return memory.read<struct FRigidBodyErrorCorrection>(m_addr + 224);
	}
	enum class ESettingsLockedAxis GetLockedAxis() {
		return memory.read<enum class ESettingsLockedAxis>(m_addr + 276);
	}
	enum class ESettingsDOF GetDefaultDegreesOfFreedom() {
		return memory.read<enum class ESettingsDOF>(m_addr + 277);
	}
	bool GetbSuppressFaceRemapTable() {
		return memory.read<bool>(m_addr + 278);
	}
	bool GetbSupportUVFromHitResults() {
		return memory.read<bool>(m_addr + 279);
	}
	bool GetbDisableActiveActors() {
		return memory.read<bool>(m_addr + 280);
	}
	bool GetbDisableKinematicStaticPairs() {
		return memory.read<bool>(m_addr + 281);
	}
	bool GetbDisableKinematicKinematicPairs() {
		return memory.read<bool>(m_addr + 282);
	}
	bool GetbDisableCCD() {
		return memory.read<bool>(m_addr + 283);
	}
	bool GetbEnableEnhancedDeterminism() {
		return memory.read<bool>(m_addr + 284);
	}
	float GetAnimPhysicsMinDeltaTime() {
		return memory.read<float>(m_addr + 288);
	}
	bool GetbSimulateAnimPhysicsAfterReset() {
		return memory.read<bool>(m_addr + 292);
	}
	float GetMaxPhysicsDeltaTime() {
		return memory.read<float>(m_addr + 296);
	}
	bool GetbSubstepping() {
		return memory.read<bool>(m_addr + 300);
	}
	bool GetbSubsteppingAsync() {
		return memory.read<bool>(m_addr + 301);
	}
	float GetMaxSubstepDeltaTime() {
		return memory.read<float>(m_addr + 304);
	}
	int32_t GetMaxSubsteps() {
		return memory.read<int32_t>(m_addr + 308);
	}
	float GetSyncSceneSmoothingFactor() {
		return memory.read<float>(m_addr + 312);
	}
	float GetInitialAverageFrameRate() {
		return memory.read<float>(m_addr + 316);
	}
	int32_t GetPhysXTreeRebuildRate() {
		return memory.read<int32_t>(m_addr + 320);
	}
	struct TArray<struct FPhysicalSurfaceName> GetPhysicalSurfaces() {
		return memory.read<struct TArray<struct FPhysicalSurfaceName>>(m_addr + 328);
	}
	struct FBroadphaseSettings GetDefaultBroadphaseSettings() {
		return memory.read<struct FBroadphaseSettings>(m_addr + 344);
	}
	float GetMinDeltaVelocityForHitEvents() {
		return memory.read<float>(m_addr + 408);
	}
	struct FChaosPhysicsSettings GetChaosSettings() {
		return memory.read<struct FChaosPhysicsSettings>(m_addr + 412);
	}

private:
	std::uint64_t m_addr = 0;
};


class APhysicsThruster
{
public:
	APhysicsThruster(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicsThrusterComponent GetThrusterComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UPhysicsThrusterComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicsThrusterComponent
{
public:
	UPhysicsThrusterComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetThrustStrength() {
		return memory.read<float>(m_addr + 520);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlanarReflectionComponent
{
public:
	UPlanarReflectionComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBoxComponent GetPreviewBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UBoxComponent(ptr_addr);
	}
	float GetNormalDistortionStrength() {
		return memory.read<float>(m_addr + 720);
	}
	float GetPrefilterRoughness() {
		return memory.read<float>(m_addr + 724);
	}
	float GetPrefilterRoughnessDistance() {
		return memory.read<float>(m_addr + 728);
	}
	int32_t GetScreenPercentage() {
		return memory.read<int32_t>(m_addr + 732);
	}
	float GetExtraFOV() {
		return memory.read<float>(m_addr + 736);
	}
	float GetDistanceFromPlaneFadeStart() {
		return memory.read<float>(m_addr + 740);
	}
	float GetDistanceFromPlaneFadeEnd() {
		return memory.read<float>(m_addr + 744);
	}
	float GetDistanceFromPlaneFadeoutStart() {
		return memory.read<float>(m_addr + 748);
	}
	float GetDistanceFromPlaneFadeoutEnd() {
		return memory.read<float>(m_addr + 752);
	}
	float GetAngleFromPlaneFadeStart() {
		return memory.read<float>(m_addr + 756);
	}
	float GetAngleFromPlaneFadeEnd() {
		return memory.read<float>(m_addr + 760);
	}
	bool GetbShowPreviewPlane() {
		return memory.read<bool>(m_addr + 764);
	}
	bool GetbRenderSceneTwoSided() {
		return memory.read<bool>(m_addr + 765);
	}

private:
	std::uint64_t m_addr = 0;
};


class APlaneReflectionCapture
{
public:
	APlaneReflectionCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPlaneReflectionCaptureComponent
{
public:
	UPlaneReflectionCaptureComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInfluenceRadiusScale() {
		return memory.read<float>(m_addr + 752);
	}
	struct UDrawSphereComponent GetPreviewInfluenceRadius() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UDrawSphereComponent(ptr_addr);
	}
	struct UBoxComponent GetPreviewCaptureBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UBoxComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNode
{
public:
	USoundNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct USoundNode> GetChildNodes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct USoundNode>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class APlayerCameraManager
{
public:
	APlayerCameraManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPCOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct APlayerController(ptr_addr);
	}
	struct USceneComponent GetTransformComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct USceneComponent(ptr_addr);
	}
	float GetDefaultFOV() {
		return memory.read<float>(m_addr + 568);
	}
	float GetDefaultOrthoWidth() {
		return memory.read<float>(m_addr + 576);
	}
	float GetDefaultAspectRatio() {
		return memory.read<float>(m_addr + 584);
	}
	struct FCameraCacheEntry GetCameraCache() {
		return memory.read<struct FCameraCacheEntry>(m_addr + 656);
	}
	struct FCameraCacheEntry GetLastFrameCameraCache() {
		return memory.read<struct FCameraCacheEntry>(m_addr + 2320);
	}
	struct FTViewTarget GetViewTarget() {
		return memory.read<struct FTViewTarget>(m_addr + 3984);
	}
	struct FTViewTarget GetPendingViewTarget() {
		return memory.read<struct FTViewTarget>(m_addr + 5664);
	}
	struct FCameraCacheEntry GetCameraCachePrivate() {
		return memory.read<struct FCameraCacheEntry>(m_addr + 7392);
	}
	struct FCameraCacheEntry GetLastFrameCameraCachePrivate() {
		return memory.read<struct FCameraCacheEntry>(m_addr + 9056);
	}
	struct TArray<struct UCameraModifier> GetModifierList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10720);
		return struct TArray<struct UCameraModifier>(ptr_addr);
	}
	struct TArray<UCameraModifier> GetDefaultModifiers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10736);
		return struct TArray<UCameraModifier>(ptr_addr);
	}
	float GetFreeCamDistance() {
		return memory.read<float>(m_addr + 10752);
	}
	struct FVector GetFreeCamOffset() {
		return memory.read<struct FVector>(m_addr + 10756);
	}
	struct FVector GetViewTargetOffset() {
		return memory.read<struct FVector>(m_addr + 10768);
	}
	struct FMulticastInlineDelegate GetOnAudioFadeChangeEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 10784);
	}
	struct TArray<struct AEmitterCameraLensEffectBase> GetCameraLensEffects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10816);
		return struct TArray<struct AEmitterCameraLensEffectBase>(ptr_addr);
	}
	struct UCameraModifier_CameraShake GetCachedCameraShakeMod() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10832);
		return struct UCameraModifier_CameraShake(ptr_addr);
	}
	struct UCameraAnimInst GetAnimInstPool[8]() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10840);
		return struct UCameraAnimInst(ptr_addr);
	}
	struct TArray<struct FPostProcessSettings> GetPostProcessBlendCache() {
		return memory.read<struct TArray<struct FPostProcessSettings>>(m_addr + 10904);
	}
	struct TArray<struct UCameraAnimInst> GetActiveAnims() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10936);
		return struct TArray<struct UCameraAnimInst>(ptr_addr);
	}
	struct TArray<struct UCameraAnimInst> GetFreeAnims() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10952);
		return struct TArray<struct UCameraAnimInst>(ptr_addr);
	}
	struct ACameraActor GetAnimCameraActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10968);
		return struct ACameraActor(ptr_addr);
	}
	char GetbIsOrthographic() {
		return memory.read<char>(m_addr + 10976);
	}
	char GetbDefaultConstrainAspectRatio() {
		return memory.read<char>(m_addr + 10976);
	}
	char GetbClientSimulatingViewTarget() {
		return memory.read<char>(m_addr + 10976);
	}
	char GetbUseClientSideCameraUpdates() {
		return memory.read<char>(m_addr + 10976);
	}
	char GetbGameCameraCutThisFrame() {
		return memory.read<char>(m_addr + 10977);
	}
	float GetViewPitchMin() {
		return memory.read<float>(m_addr + 10980);
	}
	float GetViewPitchMax() {
		return memory.read<float>(m_addr + 10984);
	}
	float GetViewYawMin() {
		return memory.read<float>(m_addr + 10988);
	}
	float GetViewYawMax() {
		return memory.read<float>(m_addr + 10992);
	}
	float GetViewRollMin() {
		return memory.read<float>(m_addr + 10996);
	}
	float GetViewRollMax() {
		return memory.read<float>(m_addr + 11000);
	}
	float GetServerUpdateCameraTimeout() {
		return memory.read<float>(m_addr + 11008);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPoseableMeshComponent
{
public:
	UPoseableMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPoseAsset
{
public:
	UPoseAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseDataContainer GetPoseContainer() {
		return memory.read<struct FPoseDataContainer>(m_addr + 128);
	}
	bool GetbAdditivePose() {
		return memory.read<bool>(m_addr + 272);
	}
	int32_t GetBasePoseIndex() {
		return memory.read<int32_t>(m_addr + 276);
	}
	struct FName GetRetargetSource() {
		return memory.read<struct FName>(m_addr + 280);
	}
	struct TArray<struct FTransform> GetRetargetSourceAssetReferencePose() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPoseWatch
{
public:
	UPoseWatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEdGraphNode GetNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UEdGraphNode(ptr_addr);
	}
	struct FColor GetPoseWatchColour() {
		return memory.read<struct FColor>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class APrecomputedVisibilityVolume
{
public:
	APrecomputedVisibilityVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPreviewCollectionInterface
{
public:
	UPreviewCollectionInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ARectLight
{
public:
	ARectLight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URectLightComponent GetRectLightComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct URectLightComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URendererSettings
{
public:
	URendererSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbMobileDisableVertexFog() {
		return memory.read<char>(m_addr + 56);
	}
	int32_t GetMaxMobileCascades() {
		return memory.read<int32_t>(m_addr + 60);
	}
	enum class EMobileMSAASampleCount GetMobileMSAASampleCount() {
		return memory.read<enum class EMobileMSAASampleCount>(m_addr + 64);
	}
	char GetbMobileAllowDitheredLODTransition() {
		return memory.read<char>(m_addr + 68);
	}
	char GetbMobileAllowSoftwareOcclusionCulling() {
		return memory.read<char>(m_addr + 68);
	}
	char GetbMobileVirtualTextures() {
		return memory.read<char>(m_addr + 68);
	}
	char GetbDiscardUnusedQualityLevels() {
		return memory.read<char>(m_addr + 68);
	}
	char GetbOcclusionCulling() {
		return memory.read<char>(m_addr + 68);
	}
	float GetMinScreenRadiusForLights() {
		return memory.read<float>(m_addr + 72);
	}
	float GetMinScreenRadiusForEarlyZPass() {
		return memory.read<float>(m_addr + 76);
	}
	float GetMinScreenRadiusForCSMdepth() {
		return memory.read<float>(m_addr + 80);
	}
	char GetbPrecomputedVisibilityWarning() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbTextureStreaming() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbUseDXT5NormalMaps() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbVirtualTextures() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbVirtualTextureEnableAutoImport() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbVirtualTexturedLightmaps() {
		return memory.read<char>(m_addr + 84);
	}
	uint32_t GetVirtualTextureTileSize() {
		return memory.read<uint32_t>(m_addr + 88);
	}
	uint32_t GetVirtualTextureTileBorderSize() {
		return memory.read<uint32_t>(m_addr + 92);
	}
	uint32_t GetVirtualTextureFeedbackFactor() {
		return memory.read<uint32_t>(m_addr + 96);
	}
	char GetbVirtualTextureEnableCompressZlib() {
		return memory.read<char>(m_addr + 100);
	}
	char GetbVirtualTextureEnableCompressCrunch() {
		return memory.read<char>(m_addr + 100);
	}
	char GetbClearCoatEnableSecondNormal() {
		return memory.read<char>(m_addr + 100);
	}
	int32_t GetReflectionCaptureResolution() {
		return memory.read<int32_t>(m_addr + 104);
	}
	char GetbReflectionCaptureCompression() {
		return memory.read<char>(m_addr + 108);
	}
	char GetReflectionEnvironmentLightmapMixBasedOnRoughness() {
		return memory.read<char>(m_addr + 108);
	}
	char GetReflectionEncodeRGBM_SM5() {
		return memory.read<char>(m_addr + 108);
	}
	char GetbForwardShading() {
		return memory.read<char>(m_addr + 108);
	}
	char GetbVertexFoggingForOpaque() {
		return memory.read<char>(m_addr + 108);
	}
	char GetbAllowStaticLighting() {
		return memory.read<char>(m_addr + 108);
	}
	char GetbUseNormalMapsForStaticLighting() {
		return memory.read<char>(m_addr + 108);
	}
	char GetbGenerateMeshDistanceFields() {
		return memory.read<char>(m_addr + 108);
	}
	char GetbEightBitMeshDistanceFields() {
		return memory.read<char>(m_addr + 109);
	}
	char GetbGenerateLandscapeGIData() {
		return memory.read<char>(m_addr + 109);
	}
	char GetbCompressMeshDistanceFields() {
		return memory.read<char>(m_addr + 109);
	}
	float GetTessellationAdaptivePixelsPerTriangle() {
		return memory.read<float>(m_addr + 112);
	}
	char GetbSeparateTranslucency() {
		return memory.read<char>(m_addr + 116);
	}
	enum class ETranslucentSortPolicy GetTranslucentSortPolicy() {
		return memory.read<enum class ETranslucentSortPolicy>(m_addr + 120);
	}
	struct FVector GetTranslucentSortAxis() {
		return memory.read<struct FVector>(m_addr + 124);
	}
	enum class EFixedFoveationLevels GetHMDFixedFoveationLevel() {
		return memory.read<enum class EFixedFoveationLevels>(m_addr + 136);
	}
	enum class ECustomDepthStencil GetCustomDepthStencil() {
		return memory.read<enum class ECustomDepthStencil>(m_addr + 137);
	}
	char GetbCustomDepthTaaJitter() {
		return memory.read<char>(m_addr + 140);
	}
	enum class EAlphaChannelMode GetbEnableAlphaChannelInPostProcessing() {
		return memory.read<enum class EAlphaChannelMode>(m_addr + 144);
	}
	char GetbDefaultFeatureBloom() {
		return memory.read<char>(m_addr + 148);
	}
	char GetbDefaultFeatureAmbientOcclusion() {
		return memory.read<char>(m_addr + 148);
	}
	char GetbDefaultFeatureAmbientOcclusionStaticFraction() {
		return memory.read<char>(m_addr + 148);
	}
	char GetbDefaultFeatureAutoExposure() {
		return memory.read<char>(m_addr + 148);
	}
	enum class EAutoExposureMethodUI GetDefaultFeatureAutoExposure() {
		return memory.read<enum class EAutoExposureMethodUI>(m_addr + 152);
	}
	float GetDefaultFeatureAutoExposureBias() {
		return memory.read<float>(m_addr + 156);
	}
	char GetbExtendDefaultLuminanceRangeInAutoExposureSettings() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbUsePreExposure() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbEnablePreExposureOnlyInTheEditor() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbDefaultFeatureMotionBlur() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbDefaultFeatureLensFlare() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbTemporalUpsampling() {
		return memory.read<char>(m_addr + 160);
	}
	char GetbSSGI() {
		return memory.read<char>(m_addr + 160);
	}
	enum class EAntiAliasingMethod GetDefaultFeatureAntiAliasing() {
		return memory.read<enum class EAntiAliasingMethod>(m_addr + 164);
	}
	enum class ELightUnits GetDefaultLightUnits() {
		return memory.read<enum class ELightUnits>(m_addr + 165);
	}
	enum class EDefaultBackBufferPixelFormat GetDefaultBackBufferPixelFormat() {
		return memory.read<enum class EDefaultBackBufferPixelFormat>(m_addr + 166);
	}
	char GetbRenderUnbuiltPreviewShadowsInGame() {
		return memory.read<char>(m_addr + 168);
	}
	char GetbStencilForLODDither() {
		return memory.read<char>(m_addr + 168);
	}
	enum class EEarlyZPass GetEarlyZPass() {
		return memory.read<enum class EEarlyZPass>(m_addr + 172);
	}
	char GetbEarlyZPassOnlyMaterialMasking() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbDBuffer() {
		return memory.read<char>(m_addr + 176);
	}
	enum class EClearSceneOptions GetClearSceneMethod() {
		return memory.read<enum class EClearSceneOptions>(m_addr + 180);
	}
	char GetbBasePassOutputsVelocity() {
		return memory.read<char>(m_addr + 184);
	}
	char GetbVertexDeformationOutputsVelocity() {
		return memory.read<char>(m_addr + 184);
	}
	char GetbSelectiveBasePassOutputs() {
		return memory.read<char>(m_addr + 184);
	}
	char GetbDefaultParticleCutouts() {
		return memory.read<char>(m_addr + 184);
	}
	int32_t GetGPUSimulationTextureSizeX() {
		return memory.read<int32_t>(m_addr + 188);
	}
	int32_t GetGPUSimulationTextureSizeY() {
		return memory.read<int32_t>(m_addr + 192);
	}
	char GetbGlobalClipPlane() {
		return memory.read<char>(m_addr + 196);
	}
	enum class EGBufferFormat GetGBufferFormat() {
		return memory.read<enum class EGBufferFormat>(m_addr + 200);
	}
	char GetbUseGPUMorphTargets() {
		return memory.read<char>(m_addr + 204);
	}
	char GetbNvidiaAftermathEnabled() {
		return memory.read<char>(m_addr + 204);
	}
	char GetbMultiView() {
		return memory.read<char>(m_addr + 204);
	}
	char GetbMobilePostProcessing() {
		return memory.read<char>(m_addr + 204);
	}
	char GetbMobileMultiView() {
		return memory.read<char>(m_addr + 204);
	}
	char GetbMobileUseHWsRGBEncoding() {
		return memory.read<char>(m_addr + 204);
	}
	char GetbRoundRobinOcclusion() {
		return memory.read<char>(m_addr + 204);
	}
	char GetbODSCapture() {
		return memory.read<char>(m_addr + 204);
	}
	char GetbMeshStreaming() {
		return memory.read<char>(m_addr + 205);
	}
	float GetWireframeCullThreshold() {
		return memory.read<float>(m_addr + 208);
	}
	char GetbEnableRayTracing() {
		return memory.read<char>(m_addr + 212);
	}
	char GetbEnableRayTracingTextureLOD() {
		return memory.read<char>(m_addr + 212);
	}
	char GetbSupportStationarySkylight() {
		return memory.read<char>(m_addr + 212);
	}
	char GetbSupportLowQualityLightmaps() {
		return memory.read<char>(m_addr + 212);
	}
	char GetbSupportPointLightWholeSceneShadows() {
		return memory.read<char>(m_addr + 212);
	}
	char GetbSupportAtmosphericFog() {
		return memory.read<char>(m_addr + 212);
	}
	char GetbSupportSkyAtmosphere() {
		return memory.read<char>(m_addr + 212);
	}
	char GetbSupportSkyAtmosphereAffectsHeightFog() {
		return memory.read<char>(m_addr + 212);
	}
	char GetbSupportSkinCacheShaders() {
		return memory.read<char>(m_addr + 213);
	}
	enum class ESkinCacheDefaultBehavior GetDefaultSkinCacheBehavior() {
		return memory.read<enum class ESkinCacheDefaultBehavior>(m_addr + 216);
	}
	float GetSkinCacheSceneMemoryLimitInMB() {
		return memory.read<float>(m_addr + 220);
	}
	char GetbMobileEnableStaticAndCSMShadowReceivers() {
		return memory.read<char>(m_addr + 224);
	}
	char GetbMobileEnableMovableLightCSMShaderCulling() {
		return memory.read<char>(m_addr + 224);
	}
	char GetbMobileAllowDistanceFieldShadows() {
		return memory.read<char>(m_addr + 224);
	}
	char GetbMobileAllowMovableDirectionalLights() {
		return memory.read<char>(m_addr + 224);
	}
	uint32_t GetMobileNumDynamicPointLights() {
		return memory.read<uint32_t>(m_addr + 228);
	}
	char GetbMobileDynamicPointLightsUseStaticBranch() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbMobileAllowMovableSpotlights() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbMobileAllowMovableSpotlightShadows() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbSupport16BitBoneIndex() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbGPUSkinLimit2BoneInfluences() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbSupportDepthOnlyIndexBuffers() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbSupportReversedIndexBuffers() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbLPV() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbMobileAmbientOcclusion() {
		return memory.read<char>(m_addr + 233);
	}
	char GetbUseUnlimitedBoneInfluences() {
		return memory.read<char>(m_addr + 233);
	}
	int32_t GetUnlimitedBonInfluencesThreshold() {
		return memory.read<int32_t>(m_addr + 236);
	}
	struct FPerPlatformInt GetMaxSkinBones() {
		return memory.read<struct FPerPlatformInt>(m_addr + 240);
	}
	enum class EMobilePlanarReflectionMode GetMobilePlanarReflectionMode() {
		return memory.read<enum class EMobilePlanarReflectionMode>(m_addr + 244);
	}
	char GetbMobileSupportsGen4TAA() {
		return memory.read<char>(m_addr + 248);
	}
	struct FPerPlatformBool GetbStreamSkeletalMeshLODs() {
		return memory.read<struct FPerPlatformBool>(m_addr + 252);
	}
	struct FPerPlatformBool GetbDiscardSkeletalMeshOptionalLODs() {
		return memory.read<struct FPerPlatformBool>(m_addr + 253);
	}
	struct FSoftObjectPath GetVisualizeCalibrationColorMaterialPath() {
		return memory.read<struct FSoftObjectPath>(m_addr + 256);
	}
	struct FSoftObjectPath GetVisualizeCalibrationCustomMaterialPath() {
		return memory.read<struct FSoftObjectPath>(m_addr + 280);
	}
	struct FSoftObjectPath GetVisualizeCalibrationGrayscaleMaterialPath() {
		return memory.read<struct FSoftObjectPath>(m_addr + 304);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplayNetConnection
{
public:
	UReplayNetConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UReplicationConnectionDriver
{
public:
	UReplicationConnectionDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URig
{
public:
	URig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTransformBase> GetTransformBases() {
		return memory.read<struct TArray<struct FTransformBase>>(m_addr + 48);
	}
	struct TArray<struct FNode> Getnodes() {
		return memory.read<struct TArray<struct FNode>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class URotatingMovementComponent
{
public:
	URotatingMovementComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetRotationRate() {
		return memory.read<struct FRotator>(m_addr + 240);
	}
	struct FVector GetPivotTranslation() {
		return memory.read<struct FVector>(m_addr + 252);
	}
	char GetbRotationInLocalSpace() {
		return memory.read<char>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};


class URuntimeOptionsBase
{
public:
	URuntimeOptionsBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URuntimeVirtualTextureComponent
{
public:
	URuntimeVirtualTextureComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<AActor> GetBoundsAlignActor() {
		return memory.read<struct TSoftObjectPtr<AActor>>(m_addr + 520);
	}
	bool GetbSetBoundsButton() {
		return memory.read<bool>(m_addr + 560);
	}
	bool GetbSnapBoundsToLandscape() {
		return memory.read<bool>(m_addr + 561);
	}
	struct URuntimeVirtualTexture GetVirtualTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct URuntimeVirtualTexture(ptr_addr);
	}
	bool GetbEnableScalability() {
		return memory.read<bool>(m_addr + 576);
	}
	uint32_t GetScalabilityGroup() {
		return memory.read<uint32_t>(m_addr + 580);
	}
	bool GetbHidePrimitives() {
		return memory.read<bool>(m_addr + 584);
	}
	struct UVirtualTextureBuilder GetStreamingTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UVirtualTextureBuilder(ptr_addr);
	}
	int32_t GetStreamLowMips() {
		return memory.read<int32_t>(m_addr + 600);
	}
	bool GetbBuildStreamingMipsButton() {
		return memory.read<bool>(m_addr + 604);
	}
	bool GetbEnableCompressCrunch() {
		return memory.read<bool>(m_addr + 605);
	}
	bool GetbUseStreamingLowMipsInEditor() {
		return memory.read<bool>(m_addr + 606);
	}
	bool GetbBuildDebugStreamingMips() {
		return memory.read<bool>(m_addr + 607);
	}

private:
	std::uint64_t m_addr = 0;
};


class URVOAvoidanceInterface
{
public:
	URVOAvoidanceInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UScene
{
public:
	UScene(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AVolumetricCloud
{
public:
	AVolumetricCloud(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVolumetricCloudComponent GetVolumetricCloudComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UVolumetricCloudComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ASceneCaptureCube
{
public:
	ASceneCaptureCube(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneCaptureComponentCube GetCaptureComponentCube() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct USceneCaptureComponentCube(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UShadowMapTexture2D
{
public:
	UShadowMapTexture2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EShadowMapFlags GetShadowmapFlags() {
		return memory.read<enum class EShadowMapFlags>(m_addr + 416);
	}

private:
	std::uint64_t m_addr = 0;
};


class ASkyAtmosphere
{
public:
	ASkyAtmosphere(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkyAtmosphereComponent GetSkyAtmosphereComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct USkyAtmosphereComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USimpleConstructionScript
{
public:
	USimpleConstructionScript(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct USCS_Node> GetRootNodes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct USCS_Node>(ptr_addr);
	}
	struct TArray<struct USCS_Node> GetAllNodes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct USCS_Node>(ptr_addr);
	}
	struct USCS_Node GetDefaultSceneRootNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct USCS_Node(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkeletalMesh
{
public:
	USkeletalMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeleton GetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct USkeleton(ptr_addr);
	}
	struct FBoxSphereBounds GetImportedBounds() {
		return memory.read<struct FBoxSphereBounds>(m_addr + 136);
	}
	struct FBoxSphereBounds GetExtendedBounds() {
		return memory.read<struct FBoxSphereBounds>(m_addr + 164);
	}
	struct FVector GetPositiveBoundsExtension() {
		return memory.read<struct FVector>(m_addr + 192);
	}
	struct FVector GetNegativeBoundsExtension() {
		return memory.read<struct FVector>(m_addr + 204);
	}
	struct TArray<struct FSkeletalMaterial> GetMaterials() {
		return memory.read<struct TArray<struct FSkeletalMaterial>>(m_addr + 216);
	}
	struct TArray<struct FBoneMirrorInfo> GetSkelMirrorTable() {
		return memory.read<struct TArray<struct FBoneMirrorInfo>>(m_addr + 232);
	}
	struct TArray<struct FSkeletalMeshLODInfo> GetLODInfo() {
		return memory.read<struct TArray<struct FSkeletalMeshLODInfo>>(m_addr + 248);
	}
	struct FPerPlatformInt GetMinLOD() {
		return memory.read<struct FPerPlatformInt>(m_addr + 344);
	}
	struct FPerPlatformBool GetDisableBelowMinLodStripping() {
		return memory.read<struct FPerPlatformBool>(m_addr + 348);
	}
	enum class EAxis GetSkelMirrorAxis() {
		return memory.read<enum class EAxis>(m_addr + 349);
	}
	enum class EAxis GetSkelMirrorFlipAxis() {
		return memory.read<enum class EAxis>(m_addr + 350);
	}
	char GetbUseFullPrecisionUVs() {
		return memory.read<char>(m_addr + 351);
	}
	char GetbUseHighPrecisionTangentBasis() {
		return memory.read<char>(m_addr + 351);
	}
	char GetbHasBeenSimplified() {
		return memory.read<char>(m_addr + 351);
	}
	char GetbHasVertexColors() {
		return memory.read<char>(m_addr + 351);
	}
	char GetbEnablePerPolyCollision() {
		return memory.read<char>(m_addr + 351);
	}
	char GetbIgnorePhysicsAssetBounds() {
		return memory.read<char>(m_addr + 351);
	}
	struct UBodySetup GetBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 352);
		return struct UBodySetup(ptr_addr);
	}
	struct UPhysicsAsset GetPhysicsAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 360);
		return struct UPhysicsAsset(ptr_addr);
	}
	struct UPhysicsAsset GetShadowPhysicsAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 368);
		return struct UPhysicsAsset(ptr_addr);
	}
	struct TArray<struct UNodeMappingContainer> GetNodeMappingData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 376);
		return struct TArray<struct UNodeMappingContainer>(ptr_addr);
	}
	char GetbSupportRayTracing() {
		return memory.read<char>(m_addr + 392);
	}
	struct TArray<struct UMorphTarget> GetMorphTargets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 400);
		return struct TArray<struct UMorphTarget>(ptr_addr);
	}
	UAnimInstance GetPostProcessAnimBlueprint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return UAnimInstance(ptr_addr);
	}
	struct TArray<struct UClothingAssetBase> GetMeshClothingAssets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct TArray<struct UClothingAssetBase>(ptr_addr);
	}
	struct FSkeletalMeshSamplingInfo GetSamplingInfo() {
		return memory.read<struct FSkeletalMeshSamplingInfo>(m_addr + 816);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}
	struct TArray<struct USkeletalMeshSocket> GetSockets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct TArray<struct USkeletalMeshSocket>(ptr_addr);
	}
	struct TArray<struct FSkinWeightProfileInfo> GetSkinWeightProfiles() {
		return memory.read<struct TArray<struct FSkinWeightProfileInfo>>(m_addr + 912);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkeletalMeshEditorData
{
public:
	USkeletalMeshEditorData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USlateTextureAtlasInterface
{
public:
	USlateTextureAtlasInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USkeletalMeshSimplificationSettings
{
public:
	USkeletalMeshSimplificationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSkeletalMeshReductionModuleName() {
		return memory.read<struct FName>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkeletalMeshSocket
{
public:
	USkeletalMeshSocket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	struct FName GetBoneName() {
		return memory.read<struct FName>(m_addr + 48);
	}
	struct FVector GetRelativeLocation() {
		return memory.read<struct FVector>(m_addr + 56);
	}
	struct FRotator GetRelativeRotation() {
		return memory.read<struct FRotator>(m_addr + 68);
	}
	struct FVector GetRelativeScale() {
		return memory.read<struct FVector>(m_addr + 80);
	}
	bool GetbForceAlwaysAnimated() {
		return memory.read<bool>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkyLightComponent
{
public:
	USkyLightComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbRealTimeCapture() {
		return memory.read<bool>(m_addr + 568);
	}
	enum class ESkyLightSourceType GetSourceType() {
		return memory.read<enum class ESkyLightSourceType>(m_addr + 569);
	}
	struct UTextureCube GetCubemap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UTextureCube(ptr_addr);
	}
	float GetSourceCubemapAngle() {
		return memory.read<float>(m_addr + 584);
	}
	int32_t GetCubemapResolution() {
		return memory.read<int32_t>(m_addr + 588);
	}
	float GetSkyDistanceThreshold() {
		return memory.read<float>(m_addr + 592);
	}
	bool GetbCaptureEmissiveOnly() {
		return memory.read<bool>(m_addr + 596);
	}
	bool GetbLowerHemisphereIsBlack() {
		return memory.read<bool>(m_addr + 597);
	}
	struct FLinearColor GetLowerHemisphereColor() {
		return memory.read<struct FLinearColor>(m_addr + 600);
	}
	float GetOcclusionMaxDistance() {
		return memory.read<float>(m_addr + 616);
	}
	float GetContrast() {
		return memory.read<float>(m_addr + 620);
	}
	float GetOcclusionExponent() {
		return memory.read<float>(m_addr + 624);
	}
	float GetMinOcclusion() {
		return memory.read<float>(m_addr + 628);
	}
	struct FColor GetOcclusionTint() {
		return memory.read<struct FColor>(m_addr + 632);
	}
	char GetbCloudAmbientOcclusion() {
		return memory.read<char>(m_addr + 636);
	}
	float GetCloudAmbientOcclusionStrength() {
		return memory.read<float>(m_addr + 640);
	}
	float GetCloudAmbientOcclusionExtent() {
		return memory.read<float>(m_addr + 644);
	}
	float GetCloudAmbientOcclusionMapResolutionScale() {
		return memory.read<float>(m_addr + 648);
	}
	float GetCloudAmbientOcclusionApertureScale() {
		return memory.read<float>(m_addr + 652);
	}
	enum class EOcclusionCombineMode GetOcclusionCombineMode() {
		return memory.read<enum class EOcclusionCombineMode>(m_addr + 656);
	}
	struct UTextureCube GetBlendDestinationCubemap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UTextureCube(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USlateBrushAsset
{
public:
	USlateBrushAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class USmokeTestCommandlet
{
public:
	USmokeTestCommandlet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USoundAttenuation
{
public:
	USoundAttenuation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoundAttenuationSettings GetAttenuation() {
		return memory.read<struct FSoundAttenuationSettings>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundGroups
{
public:
	USoundGroups(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSoundGroup> GetSoundGroupProfiles() {
		return memory.read<struct TArray<struct FSoundGroup>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundMix
{
public:
	USoundMix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbApplyEQ() {
		return memory.read<char>(m_addr + 40);
	}
	float GetEQPriority() {
		return memory.read<float>(m_addr + 44);
	}
	struct FAudioEQEffect GetEQSettings() {
		return memory.read<struct FAudioEQEffect>(m_addr + 48);
	}
	struct TArray<struct FSoundClassAdjuster> GetSoundClassEffects() {
		return memory.read<struct TArray<struct FSoundClassAdjuster>>(m_addr + 112);
	}
	float GetInitialDelay() {
		return memory.read<float>(m_addr + 128);
	}
	float GetFadeInTime() {
		return memory.read<float>(m_addr + 132);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 136);
	}
	float GetFadeOutTime() {
		return memory.read<float>(m_addr + 140);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeAssetReferencer
{
public:
	USoundNodeAssetReferencer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USoundNodeAttenuation
{
public:
	USoundNodeAttenuation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundAttenuation GetAttenuationSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct USoundAttenuation(ptr_addr);
	}
	struct FSoundAttenuationSettings GetAttenuationOverrides() {
		return memory.read<struct FSoundAttenuationSettings>(m_addr + 80);
	}
	char GetbOverrideAttenuation() {
		return memory.read<char>(m_addr + 1008);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeBranch
{
public:
	USoundNodeBranch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBoolParameterName() {
		return memory.read<struct FName>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeConcatenator
{
public:
	USoundNodeConcatenator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetInputVolume() {
		return memory.read<struct TArray<float>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeDelay
{
public:
	USoundNodeDelay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDelayMin() {
		return memory.read<float>(m_addr + 72);
	}
	float GetDelayMax() {
		return memory.read<float>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeDialoguePlayer
{
public:
	USoundNodeDialoguePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDialogueWaveParameter GetDialogueWaveParameter() {
		return memory.read<struct FDialogueWaveParameter>(m_addr + 72);
	}
	char GetbLooping() {
		return memory.read<char>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeDistanceCrossFade
{
public:
	USoundNodeDistanceCrossFade(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FDistanceDatum> GetCrossFadeInput() {
		return memory.read<struct TArray<struct FDistanceDatum>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeEnveloper
{
public:
	USoundNodeEnveloper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLoopStart() {
		return memory.read<float>(m_addr + 72);
	}
	float GetLoopEnd() {
		return memory.read<float>(m_addr + 76);
	}
	float GetDurationAfterLoop() {
		return memory.read<float>(m_addr + 80);
	}
	int32_t GetLoopCount() {
		return memory.read<int32_t>(m_addr + 84);
	}
	char GetbLoopIndefinitely() {
		return memory.read<char>(m_addr + 88);
	}
	char GetbLoop() {
		return memory.read<char>(m_addr + 88);
	}
	struct UDistributionFloatConstantCurve GetVolumeInterpCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UDistributionFloatConstantCurve(ptr_addr);
	}
	struct UDistributionFloatConstantCurve GetPitchInterpCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UDistributionFloatConstantCurve(ptr_addr);
	}
	struct FRuntimeFloatCurve GetVolumeCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 112);
	}
	struct FRuntimeFloatCurve GetPitchCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 248);
	}
	float GetPitchMin() {
		return memory.read<float>(m_addr + 384);
	}
	float GetPitchMax() {
		return memory.read<float>(m_addr + 388);
	}
	float GetVolumeMin() {
		return memory.read<float>(m_addr + 392);
	}
	float GetVolumeMax() {
		return memory.read<float>(m_addr + 396);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeGroupControl
{
public:
	USoundNodeGroupControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetGroupSizes() {
		return memory.read<struct TArray<int32_t>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeModulator
{
public:
	USoundNodeModulator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPitchMin() {
		return memory.read<float>(m_addr + 72);
	}
	float GetPitchMax() {
		return memory.read<float>(m_addr + 76);
	}
	float GetVolumeMin() {
		return memory.read<float>(m_addr + 80);
	}
	float GetVolumeMax() {
		return memory.read<float>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeModulatorContinuous
{
public:
	USoundNodeModulatorContinuous(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FModulatorContinuousParams GetPitchModulationParams() {
		return memory.read<struct FModulatorContinuousParams>(m_addr + 72);
	}
	struct FModulatorContinuousParams GetVolumeModulationParams() {
		return memory.read<struct FModulatorContinuousParams>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeSoundClass
{
public:
	USoundNodeSoundClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundClass GetSoundClassOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct USoundClass(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundNodeWaveParam
{
public:
	USoundNodeWaveParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetWaveParameterName() {
		return memory.read<struct FName>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEndpointSubmix
{
public:
	UEndpointSubmix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEndpointType() {
		return memory.read<struct FName>(m_addr + 56);
	}
	UAudioEndpointSettingsBase GetEndpointSettingsClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return UAudioEndpointSettingsBase(ptr_addr);
	}
	struct UAudioEndpointSettingsBase GetEndpointSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UAudioEndpointSettingsBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpectatorPawnMovement
{
public:
	USpectatorPawnMovement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbIgnoreTimeDilation() {
		return memory.read<char>(m_addr + 336);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStereoLayerShapeCylinder
{
public:
	UStereoLayerShapeCylinder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 40);
	}
	float GetOverlayArc() {
		return memory.read<float>(m_addr + 44);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStringTable
{
public:
	UStringTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USubsurfaceProfile
{
public:
	USubsurfaceProfile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubsurfaceProfileStruct GetSettings() {
		return memory.read<struct FSubsurfaceProfileStruct>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubUVAnimation
{
public:
	USubUVAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetSubUVTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UTexture2D(ptr_addr);
	}
	int32_t GetSubImages_Horizontal() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetSubImages_Vertical() {
		return memory.read<int32_t>(m_addr + 52);
	}
	enum class ESubUVBoundingVertexCount GetBoundingMode() {
		return memory.read<enum class ESubUVBoundingVertexCount>(m_addr + 56);
	}
	enum class EOpacitySourceMode GetOpacitySourceMode() {
		return memory.read<enum class EOpacitySourceMode>(m_addr + 57);
	}
	float GetAlphaThreshold() {
		return memory.read<float>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextPropertyTestObject
{
public:
	UTextPropertyTestObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetDefaultedText() {
		return memory.read<struct FText>(m_addr + 40);
	}
	struct FText GetUndefaultedText() {
		return memory.read<struct FText>(m_addr + 64);
	}
	struct FText GetTransientText() {
		return memory.read<struct FText>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTexture2DArray
{
public:
	UTexture2DArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class TextureAddress GetAddressX() {
		return memory.read<enum class TextureAddress>(m_addr + 464);
	}
	enum class TextureAddress GetAddressY() {
		return memory.read<enum class TextureAddress>(m_addr + 465);
	}
	enum class TextureAddress GetAddressZ() {
		return memory.read<enum class TextureAddress>(m_addr + 466);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextureLightProfile
{
public:
	UTextureLightProfile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBrightness() {
		return memory.read<float>(m_addr + 416);
	}
	float GetTextureMultiplier() {
		return memory.read<float>(m_addr + 420);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTouchInterface
{
public:
	UTouchInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTouchInputControl> GetControls() {
		return memory.read<struct TArray<struct FTouchInputControl>>(m_addr + 40);
	}
	float GetActiveOpacity() {
		return memory.read<float>(m_addr + 56);
	}
	float GetInactiveOpacity() {
		return memory.read<float>(m_addr + 60);
	}
	float GetTimeUntilDeactive() {
		return memory.read<float>(m_addr + 64);
	}
	float GetTimeUntilReset() {
		return memory.read<float>(m_addr + 68);
	}
	float GetActivationDelay() {
		return memory.read<float>(m_addr + 72);
	}
	bool GetbPreventRecenter() {
		return memory.read<bool>(m_addr + 76);
	}
	float GetStartupDelay() {
		return memory.read<float>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class ATriggerSphere
{
public:
	ATriggerSphere(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ATriggerVolume
{
public:
	ATriggerVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UUserDefinedEnum
{
public:
	UUserDefinedEnum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FText> GetDisplayNameMap() {
		return memory.read<struct TMap<struct FName, struct FText>>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUserInterfaceSettings
{
public:
	UUserInterfaceSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERenderFocusRule GetRenderFocusRule() {
		return memory.read<enum class ERenderFocusRule>(m_addr + 56);
	}
	struct TMap<enum class EMouseCursor, struct FHardwareCursorReference> GetHardwareCursors() {
		return memory.read<struct TMap<enum class EMouseCursor, struct FHardwareCursorReference>>(m_addr + 64);
	}
	struct TMap<enum class EMouseCursor, struct FSoftClassPath> GetSoftwareCursors() {
		return memory.read<struct TMap<enum class EMouseCursor, struct FSoftClassPath>>(m_addr + 144);
	}
	struct FSoftClassPath GetDefaultCursor() {
		return memory.read<struct FSoftClassPath>(m_addr + 224);
	}
	struct FSoftClassPath GetTextEditBeamCursor() {
		return memory.read<struct FSoftClassPath>(m_addr + 248);
	}
	struct FSoftClassPath GetCrosshairsCursor() {
		return memory.read<struct FSoftClassPath>(m_addr + 272);
	}
	struct FSoftClassPath GetHandCursor() {
		return memory.read<struct FSoftClassPath>(m_addr + 296);
	}
	struct FSoftClassPath GetGrabHandCursor() {
		return memory.read<struct FSoftClassPath>(m_addr + 320);
	}
	struct FSoftClassPath GetGrabHandClosedCursor() {
		return memory.read<struct FSoftClassPath>(m_addr + 344);
	}
	struct FSoftClassPath GetSlashedCircleCursor() {
		return memory.read<struct FSoftClassPath>(m_addr + 368);
	}
	float GetApplicationScale() {
		return memory.read<float>(m_addr + 392);
	}
	enum class EUIScalingRule GetUIScaleRule() {
		return memory.read<enum class EUIScalingRule>(m_addr + 396);
	}
	struct FSoftClassPath GetCustomScalingRuleClass() {
		return memory.read<struct FSoftClassPath>(m_addr + 400);
	}
	struct FRuntimeFloatCurve GetUIScaleCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 424);
	}
	bool GetbAllowHighDPIInGameMode() {
		return memory.read<bool>(m_addr + 560);
	}
	struct FIntPoint GetDesignScreenSize() {
		return memory.read<struct FIntPoint>(m_addr + 564);
	}
	bool GetbLoadWidgetsOnDedicatedServer() {
		return memory.read<bool>(m_addr + 572);
	}
	struct TArray<struct UObject> GetCursorClasses() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct TArray<struct UObject>(ptr_addr);
	}
	UObject GetCustomScalingRuleClassInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return UObject(ptr_addr);
	}
	struct UDPICustomScalingRule GetCustomScalingRule() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UDPICustomScalingRule(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVectorFieldAnimated
{
public:
	UVectorFieldAnimated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UTexture2D(ptr_addr);
	}
	enum class EVectorFieldConstructionOp GetConstructionOp() {
		return memory.read<enum class EVectorFieldConstructionOp>(m_addr + 80);
	}
	int32_t GetVolumeSizeX() {
		return memory.read<int32_t>(m_addr + 84);
	}
	int32_t GetVolumeSizeY() {
		return memory.read<int32_t>(m_addr + 88);
	}
	int32_t GetVolumeSizeZ() {
		return memory.read<int32_t>(m_addr + 92);
	}
	int32_t GetSubImagesX() {
		return memory.read<int32_t>(m_addr + 96);
	}
	int32_t GetSubImagesY() {
		return memory.read<int32_t>(m_addr + 100);
	}
	int32_t GetFrameCount() {
		return memory.read<int32_t>(m_addr + 104);
	}
	float GetFramesPerSecond() {
		return memory.read<float>(m_addr + 108);
	}
	char GetbLoop() {
		return memory.read<char>(m_addr + 112);
	}
	struct UVectorFieldStatic GetNoiseField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UVectorFieldStatic(ptr_addr);
	}
	float GetNoiseScale() {
		return memory.read<float>(m_addr + 128);
	}
	float GetNoiseMax() {
		return memory.read<float>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class URuntimeVirtualTextureStreamingProxy
{
public:
	URuntimeVirtualTextureStreamingProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVirtualTexture2D
{
public:
	UVirtualTexture2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVirtualTextureBuildSettings GetSettings() {
		return memory.read<struct FVirtualTextureBuildSettings>(m_addr + 416);
	}
	bool GetbContinuousUpdate() {
		return memory.read<bool>(m_addr + 428);
	}
	bool GetbSinglePhysicalSpace() {
		return memory.read<bool>(m_addr + 429);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVirtualTextureBuilder
{
public:
	UVirtualTextureBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVirtualTexture2D GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UVirtualTexture2D(ptr_addr);
	}
	uint64_t GetBuildHash() {
		return memory.read<uint64_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVisualLoggerKismetLibrary
{
public:
	UVisualLoggerKismetLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVOIPStatics
{
public:
	UVOIPStatics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AVolumetricLightmapDensityVolume
{
public:
	AVolumetricLightmapDensityVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInt32Interval GetAllowedMipLevelRange() {
		return memory.read<struct FInt32Interval>(m_addr + 600);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWindDirectionalSourceComponent
{
public:
	UWindDirectionalSourceComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 520);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 524);
	}
	float GetMinGustAmount() {
		return memory.read<float>(m_addr + 528);
	}
	float GetMaxGustAmount() {
		return memory.read<float>(m_addr + 532);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 536);
	}
	char GetbPointWind() {
		return memory.read<char>(m_addr + 540);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWorldComposition
{
public:
	UWorldComposition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct ULevelStreaming> GetTilesStreaming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct TArray<struct ULevelStreaming>(ptr_addr);
	}
	double GetTilesStreamingTimeThreshold() {
		return memory.read<double>(m_addr + 88);
	}
	bool GetbLoadAllTilesDuringCinematic() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbRebaseOriginIn3DSpace() {
		return memory.read<bool>(m_addr + 97);
	}
	float GetRebaseOriginDistance() {
		return memory.read<float>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHierarchicalLODSetup
{
public:
	UHierarchicalLODSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FHierarchicalSimplification> GetHierarchicalLODSetup() {
		return memory.read<struct TArray<struct FHierarchicalSimplification>>(m_addr + 40);
	}
	struct TSoftObjectPtr<UMaterialInterface> GetOverrideBaseMaterial() {
		return memory.read<struct TSoftObjectPtr<UMaterialInterface>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


