#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FNiagaraID
{
public:
	FNiagaraID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetAcquireTag() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneNiagaraParameterSectionTemplate
{
public:
	FMovieSceneNiagaraParameterSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraVariable GetParameter() {
		return memory.read<struct FNiagaraVariable>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayVectorValue
{
public:
	FGetNiagaraArrayVectorValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraMaterialOverride
{
public:
	FNiagaraMaterialOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}
	uint32_t GetMaterialSubIndex() {
		return memory.read<uint32_t>(m_addr + 8);
	}
	struct UNiagaraRendererProperties GetEmitterRendererProperty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UNiagaraRendererProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraMatrix
{
public:
	FNiagaraMatrix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector4 GetRow0() {
		return memory.read<struct FVector4>(m_addr + 0);
	}
	struct FVector4 GetRow1() {
		return memory.read<struct FVector4>(m_addr + 16);
	}
	struct FVector4 GetRow2() {
		return memory.read<struct FVector4>(m_addr + 32);
	}
	struct FVector4 GetRow3() {
		return memory.read<struct FVector4>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNiagaraSystemFinished__DelegateSignature
{
public:
	FOnNiagaraSystemFinished__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetPSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraBakerTextureSettings
{
public:
	FNiagaraBakerTextureSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetOutputName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FNiagaraBakerTextureSource GetSourceBinding() {
		return memory.read<struct FNiagaraBakerTextureSource>(m_addr + 8);
	}
	char GetbUseFrameSize() {
		return memory.read<char>(m_addr + 16);
	}
	struct FIntPoint GetFrameSize() {
		return memory.read<struct FIntPoint>(m_addr + 20);
	}
	struct FIntPoint GetTextureSize() {
		return memory.read<struct FIntPoint>(m_addr + 28);
	}
	struct UTexture2D GetGeneratedTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraSystemScalabilityOverrides
{
public:
	FNiagaraSystemScalabilityOverrides(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNiagaraSystemScalabilityOverride> GetOverrides() {
		return memory.read<struct TArray<struct FNiagaraSystemScalabilityOverride>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneNiagaraColorParameterSectionTemplate
{
public:
	FMovieSceneNiagaraColorParameterSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetRedChannel() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 64);
	}
	struct FMovieSceneFloatChannel GetGreenChannel() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 224);
	}
	struct FMovieSceneFloatChannel GetBlueChannel() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 384);
	}
	struct FMovieSceneFloatChannel GetAlphaChannel() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 544);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraOutlinerEmitterInstanceData
{
public:
	FNiagaraOutlinerEmitterInstanceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEmitterName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ENiagaraSimTarget GetSimTarget() {
		return memory.read<enum class ENiagaraSimTarget>(m_addr + 16);
	}
	enum class ENiagaraExecutionState GetExecState() {
		return memory.read<enum class ENiagaraExecutionState>(m_addr + 20);
	}
	int32_t GetNumParticles() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraVariableBase
{
public:
	FNiagaraVariableBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FNiagaraTypeDefinitionHandle GetTypeDefHandle() {
		return memory.read<struct FNiagaraTypeDefinitionHandle>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraSimpleClientInfo
{
public:
	FNiagaraSimpleClientInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetSystems() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	struct TArray<struct FString> GetActors() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}
	struct TArray<struct FString> GetComponents() {
		return memory.read<struct TArray<struct FString>>(m_addr + 32);
	}
	struct TArray<struct FString> GetEmitters() {
		return memory.read<struct TArray<struct FString>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDataSetCompiledData
{
public:
	FNiagaraDataSetCompiledData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNiagaraVariable> GetVariables() {
		return memory.read<struct TArray<struct FNiagaraVariable>>(m_addr + 0);
	}
	struct TArray<struct FNiagaraVariableLayoutInfo> GetVariableLayouts() {
		return memory.read<struct TArray<struct FNiagaraVariableLayoutInfo>>(m_addr + 16);
	}
	struct FNiagaraDataSetID GetID() {
		return memory.read<struct FNiagaraDataSetID>(m_addr + 32);
	}
	uint32_t GetTotalFloatComponents() {
		return memory.read<uint32_t>(m_addr + 44);
	}
	uint32_t GetTotalInt32Components() {
		return memory.read<uint32_t>(m_addr + 48);
	}
	uint32_t GetTotalHalfComponents() {
		return memory.read<uint32_t>(m_addr + 52);
	}
	char GetbRequiresPersistentIDs() {
		return memory.read<char>(m_addr + 56);
	}
	enum class ENiagaraSimTarget GetSimTarget() {
		return memory.read<enum class ENiagaraSimTarget>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraSystemUpdateContext
{
public:
	FNiagaraSystemUpdateContext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UNiagaraComponent> GetComponentsToReset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UNiagaraComponent>(ptr_addr);
	}
	struct TArray<struct UNiagaraComponent> GetComponentsToReInit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UNiagaraComponent>(ptr_addr);
	}
	struct TArray<struct UNiagaraComponent> GetComponentsToNotifySimDestroy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct TArray<struct UNiagaraComponent>(ptr_addr);
	}
	struct TArray<struct UNiagaraSystem> GetSystemSimsToDestroy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UNiagaraSystem>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraTypeDefinitionHandle
{
public:
	FNiagaraTypeDefinitionHandle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRegisteredTypeIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetColorParameter
{
public:
	FGetColorParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpawnSystemAttached
{
public:
	FSpawnSystemAttached(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraSystem GetSystemTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraSystem(ptr_addr);
	}
	struct USceneComponent GetAttachToComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USceneComponent(ptr_addr);
	}
	struct FName GetAttachPointName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 36);
	}
	enum class EAttachLocation GetLocationType() {
		return memory.read<enum class EAttachLocation>(m_addr + 48);
	}
	bool GetbAutoDestroy() {
		return memory.read<bool>(m_addr + 49);
	}
	bool GetbAutoActivate() {
		return memory.read<bool>(m_addr + 50);
	}
	enum class ENCPoolMethod GetPoolingMethod() {
		return memory.read<enum class ENCPoolMethod>(m_addr + 51);
	}
	bool GetbPreCullCheck() {
		return memory.read<bool>(m_addr + 52);
	}
	struct UNiagaraComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UNiagaraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraVariable
{
public:
	FNiagaraVariable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetVarData() {
		return memory.read<struct TArray<char>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneNiagaraBoolParameterSectionTemplate
{
public:
	FMovieSceneNiagaraBoolParameterSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneBoolChannel GetBoolChannel() {
		return memory.read<struct FMovieSceneBoolChannel>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRandomSeedOffset
{
public:
	FGetRandomSeedOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDebuggerExecuteConsoleCommand
{
public:
	FNiagaraDebuggerExecuteConsoleCommand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCommand() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetbRequiresWorld() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraVariableDataInterfaceBinding
{
public:
	FNiagaraVariableDataInterfaceBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraVariable GetBoundVariable() {
		return memory.read<struct FNiagaraVariable>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraScalabilityState
{
public:
	FNiagaraScalabilityState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSignificance() {
		return memory.read<float>(m_addr + 0);
	}
	char GetbCulled() {
		return memory.read<char>(m_addr + 4);
	}
	char GetbPreviousCulled() {
		return memory.read<char>(m_addr + 4);
	}
	char GetbCulledByDistance() {
		return memory.read<char>(m_addr + 4);
	}
	char GetbCulledByInstanceCount() {
		return memory.read<char>(m_addr + 4);
	}
	char GetbCulledByVisibility() {
		return memory.read<char>(m_addr + 4);
	}
	char GetbCulledByGlobalBudget() {
		return memory.read<char>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneNiagaraFloatParameterSectionTemplate
{
public:
	FMovieSceneNiagaraFloatParameterSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetFloatChannel() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FAdvanceSimulation
{
public:
	FAdvanceSimulation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTickCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetTickDeltaSeconds() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraEventScriptProperties
{
public:
	FNiagaraEventScriptProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EScriptExecutionMode GetExecutionMode() {
		return memory.read<enum class EScriptExecutionMode>(m_addr + 40);
	}
	uint32_t GetSpawnNumber() {
		return memory.read<uint32_t>(m_addr + 44);
	}
	uint32_t GetMaxEventsPerFrame() {
		return memory.read<uint32_t>(m_addr + 48);
	}
	struct FGuid GetSourceEmitterID() {
		return memory.read<struct FGuid>(m_addr + 52);
	}
	struct FName GetSourceEventName() {
		return memory.read<struct FName>(m_addr + 68);
	}
	bool GetbRandomSpawnNumber() {
		return memory.read<bool>(m_addr + 76);
	}
	uint32_t GetMinSpawnNumber() {
		return memory.read<uint32_t>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraCompileDependency
{
public:
	FNiagaraCompileDependency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLinkerErrorMessage() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FGuid GetNodeGuid() {
		return memory.read<struct FGuid>(m_addr + 16);
	}
	struct FGuid GetPinGuid() {
		return memory.read<struct FGuid>(m_addr + 32);
	}
	struct TArray<struct FGuid> GetStackGuids() {
		return memory.read<struct TArray<struct FGuid>>(m_addr + 48);
	}
	struct FNiagaraVariableBase GetDependentVariable() {
		return memory.read<struct FNiagaraVariableBase>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraOutlinerWorldData
{
public:
	FNiagaraOutlinerWorldData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FNiagaraOutlinerSystemData> GetSystems() {
		return memory.read<struct TMap<struct FString, struct FNiagaraOutlinerSystemData>>(m_addr + 0);
	}
	bool GetbHasBegunPlay() {
		return memory.read<bool>(m_addr + 80);
	}
	char GetWorldType() {
		return memory.read<char>(m_addr + 81);
	}
	char GetNetMode() {
		return memory.read<char>(m_addr + 82);
	}
	struct FNiagaraOutlinerTimingData GetAveragePerFrameTime() {
		return memory.read<struct FNiagaraOutlinerTimingData>(m_addr + 84);
	}
	struct FNiagaraOutlinerTimingData GetMaxPerFrameTime() {
		return memory.read<struct FNiagaraOutlinerTimingData>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneNiagaraIntegerParameterSectionTemplate
{
public:
	FMovieSceneNiagaraIntegerParameterSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneIntegerChannel GetIntegerChannel() {
		return memory.read<struct FMovieSceneIntegerChannel>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraGraphViewSettings
{
public:
	FNiagaraGraphViewSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetLocation() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	float GetZoom() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbIsValid() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneNiagaraSystemTrackImplementation
{
public:
	FMovieSceneNiagaraSystemTrackImplementation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetSpawnSectionStartFrame() {
		return memory.read<struct FFrameNumber>(m_addr + 16);
	}
	struct FFrameNumber GetSpawnSectionEndFrame() {
		return memory.read<struct FFrameNumber>(m_addr + 20);
	}
	enum class ENiagaraSystemSpawnSectionStartBehavior GetSpawnSectionStartBehavior() {
		return memory.read<enum class ENiagaraSystemSpawnSectionStartBehavior>(m_addr + 24);
	}
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior GetSpawnSectionEvaluateBehavior() {
		return memory.read<enum class ENiagaraSystemSpawnSectionEvaluateBehavior>(m_addr + 28);
	}
	enum class ENiagaraSystemSpawnSectionEndBehavior GetSpawnSectionEndBehavior() {
		return memory.read<enum class ENiagaraSystemSpawnSectionEndBehavior>(m_addr + 32);
	}
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode() {
		return memory.read<enum class ENiagaraAgeUpdateMode>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraScriptDataInterfaceCompileInfo
{
public:
	FNiagaraScriptDataInterfaceCompileInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetUserPtrIdx() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FNiagaraTypeDefinition GetType() {
		return memory.read<struct FNiagaraTypeDefinition>(m_addr + 16);
	}
	struct FName GetRegisteredParameterMapRead() {
		return memory.read<struct FName>(m_addr + 32);
	}
	struct FName GetRegisteredParameterMapWrite() {
		return memory.read<struct FName>(m_addr + 40);
	}
	bool GetbIsPlaceholder() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraUserParameterBinding
{
public:
	FNiagaraUserParameterBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraVariable GetParameter() {
		return memory.read<struct FNiagaraVariable>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneNiagaraSystemTrackTemplate
{
public:
	FMovieSceneNiagaraSystemTrackTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetMaxSimTime
{
public:
	FGetMaxSimTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneNiagaraVectorParameterSectionTemplate
{
public:
	FMovieSceneNiagaraVectorParameterSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetVectorChannels[4]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 64);
	}
	int32_t GetChannelsUsed() {
		return memory.read<int32_t>(m_addr + 704);
	}

private:
	std::uint64_t m_addr = 0;
};class FBasicParticleData
{
public:
	FBasicParticleData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	float GetSize() {
		return memory.read<float>(m_addr + 12);
	}
	struct FVector GetVelocity() {
		return memory.read<struct FVector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDataSetProperties
{
public:
	FNiagaraDataSetProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraDataSetID GetID() {
		return memory.read<struct FNiagaraDataSetID>(m_addr + 0);
	}
	struct TArray<struct FNiagaraVariable> GetVariables() {
		return memory.read<struct TArray<struct FNiagaraVariable>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNum
{
public:
	FNum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraTypeDefinition
{
public:
	FNiagaraTypeDefinition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetClassStructOrEnum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	uint16_t GetUnderlyingType() {
		return memory.read<uint16_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraBakerTextureSource
{
public:
	FNiagaraBakerTextureSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSourceName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayFloat
{
public:
	FGetNiagaraArrayFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<float> GetReturnValue() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraRandInfo
{
public:
	FNiagaraRandInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSeed1() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetSeed2() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetSeed3() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraScriptVariableBinding
{
public:
	FNiagaraScriptVariableBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDebuggerRequestConnection
{
public:
	FNiagaraDebuggerRequestConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetSessionId() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FGuid GetInstanceId() {
		return memory.read<struct FGuid>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoolParameter
{
public:
	FGetBoolParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraMaterialAttributeBinding
{
public:
	FNiagaraMaterialAttributeBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMaterialParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FNiagaraVariableBase GetNiagaraVariable() {
		return memory.read<struct FNiagaraVariableBase>(m_addr + 8);
	}
	struct FNiagaraVariableBase GetResolvedNiagaraVariable() {
		return memory.read<struct FNiagaraVariableBase>(m_addr + 20);
	}
	struct FNiagaraVariableBase GetNiagaraChildVariable() {
		return memory.read<struct FNiagaraVariableBase>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraVariableAttributeBinding
{
public:
	FNiagaraVariableAttributeBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraVariableBase GetParamMapVariable() {
		return memory.read<struct FNiagaraVariableBase>(m_addr + 0);
	}
	struct FNiagaraVariable GetDataSetVariable() {
		return memory.read<struct FNiagaraVariable>(m_addr + 16);
	}
	struct FNiagaraVariable GetRootVariable() {
		return memory.read<struct FNiagaraVariable>(m_addr + 48);
	}
	enum class ENiagaraBindingSource GetBindingSourceMode() {
		return memory.read<enum class ENiagaraBindingSource>(m_addr + 80);
	}
	char GetbBindingExistsOnSource() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbIsCachedParticleValue() {
		return memory.read<char>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraVariableInfo
{
public:
	FNiagaraVariableInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraVariable GetVariable() {
		return memory.read<struct FNiagaraVariable>(m_addr + 0);
	}
	struct FText GetDefinition() {
		return memory.read<struct FText>(m_addr + 32);
	}
	struct UNiagaraDataInterface GetDataInterface() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UNiagaraDataInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FVMExternalFunctionBindingInfo
{
public:
	FVMExternalFunctionBindingInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetOwnerName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<bool> GetInputParamLocations() {
		return memory.read<struct TArray<bool>>(m_addr + 16);
	}
	int32_t GetNumOutputs() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct TArray<struct FVMFunctionSpecifier> GetFunctionSpecifiers() {
		return memory.read<struct TArray<struct FVMFunctionSpecifier>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDebuggerOutlinerUpdate
{
public:
	FNiagaraDebuggerOutlinerUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraOutlinerData GetOutlinerData() {
		return memory.read<struct FNiagaraOutlinerData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FVMFunctionSpecifier
{
public:
	FVMFunctionSpecifier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKey() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetValue() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraStatScope
{
public:
	FNiagaraStatScope(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetFullName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetFriendlyName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraEmitterScalabilityOverrides
{
public:
	FNiagaraEmitterScalabilityOverrides(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNiagaraEmitterScalabilityOverride> GetOverrides() {
		return memory.read<struct TArray<struct FNiagaraEmitterScalabilityOverride>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraVariableLinearColor
{
public:
	FSetNiagaraVariableLinearColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FLinearColor GetInValue() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraOutlinerTimingData
{
public:
	FNiagaraOutlinerTimingData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetGameThread() {
		return memory.read<float>(m_addr + 0);
	}
	float GetRenderThread() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FNCPool
{
public:
	FNCPool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNCPoolElement> GetFreeElements() {
		return memory.read<struct TArray<struct FNCPoolElement>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraScriptDataInterfaceInfo
{
public:
	FNiagaraScriptDataInterfaceInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraDataInterface GetDataInterface() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraDataInterface(ptr_addr);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetUserPtrIdx() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FNiagaraTypeDefinition GetType() {
		return memory.read<struct FNiagaraTypeDefinition>(m_addr + 24);
	}
	struct FName GetRegisteredParameterMapRead() {
		return memory.read<struct FName>(m_addr + 40);
	}
	struct FName GetRegisteredParameterMapWrite() {
		return memory.read<struct FName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraFunctionSignature
{
public:
	FNiagaraFunctionSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FNiagaraVariable> GetInputs() {
		return memory.read<struct TArray<struct FNiagaraVariable>>(m_addr + 8);
	}
	struct TArray<struct FNiagaraVariable> GetOutputs() {
		return memory.read<struct TArray<struct FNiagaraVariable>>(m_addr + 24);
	}
	struct FName GetOwnerName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	char GetbRequiresContext() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbRequiresExecPin() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbMemberFunction() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbExperimental() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbSupportsCPU() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbSupportsGPU() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbWriteFunction() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbSoftDeprecatedFunction() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbIsCompileTagGenerator() {
		return memory.read<char>(m_addr + 49);
	}
	char GetbHidden() {
		return memory.read<char>(m_addr + 49);
	}
	int32_t GetModuleUsageBitmask() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetContextStageMinIndex() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetContextStageMaxIndex() {
		return memory.read<int32_t>(m_addr + 60);
	}
	struct TMap<struct FName, struct FName> GetFunctionSpecifiers() {
		return memory.read<struct TMap<struct FName, struct FName>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraScalabilityManager
{
public:
	FNiagaraScalabilityManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraEffectType GetEffectType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraEffectType(ptr_addr);
	}
	struct TArray<struct UNiagaraComponent> GetManagedComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UNiagaraComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraOutlinerSystemInstanceData
{
public:
	FNiagaraOutlinerSystemInstanceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetComponentName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FNiagaraOutlinerEmitterInstanceData> GetEmitters() {
		return memory.read<struct TArray<struct FNiagaraOutlinerEmitterInstanceData>>(m_addr + 16);
	}
	enum class ENiagaraExecutionState GetActualExecutionState() {
		return memory.read<enum class ENiagaraExecutionState>(m_addr + 32);
	}
	enum class ENiagaraExecutionState GetRequestedExecutionState() {
		return memory.read<enum class ENiagaraExecutionState>(m_addr + 36);
	}
	struct FNiagaraScalabilityState GetScalabilityState() {
		return memory.read<struct FNiagaraScalabilityState>(m_addr + 40);
	}
	char GetbPendingKill() {
		return memory.read<char>(m_addr + 48);
	}
	enum class ENCPoolMethod GetPoolMethod() {
		return memory.read<enum class ENCPoolMethod>(m_addr + 52);
	}
	struct FNiagaraOutlinerTimingData GetAverageTime() {
		return memory.read<struct FNiagaraOutlinerTimingData>(m_addr + 56);
	}
	struct FNiagaraOutlinerTimingData GetMaxTime() {
		return memory.read<struct FNiagaraOutlinerTimingData>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayVector2D
{
public:
	FGetNiagaraArrayVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<struct FVector2D> GetReturnValue() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraScriptDataUsageInfo
{
public:
	FNiagaraScriptDataUsageInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbReadsAttributeData() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDataSetID
{
public:
	FNiagaraDataSetID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ENiagaraDataSetType GetType() {
		return memory.read<enum class ENiagaraDataSetType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNCPoolElement
{
public:
	FNCPoolElement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPaused
{
public:
	FSetPaused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPaused() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraEmitterScalabilityOverride
{
public:
	FNiagaraEmitterScalabilityOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbOverrideSpawnCountScale() {
		return memory.read<char>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraComponentPropertyBinding
{
public:
	FNiagaraComponentPropertyBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraVariableAttributeBinding GetAttributeBinding() {
		return memory.read<struct FNiagaraVariableAttributeBinding>(m_addr + 0);
	}
	struct FName GetPropertyName() {
		return memory.read<struct FName>(m_addr + 88);
	}
	struct FNiagaraTypeDefinition GetPropertyType() {
		return memory.read<struct FNiagaraTypeDefinition>(m_addr + 96);
	}
	struct FName GetMetadataSetterName() {
		return memory.read<struct FName>(m_addr + 112);
	}
	struct TMap<struct FString, struct FString> GetPropertySetterParameterDefaults() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 120);
	}
	struct FNiagaraVariable GetWritableValue() {
		return memory.read<struct FNiagaraVariable>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDebugHudTextOptions
{
public:
	FNiagaraDebugHudTextOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENiagaraDebugHudFont GetFont() {
		return memory.read<enum class ENiagaraDebugHudFont>(m_addr + 0);
	}
	enum class ENiagaraDebugHudHAlign GetHorizontalAlignment() {
		return memory.read<enum class ENiagaraDebugHudHAlign>(m_addr + 4);
	}
	enum class ENiagaraDebugHudVAlign GetVerticalAlignment() {
		return memory.read<enum class ENiagaraDebugHudVAlign>(m_addr + 5);
	}
	struct FVector2D GetScreenOffset() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraEmitterNameSettingsRef
{
public:
	FNiagaraEmitterNameSettingsRef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSystemName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FString GetEmitterName() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSeekDelta
{
public:
	FGetSeekDelta(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMeshTriCoordinate
{
public:
	FMeshTriCoordinate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTri() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVector GetBaryCoord() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FNDIStaticMeshSectionFilter
{
public:
	FNDIStaticMeshSectionFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetAllowedMaterialSlots() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraVariableLayoutInfo
{
public:
	FNiagaraVariableLayoutInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetFloatComponentStart() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetInt32ComponentStart() {
		return memory.read<uint32_t>(m_addr + 4);
	}
	uint32_t GetHalfComponentStart() {
		return memory.read<uint32_t>(m_addr + 8);
	}
	struct FNiagaraTypeLayoutInfo GetLayoutInfo() {
		return memory.read<struct FNiagaraTypeLayoutInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayInt32Value
{
public:
	FGetNiagaraArrayInt32Value(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraTypeLayoutInfo
{
public:
	FNiagaraTypeLayoutInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<uint32_t> GetFloatComponentByteOffsets() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 0);
	}
	struct TArray<uint32_t> GetFloatComponentRegisterOffsets() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 16);
	}
	struct TArray<uint32_t> GetInt32ComponentByteOffsets() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 32);
	}
	struct TArray<uint32_t> GetInt32ComponentRegisterOffsets() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 48);
	}
	struct TArray<uint32_t> GetHalfComponentByteOffsets() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 64);
	}
	struct TArray<uint32_t> GetHalfComponentRegisterOffsets() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetColorParameter
{
public:
	FSetColorParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FLinearColor GetInValue() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraRequestSimpleClientInfoMessage
{
public:
	FNiagaraRequestSimpleClientInfoMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNiagaraOutlinerCaptureSettings
{
public:
	FNiagaraOutlinerCaptureSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbTriggerCapture() {
		return memory.read<bool>(m_addr + 0);
	}
	uint32_t GetCaptureDelayFrames() {
		return memory.read<uint32_t>(m_addr + 4);
	}
	bool GetbGatherPerfData() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraOutlinerSystemData
{
public:
	FNiagaraOutlinerSystemData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNiagaraOutlinerSystemInstanceData> GetSystemInstances() {
		return memory.read<struct TArray<struct FNiagaraOutlinerSystemInstanceData>>(m_addr + 0);
	}
	struct FNiagaraOutlinerTimingData GetAveragePerFrameTime() {
		return memory.read<struct FNiagaraOutlinerTimingData>(m_addr + 16);
	}
	struct FNiagaraOutlinerTimingData GetMaxPerFrameTime() {
		return memory.read<struct FNiagaraOutlinerTimingData>(m_addr + 24);
	}
	struct FNiagaraOutlinerTimingData GetAveragePerInstanceTime() {
		return memory.read<struct FNiagaraOutlinerTimingData>(m_addr + 32);
	}
	struct FNiagaraOutlinerTimingData GetMaxPerInstanceTime() {
		return memory.read<struct FNiagaraOutlinerTimingData>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVolumeTextureObject
{
public:
	FSetVolumeTextureObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FString GetOverrideName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct UVolumeTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UVolumeTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraScriptExecutionParameterStore
{
public:
	FNiagaraScriptExecutionParameterStore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetParameterSize() {
		return memory.read<int32_t>(m_addr + 120);
	}
	uint32_t GetPaddedParameterSize() {
		return memory.read<uint32_t>(m_addr + 124);
	}
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> GetPaddingInfo() {
		return memory.read<struct TArray<struct FNiagaraScriptExecutionPaddingInfo>>(m_addr + 128);
	}
	char GetbInitialized() {
		return memory.read<char>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDebugHUDSettingsData
{
public:
	FNiagaraDebugHUDSettingsData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbValidateSystemSimulationDataBuffers() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetbValidateParticleDataBuffers() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetbOverviewEnabled() {
		return memory.read<bool>(m_addr + 3);
	}
	enum class ENiagaraDebugHudFont GetOverviewFont() {
		return memory.read<enum class ENiagaraDebugHudFont>(m_addr + 4);
	}
	struct FVector2D GetOverviewLocation() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FString GetActorFilter() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetbComponentFilterEnabled() {
		return memory.read<bool>(m_addr + 32);
	}
	struct FString GetComponentFilter() {
		return memory.read<struct FString>(m_addr + 40);
	}
	bool GetbSystemFilterEnabled() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FString GetSystemFilter() {
		return memory.read<struct FString>(m_addr + 64);
	}
	bool GetbEmitterFilterEnabled() {
		return memory.read<bool>(m_addr + 80);
	}
	struct FString GetEmitterFilter() {
		return memory.read<struct FString>(m_addr + 88);
	}
	bool GetbActorFilterEnabled() {
		return memory.read<bool>(m_addr + 104);
	}
	enum class ENiagaraDebugHudVerbosity GetSystemDebugVerbosity() {
		return memory.read<enum class ENiagaraDebugHudVerbosity>(m_addr + 108);
	}
	enum class ENiagaraDebugHudVerbosity GetSystemEmitterVerbosity() {
		return memory.read<enum class ENiagaraDebugHudVerbosity>(m_addr + 112);
	}
	bool GetbSystemShowBounds() {
		return memory.read<bool>(m_addr + 116);
	}
	bool GetbSystemShowActiveOnlyInWorld() {
		return memory.read<bool>(m_addr + 117);
	}
	bool GetbShowSystemVariables() {
		return memory.read<bool>(m_addr + 118);
	}
	struct TArray<struct FNiagaraDebugHUDVariable> GetSystemVariables() {
		return memory.read<struct TArray<struct FNiagaraDebugHUDVariable>>(m_addr + 120);
	}
	struct FNiagaraDebugHudTextOptions GetSystemTextOptions() {
		return memory.read<struct FNiagaraDebugHudTextOptions>(m_addr + 136);
	}
	bool GetbShowParticleVariables() {
		return memory.read<bool>(m_addr + 152);
	}
	bool GetbEnableGpuParticleReadback() {
		return memory.read<bool>(m_addr + 153);
	}
	struct TArray<struct FNiagaraDebugHUDVariable> GetParticlesVariables() {
		return memory.read<struct TArray<struct FNiagaraDebugHUDVariable>>(m_addr + 160);
	}
	struct FNiagaraDebugHudTextOptions GetParticleTextOptions() {
		return memory.read<struct FNiagaraDebugHudTextOptions>(m_addr + 176);
	}
	bool GetbShowParticlesVariablesWithSystem() {
		return memory.read<bool>(m_addr + 192);
	}
	bool GetbUseMaxParticlesToDisplay() {
		return memory.read<bool>(m_addr + 193);
	}
	int32_t GetMaxParticlesToDisplay() {
		return memory.read<int32_t>(m_addr + 196);
	}
	enum class ENiagaraDebugPlaybackMode GetPlaybackMode() {
		return memory.read<enum class ENiagaraDebugPlaybackMode>(m_addr + 200);
	}
	bool GetbPlaybackRateEnabled() {
		return memory.read<bool>(m_addr + 201);
	}
	float GetPlaybackRate() {
		return memory.read<float>(m_addr + 204);
	}
	bool GetbLoopTimeEnabled() {
		return memory.read<bool>(m_addr + 208);
	}
	float GetLoopTime() {
		return memory.read<float>(m_addr + 212);
	}
	bool GetbShowGlobalBudgetInfo() {
		return memory.read<bool>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraOutlinerData
{
public:
	FNiagaraOutlinerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FNiagaraOutlinerWorldData> GetWorldData() {
		return memory.read<struct TMap<struct FString, struct FNiagaraOutlinerWorldData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDebugHUDVariable
{
public:
	FNiagaraDebugHUDVariable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDebuggerConnectionClosed
{
public:
	FNiagaraDebuggerConnectionClosed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetSessionId() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FGuid GetInstanceId() {
		return memory.read<struct FGuid>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDebuggerAcceptConnection
{
public:
	FNiagaraDebuggerAcceptConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetSessionId() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FGuid GetInstanceId() {
		return memory.read<struct FGuid>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraEmitterScalabilitySettings
{
public:
	FNiagaraEmitterScalabilitySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraPlatformSet GetPlatforms() {
		return memory.read<struct FNiagaraPlatformSet>(m_addr + 0);
	}
	char GetbScaleSpawnCount() {
		return memory.read<char>(m_addr + 48);
	}
	float GetSpawnCountScale() {
		return memory.read<float>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraPlatformSet
{
public:
	FNiagaraPlatformSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetQualityLevelMask() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FNiagaraDeviceProfileStateEntry> GetDeviceProfileStates() {
		return memory.read<struct TArray<struct FNiagaraDeviceProfileStateEntry>>(m_addr + 8);
	}
	struct TArray<struct FNiagaraPlatformSetCVarCondition> GetCVarConditions() {
		return memory.read<struct TArray<struct FNiagaraPlatformSetCVarCondition>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraPlatformSetCVarCondition
{
public:
	FNiagaraPlatformSetCVarCondition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCVarName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetValue() {
		return memory.read<bool>(m_addr + 8);
	}
	int32_t GetMinInt() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetMaxInt() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetMinFloat() {
		return memory.read<float>(m_addr + 20);
	}
	float GetMaxFloat() {
		return memory.read<float>(m_addr + 24);
	}
	char GetbUseMinInt() {
		return memory.read<char>(m_addr + 28);
	}
	char GetbUseMaxInt() {
		return memory.read<char>(m_addr + 28);
	}
	char GetbUseMinFloat() {
		return memory.read<char>(m_addr + 28);
	}
	char GetbUseMaxFloat() {
		return memory.read<char>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDeviceProfileStateEntry
{
public:
	FNiagaraDeviceProfileStateEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetProfileName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	uint32_t GetQualityLevelMask() {
		return memory.read<uint32_t>(m_addr + 8);
	}
	uint32_t GetSetQualityLevelMask() {
		return memory.read<uint32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetQuatParameter
{
public:
	FSetQuatParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FQuat GetInValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraEmitterScalabilitySettingsArray
{
public:
	FNiagaraEmitterScalabilitySettingsArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNiagaraEmitterScalabilitySettings> GetSettings() {
		return memory.read<struct TArray<struct FNiagaraEmitterScalabilitySettings>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraSystemScalabilitySettings
{
public:
	FNiagaraSystemScalabilitySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraPlatformSet GetPlatforms() {
		return memory.read<struct FNiagaraPlatformSet>(m_addr + 0);
	}
	char GetbCullByDistance() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbCullMaxInstanceCount() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbCullPerSystemMaxInstanceCount() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbCullByMaxTimeWithoutRender() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbCullByGlobalBudget() {
		return memory.read<char>(m_addr + 48);
	}
	float GetMaxDistance() {
		return memory.read<float>(m_addr + 52);
	}
	int32_t GetMaxInstances() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetMaxSystemInstances() {
		return memory.read<int32_t>(m_addr + 60);
	}
	float GetMaxTimeWithoutRender() {
		return memory.read<float>(m_addr + 64);
	}
	float GetMaxGlobalBudgetUsage() {
		return memory.read<float>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEndTest
{
public:
	FOnEndTest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraPerfBaselineStats GetStats() {
		return memory.read<struct FNiagaraPerfBaselineStats>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraSystemScalabilityOverride
{
public:
	FNiagaraSystemScalabilityOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbOverrideDistanceSettings() {
		return memory.read<char>(m_addr + 72);
	}
	char GetbOverrideInstanceCountSettings() {
		return memory.read<char>(m_addr + 72);
	}
	char GetbOverridePerSystemInstanceCountSettings() {
		return memory.read<char>(m_addr + 72);
	}
	char GetbOverrideTimeSinceRendererSettings() {
		return memory.read<char>(m_addr + 72);
	}
	char GetbOverrideGlobalBudgetCullingSettings() {
		return memory.read<char>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraSystemScalabilitySettingsArray
{
public:
	FNiagaraSystemScalabilitySettingsArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNiagaraSystemScalabilitySettings> GetSettings() {
		return memory.read<struct TArray<struct FNiagaraSystemScalabilitySettings>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraDetailsLevelScaleOverrides
{
public:
	FNiagaraDetailsLevelScaleOverrides(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLow() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMedium() {
		return memory.read<float>(m_addr + 4);
	}
	float GetHigh() {
		return memory.read<float>(m_addr + 8);
	}
	float GetEpic() {
		return memory.read<float>(m_addr + 12);
	}
	float GetCine() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRenderingEnabled
{
public:
	FSetRenderingEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInRenderingEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraEmitterScriptProperties
{
public:
	FNiagaraEmitterScriptProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraScript GetScript() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraScript(ptr_addr);
	}
	struct TArray<struct FNiagaraEventReceiverProperties> GetEventReceivers() {
		return memory.read<struct TArray<struct FNiagaraEventReceiverProperties>>(m_addr + 8);
	}
	struct TArray<struct FNiagaraEventGeneratorProperties> GetEventGenerators() {
		return memory.read<struct TArray<struct FNiagaraEventGeneratorProperties>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraEventGeneratorProperties
{
public:
	FNiagaraEventGeneratorProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxEventsPerFrame() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FName GetID() {
		return memory.read<struct FName>(m_addr + 4);
	}
	struct FNiagaraDataSetCompiledData GetDataSetCompiledData() {
		return memory.read<struct FNiagaraDataSetCompiledData>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraEventReceiverProperties
{
public:
	FNiagaraEventReceiverProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetSourceEventGenerator() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetSourceEmitter() {
		return memory.read<struct FName>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraEmitterHandle
{
public:
	FNiagaraEmitterHandle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetID() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FName GetIdName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	bool GetbIsEnabled() {
		return memory.read<bool>(m_addr + 24);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 28);
	}
	struct UNiagaraEmitter GetInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UNiagaraEmitter(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraParameterDataSetBinding
{
public:
	FNiagaraParameterDataSetBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetParameterOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetDataSetComponentOffset() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraCollisionEventPayload
{
public:
	FNiagaraCollisionEventPayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCollisionPos() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetCollisionNormal() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetCollisionVelocity() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	int32_t GetParticleIndex() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetPhysicalMaterialIndex() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FOverrideSystemUserVariableStaticMesh
{
public:
	FOverrideSystemUserVariableStaticMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FString GetOverrideName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct UStaticMesh GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UStaticMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraMeshRendererMeshProperties
{
public:
	FNiagaraMeshRendererMeshProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMesh GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UStaticMesh(ptr_addr);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetPivotOffset() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	enum class ENiagaraMeshPivotOffsetSpace GetPivotOffsetSpace() {
		return memory.read<enum class ENiagaraMeshPivotOffsetSpace>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraMeshMaterialOverride
{
public:
	FNiagaraMeshMaterialOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetExplicitMat() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FNiagaraUserParameterBinding GetUserParamBinding() {
		return memory.read<struct FNiagaraUserParameterBinding>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FParameterDefinitionsSubscription
{
public:
	FParameterDefinitionsSubscription(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNiagaraParameters
{
public:
	FNiagaraParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNiagaraVariable> GetParameters() {
		return memory.read<struct TArray<struct FNiagaraVariable>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBoolParameter
{
public:
	FSetBoolParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetInValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraParameterStore
{
public:
	FNiagaraParameterStore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct FNiagaraVariableWithOffset> GetSortedParameterOffsets() {
		return memory.read<struct TArray<struct FNiagaraVariableWithOffset>>(m_addr + 16);
	}
	struct TArray<char> GetParameterData() {
		return memory.read<struct TArray<char>>(m_addr + 32);
	}
	struct TArray<struct UNiagaraDataInterface> GetDataInterfaces() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UNiagaraDataInterface>(ptr_addr);
	}
	struct TArray<struct UObject> GetUObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayBoolValue
{
public:
	FSetNiagaraArrayBoolValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetValue() {
		return memory.read<bool>(m_addr + 20);
	}
	bool GetbSizeToFit() {
		return memory.read<bool>(m_addr + 21);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraVariableWithOffset
{
public:
	FNiagaraVariableWithOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOffset() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetForceSolo
{
public:
	FGetForceSolo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraBoundParameter
{
public:
	FNiagaraBoundParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraVariable GetParameter() {
		return memory.read<struct FNiagaraVariable>(m_addr + 0);
	}
	int32_t GetSrcOffset() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetDestOffset() {
		return memory.read<int32_t>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayVector2DValue
{
public:
	FGetNiagaraArrayVector2DValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraPerfBaselineStats
{
public:
	FNiagaraPerfBaselineStats(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPerInstanceAvg_GT() {
		return memory.read<float>(m_addr + 0);
	}
	float GetPerInstanceAvg_RT() {
		return memory.read<float>(m_addr + 4);
	}
	float GetPerInstanceMax_GT() {
		return memory.read<float>(m_addr + 8);
	}
	float GetPerInstanceMax_RT() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraPlatformSetConflictInfo
{
public:
	FNiagaraPlatformSetConflictInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSetAIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetSetBIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<struct FNiagaraPlatformSetConflictEntry> GetConflicts() {
		return memory.read<struct TArray<struct FNiagaraPlatformSetConflictEntry>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraPlatformSetConflictEntry
{
public:
	FNiagaraPlatformSetConflictEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetProfileName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetQualityLevelMask() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FVersionedNiagaraScriptData
{
public:
	FVersionedNiagaraScriptData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNiagaraRibbonUVSettings
{
public:
	FNiagaraRibbonUVSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENiagaraRibbonUVDistributionMode GetDistributionMode() {
		return memory.read<enum class ENiagaraRibbonUVDistributionMode>(m_addr + 0);
	}
	enum class ENiagaraRibbonUVEdgeMode GetLeadingEdgeMode() {
		return memory.read<enum class ENiagaraRibbonUVEdgeMode>(m_addr + 4);
	}
	enum class ENiagaraRibbonUVEdgeMode GetTrailingEdgeMode() {
		return memory.read<enum class ENiagaraRibbonUVEdgeMode>(m_addr + 8);
	}
	float GetTilingLength() {
		return memory.read<float>(m_addr + 12);
	}
	struct FVector2D GetOffset() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}
	struct FVector2D GetScale() {
		return memory.read<struct FVector2D>(m_addr + 24);
	}
	bool GetbEnablePerParticleUOverride() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetbEnablePerParticleVRangeOverride() {
		return memory.read<bool>(m_addr + 33);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraRibbonShapeCustomVertex
{
public:
	FNiagaraRibbonShapeCustomVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D Getposition() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	struct FVector2D GetNormal() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	float GetTextureV() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpawnSystemAtLocation
{
public:
	FSpawnSystemAtLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UNiagaraSystem GetSystemTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UNiagaraSystem(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 28);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	bool GetbAutoDestroy() {
		return memory.read<bool>(m_addr + 52);
	}
	bool GetbAutoActivate() {
		return memory.read<bool>(m_addr + 53);
	}
	enum class ENCPoolMethod GetPoolingMethod() {
		return memory.read<enum class ENCPoolMethod>(m_addr + 54);
	}
	bool GetbPreCullCheck() {
		return memory.read<bool>(m_addr + 55);
	}
	struct UNiagaraComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UNiagaraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraParameterCollection
{
public:
	FGetNiagaraParameterCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UNiagaraParameterCollection GetCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UNiagaraParameterCollection(ptr_addr);
	}
	struct UNiagaraParameterCollectionInstance GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UNiagaraParameterCollectionInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraVMExecutableData
{
public:
	FNiagaraVMExecutableData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetByteCode() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}
	struct TArray<char> GetOptimizedByteCode() {
		return memory.read<struct TArray<char>>(m_addr + 16);
	}
	int32_t GetNumTempRegisters() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetNumUserPtrs() {
		return memory.read<int32_t>(m_addr + 36);
	}
	struct TArray<struct FNiagaraCompilerTag> GetCompileTags() {
		return memory.read<struct TArray<struct FNiagaraCompilerTag>>(m_addr + 40);
	}
	struct TArray<char> GetScriptLiterals() {
		return memory.read<struct TArray<char>>(m_addr + 56);
	}
	struct TArray<struct FNiagaraVariable> GetAttributes() {
		return memory.read<struct TArray<struct FNiagaraVariable>>(m_addr + 72);
	}
	struct FNiagaraScriptDataUsageInfo GetDataUsage() {
		return memory.read<struct FNiagaraScriptDataUsageInfo>(m_addr + 88);
	}
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> GetDataInterfaceInfo() {
		return memory.read<struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo>>(m_addr + 96);
	}
	struct TArray<struct FVMExternalFunctionBindingInfo> GetCalledVMExternalFunctions() {
		return memory.read<struct TArray<struct FVMExternalFunctionBindingInfo>>(m_addr + 112);
	}
	struct TArray<struct FNiagaraDataSetID> GetReadDataSets() {
		return memory.read<struct TArray<struct FNiagaraDataSetID>>(m_addr + 144);
	}
	struct TArray<struct FNiagaraDataSetProperties> GetWriteDataSets() {
		return memory.read<struct TArray<struct FNiagaraDataSetProperties>>(m_addr + 160);
	}
	struct TArray<struct FNiagaraStatScope> GetStatScopes() {
		return memory.read<struct TArray<struct FNiagaraStatScope>>(m_addr + 176);
	}
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> GetDIParamInfo() {
		return memory.read<struct TArray<struct FNiagaraDataInterfaceGPUParamInfo>>(m_addr + 192);
	}
	enum class ENiagaraScriptCompileStatus GetLastCompileStatus() {
		return memory.read<enum class ENiagaraScriptCompileStatus>(m_addr + 208);
	}
	struct TArray<struct FSimulationStageMetaData> GetSimulationStageMetaData() {
		return memory.read<struct TArray<struct FSimulationStageMetaData>>(m_addr + 216);
	}
	char GetbReadsSignificanceIndex() {
		return memory.read<char>(m_addr + 232);
	}
	char GetbNeedsGPUContextInit() {
		return memory.read<char>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetForceSolo
{
public:
	FSetForceSolo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInForceSolo() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraCompilerTag
{
public:
	FNiagaraCompilerTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraVariable GetVariable() {
		return memory.read<struct FNiagaraVariable>(m_addr + 0);
	}
	struct FString GetStringValue() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraVMExecutableDataId
{
public:
	FNiagaraVMExecutableDataId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetCompilerVersionID() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	enum class ENiagaraScriptUsage GetScriptUsageType() {
		return memory.read<enum class ENiagaraScriptUsage>(m_addr + 16);
	}
	struct FGuid GetScriptUsageTypeID() {
		return memory.read<struct FGuid>(m_addr + 20);
	}
	char GetbUsesRapidIterationParams() {
		return memory.read<char>(m_addr + 36);
	}
	char GetbInterpolatedSpawn() {
		return memory.read<char>(m_addr + 36);
	}
	char GetbRequiresPersistentIDs() {
		return memory.read<char>(m_addr + 36);
	}
	struct FGuid GetBaseScriptID() {
		return memory.read<struct FGuid>(m_addr + 40);
	}
	struct FNiagaraCompileHash GetBaseScriptCompileHash() {
		return memory.read<struct FNiagaraCompileHash>(m_addr + 56);
	}
	struct FGuid GetScriptVersionID() {
		return memory.read<struct FGuid>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraScriptHighlight
{
public:
	FNiagaraScriptHighlight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	struct FText GetDisplayName() {
		return memory.read<struct FText>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraModuleDependency
{
public:
	FNiagaraModuleDependency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetID() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ENiagaraModuleDependencyType GetType() {
		return memory.read<enum class ENiagaraModuleDependencyType>(m_addr + 8);
	}
	enum class ENiagaraModuleDependencyScriptConstraint GetScriptConstraint() {
		return memory.read<enum class ENiagaraModuleDependencyScriptConstraint>(m_addr + 9);
	}
	struct FText GetDescription() {
		return memory.read<struct FText>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraScriptInstanceParameterStore
{
public:
	FNiagaraScriptInstanceParameterStore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetFloatParameter
{
public:
	FGetFloatParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraVariableFloat
{
public:
	FSetNiagaraVariableFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetInValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraScriptExecutionPaddingInfo
{
public:
	FNiagaraScriptExecutionPaddingInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetSrcOffset() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	uint16_t GetDestOffset() {
		return memory.read<uint16_t>(m_addr + 2);
	}
	uint16_t GetSrcSize() {
		return memory.read<uint16_t>(m_addr + 4);
	}
	uint16_t GetDestSize() {
		return memory.read<uint16_t>(m_addr + 6);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraSystemCompileRequest
{
public:
	FNiagaraSystemCompileRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UObject> GetRootObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FEmitterCompiledScriptPair
{
public:
	FEmitterCompiledScriptPair(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNiagaraSystemCompiledData
{
public:
	FNiagaraSystemCompiledData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNiagaraParameterStore GetInstanceParamStore() {
		return memory.read<struct FNiagaraParameterStore>(m_addr + 0);
	}
	struct FNiagaraDataSetCompiledData GetDataSetCompiledData() {
		return memory.read<struct FNiagaraDataSetCompiledData>(m_addr + 120);
	}
	struct FNiagaraDataSetCompiledData GetSpawnInstanceParamsDataSetCompiledData() {
		return memory.read<struct FNiagaraDataSetCompiledData>(m_addr + 184);
	}
	struct FNiagaraDataSetCompiledData GetUpdateInstanceParamsDataSetCompiledData() {
		return memory.read<struct FNiagaraDataSetCompiledData>(m_addr + 248);
	}
	struct FNiagaraParameterDataSetBindingCollection GetSpawnInstanceGlobalBinding() {
		return memory.read<struct FNiagaraParameterDataSetBindingCollection>(m_addr + 312);
	}
	struct FNiagaraParameterDataSetBindingCollection GetSpawnInstanceSystemBinding() {
		return memory.read<struct FNiagaraParameterDataSetBindingCollection>(m_addr + 344);
	}
	struct FNiagaraParameterDataSetBindingCollection GetSpawnInstanceOwnerBinding() {
		return memory.read<struct FNiagaraParameterDataSetBindingCollection>(m_addr + 376);
	}
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> GetSpawnInstanceEmitterBindings() {
		return memory.read<struct TArray<struct FNiagaraParameterDataSetBindingCollection>>(m_addr + 408);
	}
	struct FNiagaraParameterDataSetBindingCollection GetUpdateInstanceGlobalBinding() {
		return memory.read<struct FNiagaraParameterDataSetBindingCollection>(m_addr + 424);
	}
	struct FNiagaraParameterDataSetBindingCollection GetUpdateInstanceSystemBinding() {
		return memory.read<struct FNiagaraParameterDataSetBindingCollection>(m_addr + 456);
	}
	struct FNiagaraParameterDataSetBindingCollection GetUpdateInstanceOwnerBinding() {
		return memory.read<struct FNiagaraParameterDataSetBindingCollection>(m_addr + 488);
	}
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> GetUpdateInstanceEmitterBindings() {
		return memory.read<struct TArray<struct FNiagaraParameterDataSetBindingCollection>>(m_addr + 520);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraParameterDataSetBindingCollection
{
public:
	FNiagaraParameterDataSetBindingCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNiagaraParameterDataSetBinding> GetFloatOffsets() {
		return memory.read<struct TArray<struct FNiagaraParameterDataSetBinding>>(m_addr + 0);
	}
	struct TArray<struct FNiagaraParameterDataSetBinding> GetInt32Offsets() {
		return memory.read<struct TArray<struct FNiagaraParameterDataSetBinding>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayInt32
{
public:
	FGetNiagaraArrayInt32(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<int32_t> GetReturnValue() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraEmitterCompiledData
{
public:
	FNiagaraEmitterCompiledData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetSpawnAttributes() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}
	struct FNiagaraVariable GetEmitterSpawnIntervalVar() {
		return memory.read<struct FNiagaraVariable>(m_addr + 16);
	}
	struct FNiagaraVariable GetEmitterInterpSpawnStartDTVar() {
		return memory.read<struct FNiagaraVariable>(m_addr + 48);
	}
	struct FNiagaraVariable GetEmitterSpawnGroupVar() {
		return memory.read<struct FNiagaraVariable>(m_addr + 80);
	}
	struct FNiagaraVariable GetEmitterAgeVar() {
		return memory.read<struct FNiagaraVariable>(m_addr + 112);
	}
	struct FNiagaraVariable GetEmitterRandomSeedVar() {
		return memory.read<struct FNiagaraVariable>(m_addr + 144);
	}
	struct FNiagaraVariable GetEmitterInstanceSeedVar() {
		return memory.read<struct FNiagaraVariable>(m_addr + 176);
	}
	struct FNiagaraVariable GetEmitterTotalSpawnedParticlesVar() {
		return memory.read<struct FNiagaraVariable>(m_addr + 208);
	}
	struct FNiagaraDataSetCompiledData GetDataSetCompiledData() {
		return memory.read<struct FNiagaraDataSetCompiledData>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraVariableMetaData
{
public:
	FNiagaraVariableMetaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetDescription() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetCategoryName() {
		return memory.read<struct FText>(m_addr + 24);
	}
	bool GetbAdvancedDisplay() {
		return memory.read<bool>(m_addr + 48);
	}
	int32_t GetEditorSortPriority() {
		return memory.read<int32_t>(m_addr + 52);
	}
	bool GetbInlineEditConditionToggle() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FNiagaraInputConditionMetadata GetEditCondition() {
		return memory.read<struct FNiagaraInputConditionMetadata>(m_addr + 64);
	}
	struct FNiagaraInputConditionMetadata GetVisibleCondition() {
		return memory.read<struct FNiagaraInputConditionMetadata>(m_addr + 88);
	}
	struct TMap<struct FName, struct FString> GetPropertyMetaData() {
		return memory.read<struct TMap<struct FName, struct FString>>(m_addr + 112);
	}
	struct FName GetParentAttribute() {
		return memory.read<struct FName>(m_addr + 192);
	}
	struct FGuid GetVariableGuid() {
		return memory.read<struct FGuid>(m_addr + 200);
	}
	bool GetbIsStaticSwitch() {
		return memory.read<bool>(m_addr + 216);
	}
	int32_t GetStaticSwitchDefaultValue() {
		return memory.read<int32_t>(m_addr + 220);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraParticleValues_DebugOnly
{
public:
	FGetNiagaraParticleValues_DebugOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInEmitterName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInValueName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TArray<float> GetReturnValue() {
		return memory.read<struct TArray<float>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraInputConditionMetadata
{
public:
	FNiagaraInputConditionMetadata(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInputName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FString> GetTargetValues() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraCompileHashVisitorDebugInfo
{
public:
	FNiagaraCompileHashVisitorDebugInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetObject() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FString> GetPropertyKeys() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}
	struct TArray<struct FString> GetPropertyValues() {
		return memory.read<struct TArray<struct FString>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraSpawnInfo
{
public:
	FNiagaraSpawnInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetInterpStartDt() {
		return memory.read<float>(m_addr + 4);
	}
	float GetIntervalDt() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetSpawnGroup() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyToPreview
{
public:
	FApplyToPreview(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetPreviewComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	int32_t GetPreviewIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetbIsXAxis() {
		return memory.read<bool>(m_addr + 12);
	}
	struct FString GetOutLabelText() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraAssetVersion
{
public:
	FNiagaraAssetVersion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMajorVersion() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetMinorVersion() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FGuid GetVersionGuid() {
		return memory.read<struct FGuid>(m_addr + 8);
	}
	bool GetbIsVisibleInVersionSelector() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraParameterMap
{
public:
	FNiagaraParameterMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNiagaraNumeric
{
public:
	FNiagaraNumeric(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNiagaraHalfVector4
{
public:
	FNiagaraHalfVector4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetX() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	uint16_t GetY() {
		return memory.read<uint16_t>(m_addr + 2);
	}
	uint16_t GetZ() {
		return memory.read<uint16_t>(m_addr + 4);
	}
	uint16_t GetW() {
		return memory.read<uint16_t>(m_addr + 6);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraHalfVector3
{
public:
	FNiagaraHalfVector3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetX() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	uint16_t GetY() {
		return memory.read<uint16_t>(m_addr + 2);
	}
	uint16_t GetZ() {
		return memory.read<uint16_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraHalfVector2
{
public:
	FNiagaraHalfVector2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetX() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	uint16_t GetY() {
		return memory.read<uint16_t>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraHalf
{
public:
	FNiagaraHalf(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetValue() {
		return memory.read<uint16_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraBool
{
public:
	FNiagaraBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraInt32
{
public:
	FNiagaraInt32(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraFloat
{
public:
	FNiagaraFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraWildcard
{
public:
	FNiagaraWildcard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNiagaraUserRedirectionParameterStore
{
public:
	FNiagaraUserRedirectionParameterStore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> GetUserParameterRedirects() {
		return memory.read<struct TMap<struct FNiagaraVariable, struct FNiagaraVariable>>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraVariant
{
public:
	FNiagaraVariant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UNiagaraDataInterface GetDataInterface() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UNiagaraDataInterface(ptr_addr);
	}
	struct TArray<char> GetBytes() {
		return memory.read<struct TArray<char>>(m_addr + 16);
	}
	enum class ENiagaraVariantMode GetCurrentMode() {
		return memory.read<enum class ENiagaraVariantMode>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FNiagaraWorldManagerTickFunction
{
public:
	FNiagaraWorldManagerTickFunction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnOwnerTick
{
public:
	FOnOwnerTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAdvanceSimulationByTime
{
public:
	FAdvanceSimulationByTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSimulateTime() {
		return memory.read<float>(m_addr + 0);
	}
	float GetTickDeltaSeconds() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNiagaraSystemFinished
{
public:
	FOnNiagaraSystemFinished(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetFinishedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDestroyOnSystemFinish
{
public:
	FSetDestroyOnSystemFinish(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShouldDestroyOnSystemFinish() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAgeUpdateMode
{
public:
	FGetAgeUpdateMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENiagaraAgeUpdateMode GetReturnValue() {
		return memory.read<enum class ENiagaraAgeUpdateMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAsset
{
public:
	FGetAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraSystem GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraSystem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDataInterface
{
public:
	FGetDataInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UNiagaraDataInterface GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UNiagaraDataInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDesiredAge
{
public:
	FGetDesiredAge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLockDesiredAgeDeltaTimeToSeekDelta
{
public:
	FGetLockDesiredAgeDeltaTimeToSeekDelta(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraParticlePositions_DebugOnly
{
public:
	FGetNiagaraParticlePositions_DebugOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInEmitterName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FVector> GetReturnValue() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraParticleValueVec3_DebugOnly
{
public:
	FGetNiagaraParticleValueVec3_DebugOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInEmitterName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInValueName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TArray<struct FVector> GetReturnValue() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPreviewLODDistance
{
public:
	FGetPreviewLODDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPreviewLODDistanceEnabled
{
public:
	FGetPreviewLODDistanceEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTickBehavior
{
public:
	FGetTickBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENiagaraTickBehavior GetReturnValue() {
		return memory.read<enum class ENiagaraTickBehavior>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPaused
{
public:
	FIsPaused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSeekToDesiredAge
{
public:
	FSeekToDesiredAge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDesiredAge() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableObject
{
public:
	FSetVariableObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UObject GetObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableActor
{
public:
	FSetVariableActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAgeUpdateMode
{
public:
	FSetAgeUpdateMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENiagaraAgeUpdateMode GetInAgeUpdateMode() {
		return memory.read<enum class ENiagaraAgeUpdateMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAllowScalability
{
public:
	FSetAllowScalability(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbAllow() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAsset
{
public:
	FSetAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraSystem GetInAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraSystem(ptr_addr);
	}
	bool GetbResetExistingOverrideParameters() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAutoDestroy
{
public:
	FSetAutoDestroy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInAutoDestroy() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCanRenderWhileSeeking
{
public:
	FSetCanRenderWhileSeeking(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInCanRenderWhileSeeking() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDesiredAge
{
public:
	FSetDesiredAge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDesiredAge() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGpuComputeDebug
{
public:
	FSetGpuComputeDebug(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnableDebug() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVector2DParameter
{
public:
	FGetVector2DParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLockDesiredAgeDeltaTimeToSeekDelta
{
public:
	FSetLockDesiredAgeDeltaTimeToSeekDelta(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getblock() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxSimTime
{
public:
	FSetMaxSimTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMaxTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraVariableActor
{
public:
	FSetNiagaraVariableActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraVariableBool
{
public:
	FSetNiagaraVariableBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetInValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraVariableInt
{
public:
	FSetNiagaraVariableInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetInValue() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraVariableObject
{
public:
	FSetNiagaraVariableObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UObject GetObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraVariableQuat
{
public:
	FSetNiagaraVariableQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FQuat GetInValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraVariableVec2
{
public:
	FSetNiagaraVariableVec2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector2D GetInValue() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraVariableVec3
{
public:
	FSetNiagaraVariableVec3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector GetInValue() {
		return memory.read<struct FVector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraVariableVec4
{
public:
	FSetNiagaraVariableVec4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector4 GetInValue() {
		return memory.read<struct FVector4>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPreviewLODDistance
{
public:
	FSetPreviewLODDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnablePreviewLODDistance() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetPreviewLODDistance() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRandomSeedOffset
{
public:
	FSetRandomSeedOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewRandomSeedOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSeekDelta
{
public:
	FSetSeekDelta(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInSeekDelta() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTickBehavior
{
public:
	FSetTickBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENiagaraTickBehavior GetNewTickBehavior() {
		return memory.read<enum class ENiagaraTickBehavior>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableBool
{
public:
	FSetVariableBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetInValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableFloat
{
public:
	FSetVariableFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetInValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableInt
{
public:
	FSetVariableInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableLinearColor
{
public:
	FSetVariableLinearColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FLinearColor GetInValue() {
		return memory.read<struct FLinearColor>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableMaterial
{
public:
	FSetVariableMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UMaterialInterface GetObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableQuat
{
public:
	FSetVariableQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FQuat GetInValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableTextureRenderTarget
{
public:
	FSetVariableTextureRenderTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UTextureRenderTarget GetTextureRenderTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTextureRenderTarget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIntParameter
{
public:
	FSetIntParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetInValue() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableVec2
{
public:
	FSetVariableVec2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector2D GetInValue() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableVec3
{
public:
	FSetVariableVec3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector GetInValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariableVec4
{
public:
	FSetVariableVec4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInVariableName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector4 GetInValue() {
		return memory.read<struct FVector4>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayBool
{
public:
	FGetNiagaraArrayBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<bool> GetReturnValue() {
		return memory.read<struct TArray<bool>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayBoolValue
{
public:
	FGetNiagaraArrayBoolValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayColor
{
public:
	FGetNiagaraArrayColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<struct FLinearColor> GetReturnValue() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayColorValue
{
public:
	FGetNiagaraArrayColorValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayFloatValue
{
public:
	FGetNiagaraArrayFloatValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayQuat
{
public:
	FGetNiagaraArrayQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<struct FQuat> GetReturnValue() {
		return memory.read<struct TArray<struct FQuat>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayQuatValue
{
public:
	FGetNiagaraArrayQuatValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FQuat GetReturnValue() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayVector
{
public:
	FGetNiagaraArrayVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<struct FVector> GetReturnValue() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayVector4
{
public:
	FGetNiagaraArrayVector4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<struct FVector4> GetReturnValue() {
		return memory.read<struct TArray<struct FVector4>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNiagaraArrayVector4Value
{
public:
	FGetNiagaraArrayVector4Value(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FVector4 GetReturnValue() {
		return memory.read<struct FVector4>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayBool
{
public:
	FSetNiagaraArrayBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<bool> GetArrayData() {
		return memory.read<struct TArray<bool>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayColor
{
public:
	FSetNiagaraArrayColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<struct FLinearColor> GetArrayData() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayColorValue
{
public:
	FSetNiagaraArrayColorValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FLinearColor GetValue() {
		return memory.read<struct FLinearColor>(m_addr + 20);
	}
	bool GetbSizeToFit() {
		return memory.read<bool>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayFloat
{
public:
	FSetNiagaraArrayFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<float> GetArrayData() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayFloatValue
{
public:
	FSetNiagaraArrayFloatValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetbSizeToFit() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayInt32
{
public:
	FSetNiagaraArrayInt32(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<int32_t> GetArrayData() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayInt32Value
{
public:
	FSetNiagaraArrayInt32Value(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 20);
	}
	bool GetbSizeToFit() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayQuat
{
public:
	FSetNiagaraArrayQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<struct FQuat> GetArrayData() {
		return memory.read<struct TArray<struct FQuat>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIntParameter
{
public:
	FGetIntParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayQuatValue
{
public:
	FSetNiagaraArrayQuatValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FQuat GetValue() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	bool GetbSizeToFit() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayVector
{
public:
	FSetNiagaraArrayVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<struct FVector> GetArrayData() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayVector2D
{
public:
	FSetNiagaraArrayVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<struct FVector2D> GetArrayData() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayVector2DValue
{
public:
	FSetNiagaraArrayVector2DValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FVector2D GetValue() {
		return memory.read<struct FVector2D>(m_addr + 20);
	}
	bool GetbSizeToFit() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayVector4
{
public:
	FSetNiagaraArrayVector4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<struct FVector4> GetArrayData() {
		return memory.read<struct TArray<struct FVector4>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayVector4Value
{
public:
	FSetNiagaraArrayVector4Value(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FVector4 GetValue() {
		return memory.read<struct FVector4>(m_addr + 32);
	}
	bool GetbSizeToFit() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNiagaraArrayVectorValue
{
public:
	FSetNiagaraArrayVectorValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FName GetOverrideName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	bool GetbSizeToFit() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveParticleData
{
public:
	FReceiveParticleData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBasicParticleData> GetData() {
		return memory.read<struct TArray<struct FBasicParticleData>>(m_addr + 0);
	}
	struct UNiagaraSystem GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UNiagaraSystem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVector4Parameter
{
public:
	FGetVector4Parameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector4 GetReturnValue() {
		return memory.read<struct FVector4>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FFillRawTexture2D
{
public:
	FFillRawTexture2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct UTextureRenderTarget2D GetDest() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	int32_t GetTilesX() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetTilesY() {
		return memory.read<int32_t>(m_addr + 20);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FFillTexture2D
{
public:
	FFillTexture2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct UTextureRenderTarget2D GetDest() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	int32_t GetAttributeIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRawTextureSize
{
public:
	FGetRawTextureSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	int32_t GetSizeX() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetSizeY() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetSizeZ() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOverrideSystemUserVariableStaticMeshComponent
{
public:
	FOverrideSystemUserVariableStaticMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FString GetOverrideName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct UStaticMeshComponent GetStaticMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UStaticMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTextureSize
{
public:
	FGetTextureSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	int32_t GetSizeX() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetSizeY() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetSizeZ() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FFillRawVolumeTexture
{
public:
	FFillRawVolumeTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct UVolumeTexture GetDest() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UVolumeTexture(ptr_addr);
	}
	int32_t GetTilesX() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetTilesY() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetTileZ() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FFillVolumeTexture
{
public:
	FFillVolumeTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct UVolumeTexture GetDest() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UVolumeTexture(ptr_addr);
	}
	int32_t GetAttributeIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FOverrideSystemUserVariableSkeletalMeshComponent
{
public:
	FOverrideSystemUserVariableSkeletalMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FString GetOverrideName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct USkeletalMeshComponent GetSkeletalMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct USkeletalMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSkeletalMeshDataInterfaceSamplingRegions
{
public:
	FSetSkeletalMeshDataInterfaceSamplingRegions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FString GetOverrideName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TArray<struct FName> GetSamplingRegions() {
		return memory.read<struct TArray<struct FName>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTexture2DArrayObject
{
public:
	FSetTexture2DArrayObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FString GetOverrideName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct UTexture2DArray GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UTexture2DArray(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTextureObject
{
public:
	FSetTextureObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraComponent GetNiagaraSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraComponent(ptr_addr);
	}
	struct FString GetOverrideName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct UTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetQuatParameter
{
public:
	FGetQuatParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FQuat GetReturnValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVectorParameter
{
public:
	FGetVectorParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFloatParameter
{
public:
	FSetFloatParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetInValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVector2DParameter
{
public:
	FSetVector2DParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector2D GetInValue() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVector4Parameter
{
public:
	FSetVector4Parameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector4 GetInValue() {
		return memory.read<struct FVector4>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVectorParameter
{
public:
	FSetVectorParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector GetInValue() {
		return memory.read<struct FVector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSystem
{
public:
	FGetSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraSystem GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraSystem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTickTest
{
public:
	FOnTickTest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLabelText
{
public:
	FSetLabelText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInXAxisText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetInYAxisText() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSystem
{
public:
	FSetSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNiagaraSystem GetInSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNiagaraSystem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FActivatePreviews
{
public:
	FActivatePreviews(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbReset() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPreviews
{
public:
	FGetPreviews(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UNiagaraComponent> GetOutPreviews() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UNiagaraComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};