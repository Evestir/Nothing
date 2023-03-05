#pragma once 
#include <Niagara_Structs.h>
 
 
 
class UNiagaraDataInterfaceSimpleCounter
{
public:
	UNiagaraDataInterfaceSimpleCounter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceArrayInt32
{
public:
	UNiagaraDataInterfaceArrayInt32(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetIntData() {
		return memory.read<struct TArray<int32_t>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNiagaraTrack
{
public:
	UMovieSceneNiagaraTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNiagaraSystemSpawnSection
{
public:
	UMovieSceneNiagaraSystemSpawnSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENiagaraSystemSpawnSectionStartBehavior GetSectionStartBehavior() {
		return memory.read<enum class ENiagaraSystemSpawnSectionStartBehavior>(m_addr + 232);
	}
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior GetSectionEvaluateBehavior() {
		return memory.read<enum class ENiagaraSystemSpawnSectionEvaluateBehavior>(m_addr + 236);
	}
	enum class ENiagaraSystemSpawnSectionEndBehavior GetSectionEndBehavior() {
		return memory.read<enum class ENiagaraSystemSpawnSectionEndBehavior>(m_addr + 240);
	}
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode() {
		return memory.read<enum class ENiagaraAgeUpdateMode>(m_addr + 244);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraComponentRendererProperties
{
public:
	UNiagaraComponentRendererProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	USceneComponent GetComponentType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return USceneComponent(ptr_addr);
	}
	uint32_t GetComponentCountLimit() {
		return memory.read<uint32_t>(m_addr + 128);
	}
	struct FNiagaraVariableAttributeBinding GetEnabledBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 136);
	}
	struct FNiagaraVariableAttributeBinding GetRendererVisibilityTagBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 224);
	}
	bool GetbAssignComponentsOnParticleID() {
		return memory.read<bool>(m_addr + 312);
	}
	bool GetbOnlyCreateComponentsOnParticleSpawn() {
		return memory.read<bool>(m_addr + 313);
	}
	int32_t GetRendererVisibility() {
		return memory.read<int32_t>(m_addr + 316);
	}
	struct USceneComponent GetTemplateComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct USceneComponent(ptr_addr);
	}
	struct TArray<struct FNiagaraComponentPropertyBinding> GetPropertyBindings() {
		return memory.read<struct TArray<struct FNiagaraComponentPropertyBinding>>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNiagaraParameterTrack
{
public:
	UMovieSceneNiagaraParameterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraVariable GetParameter() {
		return memory.read<struct FNiagaraVariable>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceCurlNoise
{
public:
	UNiagaraDataInterfaceCurlNoise(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetSeed() {
		return memory.read<uint32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceGrid2DCollection
{
public:
	UNiagaraDataInterfaceGrid2DCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraUserParameterBinding GetRenderTargetUserParameter() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 248);
	}
	enum class ENiagaraGpuBufferFormat GetOverrideBufferFormat() {
		return memory.read<enum class ENiagaraGpuBufferFormat>(m_addr + 280);
	}
	char GetbOverrideFormat() {
		return memory.read<char>(m_addr + 281);
	}
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray> GetManagedRenderTargets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 368);
		return struct TMap<uint64_t, struct UTextureRenderTarget2DArray>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceCollisionQuery
{
public:
	UNiagaraDataInterfaceCollisionQuery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceArrayBool
{
public:
	UNiagaraDataInterfaceArrayBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<bool> GetBoolData() {
		return memory.read<struct TArray<bool>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNiagaraFloatParameterTrack
{
public:
	UMovieSceneNiagaraFloatParameterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceArrayFloat2
{
public:
	UNiagaraDataInterfaceArrayFloat2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector2D> GetfloatData() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNiagaraIntegerParameterTrack
{
public:
	UMovieSceneNiagaraIntegerParameterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNiagaraBoolParameterTrack
{
public:
	UMovieSceneNiagaraBoolParameterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraEventReceiverEmitterAction
{
public:
	UNiagaraEventReceiverEmitterAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNiagaraSystemTrack
{
public:
	UMovieSceneNiagaraSystemTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceArrayColor
{
public:
	UNiagaraDataInterfaceArrayColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLinearColor> GetColorData() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNiagaraColorParameterTrack
{
public:
	UMovieSceneNiagaraColorParameterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneNiagaraVectorParameterTrack
{
public:
	UMovieSceneNiagaraVectorParameterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetChannelsUsed() {
		return memory.read<int32_t>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};


class ANiagaraPreviewBase
{
public:
	ANiagaraPreviewBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ANiagaraActor
{
public:
	ANiagaraActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UNiagaraComponent(ptr_addr);
	}
	char GetbDestroyOnSystemFinish() {
		return memory.read<char>(m_addr + 552);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceRenderTarget2DArray
{
public:
	UNiagaraDataInterfaceRenderTarget2DArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FIntVector GetSize() {
		return memory.read<struct FIntVector>(m_addr + 216);
	}
	enum class ETextureRenderTargetFormat GetOverrideRenderTargetFormat() {
		return memory.read<enum class ETextureRenderTargetFormat>(m_addr + 228);
	}
	char GetbInheritUserParameterSettings() {
		return memory.read<char>(m_addr + 229);
	}
	char GetbOverrideFormat() {
		return memory.read<char>(m_addr + 229);
	}
	struct FNiagaraUserParameterBinding GetRenderTargetUserParameter() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 232);
	}
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray> GetManagedRenderTargets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct TMap<uint64_t, struct UTextureRenderTarget2DArray>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceExport
{
public:
	UNiagaraDataInterfaceExport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraUserParameterBinding GetCallbackHandlerParameter() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 56);
	}
	enum class ENDIExport_GPUAllocationMode GetGPUAllocationMode() {
		return memory.read<enum class ENDIExport_GPUAllocationMode>(m_addr + 88);
	}
	int32_t GetGPUAllocationFixedSize() {
		return memory.read<int32_t>(m_addr + 92);
	}
	float GetGPUAllocationPerParticleSize() {
		return memory.read<float>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceMeshRendererInfo
{
public:
	UNiagaraDataInterfaceMeshRendererInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraMeshRendererProperties GetMeshRenderer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UNiagaraMeshRendererProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceRWBase
{
public:
	UNiagaraDataInterfaceRWBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<int32_t> GetOutputShaderStages() {
		return memory.read<struct TSet<int32_t>>(m_addr + 56);
	}
	struct TSet<int32_t> GetIterationShaderStages() {
		return memory.read<struct TSet<int32_t>>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraBakerSettings
{
public:
	UNiagaraBakerSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStartSeconds() {
		return memory.read<float>(m_addr + 40);
	}
	float GetDurationSeconds() {
		return memory.read<float>(m_addr + 44);
	}
	int32_t GetFramesPerSecond() {
		return memory.read<int32_t>(m_addr + 48);
	}
	char GetbPreviewLooping() {
		return memory.read<char>(m_addr + 52);
	}
	struct FIntPoint GetFramesPerDimension() {
		return memory.read<struct FIntPoint>(m_addr + 56);
	}
	struct TArray<struct FNiagaraBakerTextureSettings> GetOutputTextures() {
		return memory.read<struct TArray<struct FNiagaraBakerTextureSettings>>(m_addr + 64);
	}
	enum class ENiagaraBakerViewMode GetCameraViewportMode() {
		return memory.read<enum class ENiagaraBakerViewMode>(m_addr + 80);
	}
	struct FVector GetCameraViewportLocation[7]() {
		return memory.read<struct FVector>(m_addr + 84);
	}
	struct FRotator GetCameraViewportRotation[7]() {
		return memory.read<struct FRotator>(m_addr + 168);
	}
	float GetCameraOrbitDistance() {
		return memory.read<float>(m_addr + 252);
	}
	float GetCameraFOV() {
		return memory.read<float>(m_addr + 256);
	}
	float GetCameraOrthoWidth() {
		return memory.read<float>(m_addr + 260);
	}
	char GetbUseCameraAspectRatio() {
		return memory.read<char>(m_addr + 264);
	}
	float GetCameraAspectRatio() {
		return memory.read<float>(m_addr + 268);
	}
	char GetbRenderComponentOnly() {
		return memory.read<char>(m_addr + 272);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceArrayFloat4
{
public:
	UNiagaraDataInterfaceArrayFloat4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector4> GetfloatData() {
		return memory.read<struct TArray<struct FVector4>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraRendererProperties
{
public:
	UNiagaraRendererProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraPlatformSet GetPlatforms() {
		return memory.read<struct FNiagaraPlatformSet>(m_addr + 40);
	}
	int32_t GetSortOrderHint() {
		return memory.read<int32_t>(m_addr + 88);
	}
	enum class ENiagaraRendererMotionVectorSetting GetMotionVectorSetting() {
		return memory.read<enum class ENiagaraRendererMotionVectorSetting>(m_addr + 92);
	}
	bool GetbIsEnabled() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbMotionBlurEnabled() {
		return memory.read<bool>(m_addr + 97);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraBoostTrailRendererProperties
{
public:
	UNiagaraBoostTrailRendererProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FNiagaraUserParameterBinding GetMaterialUserParamBinding() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 128);
	}
	float GetCurveTension() {
		return memory.read<float>(m_addr + 160);
	}
	enum class ENiagaraBoostTrailTessellationMode GetTessellationMode() {
		return memory.read<enum class ENiagaraBoostTrailTessellationMode>(m_addr + 164);
	}
	int32_t GetTessellationFactor() {
		return memory.read<int32_t>(m_addr + 168);
	}
	bool GetbUseConstantFactor() {
		return memory.read<bool>(m_addr + 172);
	}
	float GetTessellationAngle() {
		return memory.read<float>(m_addr + 176);
	}
	bool GetbScreenSpaceTessellation() {
		return memory.read<bool>(m_addr + 180);
	}
	struct FNiagaraVariableAttributeBinding GetPositionBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 184);
	}
	struct FNiagaraVariableAttributeBinding GetColorBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 272);
	}
	struct FNiagaraVariableAttributeBinding GetVelocityBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 360);
	}
	struct FNiagaraVariableAttributeBinding GetNormalizedAgeBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 448);
	}
	struct FNiagaraVariableAttributeBinding GetBoostTrailWidthBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 536);
	}
	struct FNiagaraVariableAttributeBinding GetBoostTrailIdBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 624);
	}
	struct FNiagaraVariableAttributeBinding GetBoostTrailLinkOrderBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 712);
	}
	struct FNiagaraVariableAttributeBinding GetMaterialRandomBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 800);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterialBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 888);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial1Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 976);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial2Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1064);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial3Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1152);
	}
	struct FNiagaraVariableAttributeBinding GetBoostTrailUVDistance() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1240);
	}
	struct TArray<struct FNiagaraMaterialAttributeBinding> GetMaterialParameterBindings() {
		return memory.read<struct TArray<struct FNiagaraMaterialAttributeBinding>>(m_addr + 1328);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraComponent
{
public:
	UNiagaraComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraSystem GetAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UNiagaraSystem(ptr_addr);
	}
	enum class ENiagaraTickBehavior GetTickBehavior() {
		return memory.read<enum class ENiagaraTickBehavior>(m_addr + 1144);
	}
	int32_t GetRandomSeedOffset() {
		return memory.read<int32_t>(m_addr + 1148);
	}
	struct FNiagaraUserRedirectionParameterStore GetOverrideParameters() {
		return memory.read<struct FNiagaraUserRedirectionParameterStore>(m_addr + 1152);
	}
	char GetbForceSolo() {
		return memory.read<char>(m_addr + 1352);
	}
	char GetbEnableGpuComputeDebug() {
		return memory.read<char>(m_addr + 1352);
	}
	char GetbAutoDestroy() {
		return memory.read<char>(m_addr + 1400);
	}
	char GetbRenderingEnabled() {
		return memory.read<char>(m_addr + 1400);
	}
	char GetbAutoManageAttachment() {
		return memory.read<char>(m_addr + 1400);
	}
	char GetbAutoAttachWeldSimulatedBodies() {
		return memory.read<char>(m_addr + 1400);
	}
	float GetMaxTimeBeforeForceUpdateTransform() {
		return memory.read<float>(m_addr + 1404);
	}
	struct TArray<struct FNiagaraMaterialOverride> GetEmitterMaterials() {
		return memory.read<struct TArray<struct FNiagaraMaterialOverride>>(m_addr + 1408);
	}
	struct FMulticastInlineDelegate GetOnSystemFinished() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1432);
	}
	struct TWeakObjectPtr<USceneComponent> GetAutoAttachParent() {
		return memory.read<struct TWeakObjectPtr<USceneComponent>>(m_addr + 1448);
	}
	struct FName GetAutoAttachSocketName() {
		return memory.read<struct FName>(m_addr + 1456);
	}
	enum class EAttachmentRule GetAutoAttachLocationRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 1464);
	}
	enum class EAttachmentRule GetAutoAttachRotationRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 1465);
	}
	enum class EAttachmentRule GetAutoAttachScaleRule() {
		return memory.read<enum class EAttachmentRule>(m_addr + 1466);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceGBuffer
{
public:
	UNiagaraDataInterfaceGBuffer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraEditorParametersAdapterBase
{
public:
	UNiagaraEditorParametersAdapterBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraComponentPool
{
public:
	UNiagaraComponentPool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct UNiagaraSystem, struct FNCPool> GetWorldParticleSystemPools() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TMap<struct UNiagaraSystem, struct FNCPool>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceArrayFloat
{
public:
	UNiagaraDataInterfaceArrayFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetfloatData() {
		return memory.read<struct TArray<float>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceNeighborGrid3D
{
public:
	UNiagaraDataInterfaceNeighborGrid3D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetMaxNeighborsPerCell() {
		return memory.read<uint32_t>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraComponentSettings
{
public:
	UNiagaraComponentSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct FName> GetSuppressActivationList() {
		return memory.read<struct TSet<struct FName>>(m_addr + 40);
	}
	struct TSet<struct FName> GetForceAutoPooolingList() {
		return memory.read<struct TSet<struct FName>>(m_addr + 120);
	}
	struct TSet<struct FNiagaraEmitterNameSettingsRef> GetSuppressEmitterList() {
		return memory.read<struct TSet<struct FNiagaraEmitterNameSettingsRef>>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraConvertInPlaceUtilityBase
{
public:
	UNiagaraConvertInPlaceUtilityBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraMeshRendererProperties
{
public:
	UNiagaraMeshRendererProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNiagaraMeshRendererMeshProperties> GetMeshes() {
		return memory.read<struct TArray<struct FNiagaraMeshRendererMeshProperties>>(m_addr + 120);
	}
	enum class ENiagaraRendererSourceDataMode GetSourceMode() {
		return memory.read<enum class ENiagaraRendererSourceDataMode>(m_addr + 136);
	}
	enum class ENiagaraSortMode GetSortMode() {
		return memory.read<enum class ENiagaraSortMode>(m_addr + 137);
	}
	char GetbOverrideMaterials() {
		return memory.read<char>(m_addr + 140);
	}
	char GetbSortOnlyWhenTranslucent() {
		return memory.read<char>(m_addr + 140);
	}
	char GetbGpuLowLatencyTranslucency() {
		return memory.read<char>(m_addr + 140);
	}
	char GetbSubImageBlend() {
		return memory.read<char>(m_addr + 140);
	}
	char GetbEnableFrustumCulling() {
		return memory.read<char>(m_addr + 140);
	}
	char GetbEnableCameraDistanceCulling() {
		return memory.read<char>(m_addr + 140);
	}
	char GetbEnableMeshFlipbook() {
		return memory.read<char>(m_addr + 140);
	}
	struct TArray<struct FNiagaraMeshMaterialOverride> GetOverrideMaterials() {
		return memory.read<struct TArray<struct FNiagaraMeshMaterialOverride>>(m_addr + 144);
	}
	struct FVector2D GetSubImageSize() {
		return memory.read<struct FVector2D>(m_addr + 160);
	}
	enum class ENiagaraMeshFacingMode GetFacingMode() {
		return memory.read<enum class ENiagaraMeshFacingMode>(m_addr + 168);
	}
	char GetbLockedAxisEnable() {
		return memory.read<char>(m_addr + 172);
	}
	struct FVector GetLockedAxis() {
		return memory.read<struct FVector>(m_addr + 176);
	}
	enum class ENiagaraMeshLockedAxisSpace GetLockedAxisSpace() {
		return memory.read<enum class ENiagaraMeshLockedAxisSpace>(m_addr + 188);
	}
	float GetMinCameraDistance() {
		return memory.read<float>(m_addr + 192);
	}
	float GetMaxCameraDistance() {
		return memory.read<float>(m_addr + 196);
	}
	uint32_t GetRendererVisibility() {
		return memory.read<uint32_t>(m_addr + 200);
	}
	struct FNiagaraVariableAttributeBinding GetPositionBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 208);
	}
	struct FNiagaraVariableAttributeBinding GetColorBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 296);
	}
	struct FNiagaraVariableAttributeBinding GetVelocityBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 384);
	}
	struct FNiagaraVariableAttributeBinding GetMeshOrientationBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 472);
	}
	struct FNiagaraVariableAttributeBinding GetScaleBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 560);
	}
	struct FNiagaraVariableAttributeBinding GetSubImageIndexBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 648);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterialBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 736);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial1Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 824);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial2Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 912);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial3Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1000);
	}
	struct FNiagaraVariableAttributeBinding GetMaterialRandomBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1088);
	}
	struct FNiagaraVariableAttributeBinding GetCustomSortingBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1176);
	}
	struct FNiagaraVariableAttributeBinding GetNormalizedAgeBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1264);
	}
	struct FNiagaraVariableAttributeBinding GetCameraOffsetBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1352);
	}
	struct FNiagaraVariableAttributeBinding GetRendererVisibilityTagBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1440);
	}
	struct FNiagaraVariableAttributeBinding GetMeshIndexBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1528);
	}
	struct TArray<struct FNiagaraMaterialAttributeBinding> GetMaterialParameterBindings() {
		return memory.read<struct TArray<struct FNiagaraMaterialAttributeBinding>>(m_addr + 1616);
	}
	struct FNiagaraVariableAttributeBinding GetPrevPositionBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1632);
	}
	struct FNiagaraVariableAttributeBinding GetPrevScaleBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1720);
	}
	struct FNiagaraVariableAttributeBinding GetPrevMeshOrientationBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1808);
	}
	struct FNiagaraVariableAttributeBinding GetPrevCameraOffsetBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1896);
	}
	struct FNiagaraVariableAttributeBinding GetPrevVelocityBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1984);
	}
	struct UStaticMesh GetParticleMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2176);
		return struct UStaticMesh(ptr_addr);
	}
	struct FVector GetPivotOffset() {
		return memory.read<struct FVector>(m_addr + 2184);
	}
	enum class ENiagaraMeshPivotOffsetSpace GetPivotOffsetSpace() {
		return memory.read<enum class ENiagaraMeshPivotOffsetSpace>(m_addr + 2196);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterface
{
public:
	UNiagaraDataInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceSkeletalMesh
{
public:
	UNiagaraDataInterfaceSkeletalMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENDISkeletalMesh_SourceMode GetSourceMode() {
		return memory.read<enum class ENDISkeletalMesh_SourceMode>(m_addr + 56);
	}
	struct AActor GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct AActor(ptr_addr);
	}
	struct FNiagaraUserParameterBinding GetMeshUserParameter() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 72);
	}
	struct USkeletalMeshComponent GetSourceComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	enum class ENDISkeletalMesh_SkinningMode GetSkinningMode() {
		return memory.read<enum class ENDISkeletalMesh_SkinningMode>(m_addr + 112);
	}
	struct TArray<struct FName> GetSamplingRegions() {
		return memory.read<struct TArray<struct FName>>(m_addr + 120);
	}
	int32_t GetWholeMeshLOD() {
		return memory.read<int32_t>(m_addr + 136);
	}
	struct TArray<struct FName> GetFilteredBones() {
		return memory.read<struct TArray<struct FName>>(m_addr + 144);
	}
	struct TArray<struct FName> GetFilteredSockets() {
		return memory.read<struct TArray<struct FName>>(m_addr + 160);
	}
	struct FName GetExcludeBoneName() {
		return memory.read<struct FName>(m_addr + 176);
	}
	char GetbExcludeBone() {
		return memory.read<char>(m_addr + 184);
	}
	int32_t GetUvSetIndex() {
		return memory.read<int32_t>(m_addr + 188);
	}
	bool GetbRequireCurrentFrameData() {
		return memory.read<bool>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterface2DArrayTexture
{
public:
	UNiagaraDataInterface2DArrayTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2DArray GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UTexture2DArray(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceArray
{
public:
	UNiagaraDataInterfaceArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxElements() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceAudioSpectrum
{
public:
	UNiagaraDataInterfaceAudioSpectrum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetResolution() {
		return memory.read<int32_t>(m_addr + 64);
	}
	float GetMinimumFrequency() {
		return memory.read<float>(m_addr + 68);
	}
	float GetMaximumFrequency() {
		return memory.read<float>(m_addr + 72);
	}
	float GetNoiseFloorDb() {
		return memory.read<float>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDebugHUDSettings
{
public:
	UNiagaraDebugHUDSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraDebugHUDSettingsData GetData() {
		return memory.read<struct FNiagaraDebugHUDSettingsData>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceDebugDraw
{
public:
	UNiagaraDataInterfaceDebugDraw(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceArrayFloat3
{
public:
	UNiagaraDataInterfaceArrayFloat3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetfloatData() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceArrayQuat
{
public:
	UNiagaraDataInterfaceArrayQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FQuat> GetQuatData() {
		return memory.read<struct TArray<struct FQuat>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceGrid3DCollection
{
public:
	UNiagaraDataInterfaceGrid3DCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumAttributes() {
		return memory.read<int32_t>(m_addr + 256);
	}
	struct FNiagaraUserParameterBinding GetRenderTargetUserParameter() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 264);
	}
	enum class ENiagaraGpuBufferFormat GetOverrideBufferFormat() {
		return memory.read<enum class ENiagaraGpuBufferFormat>(m_addr + 296);
	}
	char GetbOverrideFormat() {
		return memory.read<char>(m_addr + 297);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceArrayFunctionLibrary
{
public:
	UNiagaraDataInterfaceArrayFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceAudioSubmix
{
public:
	UNiagaraDataInterfaceAudioSubmix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundSubmix GetSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct USoundSubmix(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceAudioOscilloscope
{
public:
	UNiagaraDataInterfaceAudioOscilloscope(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundSubmix GetSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct USoundSubmix(ptr_addr);
	}
	int32_t GetResolution() {
		return memory.read<int32_t>(m_addr + 64);
	}
	float GetScopeInMilliseconds() {
		return memory.read<float>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceAudioPlayer
{
public:
	UNiagaraDataInterfaceAudioPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundBase GetSoundToPlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct USoundBase(ptr_addr);
	}
	struct USoundAttenuation GetAttenuation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct USoundAttenuation(ptr_addr);
	}
	struct USoundConcurrency GetConcurrency() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct USoundConcurrency(ptr_addr);
	}
	struct TArray<struct FName> GetParameterNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 80);
	}
	bool GetbLimitPlaysPerTick() {
		return memory.read<bool>(m_addr + 96);
	}
	int32_t GetMaxPlaysPerTick() {
		return memory.read<int32_t>(m_addr + 100);
	}
	bool GetbStopWhenComponentIsDestroyed() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceCurve
{
public:
	UNiagaraDataInterfaceCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRichCurve GetCurve() {
		return memory.read<struct FRichCurve>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceCamera
{
public:
	UNiagaraDataInterfaceCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerControllerIndex() {
		return memory.read<int32_t>(m_addr + 56);
	}
	bool GetbRequireCurrentFrameData() {
		return memory.read<bool>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceCurveBase
{
public:
	UNiagaraDataInterfaceCurveBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetShaderLUT() {
		return memory.read<struct TArray<float>>(m_addr + 56);
	}
	float GetLUTMinTime() {
		return memory.read<float>(m_addr + 72);
	}
	float GetLUTMaxTime() {
		return memory.read<float>(m_addr + 76);
	}
	float GetLUTInvTimeRange() {
		return memory.read<float>(m_addr + 80);
	}
	float GetLUTNumSamplesMinusOne() {
		return memory.read<float>(m_addr + 84);
	}
	char GetbUseLUT() {
		return memory.read<char>(m_addr + 88);
	}
	char GetbExposeCurve() {
		return memory.read<char>(m_addr + 88);
	}
	struct FName GetExposedName() {
		return memory.read<struct FName>(m_addr + 92);
	}
	struct UTexture2D GetExposedTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceColorCurve
{
public:
	UNiagaraDataInterfaceColorCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRichCurve GetRedCurve() {
		return memory.read<struct FRichCurve>(m_addr + 112);
	}
	struct FRichCurve GetGreenCurve() {
		return memory.read<struct FRichCurve>(m_addr + 240);
	}
	struct FRichCurve GetBlueCurve() {
		return memory.read<struct FRichCurve>(m_addr + 368);
	}
	struct FRichCurve GetAlphaCurve() {
		return memory.read<struct FRichCurve>(m_addr + 496);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceParticleRead
{
public:
	UNiagaraDataInterfaceParticleRead(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEmitterName() {
		return memory.read<struct FString>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceIntRenderTarget2D
{
public:
	UNiagaraDataInterfaceIntRenderTarget2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FIntPoint GetSize() {
		return memory.read<struct FIntPoint>(m_addr + 216);
	}
	struct FNiagaraUserParameterBinding GetRenderTargetUserParameter() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 224);
	}
	struct TMap<uint64_t, struct UTextureRenderTarget2D> GetManagedRenderTargets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct TMap<uint64_t, struct UTextureRenderTarget2D>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraEmitter
{
public:
	UNiagaraEmitter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbLocalSpace() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbDeterminism() {
		return memory.read<bool>(m_addr + 41);
	}
	int32_t GetRandomSeed() {
		return memory.read<int32_t>(m_addr + 44);
	}
	enum class EParticleAllocationMode GetAllocationMode() {
		return memory.read<enum class EParticleAllocationMode>(m_addr + 48);
	}
	int32_t GetPreAllocationCount() {
		return memory.read<int32_t>(m_addr + 52);
	}
	struct FNiagaraEmitterScriptProperties GetUpdateScriptProps() {
		return memory.read<struct FNiagaraEmitterScriptProperties>(m_addr + 56);
	}
	struct FNiagaraEmitterScriptProperties GetSpawnScriptProps() {
		return memory.read<struct FNiagaraEmitterScriptProperties>(m_addr + 96);
	}
	enum class ENiagaraSimTarget GetSimTarget() {
		return memory.read<enum class ENiagaraSimTarget>(m_addr + 136);
	}
	struct FBox GetFixedBounds() {
		return memory.read<struct FBox>(m_addr + 140);
	}
	int32_t GetMinDetailLevel() {
		return memory.read<int32_t>(m_addr + 168);
	}
	int32_t GetMaxDetailLevel() {
		return memory.read<int32_t>(m_addr + 172);
	}
	struct FNiagaraDetailsLevelScaleOverrides GetGlobalSpawnCountScaleOverrides() {
		return memory.read<struct FNiagaraDetailsLevelScaleOverrides>(m_addr + 176);
	}
	struct FNiagaraPlatformSet GetPlatforms() {
		return memory.read<struct FNiagaraPlatformSet>(m_addr + 200);
	}
	struct FNiagaraEmitterScalabilityOverrides GetScalabilityOverrides() {
		return memory.read<struct FNiagaraEmitterScalabilityOverrides>(m_addr + 248);
	}
	char GetbInterpolatedSpawning() {
		return memory.read<char>(m_addr + 264);
	}
	char GetbFixedBounds() {
		return memory.read<char>(m_addr + 264);
	}
	char GetbUseMinDetailLevel() {
		return memory.read<char>(m_addr + 264);
	}
	char GetbUseMaxDetailLevel() {
		return memory.read<char>(m_addr + 264);
	}
	char GetbOverrideGlobalSpawnCountScale() {
		return memory.read<char>(m_addr + 264);
	}
	char GetbRequiresPersistentIDs() {
		return memory.read<char>(m_addr + 264);
	}
	char GetbCombineEventSpawn() {
		return memory.read<char>(m_addr + 264);
	}
	float GetMaxDeltaTimePerTick() {
		return memory.read<float>(m_addr + 268);
	}
	uint32_t GetDefaultShaderStageIndex() {
		return memory.read<uint32_t>(m_addr + 272);
	}
	uint32_t GetMaxUpdateIterations() {
		return memory.read<uint32_t>(m_addr + 276);
	}
	struct TSet<uint32_t> GetSpawnStages() {
		return memory.read<struct TSet<uint32_t>>(m_addr + 280);
	}
	char GetbSimulationStagesEnabled() {
		return memory.read<char>(m_addr + 360);
	}
	char GetbDeprecatedShaderStagesEnabled() {
		return memory.read<char>(m_addr + 360);
	}
	char GetbLimitDeltaTime() {
		return memory.read<char>(m_addr + 360);
	}
	struct FString GetUniqueEmitterName() {
		return memory.read<struct FString>(m_addr + 368);
	}
	struct TArray<struct UNiagaraRendererProperties> GetRendererProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 384);
		return struct TArray<struct UNiagaraRendererProperties>(ptr_addr);
	}
	struct TArray<struct FNiagaraEventScriptProperties> GetEventHandlerScriptProps() {
		return memory.read<struct TArray<struct FNiagaraEventScriptProperties>>(m_addr + 400);
	}
	struct TArray<struct UNiagaraSimulationStageBase> GetSimulationStages() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 416);
		return struct TArray<struct UNiagaraSimulationStageBase>(ptr_addr);
	}
	struct UNiagaraScript GetGPUComputeScript() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 432);
		return struct UNiagaraScript(ptr_addr);
	}
	struct TArray<struct FName> GetSharedEventGeneratorIds() {
		return memory.read<struct TArray<struct FName>>(m_addr + 440);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceCubeTexture
{
public:
	UNiagaraDataInterfaceCubeTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextureCube GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UTextureCube(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceVectorField
{
public:
	UNiagaraDataInterfaceVectorField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVectorField GetField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UVectorField(ptr_addr);
	}
	bool GetbTileX() {
		return memory.read<bool>(m_addr + 64);
	}
	bool GetbTileY() {
		return memory.read<bool>(m_addr + 65);
	}
	bool GetbTileZ() {
		return memory.read<bool>(m_addr + 66);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceOcclusion
{
public:
	UNiagaraDataInterfaceOcclusion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceGrid3D
{
public:
	UNiagaraDataInterfaceGrid3D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FIntVector GetNumCells() {
		return memory.read<struct FIntVector>(m_addr + 216);
	}
	float GetCellSize() {
		return memory.read<float>(m_addr + 228);
	}
	int32_t GetNumCellsMaxAxis() {
		return memory.read<int32_t>(m_addr + 232);
	}
	enum class ESetResolutionMethod GetSetResolutionMethod() {
		return memory.read<enum class ESetResolutionMethod>(m_addr + 236);
	}
	struct FVector GetWorldBBoxSize() {
		return memory.read<struct FVector>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraParticleCallbackHandler
{
public:
	UNiagaraParticleCallbackHandler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceGrid2D
{
public:
	UNiagaraDataInterfaceGrid2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumCellsX() {
		return memory.read<int32_t>(m_addr + 216);
	}
	int32_t GetNumCellsY() {
		return memory.read<int32_t>(m_addr + 220);
	}
	int32_t GetNumCellsMaxAxis() {
		return memory.read<int32_t>(m_addr + 224);
	}
	int32_t GetNumAttributes() {
		return memory.read<int32_t>(m_addr + 228);
	}
	bool GetSetGridFromMaxAxis() {
		return memory.read<bool>(m_addr + 232);
	}
	struct FVector2D GetWorldBBoxSize() {
		return memory.read<struct FVector2D>(m_addr + 236);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceGrid2DCollectionReader
{
public:
	UNiagaraDataInterfaceGrid2DCollectionReader(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEmitterName() {
		return memory.read<struct FString>(m_addr + 248);
	}
	struct FString GetDIName() {
		return memory.read<struct FString>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceLandscape
{
public:
	UNiagaraDataInterfaceLandscape(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetSourceLandscape() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct AActor(ptr_addr);
	}
	enum class ENDILandscape_SourceMode GetSourceMode() {
		return memory.read<enum class ENDILandscape_SourceMode>(m_addr + 64);
	}
	struct TArray<struct UPhysicalMaterial> GetPhysicalMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct TArray<struct UPhysicalMaterial>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfacePlatformSet
{
public:
	UNiagaraDataInterfacePlatformSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraPlatformSet GetPlatforms() {
		return memory.read<struct FNiagaraPlatformSet>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceRenderTarget2D
{
public:
	UNiagaraDataInterfaceRenderTarget2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FIntPoint GetSize() {
		return memory.read<struct FIntPoint>(m_addr + 216);
	}
	enum class ENiagaraMipMapGeneration GetMipMapGeneration() {
		return memory.read<enum class ENiagaraMipMapGeneration>(m_addr + 224);
	}
	enum class ETextureRenderTargetFormat GetOverrideRenderTargetFormat() {
		return memory.read<enum class ETextureRenderTargetFormat>(m_addr + 225);
	}
	char GetbInheritUserParameterSettings() {
		return memory.read<char>(m_addr + 226);
	}
	char GetbOverrideFormat() {
		return memory.read<char>(m_addr + 226);
	}
	struct FNiagaraUserParameterBinding GetRenderTargetUserParameter() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 232);
	}
	struct TMap<uint64_t, struct UTextureRenderTarget2D> GetManagedRenderTargets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 344);
		return struct TMap<uint64_t, struct UTextureRenderTarget2D>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceRenderTargetCube
{
public:
	UNiagaraDataInterfaceRenderTargetCube(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSize() {
		return memory.read<int32_t>(m_addr + 216);
	}
	enum class ETextureRenderTargetFormat GetOverrideRenderTargetFormat() {
		return memory.read<enum class ETextureRenderTargetFormat>(m_addr + 220);
	}
	char GetbInheritUserParameterSettings() {
		return memory.read<char>(m_addr + 221);
	}
	char GetbOverrideFormat() {
		return memory.read<char>(m_addr + 221);
	}
	struct FNiagaraUserParameterBinding GetRenderTargetUserParameter() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 224);
	}
	struct TMap<uint64_t, struct UTextureRenderTargetCube> GetManagedRenderTargets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct TMap<uint64_t, struct UTextureRenderTargetCube>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceRenderTargetVolume
{
public:
	UNiagaraDataInterfaceRenderTargetVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FIntVector GetSize() {
		return memory.read<struct FIntVector>(m_addr + 216);
	}
	enum class ETextureRenderTargetFormat GetOverrideRenderTargetFormat() {
		return memory.read<enum class ETextureRenderTargetFormat>(m_addr + 228);
	}
	char GetbInheritUserParameterSettings() {
		return memory.read<char>(m_addr + 229);
	}
	char GetbOverrideFormat() {
		return memory.read<char>(m_addr + 229);
	}
	struct FNiagaraUserParameterBinding GetRenderTargetUserParameter() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 232);
	}
	struct TMap<uint64_t, struct UTextureRenderTargetVolume> GetManagedRenderTargets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct TMap<uint64_t, struct UTextureRenderTargetVolume>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceSpline
{
public:
	UNiagaraDataInterfaceSpline(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct AActor(ptr_addr);
	}
	struct FNiagaraUserParameterBinding GetSplineUserParameter() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceStaticMesh
{
public:
	UNiagaraDataInterfaceStaticMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENDIStaticMesh_SourceMode GetSourceMode() {
		return memory.read<enum class ENDIStaticMesh_SourceMode>(m_addr + 56);
	}
	struct UStaticMesh GetDefaultMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UStaticMesh(ptr_addr);
	}
	struct AActor GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct AActor(ptr_addr);
	}
	struct UStaticMeshComponent GetSourceComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct FNDIStaticMeshSectionFilter GetSectionFilter() {
		return memory.read<struct FNDIStaticMeshSectionFilter>(m_addr + 88);
	}
	bool GetbUsePhysicsBodyVelocity() {
		return memory.read<bool>(m_addr + 104);
	}
	struct TArray<struct FName> GetFilteredSockets() {
		return memory.read<struct TArray<struct FName>>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceTexture
{
public:
	UNiagaraDataInterfaceTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceVector2DCurve
{
public:
	UNiagaraDataInterfaceVector2DCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRichCurve GetXCurve() {
		return memory.read<struct FRichCurve>(m_addr + 112);
	}
	struct FRichCurve GetYCurve() {
		return memory.read<struct FRichCurve>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraFunctionLibrary
{
public:
	UNiagaraFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceVector4Curve
{
public:
	UNiagaraDataInterfaceVector4Curve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRichCurve GetXCurve() {
		return memory.read<struct FRichCurve>(m_addr + 112);
	}
	struct FRichCurve GetYCurve() {
		return memory.read<struct FRichCurve>(m_addr + 240);
	}
	struct FRichCurve GetZCurve() {
		return memory.read<struct FRichCurve>(m_addr + 368);
	}
	struct FRichCurve GetWCurve() {
		return memory.read<struct FRichCurve>(m_addr + 496);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceVectorCurve
{
public:
	UNiagaraDataInterfaceVectorCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRichCurve GetXCurve() {
		return memory.read<struct FRichCurve>(m_addr + 112);
	}
	struct FRichCurve GetYCurve() {
		return memory.read<struct FRichCurve>(m_addr + 240);
	}
	struct FRichCurve GetZCurve() {
		return memory.read<struct FRichCurve>(m_addr + 368);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceVolumeTexture
{
public:
	UNiagaraDataInterfaceVolumeTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVolumeTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UVolumeTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraEditorDataBase
{
public:
	UNiagaraEditorDataBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraSignificanceHandler
{
public:
	UNiagaraSignificanceHandler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraSignificanceHandlerDistance
{
public:
	UNiagaraSignificanceHandlerDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraSignificanceHandlerAge
{
public:
	UNiagaraSignificanceHandlerAge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraEffectType
{
public:
	UNiagaraEffectType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENiagaraScalabilityUpdateFrequency GetUpdateFrequency() {
		return memory.read<enum class ENiagaraScalabilityUpdateFrequency>(m_addr + 40);
	}
	enum class ENiagaraCullReaction GetCullReaction() {
		return memory.read<enum class ENiagaraCullReaction>(m_addr + 44);
	}
	struct UNiagaraSignificanceHandler GetSignificanceHandler() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UNiagaraSignificanceHandler(ptr_addr);
	}
	struct TArray<struct FNiagaraSystemScalabilitySettings> GetDetailLevelScalabilitySettings() {
		return memory.read<struct TArray<struct FNiagaraSystemScalabilitySettings>>(m_addr + 56);
	}
	struct FNiagaraSystemScalabilitySettingsArray GetSystemScalabilitySettings() {
		return memory.read<struct FNiagaraSystemScalabilitySettingsArray>(m_addr + 72);
	}
	struct FNiagaraEmitterScalabilitySettingsArray GetEmitterScalabilitySettings() {
		return memory.read<struct FNiagaraEmitterScalabilitySettingsArray>(m_addr + 88);
	}
	struct UNiagaraBaselineController GetPerformanceBaselineController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UNiagaraBaselineController(ptr_addr);
	}
	struct FNiagaraPerfBaselineStats GetPerfBaselineStats() {
		return memory.read<struct FNiagaraPerfBaselineStats>(m_addr + 120);
	}
	struct FGuid GetPerfBaselineVersion() {
		return memory.read<struct FGuid>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraEventReceiverEmitterAction_SpawnParticles
{
public:
	UNiagaraEventReceiverEmitterAction_SpawnParticles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetNumParticles() {
		return memory.read<uint32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraLightRendererProperties
{
public:
	UNiagaraLightRendererProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbUseInverseSquaredFalloff() {
		return memory.read<char>(m_addr + 120);
	}
	char GetbAffectsTranslucency() {
		return memory.read<char>(m_addr + 120);
	}
	char GetbAlphaScalesBrightness() {
		return memory.read<char>(m_addr + 120);
	}
	float GetRadiusScale() {
		return memory.read<float>(m_addr + 124);
	}
	float GetDefaultExponent() {
		return memory.read<float>(m_addr + 128);
	}
	struct FVector GetColorAdd() {
		return memory.read<struct FVector>(m_addr + 132);
	}
	int32_t GetRendererVisibility() {
		return memory.read<int32_t>(m_addr + 144);
	}
	struct FNiagaraVariableAttributeBinding GetLightRenderingEnabledBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 152);
	}
	struct FNiagaraVariableAttributeBinding GetLightExponentBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 240);
	}
	struct FNiagaraVariableAttributeBinding GetPositionBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 328);
	}
	struct FNiagaraVariableAttributeBinding GetColorBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 416);
	}
	struct FNiagaraVariableAttributeBinding GetRadiusBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 504);
	}
	struct FNiagaraVariableAttributeBinding GetVolumetricScatteringBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 592);
	}
	struct FNiagaraVariableAttributeBinding GetRendererVisibilityTagBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 680);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraMessageDataBase
{
public:
	UNiagaraMessageDataBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraParameterCollectionInstance
{
public:
	UNiagaraParameterCollectionInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraParameterCollection GetCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UNiagaraParameterCollection(ptr_addr);
	}
	struct TArray<struct FNiagaraVariable> GetOverridenParameters() {
		return memory.read<struct TArray<struct FNiagaraVariable>>(m_addr + 48);
	}
	struct FNiagaraParameterStore GetParameterStorage() {
		return memory.read<struct FNiagaraParameterStore>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraParameterCollection
{
public:
	UNiagaraParameterCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNamespace() {
		return memory.read<struct FName>(m_addr + 40);
	}
	struct TArray<struct FNiagaraVariable> GetParameters() {
		return memory.read<struct TArray<struct FNiagaraVariable>>(m_addr + 48);
	}
	struct UMaterialParameterCollection GetSourceMaterialCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UMaterialParameterCollection(ptr_addr);
	}
	struct UNiagaraParameterCollectionInstance GetDefaultInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UNiagaraParameterCollectionInstance(ptr_addr);
	}
	struct FGuid GetCompileId() {
		return memory.read<struct FGuid>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraParameterDefinitionsBase
{
public:
	UNiagaraParameterDefinitionsBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraBaselineController
{
public:
	UNiagaraBaselineController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTestDuration() {
		return memory.read<float>(m_addr + 40);
	}
	struct UNiagaraEffectType GetEffectType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UNiagaraEffectType(ptr_addr);
	}
	struct ANiagaraPerfBaselineActor GetOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct ANiagaraPerfBaselineActor(ptr_addr);
	}
	struct TSoftObjectPtr<UNiagaraSystem> GetSystem() {
		return memory.read<struct TSoftObjectPtr<UNiagaraSystem>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraBaselineController_Basic
{
public:
	UNiagaraBaselineController_Basic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumInstances() {
		return memory.read<int32_t>(m_addr + 104);
	}
	struct TArray<struct UNiagaraComponent> GetSpawnedComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct TArray<struct UNiagaraComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ANiagaraPerfBaselineActor
{
public:
	ANiagaraPerfBaselineActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraBaselineController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UNiagaraBaselineController(ptr_addr);
	}
	struct UTextRenderComponent GetLabel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UTextRenderComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraPrecompileContainer
{
public:
	UNiagaraPrecompileContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UNiagaraScript> GetScripts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UNiagaraScript>(ptr_addr);
	}
	struct UNiagaraSystem GetSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UNiagaraSystem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraPreviewAxis
{
public:
	UNiagaraPreviewAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraPreviewAxis_InterpParamBase
{
public:
	UNiagaraPreviewAxis_InterpParamBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParam() {
		return memory.read<struct FName>(m_addr + 40);
	}
	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraPreviewAxis_InterpParamInt32
{
public:
	UNiagaraPreviewAxis_InterpParamInt32(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMin() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetMax() {
		return memory.read<int32_t>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraPreviewAxis_InterpParamFloat
{
public:
	UNiagaraPreviewAxis_InterpParamFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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


class UNiagaraPreviewAxis_InterpParamVector2D
{
public:
	UNiagaraPreviewAxis_InterpParamVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetMin() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}
	struct FVector2D GetMax() {
		return memory.read<struct FVector2D>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraPreviewAxis_InterpParamVector
{
public:
	UNiagaraPreviewAxis_InterpParamVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetMin() {
		return memory.read<struct FVector>(m_addr + 56);
	}
	struct FVector GetMax() {
		return memory.read<struct FVector>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraPreviewAxis_InterpParamVector4
{
public:
	UNiagaraPreviewAxis_InterpParamVector4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector4 GetMin() {
		return memory.read<struct FVector4>(m_addr + 64);
	}
	struct FVector4 GetMax() {
		return memory.read<struct FVector4>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraPreviewAxis_InterpParamLinearColor
{
public:
	UNiagaraPreviewAxis_InterpParamLinearColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetMin() {
		return memory.read<struct FLinearColor>(m_addr + 56);
	}
	struct FLinearColor GetMax() {
		return memory.read<struct FLinearColor>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class ANiagaraPreviewGrid
{
public:
	ANiagaraPreviewGrid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraSystem GetSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UNiagaraSystem(ptr_addr);
	}
	enum class ENiagaraPreviewGridResetMode GetResetMode() {
		return memory.read<enum class ENiagaraPreviewGridResetMode>(m_addr + 552);
	}
	struct UNiagaraPreviewAxis GetPreviewAxisX() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UNiagaraPreviewAxis(ptr_addr);
	}
	struct UNiagaraPreviewAxis GetPreviewAxisY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UNiagaraPreviewAxis(ptr_addr);
	}
	ANiagaraPreviewBase GetPreviewClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return ANiagaraPreviewBase(ptr_addr);
	}
	float GetSpacingX() {
		return memory.read<float>(m_addr + 584);
	}
	float GetSpacingY() {
		return memory.read<float>(m_addr + 588);
	}
	int32_t GetNumX() {
		return memory.read<int32_t>(m_addr + 592);
	}
	int32_t GetNumY() {
		return memory.read<int32_t>(m_addr + 596);
	}
	struct TArray<struct UChildActorComponent> GetPreviewComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct TArray<struct UChildActorComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraRibbonRendererProperties
{
public:
	UNiagaraRibbonRendererProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FNiagaraUserParameterBinding GetMaterialUserParamBinding() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 128);
	}
	enum class ENiagaraRibbonFacingMode GetFacingMode() {
		return memory.read<enum class ENiagaraRibbonFacingMode>(m_addr + 160);
	}
	struct FNiagaraRibbonUVSettings GetUV0Settings() {
		return memory.read<struct FNiagaraRibbonUVSettings>(m_addr + 164);
	}
	struct FNiagaraRibbonUVSettings GetUV1Settings() {
		return memory.read<struct FNiagaraRibbonUVSettings>(m_addr + 200);
	}
	enum class ENiagaraRibbonDrawDirection GetDrawDirection() {
		return memory.read<enum class ENiagaraRibbonDrawDirection>(m_addr + 236);
	}
	enum class ENiagaraRibbonShapeMode GetShape() {
		return memory.read<enum class ENiagaraRibbonShapeMode>(m_addr + 237);
	}
	bool GetbEnableAccurateGeometry() {
		return memory.read<bool>(m_addr + 238);
	}
	int32_t GetWidthSegmentationCount() {
		return memory.read<int32_t>(m_addr + 240);
	}
	int32_t GetMultiPlaneCount() {
		return memory.read<int32_t>(m_addr + 244);
	}
	int32_t GetTubeSubdivisions() {
		return memory.read<int32_t>(m_addr + 248);
	}
	struct TArray<struct FNiagaraRibbonShapeCustomVertex> GetCustomVertices() {
		return memory.read<struct TArray<struct FNiagaraRibbonShapeCustomVertex>>(m_addr + 256);
	}
	float GetCurveTension() {
		return memory.read<float>(m_addr + 272);
	}
	enum class ENiagaraRibbonTessellationMode GetTessellationMode() {
		return memory.read<enum class ENiagaraRibbonTessellationMode>(m_addr + 276);
	}
	int32_t GetTessellationFactor() {
		return memory.read<int32_t>(m_addr + 280);
	}
	bool GetbUseConstantFactor() {
		return memory.read<bool>(m_addr + 284);
	}
	float GetTessellationAngle() {
		return memory.read<float>(m_addr + 288);
	}
	bool GetbScreenSpaceTessellation() {
		return memory.read<bool>(m_addr + 292);
	}
	struct FNiagaraVariableAttributeBinding GetPositionBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 296);
	}
	struct FNiagaraVariableAttributeBinding GetColorBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 384);
	}
	struct FNiagaraVariableAttributeBinding GetVelocityBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 472);
	}
	struct FNiagaraVariableAttributeBinding GetNormalizedAgeBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 560);
	}
	struct FNiagaraVariableAttributeBinding GetRibbonTwistBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 648);
	}
	struct FNiagaraVariableAttributeBinding GetRibbonWidthBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 736);
	}
	struct FNiagaraVariableAttributeBinding GetRibbonFacingBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 824);
	}
	struct FNiagaraVariableAttributeBinding GetRibbonIdBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 912);
	}
	struct FNiagaraVariableAttributeBinding GetRibbonLinkOrderBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1000);
	}
	struct FNiagaraVariableAttributeBinding GetMaterialRandomBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1088);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterialBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1176);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial1Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1264);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial2Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1352);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial3Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1440);
	}
	struct FNiagaraVariableAttributeBinding GetRibbonUVDistance() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1528);
	}
	struct FNiagaraVariableAttributeBinding GetU0OverrideBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1616);
	}
	struct FNiagaraVariableAttributeBinding GetV0RangeOverrideBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1704);
	}
	struct FNiagaraVariableAttributeBinding GetU1OverrideBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1792);
	}
	struct FNiagaraVariableAttributeBinding GetV1RangeOverrideBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1880);
	}
	struct TArray<struct FNiagaraMaterialAttributeBinding> GetMaterialParameterBindings() {
		return memory.read<struct TArray<struct FNiagaraMaterialAttributeBinding>>(m_addr + 1968);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraScript
{
public:
	UNiagaraScript(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENiagaraScriptUsage GetUsage() {
		return memory.read<enum class ENiagaraScriptUsage>(m_addr + 40);
	}
	struct FGuid GetUsageId() {
		return memory.read<struct FGuid>(m_addr + 44);
	}
	struct FNiagaraParameterStore GetRapidIterationParameters() {
		return memory.read<struct FNiagaraParameterStore>(m_addr + 64);
	}
	struct FNiagaraScriptExecutionParameterStore GetScriptExecutionParamStore() {
		return memory.read<struct FNiagaraScriptExecutionParameterStore>(m_addr + 184);
	}
	struct TArray<struct FNiagaraBoundParameter> GetScriptExecutionBoundParameters() {
		return memory.read<struct TArray<struct FNiagaraBoundParameter>>(m_addr + 336);
	}
	struct FNiagaraVMExecutableDataId GetCachedScriptVMId() {
		return memory.read<struct FNiagaraVMExecutableDataId>(m_addr + 352);
	}
	struct FNiagaraVMExecutableData GetCachedScriptVM() {
		return memory.read<struct FNiagaraVMExecutableData>(m_addr + 456);
	}
	struct TArray<struct UNiagaraParameterCollection> GetCachedParameterCollectionReferences() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct TArray<struct UNiagaraParameterCollection>(ptr_addr);
	}
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> GetCachedDefaultDataInterfaces() {
		return memory.read<struct TArray<struct FNiagaraScriptDataInterfaceInfo>>(m_addr + 712);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraScriptSourceBase
{
public:
	UNiagaraScriptSourceBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraSettings
{
public:
	UNiagaraSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftObjectPath GetDefaultEffectType() {
		return memory.read<struct FSoftObjectPath>(m_addr + 56);
	}
	struct TArray<struct FText> GetQualityLevels() {
		return memory.read<struct TArray<struct FText>>(m_addr + 80);
	}
	struct TMap<struct FString, struct FText> GetComponentRendererWarningsPerClass() {
		return memory.read<struct TMap<struct FString, struct FText>>(m_addr + 96);
	}
	enum class ETextureRenderTargetFormat GetDefaultRenderTargetFormat() {
		return memory.read<enum class ETextureRenderTargetFormat>(m_addr + 176);
	}
	enum class ENiagaraGpuBufferFormat GetDefaultGridFormat() {
		return memory.read<enum class ENiagaraGpuBufferFormat>(m_addr + 177);
	}
	enum class ENiagaraDefaultRendererMotionVectorSetting GetDefaultRendererMotionVectorSetting() {
		return memory.read<enum class ENiagaraDefaultRendererMotionVectorSetting>(m_addr + 180);
	}
	enum class ENDISkelMesh_GpuMaxInfluences GetNDISkelMesh_GpuMaxInfluences() {
		return memory.read<enum class ENDISkelMesh_GpuMaxInfluences>(m_addr + 184);
	}
	enum class ENDISkelMesh_GpuUniformSamplingFormat GetNDISkelMesh_GpuUniformSamplingFormat() {
		return memory.read<enum class ENDISkelMesh_GpuUniformSamplingFormat>(m_addr + 185);
	}
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat GetNDISkelMesh_AdjacencyTriangleIndexFormat() {
		return memory.read<enum class ENDISkelMesh_AdjacencyTriangleIndexFormat>(m_addr + 186);
	}
	struct UNiagaraEffectType GetDefaultEffectTypePtr() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct UNiagaraEffectType(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraSimulationStageBase
{
public:
	UNiagaraSimulationStageBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraScript GetScript() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UNiagaraScript(ptr_addr);
	}
	struct FName GetSimulationStageName() {
		return memory.read<struct FName>(m_addr + 48);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraSimulationStageGeneric
{
public:
	UNiagaraSimulationStageGeneric(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENiagaraIterationSource GetIterationSource() {
		return memory.read<enum class ENiagaraIterationSource>(m_addr + 64);
	}
	int32_t GetIterations() {
		return memory.read<int32_t>(m_addr + 68);
	}
	char GetbSpawnOnly() {
		return memory.read<char>(m_addr + 72);
	}
	char GetbDisablePartialParticleUpdate() {
		return memory.read<char>(m_addr + 72);
	}
	struct FNiagaraVariableDataInterfaceBinding GetDataInterface() {
		return memory.read<struct FNiagaraVariableDataInterfaceBinding>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraSpriteRendererProperties
{
public:
	UNiagaraSpriteRendererProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UMaterialInterface(ptr_addr);
	}
	enum class ENiagaraRendererSourceDataMode GetSourceMode() {
		return memory.read<enum class ENiagaraRendererSourceDataMode>(m_addr + 128);
	}
	struct FNiagaraUserParameterBinding GetMaterialUserParamBinding() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 136);
	}
	enum class ENiagaraSpriteAlignment GetAlignment() {
		return memory.read<enum class ENiagaraSpriteAlignment>(m_addr + 168);
	}
	enum class ENiagaraSpriteFacingMode GetFacingMode() {
		return memory.read<enum class ENiagaraSpriteFacingMode>(m_addr + 169);
	}
	struct FVector2D GetPivotInUVSpace() {
		return memory.read<struct FVector2D>(m_addr + 172);
	}
	enum class ENiagaraSortMode GetSortMode() {
		return memory.read<enum class ENiagaraSortMode>(m_addr + 180);
	}
	struct FVector2D GetSubImageSize() {
		return memory.read<struct FVector2D>(m_addr + 184);
	}
	char GetbSubImageBlend() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbRemoveHMDRollInVR() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbSortOnlyWhenTranslucent() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbGpuLowLatencyTranslucency() {
		return memory.read<char>(m_addr + 192);
	}
	float GetMinFacingCameraBlendDistance() {
		return memory.read<float>(m_addr + 196);
	}
	float GetMaxFacingCameraBlendDistance() {
		return memory.read<float>(m_addr + 200);
	}
	char GetbEnableCameraDistanceCulling() {
		return memory.read<char>(m_addr + 204);
	}
	float GetMinCameraDistance() {
		return memory.read<float>(m_addr + 208);
	}
	float GetMaxCameraDistance() {
		return memory.read<float>(m_addr + 212);
	}
	uint32_t GetRendererVisibility() {
		return memory.read<uint32_t>(m_addr + 216);
	}
	struct FNiagaraVariableAttributeBinding GetPositionBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 224);
	}
	struct FNiagaraVariableAttributeBinding GetColorBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 312);
	}
	struct FNiagaraVariableAttributeBinding GetVelocityBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 400);
	}
	struct FNiagaraVariableAttributeBinding GetSpriteRotationBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 488);
	}
	struct FNiagaraVariableAttributeBinding GetSpriteSizeBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 576);
	}
	struct FNiagaraVariableAttributeBinding GetSpriteFacingBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 664);
	}
	struct FNiagaraVariableAttributeBinding GetSpriteAlignmentBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 752);
	}
	struct FNiagaraVariableAttributeBinding GetSubImageIndexBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 840);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterialBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 928);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial1Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1016);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial2Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1104);
	}
	struct FNiagaraVariableAttributeBinding GetDynamicMaterial3Binding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1192);
	}
	struct FNiagaraVariableAttributeBinding GetCameraOffsetBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1280);
	}
	struct FNiagaraVariableAttributeBinding GetUVScaleBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1368);
	}
	struct FNiagaraVariableAttributeBinding GetPivotOffsetBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1456);
	}
	struct FNiagaraVariableAttributeBinding GetMaterialRandomBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1544);
	}
	struct FNiagaraVariableAttributeBinding GetCustomSortingBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1632);
	}
	struct FNiagaraVariableAttributeBinding GetNormalizedAgeBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1720);
	}
	struct FNiagaraVariableAttributeBinding GetRendererVisibilityTagBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1808);
	}
	struct TArray<struct FNiagaraMaterialAttributeBinding> GetMaterialParameterBindings() {
		return memory.read<struct TArray<struct FNiagaraMaterialAttributeBinding>>(m_addr + 1896);
	}
	struct FNiagaraVariableAttributeBinding GetPrevPositionBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 1912);
	}
	struct FNiagaraVariableAttributeBinding GetPrevVelocityBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 2000);
	}
	struct FNiagaraVariableAttributeBinding GetPrevSpriteRotationBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 2088);
	}
	struct FNiagaraVariableAttributeBinding GetPrevSpriteSizeBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 2176);
	}
	struct FNiagaraVariableAttributeBinding GetPrevSpriteFacingBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 2264);
	}
	struct FNiagaraVariableAttributeBinding GetPrevSpriteAlignmentBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 2352);
	}
	struct FNiagaraVariableAttributeBinding GetPrevCameraOffsetBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 2440);
	}
	struct FNiagaraVariableAttributeBinding GetPrevPivotOffsetBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 2528);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraSystem
{
public:
	UNiagaraSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDumpDebugSystemInfo() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetbDumpDebugEmitterInfo() {
		return memory.read<bool>(m_addr + 49);
	}
	bool GetbRequireCurrentFrameData() {
		return memory.read<bool>(m_addr + 51);
	}
	char GetbFixedBounds() {
		return memory.read<char>(m_addr + 52);
	}
	struct UNiagaraEffectType GetEffectType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UNiagaraEffectType(ptr_addr);
	}
	bool GetbOverrideScalabilitySettings() {
		return memory.read<bool>(m_addr + 64);
	}
	struct TArray<struct FNiagaraSystemScalabilityOverride> GetScalabilityOverrides() {
		return memory.read<struct TArray<struct FNiagaraSystemScalabilityOverride>>(m_addr + 72);
	}
	struct FNiagaraSystemScalabilityOverrides GetSystemScalabilityOverrides() {
		return memory.read<struct FNiagaraSystemScalabilityOverrides>(m_addr + 88);
	}
	struct TArray<struct FNiagaraEmitterHandle> GetEmitterHandles() {
		return memory.read<struct TArray<struct FNiagaraEmitterHandle>>(m_addr + 104);
	}
	struct TArray<struct UNiagaraParameterCollectionInstance> GetParameterCollectionOverrides() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct TArray<struct UNiagaraParameterCollectionInstance>(ptr_addr);
	}
	struct UNiagaraScript GetSystemSpawnScript() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UNiagaraScript(ptr_addr);
	}
	struct UNiagaraScript GetSystemUpdateScript() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UNiagaraScript(ptr_addr);
	}
	struct FNiagaraSystemCompiledData GetSystemCompiledData() {
		return memory.read<struct FNiagaraSystemCompiledData>(m_addr + 168);
	}
	struct FNiagaraUserRedirectionParameterStore GetExposedParameters() {
		return memory.read<struct FNiagaraUserRedirectionParameterStore>(m_addr + 704);
	}
	struct FBox GetFixedBounds() {
		return memory.read<struct FBox>(m_addr + 904);
	}
	bool GetbAutoDeactivate() {
		return memory.read<bool>(m_addr + 932);
	}
	float GetWarmupTime() {
		return memory.read<float>(m_addr + 936);
	}
	int32_t GetWarmupTickCount() {
		return memory.read<int32_t>(m_addr + 940);
	}
	float GetWarmupTickDelta() {
		return memory.read<float>(m_addr + 944);
	}
	bool GetbHasSystemScriptDIsWithPerInstanceData() {
		return memory.read<bool>(m_addr + 948);
	}
	bool GetbNeedsGPUContextInitForDataInterfaces() {
		return memory.read<bool>(m_addr + 949);
	}
	struct TArray<struct FName> GetUserDINamesReadInSystemScripts() {
		return memory.read<struct TArray<struct FName>>(m_addr + 952);
	}

private:
	std::uint64_t m_addr = 0;
};


