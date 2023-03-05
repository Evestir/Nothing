#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct Niagara.NiagaraID Size 8
class FNiagaraID
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	int32_t AcquireTag;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate Size 64
// Inherited 32 bytes 
class FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FNiagaraVariable Parameter;  // Offset: 32 Size: 32



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue Size 32
class FGetNiagaraArrayVectorValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	struct FVector ReturnValue;  // Offset: 20 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraMaterialOverride Size 24
class FNiagaraMaterialOverride
{

 public: 
	struct UMaterialInterface* Material;  // Offset: 0 Size: 8
	uint32_t MaterialSubIndex;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct UNiagaraRendererProperties* EmitterRendererProperty;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraMatrix Size 64
class FNiagaraMatrix
{

 public: 
	struct FVector4 Row0;  // Offset: 0 Size: 16
	struct FVector4 Row1;  // Offset: 16 Size: 16
	struct FVector4 Row2;  // Offset: 32 Size: 16
	struct FVector4 Row3;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction Niagara.OnNiagaraSystemFinished__DelegateSignature Size 8
class FOnNiagaraSystemFinished__DelegateSignature
{

 public: 
	struct UNiagaraComponent* PSystem;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraBakerTextureSettings Size 48
class FNiagaraBakerTextureSettings
{

 public: 
	struct FName OutputName;  // Offset: 0 Size: 8
	struct FNiagaraBakerTextureSource SourceBinding;  // Offset: 8 Size: 8
	char bUseFrameSize : 1;  // Offset: 16 Size: 1
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	char pad_17[4];  // Offset: 17 Size: 4
	struct FIntPoint FrameSize;  // Offset: 20 Size: 8
	struct FIntPoint TextureSize;  // Offset: 28 Size: 8
	char pad_36[4];  // Offset: 36 Size: 4
	struct UTexture2D* GeneratedTexture;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraSystemScalabilityOverrides Size 16
class FNiagaraSystemScalabilityOverrides
{

 public: 
	struct TArray<struct FNiagaraSystemScalabilityOverride> Overrides;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate Size 704
// Inherited 64 bytes 
class FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{

 public: 
	struct FMovieSceneFloatChannel RedChannel;  // Offset: 64 Size: 160
	struct FMovieSceneFloatChannel GreenChannel;  // Offset: 224 Size: 160
	struct FMovieSceneFloatChannel BlueChannel;  // Offset: 384 Size: 160
	struct FMovieSceneFloatChannel AlphaChannel;  // Offset: 544 Size: 160



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData Size 32
class FNiagaraOutlinerEmitterInstanceData
{

 public: 
	struct FString EmitterName;  // Offset: 0 Size: 16
	enum class ENiagaraSimTarget SimTarget;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	enum class ENiagaraExecutionState ExecState;  // Offset: 20 Size: 4
	int32_t NumParticles;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraVariableBase Size 12
class FNiagaraVariableBase
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	struct FNiagaraTypeDefinitionHandle TypeDefHandle;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraSimpleClientInfo Size 64
class FNiagaraSimpleClientInfo
{

 public: 
	struct TArray<struct FString> Systems;  // Offset: 0 Size: 16
	struct TArray<struct FString> Actors;  // Offset: 16 Size: 16
	struct TArray<struct FString> Components;  // Offset: 32 Size: 16
	struct TArray<struct FString> Emitters;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDataSetCompiledData Size 64
class FNiagaraDataSetCompiledData
{

 public: 
	struct TArray<struct FNiagaraVariable> Variables;  // Offset: 0 Size: 16
	struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts;  // Offset: 16 Size: 16
	struct FNiagaraDataSetID ID;  // Offset: 32 Size: 12
	uint32_t TotalFloatComponents;  // Offset: 44 Size: 4
	uint32_t TotalInt32Components;  // Offset: 48 Size: 4
	uint32_t TotalHalfComponents;  // Offset: 52 Size: 4
	char bRequiresPersistentIDs : 1;  // Offset: 56 Size: 1
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	char pad_57[4];  // Offset: 57 Size: 4
	enum class ENiagaraSimTarget SimTarget;  // Offset: 60 Size: 1
	char pad_61[3];  // Offset: 61 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraSystemUpdateContext Size 104
class FNiagaraSystemUpdateContext
{

 public: 
	struct TArray<struct UNiagaraComponent*> ComponentsToReset;  // Offset: 0 Size: 16
	struct TArray<struct UNiagaraComponent*> ComponentsToReInit;  // Offset: 16 Size: 16
	struct TArray<struct UNiagaraComponent*> ComponentsToNotifySimDestroy;  // Offset: 32 Size: 16
	struct TArray<struct UNiagaraSystem*> SystemSimsToDestroy;  // Offset: 48 Size: 16
	char pad_64[40];  // Offset: 64 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraTypeDefinitionHandle Size 4
class FNiagaraTypeDefinitionHandle
{

 public: 
	int32_t RegisteredTypeIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter Size 32
class FGetColorParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FLinearColor ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached Size 64
class FSpawnSystemAttached
{

 public: 
	struct UNiagaraSystem* SystemTemplate;  // Offset: 0 Size: 8
	struct USceneComponent* AttachToComponent;  // Offset: 8 Size: 8
	struct FName AttachPointName;  // Offset: 16 Size: 8
	struct FVector Location;  // Offset: 24 Size: 12
	struct FRotator Rotation;  // Offset: 36 Size: 12
	enum class EAttachLocation LocationType;  // Offset: 48 Size: 1
	char pad_49_1 : 7;  // Offset: 49 Size: 1
	bool bAutoDestroy : 1;  // Offset: 49 Size: 1
	char pad_50_1 : 7;  // Offset: 50 Size: 1
	bool bAutoActivate : 1;  // Offset: 50 Size: 1
	enum class ENCPoolMethod PoolingMethod;  // Offset: 51 Size: 1
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	bool bPreCullCheck : 1;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3
	struct UNiagaraComponent* ReturnValue;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraVariable Size 32
// Inherited 12 bytes 
class FNiagaraVariable : public FNiagaraVariableBase
{

 public: 
	char pad_12[4];  // Offset: 12 Size: 4
	struct TArray<char> VarData;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate Size 208
// Inherited 64 bytes 
class FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{

 public: 
	struct FMovieSceneBoolChannel BoolChannel;  // Offset: 64 Size: 144



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetRandomSeedOffset Size 4
class FGetRandomSeedOffset
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand Size 24
class FNiagaraDebuggerExecuteConsoleCommand
{

 public: 
	struct FString Command;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bRequiresWorld : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding Size 32
class FNiagaraVariableDataInterfaceBinding
{

 public: 
	struct FNiagaraVariable BoundVariable;  // Offset: 0 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraScalabilityState Size 8
class FNiagaraScalabilityState
{

 public: 
	float Significance;  // Offset: 0 Size: 4
	char bCulled : 1;  // Offset: 4 Size: 1
	char bPreviousCulled : 1;  // Offset: 4 Size: 1
	char bCulledByDistance : 1;  // Offset: 4 Size: 1
	char bCulledByInstanceCount : 1;  // Offset: 4 Size: 1
	char bCulledByVisibility : 1;  // Offset: 4 Size: 1
	char bCulledByGlobalBudget : 1;  // Offset: 4 Size: 1
	char pad_4_1 : 2;  // Offset: 4 Size: 1
	char pad_5[4];  // Offset: 5 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate Size 224
// Inherited 64 bytes 
class FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{

 public: 
	struct FMovieSceneFloatChannel FloatChannel;  // Offset: 64 Size: 160



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.AdvanceSimulation Size 8
class FAdvanceSimulation
{

 public: 
	int32_t TickCount;  // Offset: 0 Size: 4
	float TickDeltaSeconds;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraEventScriptProperties Size 88
// Inherited 40 bytes 
class FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{

 public: 
	enum class EScriptExecutionMode ExecutionMode;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	uint32_t SpawnNumber;  // Offset: 44 Size: 4
	uint32_t MaxEventsPerFrame;  // Offset: 48 Size: 4
	struct FGuid SourceEmitterID;  // Offset: 52 Size: 16
	struct FName SourceEventName;  // Offset: 68 Size: 8
	char pad_76_1 : 7;  // Offset: 76 Size: 1
	bool bRandomSpawnNumber : 1;  // Offset: 76 Size: 1
	char pad_77[3];  // Offset: 77 Size: 3
	uint32_t MinSpawnNumber;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraCompileDependency Size 80
class FNiagaraCompileDependency
{

 public: 
	struct FString LinkerErrorMessage;  // Offset: 0 Size: 16
	struct FGuid NodeGuid;  // Offset: 16 Size: 16
	struct FGuid PinGuid;  // Offset: 32 Size: 16
	struct TArray<struct FGuid> StackGuids;  // Offset: 48 Size: 16
	struct FNiagaraVariableBase DependentVariable;  // Offset: 64 Size: 12
	char pad_76[4];  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraOutlinerWorldData Size 104
class FNiagaraOutlinerWorldData
{

 public: 
	struct TMap<struct FString, struct FNiagaraOutlinerSystemData> Systems;  // Offset: 0 Size: 80
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bHasBegunPlay : 1;  // Offset: 80 Size: 1
	char WorldType;  // Offset: 81 Size: 1
	char NetMode;  // Offset: 82 Size: 1
	char pad_83[1];  // Offset: 83 Size: 1
	struct FNiagaraOutlinerTimingData AveragePerFrameTime;  // Offset: 84 Size: 8
	struct FNiagaraOutlinerTimingData MaxPerFrameTime;  // Offset: 92 Size: 8
	char pad_100[4];  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate Size 208
// Inherited 64 bytes 
class FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{

 public: 
	struct FMovieSceneIntegerChannel IntegerChannel;  // Offset: 64 Size: 144



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraGraphViewSettings Size 16
class FNiagaraGraphViewSettings
{

 public: 
	struct FVector2D Location;  // Offset: 0 Size: 8
	float Zoom;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bIsValid : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation Size 40
// Inherited 16 bytes 
class FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{

 public: 
	struct FFrameNumber SpawnSectionStartFrame;  // Offset: 16 Size: 4
	struct FFrameNumber SpawnSectionEndFrame;  // Offset: 20 Size: 4
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;  // Offset: 24 Size: 4
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;  // Offset: 28 Size: 4
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;  // Offset: 32 Size: 4
	enum class ENiagaraAgeUpdateMode AgeUpdateMode;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo Size 56
class FNiagaraScriptDataInterfaceCompileInfo
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	int32_t UserPtrIdx;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FNiagaraTypeDefinition Type;  // Offset: 16 Size: 16
	struct FName RegisteredParameterMapRead;  // Offset: 32 Size: 8
	struct FName RegisteredParameterMapWrite;  // Offset: 40 Size: 8
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bIsPlaceholder : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraUserParameterBinding Size 32
class FNiagaraUserParameterBinding
{

 public: 
	struct FNiagaraVariable Parameter;  // Offset: 0 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate Size 32
// Inherited 32 bytes 
class FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{

 public: 



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetMaxSimTime Size 4
class FGetMaxSimTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate Size 712
// Inherited 64 bytes 
class FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{

 public: 
	struct FMovieSceneFloatChannel VectorChannels[4];  // Offset: 64 Size: 640
	int32_t ChannelsUsed;  // Offset: 704 Size: 4
	char pad_708[4];  // Offset: 708 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.BasicParticleData Size 28
class FBasicParticleData
{

 public: 
	struct FVector position;  // Offset: 0 Size: 12
	float Size;  // Offset: 12 Size: 4
	struct FVector Velocity;  // Offset: 16 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDataSetProperties Size 32
class FNiagaraDataSetProperties
{

 public: 
	struct FNiagaraDataSetID ID;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct TArray<struct FNiagaraVariable> Variables;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraPreviewAxis.Num Size 4
class FNum
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraTypeDefinition Size 16
class FNiagaraTypeDefinition
{

 public: 
	struct UObject* ClassStructOrEnum;  // Offset: 0 Size: 8
	uint16_t UnderlyingType;  // Offset: 8 Size: 2
	char pad_10[6];  // Offset: 10 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraBakerTextureSource Size 8
class FNiagaraBakerTextureSource
{

 public: 
	struct FName SourceName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat Size 32
class FGetNiagaraArrayFloat
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<float> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraRandInfo Size 12
class FNiagaraRandInfo
{

 public: 
	int32_t Seed1;  // Offset: 0 Size: 4
	int32_t Seed2;  // Offset: 4 Size: 4
	int32_t Seed3;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraScriptVariableBinding Size 8
class FNiagaraScriptVariableBinding
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDebuggerRequestConnection Size 32
class FNiagaraDebuggerRequestConnection
{

 public: 
	struct FGuid SessionId;  // Offset: 0 Size: 16
	struct FGuid InstanceId;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter Size 24
class FGetBoolParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraMaterialAttributeBinding Size 44
class FNiagaraMaterialAttributeBinding
{

 public: 
	struct FName MaterialParameterName;  // Offset: 0 Size: 8
	struct FNiagaraVariableBase NiagaraVariable;  // Offset: 8 Size: 12
	struct FNiagaraVariableBase ResolvedNiagaraVariable;  // Offset: 20 Size: 12
	struct FNiagaraVariableBase NiagaraChildVariable;  // Offset: 32 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraVariableAttributeBinding Size 88
class FNiagaraVariableAttributeBinding
{

 public: 
	struct FNiagaraVariableBase ParamMapVariable;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct FNiagaraVariable DataSetVariable;  // Offset: 16 Size: 32
	struct FNiagaraVariable RootVariable;  // Offset: 48 Size: 32
	enum class ENiagaraBindingSource BindingSourceMode;  // Offset: 80 Size: 1
	char pad_81[3];  // Offset: 81 Size: 3
	char bBindingExistsOnSource : 1;  // Offset: 84 Size: 1
	char bIsCachedParticleValue : 1;  // Offset: 84 Size: 1
	char pad_84_1 : 6;  // Offset: 84 Size: 1
	char pad_85[4];  // Offset: 85 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraVariableInfo Size 64
class FNiagaraVariableInfo
{

 public: 
	struct FNiagaraVariable Variable;  // Offset: 0 Size: 32
	struct FText Definition;  // Offset: 32 Size: 24
	struct UNiagaraDataInterface* DataInterface;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.VMExternalFunctionBindingInfo Size 56
class FVMExternalFunctionBindingInfo
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	struct FName OwnerName;  // Offset: 8 Size: 8
	struct TArray<bool> InputParamLocations;  // Offset: 16 Size: 16
	int32_t NumOutputs;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct TArray<struct FVMFunctionSpecifier> FunctionSpecifiers;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate Size 80
class FNiagaraDebuggerOutlinerUpdate
{

 public: 
	struct FNiagaraOutlinerData OutlinerData;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.VMFunctionSpecifier Size 16
class FVMFunctionSpecifier
{

 public: 
	struct FName Key;  // Offset: 0 Size: 8
	struct FName Value;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraStatScope Size 16
class FNiagaraStatScope
{

 public: 
	struct FName FullName;  // Offset: 0 Size: 8
	struct FName FriendlyName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides Size 16
class FNiagaraEmitterScalabilityOverrides
{

 public: 
	struct TArray<struct FNiagaraEmitterScalabilityOverride> Overrides;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor Size 32
class FSetNiagaraVariableLinearColor
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FLinearColor InValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraOutlinerTimingData Size 8
class FNiagaraOutlinerTimingData
{

 public: 
	float GameThread;  // Offset: 0 Size: 4
	float RenderThread;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NCPool Size 16
class FNCPool
{

 public: 
	struct TArray<struct FNCPoolElement> FreeElements;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo Size 56
class FNiagaraScriptDataInterfaceInfo
{

 public: 
	struct UNiagaraDataInterface* DataInterface;  // Offset: 0 Size: 8
	struct FName Name;  // Offset: 8 Size: 8
	int32_t UserPtrIdx;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct FNiagaraTypeDefinition Type;  // Offset: 24 Size: 16
	struct FName RegisteredParameterMapRead;  // Offset: 40 Size: 8
	struct FName RegisteredParameterMapWrite;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraFunctionSignature Size 144
class FNiagaraFunctionSignature
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	struct TArray<struct FNiagaraVariable> Inputs;  // Offset: 8 Size: 16
	struct TArray<struct FNiagaraVariable> Outputs;  // Offset: 24 Size: 16
	struct FName OwnerName;  // Offset: 40 Size: 8
	char bRequiresContext : 1;  // Offset: 48 Size: 1
	char bRequiresExecPin : 1;  // Offset: 48 Size: 1
	char bMemberFunction : 1;  // Offset: 48 Size: 1
	char bExperimental : 1;  // Offset: 48 Size: 1
	char bSupportsCPU : 1;  // Offset: 48 Size: 1
	char bSupportsGPU : 1;  // Offset: 48 Size: 1
	char bWriteFunction : 1;  // Offset: 48 Size: 1
	char bSoftDeprecatedFunction : 1;  // Offset: 48 Size: 1
	char bIsCompileTagGenerator : 1;  // Offset: 49 Size: 1
	char bHidden : 1;  // Offset: 49 Size: 1
	char pad_49_1 : 6;  // Offset: 49 Size: 1
	char pad_50[3];  // Offset: 50 Size: 3
	int32_t ModuleUsageBitmask;  // Offset: 52 Size: 4
	int32_t ContextStageMinIndex;  // Offset: 56 Size: 4
	int32_t ContextStageMaxIndex;  // Offset: 60 Size: 4
	struct TMap<struct FName, struct FName> FunctionSpecifiers;  // Offset: 64 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraScalabilityManager Size 112
class FNiagaraScalabilityManager
{

 public: 
	struct UNiagaraEffectType* EffectType;  // Offset: 0 Size: 8
	struct TArray<struct UNiagaraComponent*> ManagedComponents;  // Offset: 8 Size: 16
	char pad_24[88];  // Offset: 24 Size: 88



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData Size 72
class FNiagaraOutlinerSystemInstanceData
{

 public: 
	struct FString ComponentName;  // Offset: 0 Size: 16
	struct TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters;  // Offset: 16 Size: 16
	enum class ENiagaraExecutionState ActualExecutionState;  // Offset: 32 Size: 4
	enum class ENiagaraExecutionState RequestedExecutionState;  // Offset: 36 Size: 4
	struct FNiagaraScalabilityState ScalabilityState;  // Offset: 40 Size: 8
	char bPendingKill : 1;  // Offset: 48 Size: 1
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	char pad_49[4];  // Offset: 49 Size: 4
	enum class ENCPoolMethod PoolMethod;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3
	struct FNiagaraOutlinerTimingData AverageTime;  // Offset: 56 Size: 8
	struct FNiagaraOutlinerTimingData MaxTime;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D Size 32
class FGetNiagaraArrayVector2D
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<struct FVector2D> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraScriptDataUsageInfo Size 1
class FNiagaraScriptDataUsageInfo
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bReadsAttributeData : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDataSetID Size 12
class FNiagaraDataSetID
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	enum class ENiagaraDataSetType Type;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NCPoolElement Size 16
class FNCPoolElement
{

 public: 
	struct UNiagaraComponent* Component;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraPreviewGrid.SetPaused Size 1
class FSetPaused
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bPaused : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraEmitterScalabilityOverride Size 64
// Inherited 56 bytes 
class FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{

 public: 
	char bOverrideSpawnCountScale : 1;  // Offset: 56 Size: 1
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	char pad_57[8];  // Offset: 57 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraComponentPropertyBinding Size 232
class FNiagaraComponentPropertyBinding
{

 public: 
	struct FNiagaraVariableAttributeBinding AttributeBinding;  // Offset: 0 Size: 88
	struct FName PropertyName;  // Offset: 88 Size: 8
	struct FNiagaraTypeDefinition PropertyType;  // Offset: 96 Size: 16
	struct FName MetadataSetterName;  // Offset: 112 Size: 8
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults;  // Offset: 120 Size: 80
	struct FNiagaraVariable WritableValue;  // Offset: 200 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDebugHudTextOptions Size 16
class FNiagaraDebugHudTextOptions
{

 public: 
	enum class ENiagaraDebugHudFont Font;  // Offset: 0 Size: 4
	enum class ENiagaraDebugHudHAlign HorizontalAlignment;  // Offset: 4 Size: 1
	enum class ENiagaraDebugHudVAlign VerticalAlignment;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2
	struct FVector2D ScreenOffset;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraEmitterNameSettingsRef Size 24
class FNiagaraEmitterNameSettingsRef
{

 public: 
	struct FName SystemName;  // Offset: 0 Size: 8
	struct FString EmitterName;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetSeekDelta Size 4
class FGetSeekDelta
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.MeshTriCoordinate Size 16
class FMeshTriCoordinate
{

 public: 
	int32_t Tri;  // Offset: 0 Size: 4
	struct FVector BaryCoord;  // Offset: 4 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NDIStaticMeshSectionFilter Size 16
class FNDIStaticMeshSectionFilter
{

 public: 
	struct TArray<int32_t> AllowedMaterialSlots;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraVariableLayoutInfo Size 112
class FNiagaraVariableLayoutInfo
{

 public: 
	uint32_t FloatComponentStart;  // Offset: 0 Size: 4
	uint32_t Int32ComponentStart;  // Offset: 4 Size: 4
	uint32_t HalfComponentStart;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FNiagaraTypeLayoutInfo LayoutInfo;  // Offset: 16 Size: 96



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value Size 24
class FGetNiagaraArrayInt32Value
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	int32_t ReturnValue;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraTypeLayoutInfo Size 96
class FNiagaraTypeLayoutInfo
{

 public: 
	struct TArray<uint32_t> FloatComponentByteOffsets;  // Offset: 0 Size: 16
	struct TArray<uint32_t> FloatComponentRegisterOffsets;  // Offset: 16 Size: 16
	struct TArray<uint32_t> Int32ComponentByteOffsets;  // Offset: 32 Size: 16
	struct TArray<uint32_t> Int32ComponentRegisterOffsets;  // Offset: 48 Size: 16
	struct TArray<uint32_t> HalfComponentByteOffsets;  // Offset: 64 Size: 16
	struct TArray<uint32_t> HalfComponentRegisterOffsets;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter Size 32
class FSetColorParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FLinearColor InValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage Size 1
class FNiagaraRequestSimpleClientInfoMessage
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraOutlinerCaptureSettings Size 12
class FNiagaraOutlinerCaptureSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bTriggerCapture : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	uint32_t CaptureDelayFrames;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bGatherPerfData : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraOutlinerSystemData Size 48
class FNiagaraOutlinerSystemData
{

 public: 
	struct TArray<struct FNiagaraOutlinerSystemInstanceData> SystemInstances;  // Offset: 0 Size: 16
	struct FNiagaraOutlinerTimingData AveragePerFrameTime;  // Offset: 16 Size: 8
	struct FNiagaraOutlinerTimingData MaxPerFrameTime;  // Offset: 24 Size: 8
	struct FNiagaraOutlinerTimingData AveragePerInstanceTime;  // Offset: 32 Size: 8
	struct FNiagaraOutlinerTimingData MaxPerInstanceTime;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject Size 32
class FSetVolumeTextureObject
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FString OverrideName;  // Offset: 8 Size: 16
	struct UVolumeTexture* Texture;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraScriptExecutionParameterStore Size 152
// Inherited 120 bytes 
class FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{

 public: 
	int32_t ParameterSize;  // Offset: 120 Size: 4
	uint32_t PaddedParameterSize;  // Offset: 124 Size: 4
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo;  // Offset: 128 Size: 16
	char bInitialized : 1;  // Offset: 144 Size: 1
	char pad_144_1 : 7;  // Offset: 144 Size: 1
	char pad_145[8];  // Offset: 145 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDebugHUDSettingsData Size 224
class FNiagaraDebugHUDSettingsData
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnabled : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bValidateSystemSimulationDataBuffers : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bValidateParticleDataBuffers : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool bOverviewEnabled : 1;  // Offset: 3 Size: 1
	enum class ENiagaraDebugHudFont OverviewFont;  // Offset: 4 Size: 4
	struct FVector2D OverviewLocation;  // Offset: 8 Size: 8
	struct FString ActorFilter;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bComponentFilterEnabled : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7
	struct FString ComponentFilter;  // Offset: 40 Size: 16
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bSystemFilterEnabled : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7
	struct FString SystemFilter;  // Offset: 64 Size: 16
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bEmitterFilterEnabled : 1;  // Offset: 80 Size: 1
	char pad_81[7];  // Offset: 81 Size: 7
	struct FString EmitterFilter;  // Offset: 88 Size: 16
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bActorFilterEnabled : 1;  // Offset: 104 Size: 1
	char pad_105[3];  // Offset: 105 Size: 3
	enum class ENiagaraDebugHudVerbosity SystemDebugVerbosity;  // Offset: 108 Size: 4
	enum class ENiagaraDebugHudVerbosity SystemEmitterVerbosity;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bSystemShowBounds : 1;  // Offset: 116 Size: 1
	char pad_117_1 : 7;  // Offset: 117 Size: 1
	bool bSystemShowActiveOnlyInWorld : 1;  // Offset: 117 Size: 1
	char pad_118_1 : 7;  // Offset: 118 Size: 1
	bool bShowSystemVariables : 1;  // Offset: 118 Size: 1
	char pad_119[1];  // Offset: 119 Size: 1
	struct TArray<struct FNiagaraDebugHUDVariable> SystemVariables;  // Offset: 120 Size: 16
	struct FNiagaraDebugHudTextOptions SystemTextOptions;  // Offset: 136 Size: 16
	char pad_152_1 : 7;  // Offset: 152 Size: 1
	bool bShowParticleVariables : 1;  // Offset: 152 Size: 1
	char pad_153_1 : 7;  // Offset: 153 Size: 1
	bool bEnableGpuParticleReadback : 1;  // Offset: 153 Size: 1
	char pad_154[6];  // Offset: 154 Size: 6
	struct TArray<struct FNiagaraDebugHUDVariable> ParticlesVariables;  // Offset: 160 Size: 16
	struct FNiagaraDebugHudTextOptions ParticleTextOptions;  // Offset: 176 Size: 16
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	bool bShowParticlesVariablesWithSystem : 1;  // Offset: 192 Size: 1
	char pad_193_1 : 7;  // Offset: 193 Size: 1
	bool bUseMaxParticlesToDisplay : 1;  // Offset: 193 Size: 1
	char pad_194[2];  // Offset: 194 Size: 2
	int32_t MaxParticlesToDisplay;  // Offset: 196 Size: 4
	enum class ENiagaraDebugPlaybackMode PlaybackMode;  // Offset: 200 Size: 1
	char pad_201_1 : 7;  // Offset: 201 Size: 1
	bool bPlaybackRateEnabled : 1;  // Offset: 201 Size: 1
	char pad_202[2];  // Offset: 202 Size: 2
	float PlaybackRate;  // Offset: 204 Size: 4
	char pad_208_1 : 7;  // Offset: 208 Size: 1
	bool bLoopTimeEnabled : 1;  // Offset: 208 Size: 1
	char pad_209[3];  // Offset: 209 Size: 3
	float LoopTime;  // Offset: 212 Size: 4
	char pad_216_1 : 7;  // Offset: 216 Size: 1
	bool bShowGlobalBudgetInfo : 1;  // Offset: 216 Size: 1
	char pad_217[7];  // Offset: 217 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraOutlinerData Size 80
class FNiagaraOutlinerData
{

 public: 
	struct TMap<struct FString, struct FNiagaraOutlinerWorldData> WorldData;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDebugHUDVariable Size 24
class FNiagaraDebugHUDVariable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnabled : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString Name;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDebuggerConnectionClosed Size 32
class FNiagaraDebuggerConnectionClosed
{

 public: 
	struct FGuid SessionId;  // Offset: 0 Size: 16
	struct FGuid InstanceId;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDebuggerAcceptConnection Size 32
class FNiagaraDebuggerAcceptConnection
{

 public: 
	struct FGuid SessionId;  // Offset: 0 Size: 16
	struct FGuid InstanceId;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraEmitterScalabilitySettings Size 56
class FNiagaraEmitterScalabilitySettings
{

 public: 
	struct FNiagaraPlatformSet Platforms;  // Offset: 0 Size: 48
	char bScaleSpawnCount : 1;  // Offset: 48 Size: 1
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	char pad_49[4];  // Offset: 49 Size: 4
	float SpawnCountScale;  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraPlatformSet Size 48
class FNiagaraPlatformSet
{

 public: 
	int32_t QualityLevelMask;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates;  // Offset: 8 Size: 16
	struct TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions;  // Offset: 24 Size: 16
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraPlatformSetCVarCondition Size 40
class FNiagaraPlatformSetCVarCondition
{

 public: 
	struct FName CVarName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool Value : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	int32_t MinInt;  // Offset: 12 Size: 4
	int32_t MaxInt;  // Offset: 16 Size: 4
	float MinFloat;  // Offset: 20 Size: 4
	float MaxFloat;  // Offset: 24 Size: 4
	char bUseMinInt : 1;  // Offset: 28 Size: 1
	char bUseMaxInt : 1;  // Offset: 28 Size: 1
	char bUseMinFloat : 1;  // Offset: 28 Size: 1
	char bUseMaxFloat : 1;  // Offset: 28 Size: 1
	char pad_28_1 : 4;  // Offset: 28 Size: 1
	char pad_29[12];  // Offset: 29 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDeviceProfileStateEntry Size 16
class FNiagaraDeviceProfileStateEntry
{

 public: 
	struct FName ProfileName;  // Offset: 0 Size: 8
	uint32_t QualityLevelMask;  // Offset: 8 Size: 4
	uint32_t SetQualityLevelMask;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter Size 32
class FSetQuatParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FQuat InValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray Size 16
class FNiagaraEmitterScalabilitySettingsArray
{

 public: 
	struct TArray<struct FNiagaraEmitterScalabilitySettings> Settings;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraSystemScalabilitySettings Size 72
class FNiagaraSystemScalabilitySettings
{

 public: 
	struct FNiagaraPlatformSet Platforms;  // Offset: 0 Size: 48
	char bCullByDistance : 1;  // Offset: 48 Size: 1
	char bCullMaxInstanceCount : 1;  // Offset: 48 Size: 1
	char bCullPerSystemMaxInstanceCount : 1;  // Offset: 48 Size: 1
	char bCullByMaxTimeWithoutRender : 1;  // Offset: 48 Size: 1
	char bCullByGlobalBudget : 1;  // Offset: 48 Size: 1
	char pad_48_1 : 3;  // Offset: 48 Size: 1
	char pad_49[4];  // Offset: 49 Size: 4
	float MaxDistance;  // Offset: 52 Size: 4
	int32_t MaxInstances;  // Offset: 56 Size: 4
	int32_t MaxSystemInstances;  // Offset: 60 Size: 4
	float MaxTimeWithoutRender;  // Offset: 64 Size: 4
	float MaxGlobalBudgetUsage;  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraBaselineController.OnEndTest Size 16
class FOnEndTest
{

 public: 
	struct FNiagaraPerfBaselineStats Stats;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraSystemScalabilityOverride Size 80
// Inherited 72 bytes 
class FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{

 public: 
	char bOverrideDistanceSettings : 1;  // Offset: 72 Size: 1
	char bOverrideInstanceCountSettings : 1;  // Offset: 72 Size: 1
	char bOverridePerSystemInstanceCountSettings : 1;  // Offset: 72 Size: 1
	char bOverrideTimeSinceRendererSettings : 1;  // Offset: 72 Size: 1
	char bOverrideGlobalBudgetCullingSettings : 1;  // Offset: 72 Size: 1
	char pad_72_1 : 3;  // Offset: 72 Size: 1
	char pad_73[8];  // Offset: 73 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray Size 16
class FNiagaraSystemScalabilitySettingsArray
{

 public: 
	struct TArray<struct FNiagaraSystemScalabilitySettings> Settings;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides Size 20
class FNiagaraDetailsLevelScaleOverrides
{

 public: 
	float Low;  // Offset: 0 Size: 4
	float Medium;  // Offset: 4 Size: 4
	float High;  // Offset: 8 Size: 4
	float Epic;  // Offset: 12 Size: 4
	float Cine;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetRenderingEnabled Size 1
class FSetRenderingEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInRenderingEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraEmitterScriptProperties Size 40
class FNiagaraEmitterScriptProperties
{

 public: 
	struct UNiagaraScript* Script;  // Offset: 0 Size: 8
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers;  // Offset: 8 Size: 16
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraEventGeneratorProperties Size 80
class FNiagaraEventGeneratorProperties
{

 public: 
	int32_t MaxEventsPerFrame;  // Offset: 0 Size: 4
	struct FName ID;  // Offset: 4 Size: 8
	char pad_12[4];  // Offset: 12 Size: 4
	struct FNiagaraDataSetCompiledData DataSetCompiledData;  // Offset: 16 Size: 64



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraEventReceiverProperties Size 24
class FNiagaraEventReceiverProperties
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	struct FName SourceEventGenerator;  // Offset: 8 Size: 8
	struct FName SourceEmitter;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraEmitterHandle Size 48
class FNiagaraEmitterHandle
{

 public: 
	struct FGuid ID;  // Offset: 0 Size: 16
	struct FName IdName;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bIsEnabled : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	struct FName Name;  // Offset: 28 Size: 8
	char pad_36[4];  // Offset: 36 Size: 4
	struct UNiagaraEmitter* Instance;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraParameterDataSetBinding Size 8
class FNiagaraParameterDataSetBinding
{

 public: 
	int32_t ParameterOffset;  // Offset: 0 Size: 4
	int32_t DataSetComponentOffset;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraCollisionEventPayload Size 44
class FNiagaraCollisionEventPayload
{

 public: 
	struct FVector CollisionPos;  // Offset: 0 Size: 12
	struct FVector CollisionNormal;  // Offset: 12 Size: 12
	struct FVector CollisionVelocity;  // Offset: 24 Size: 12
	int32_t ParticleIndex;  // Offset: 36 Size: 4
	int32_t PhysicalMaterialIndex;  // Offset: 40 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh Size 32
class FOverrideSystemUserVariableStaticMesh
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FString OverrideName;  // Offset: 8 Size: 16
	struct UStaticMesh* StaticMesh;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraMeshRendererMeshProperties Size 40
class FNiagaraMeshRendererMeshProperties
{

 public: 
	struct UStaticMesh* Mesh;  // Offset: 0 Size: 8
	struct FVector Scale;  // Offset: 8 Size: 12
	struct FVector PivotOffset;  // Offset: 20 Size: 12
	enum class ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraMeshMaterialOverride Size 40
class FNiagaraMeshMaterialOverride
{

 public: 
	struct UMaterialInterface* ExplicitMat;  // Offset: 0 Size: 8
	struct FNiagaraUserParameterBinding UserParamBinding;  // Offset: 8 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.ParameterDefinitionsSubscription Size 1
class FParameterDefinitionsSubscription
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraParameters Size 16
class FNiagaraParameters
{

 public: 
	struct TArray<struct FNiagaraVariable> Parameters;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter Size 24
class FSetBoolParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool InValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraParameterStore Size 120
class FNiagaraParameterStore
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8
	struct UObject* Owner;  // Offset: 8 Size: 8
	struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets;  // Offset: 16 Size: 16
	struct TArray<char> ParameterData;  // Offset: 32 Size: 16
	struct TArray<struct UNiagaraDataInterface*> DataInterfaces;  // Offset: 48 Size: 16
	struct TArray<struct UObject*> UObjects;  // Offset: 64 Size: 16
	char pad_80[40];  // Offset: 80 Size: 40



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue Size 24
class FSetNiagaraArrayBoolValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool Value : 1;  // Offset: 20 Size: 1
	char pad_21_1 : 7;  // Offset: 21 Size: 1
	bool bSizeToFit : 1;  // Offset: 21 Size: 1
	char pad_22[2];  // Offset: 22 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraVariableWithOffset Size 16
// Inherited 12 bytes 
class FNiagaraVariableWithOffset : public FNiagaraVariableBase
{

 public: 
	int32_t Offset;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetForceSolo Size 1
class FGetForceSolo
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraBoundParameter Size 40
class FNiagaraBoundParameter
{

 public: 
	struct FNiagaraVariable Parameter;  // Offset: 0 Size: 32
	int32_t SrcOffset;  // Offset: 32 Size: 4
	int32_t DestOffset;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue Size 32
class FGetNiagaraArrayVector2DValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	struct FVector2D ReturnValue;  // Offset: 20 Size: 8
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraPerfBaselineStats Size 16
class FNiagaraPerfBaselineStats
{

 public: 
	float PerInstanceAvg_GT;  // Offset: 0 Size: 4
	float PerInstanceAvg_RT;  // Offset: 4 Size: 4
	float PerInstanceMax_GT;  // Offset: 8 Size: 4
	float PerInstanceMax_RT;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraPlatformSetConflictInfo Size 24
class FNiagaraPlatformSetConflictInfo
{

 public: 
	int32_t SetAIndex;  // Offset: 0 Size: 4
	int32_t SetBIndex;  // Offset: 4 Size: 4
	struct TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraPlatformSetConflictEntry Size 12
class FNiagaraPlatformSetConflictEntry
{

 public: 
	struct FName ProfileName;  // Offset: 0 Size: 8
	int32_t QualityLevelMask;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.VersionedNiagaraScriptData Size 1
class FVersionedNiagaraScriptData
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraRibbonUVSettings Size 36
class FNiagaraRibbonUVSettings
{

 public: 
	enum class ENiagaraRibbonUVDistributionMode DistributionMode;  // Offset: 0 Size: 4
	enum class ENiagaraRibbonUVEdgeMode LeadingEdgeMode;  // Offset: 4 Size: 4
	enum class ENiagaraRibbonUVEdgeMode TrailingEdgeMode;  // Offset: 8 Size: 4
	float TilingLength;  // Offset: 12 Size: 4
	struct FVector2D Offset;  // Offset: 16 Size: 8
	struct FVector2D Scale;  // Offset: 24 Size: 8
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bEnablePerParticleUOverride : 1;  // Offset: 32 Size: 1
	char pad_33_1 : 7;  // Offset: 33 Size: 1
	bool bEnablePerParticleVRangeOverride : 1;  // Offset: 33 Size: 1
	char pad_34[2];  // Offset: 34 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex Size 20
class FNiagaraRibbonShapeCustomVertex
{

 public: 
	struct FVector2D position;  // Offset: 0 Size: 8
	struct FVector2D Normal;  // Offset: 8 Size: 8
	float TextureV;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation Size 64
class FSpawnSystemAtLocation
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UNiagaraSystem* SystemTemplate;  // Offset: 8 Size: 8
	struct FVector Location;  // Offset: 16 Size: 12
	struct FRotator Rotation;  // Offset: 28 Size: 12
	struct FVector Scale;  // Offset: 40 Size: 12
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	bool bAutoDestroy : 1;  // Offset: 52 Size: 1
	char pad_53_1 : 7;  // Offset: 53 Size: 1
	bool bAutoActivate : 1;  // Offset: 53 Size: 1
	enum class ENCPoolMethod PoolingMethod;  // Offset: 54 Size: 1
	char pad_55_1 : 7;  // Offset: 55 Size: 1
	bool bPreCullCheck : 1;  // Offset: 55 Size: 1
	struct UNiagaraComponent* ReturnValue;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection Size 24
class FGetNiagaraParameterCollection
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UNiagaraParameterCollection* Collection;  // Offset: 8 Size: 8
	struct UNiagaraParameterCollectionInstance* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraVMExecutableData Size 240
class FNiagaraVMExecutableData
{

 public: 
	struct TArray<char> ByteCode;  // Offset: 0 Size: 16
	struct TArray<char> OptimizedByteCode;  // Offset: 16 Size: 16
	int32_t NumTempRegisters;  // Offset: 32 Size: 4
	int32_t NumUserPtrs;  // Offset: 36 Size: 4
	struct TArray<struct FNiagaraCompilerTag> CompileTags;  // Offset: 40 Size: 16
	struct TArray<char> ScriptLiterals;  // Offset: 56 Size: 16
	struct TArray<struct FNiagaraVariable> Attributes;  // Offset: 72 Size: 16
	struct FNiagaraScriptDataUsageInfo DataUsage;  // Offset: 88 Size: 1
	char pad_89[7];  // Offset: 89 Size: 7
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;  // Offset: 96 Size: 16
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;  // Offset: 112 Size: 16
	char pad_128[16];  // Offset: 128 Size: 16
	struct TArray<struct FNiagaraDataSetID> ReadDataSets;  // Offset: 144 Size: 16
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets;  // Offset: 160 Size: 16
	struct TArray<struct FNiagaraStatScope> StatScopes;  // Offset: 176 Size: 16
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;  // Offset: 192 Size: 16
	enum class ENiagaraScriptCompileStatus LastCompileStatus;  // Offset: 208 Size: 1
	char pad_209[7];  // Offset: 209 Size: 7
	struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData;  // Offset: 216 Size: 16
	char bReadsSignificanceIndex : 1;  // Offset: 232 Size: 1
	char bNeedsGPUContextInit : 1;  // Offset: 232 Size: 1
	char pad_232_1 : 6;  // Offset: 232 Size: 1
	char pad_233[8];  // Offset: 233 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetForceSolo Size 1
class FSetForceSolo
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInForceSolo : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraCompilerTag Size 48
class FNiagaraCompilerTag
{

 public: 
	struct FNiagaraVariable Variable;  // Offset: 0 Size: 32
	struct FString StringValue;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraVMExecutableDataId Size 88
class FNiagaraVMExecutableDataId
{

 public: 
	struct FGuid CompilerVersionID;  // Offset: 0 Size: 16
	enum class ENiagaraScriptUsage ScriptUsageType;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	struct FGuid ScriptUsageTypeID;  // Offset: 20 Size: 16
	char bUsesRapidIterationParams : 1;  // Offset: 36 Size: 1
	char bInterpolatedSpawn : 1;  // Offset: 36 Size: 1
	char bRequiresPersistentIDs : 1;  // Offset: 36 Size: 1
	char pad_36_1 : 5;  // Offset: 36 Size: 1
	char pad_37[4];  // Offset: 37 Size: 4
	struct FGuid BaseScriptID;  // Offset: 40 Size: 16
	struct FNiagaraCompileHash BaseScriptCompileHash;  // Offset: 56 Size: 16
	struct FGuid ScriptVersionID;  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraScriptHighlight Size 40
class FNiagaraScriptHighlight
{

 public: 
	struct FLinearColor Color;  // Offset: 0 Size: 16
	struct FText DisplayName;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraModuleDependency Size 40
class FNiagaraModuleDependency
{

 public: 
	struct FName ID;  // Offset: 0 Size: 8
	enum class ENiagaraModuleDependencyType Type;  // Offset: 8 Size: 1
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6
	struct FText Description;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraScriptInstanceParameterStore Size 136
// Inherited 120 bytes 
class FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{

 public: 
	char pad_120[16];  // Offset: 120 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter Size 24
class FGetFloatParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	float ReturnValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetNiagaraVariableFloat Size 24
class FSetNiagaraVariableFloat
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	float InValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo Size 8
class FNiagaraScriptExecutionPaddingInfo
{

 public: 
	uint16_t SrcOffset;  // Offset: 0 Size: 2
	uint16_t DestOffset;  // Offset: 2 Size: 2
	uint16_t SrcSize;  // Offset: 4 Size: 2
	uint16_t DestSize;  // Offset: 6 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraSystemCompileRequest Size 128
class FNiagaraSystemCompileRequest
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8
	struct TArray<struct UObject*> RootObjects;  // Offset: 8 Size: 16
	char pad_24[104];  // Offset: 24 Size: 104



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.EmitterCompiledScriptPair Size 144
class FEmitterCompiledScriptPair
{

 public: 
	char pad_0[144];  // Offset: 0 Size: 144



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraSystemCompiledData Size 536
class FNiagaraSystemCompiledData
{

 public: 
	struct FNiagaraParameterStore InstanceParamStore;  // Offset: 0 Size: 120
	struct FNiagaraDataSetCompiledData DataSetCompiledData;  // Offset: 120 Size: 64
	struct FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;  // Offset: 184 Size: 64
	struct FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;  // Offset: 248 Size: 64
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;  // Offset: 312 Size: 32
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;  // Offset: 344 Size: 32
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;  // Offset: 376 Size: 32
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;  // Offset: 408 Size: 16
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;  // Offset: 424 Size: 32
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;  // Offset: 456 Size: 32
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;  // Offset: 488 Size: 32
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;  // Offset: 520 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection Size 32
class FNiagaraParameterDataSetBindingCollection
{

 public: 
	struct TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets;  // Offset: 0 Size: 16
	struct TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32 Size 32
class FGetNiagaraArrayInt32
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<int32_t> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraEmitterCompiledData Size 304
class FNiagaraEmitterCompiledData
{

 public: 
	struct TArray<struct FName> SpawnAttributes;  // Offset: 0 Size: 16
	struct FNiagaraVariable EmitterSpawnIntervalVar;  // Offset: 16 Size: 32
	struct FNiagaraVariable EmitterInterpSpawnStartDTVar;  // Offset: 48 Size: 32
	struct FNiagaraVariable EmitterSpawnGroupVar;  // Offset: 80 Size: 32
	struct FNiagaraVariable EmitterAgeVar;  // Offset: 112 Size: 32
	struct FNiagaraVariable EmitterRandomSeedVar;  // Offset: 144 Size: 32
	struct FNiagaraVariable EmitterInstanceSeedVar;  // Offset: 176 Size: 32
	struct FNiagaraVariable EmitterTotalSpawnedParticlesVar;  // Offset: 208 Size: 32
	struct FNiagaraDataSetCompiledData DataSetCompiledData;  // Offset: 240 Size: 64



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraVariableMetaData Size 224
class FNiagaraVariableMetaData
{

 public: 
	struct FText Description;  // Offset: 0 Size: 24
	struct FText CategoryName;  // Offset: 24 Size: 24
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bAdvancedDisplay : 1;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	int32_t EditorSortPriority;  // Offset: 52 Size: 4
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bInlineEditConditionToggle : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7
	struct FNiagaraInputConditionMetadata EditCondition;  // Offset: 64 Size: 24
	struct FNiagaraInputConditionMetadata VisibleCondition;  // Offset: 88 Size: 24
	struct TMap<struct FName, struct FString> PropertyMetaData;  // Offset: 112 Size: 80
	struct FName ParentAttribute;  // Offset: 192 Size: 8
	struct FGuid VariableGuid;  // Offset: 200 Size: 16
	char pad_216_1 : 7;  // Offset: 216 Size: 1
	bool bIsStaticSwitch : 1;  // Offset: 216 Size: 1
	char pad_217[3];  // Offset: 217 Size: 3
	int32_t StaticSwitchDefaultValue;  // Offset: 220 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly Size 48
class FGetNiagaraParticleValues_DebugOnly
{

 public: 
	struct FString InEmitterName;  // Offset: 0 Size: 16
	struct FString InValueName;  // Offset: 16 Size: 16
	struct TArray<float> ReturnValue;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraInputConditionMetadata Size 24
class FNiagaraInputConditionMetadata
{

 public: 
	struct FName InputName;  // Offset: 0 Size: 8
	struct TArray<struct FString> TargetValues;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo Size 48
class FNiagaraCompileHashVisitorDebugInfo
{

 public: 
	struct FString Object;  // Offset: 0 Size: 16
	struct TArray<struct FString> PropertyKeys;  // Offset: 16 Size: 16
	struct TArray<struct FString> PropertyValues;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraSpawnInfo Size 16
class FNiagaraSpawnInfo
{

 public: 
	int32_t Count;  // Offset: 0 Size: 4
	float InterpStartDt;  // Offset: 4 Size: 4
	float IntervalDt;  // Offset: 8 Size: 4
	int32_t SpawnGroup;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraPreviewAxis.ApplyToPreview Size 32
class FApplyToPreview
{

 public: 
	struct UNiagaraComponent* PreviewComponent;  // Offset: 0 Size: 8
	int32_t PreviewIndex;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bIsXAxis : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	struct FString OutLabelText;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraAssetVersion Size 28
class FNiagaraAssetVersion
{

 public: 
	int32_t MajorVersion;  // Offset: 0 Size: 4
	int32_t MinorVersion;  // Offset: 4 Size: 4
	struct FGuid VersionGuid;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bIsVisibleInVersionSelector : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraParameterMap Size 1
class FNiagaraParameterMap
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraNumeric Size 1
class FNiagaraNumeric
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraHalfVector4 Size 8
class FNiagaraHalfVector4
{

 public: 
	uint16_t X;  // Offset: 0 Size: 2
	uint16_t Y;  // Offset: 2 Size: 2
	uint16_t Z;  // Offset: 4 Size: 2
	uint16_t W;  // Offset: 6 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraHalfVector3 Size 6
class FNiagaraHalfVector3
{

 public: 
	uint16_t X;  // Offset: 0 Size: 2
	uint16_t Y;  // Offset: 2 Size: 2
	uint16_t Z;  // Offset: 4 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraHalfVector2 Size 4
class FNiagaraHalfVector2
{

 public: 
	uint16_t X;  // Offset: 0 Size: 2
	uint16_t Y;  // Offset: 2 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraHalf Size 2
class FNiagaraHalf
{

 public: 
	uint16_t Value;  // Offset: 0 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraBool Size 4
class FNiagaraBool
{

 public: 
	int32_t Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraInt32 Size 4
class FNiagaraInt32
{

 public: 
	int32_t Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraFloat Size 4
class FNiagaraFloat
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraWildcard Size 1
class FNiagaraWildcard
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraUserRedirectionParameterStore Size 200
// Inherited 120 bytes 
class FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{

 public: 
	struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;  // Offset: 120 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraVariant Size 40
class FNiagaraVariant
{

 public: 
	struct UObject* Object;  // Offset: 0 Size: 8
	struct UNiagaraDataInterface* DataInterface;  // Offset: 8 Size: 8
	struct TArray<char> Bytes;  // Offset: 16 Size: 16
	enum class ENiagaraVariantMode CurrentMode;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Niagara.NiagaraWorldManagerTickFunction Size 48
// Inherited 40 bytes 
class FNiagaraWorldManagerTickFunction : public FTickFunction
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraBaselineController.OnOwnerTick Size 4
class FOnOwnerTick
{

 public: 
	float DeltaTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.AdvanceSimulationByTime Size 8
class FAdvanceSimulationByTime
{

 public: 
	float SimulateTime;  // Offset: 0 Size: 4
	float TickDeltaSeconds;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraActor.OnNiagaraSystemFinished Size 8
class FOnNiagaraSystemFinished
{

 public: 
	struct UNiagaraComponent* FinishedComponent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraActor.SetDestroyOnSystemFinish Size 1
class FSetDestroyOnSystemFinish
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bShouldDestroyOnSystemFinish : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetAgeUpdateMode Size 1
class FGetAgeUpdateMode
{

 public: 
	enum class ENiagaraAgeUpdateMode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetAsset Size 8
class FGetAsset
{

 public: 
	struct UNiagaraSystem* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetDataInterface Size 24
class FGetDataInterface
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	struct UNiagaraDataInterface* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetDesiredAge Size 4
class FGetDesiredAge
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta Size 1
class FGetLockDesiredAgeDeltaTimeToSeekDelta
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly Size 32
class FGetNiagaraParticlePositions_DebugOnly
{

 public: 
	struct FString InEmitterName;  // Offset: 0 Size: 16
	struct TArray<struct FVector> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly Size 48
class FGetNiagaraParticleValueVec3_DebugOnly
{

 public: 
	struct FString InEmitterName;  // Offset: 0 Size: 16
	struct FString InValueName;  // Offset: 16 Size: 16
	struct TArray<struct FVector> ReturnValue;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetPreviewLODDistance Size 4
class FGetPreviewLODDistance
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled Size 1
class FGetPreviewLODDistanceEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.GetTickBehavior Size 1
class FGetTickBehavior
{

 public: 
	enum class ENiagaraTickBehavior ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.IsPaused Size 1
class FIsPaused
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SeekToDesiredAge Size 4
class FSeekToDesiredAge
{

 public: 
	float InDesiredAge;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableObject Size 16
class FSetVariableObject
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	struct UObject* Object;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableActor Size 16
class FSetVariableActor
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	struct AActor* Actor;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetAgeUpdateMode Size 1
class FSetAgeUpdateMode
{

 public: 
	enum class ENiagaraAgeUpdateMode InAgeUpdateMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetAllowScalability Size 1
class FSetAllowScalability
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bAllow : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetAsset Size 16
class FSetAsset
{

 public: 
	struct UNiagaraSystem* InAsset;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bResetExistingOverrideParameters : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetAutoDestroy Size 1
class FSetAutoDestroy
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInAutoDestroy : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking Size 1
class FSetCanRenderWhileSeeking
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInCanRenderWhileSeeking : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetDesiredAge Size 4
class FSetDesiredAge
{

 public: 
	float InDesiredAge;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetGpuComputeDebug Size 1
class FSetGpuComputeDebug
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnableDebug : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter Size 24
class FGetVector2DParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FVector2D ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta Size 1
class FSetLockDesiredAgeDeltaTimeToSeekDelta
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool block : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetMaxSimTime Size 4
class FSetMaxSimTime
{

 public: 
	float InMaxTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetNiagaraVariableActor Size 24
class FSetNiagaraVariableActor
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct AActor* Actor;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetNiagaraVariableBool Size 24
class FSetNiagaraVariableBool
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool InValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetNiagaraVariableInt Size 24
class FSetNiagaraVariableInt
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	int32_t InValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetNiagaraVariableObject Size 24
class FSetNiagaraVariableObject
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct UObject* Object;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetNiagaraVariableQuat Size 32
class FSetNiagaraVariableQuat
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FQuat InValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetNiagaraVariableVec2 Size 24
class FSetNiagaraVariableVec2
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FVector2D InValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetNiagaraVariableVec3 Size 32
class FSetNiagaraVariableVec3
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FVector InValue;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetNiagaraVariableVec4 Size 32
class FSetNiagaraVariableVec4
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FVector4 InValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetPreviewLODDistance Size 8
class FSetPreviewLODDistance
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnablePreviewLODDistance : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float PreviewLODDistance;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetRandomSeedOffset Size 4
class FSetRandomSeedOffset
{

 public: 
	int32_t NewRandomSeedOffset;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetSeekDelta Size 4
class FSetSeekDelta
{

 public: 
	float InSeekDelta;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetTickBehavior Size 1
class FSetTickBehavior
{

 public: 
	enum class ENiagaraTickBehavior NewTickBehavior;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableBool Size 12
class FSetVariableBool
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool InValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableFloat Size 12
class FSetVariableFloat
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	float InValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableInt Size 12
class FSetVariableInt
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	int32_t InValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableLinearColor Size 24
class FSetVariableLinearColor
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	struct FLinearColor InValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableMaterial Size 16
class FSetVariableMaterial
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	struct UMaterialInterface* Object;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableQuat Size 32
class FSetVariableQuat
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8
	struct FQuat InValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget Size 16
class FSetVariableTextureRenderTarget
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	struct UTextureRenderTarget* TextureRenderTarget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter Size 24
class FSetIntParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	int32_t InValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableVec2 Size 16
class FSetVariableVec2
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	struct FVector2D InValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableVec3 Size 20
class FSetVariableVec3
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	struct FVector InValue;  // Offset: 8 Size: 12



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraComponent.SetVariableVec4 Size 32
class FSetVariableVec4
{

 public: 
	struct FName InVariableName;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8
	struct FVector4 InValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool Size 32
class FGetNiagaraArrayBool
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<bool> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue Size 24
class FGetNiagaraArrayBoolValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool ReturnValue : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor Size 32
class FGetNiagaraArrayColor
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<struct FLinearColor> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue Size 40
class FGetNiagaraArrayColorValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	struct FLinearColor ReturnValue;  // Offset: 20 Size: 16
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue Size 24
class FGetNiagaraArrayFloatValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	float ReturnValue;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat Size 32
class FGetNiagaraArrayQuat
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<struct FQuat> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue Size 48
class FGetNiagaraArrayQuatValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	char pad_20[12];  // Offset: 20 Size: 12
	struct FQuat ReturnValue;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector Size 32
class FGetNiagaraArrayVector
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<struct FVector> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4 Size 32
class FGetNiagaraArrayVector4
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<struct FVector4> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value Size 48
class FGetNiagaraArrayVector4Value
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	char pad_20[12];  // Offset: 20 Size: 12
	struct FVector4 ReturnValue;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool Size 32
class FSetNiagaraArrayBool
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<bool> ArrayData;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor Size 32
class FSetNiagaraArrayColor
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<struct FLinearColor> ArrayData;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue Size 40
class FSetNiagaraArrayColorValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	struct FLinearColor Value;  // Offset: 20 Size: 16
	char pad_36_1 : 7;  // Offset: 36 Size: 1
	bool bSizeToFit : 1;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat Size 32
class FSetNiagaraArrayFloat
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<float> ArrayData;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue Size 32
class FSetNiagaraArrayFloatValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	float Value;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bSizeToFit : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32 Size 32
class FSetNiagaraArrayInt32
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<int32_t> ArrayData;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value Size 32
class FSetNiagaraArrayInt32Value
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	int32_t Value;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bSizeToFit : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat Size 32
class FSetNiagaraArrayQuat
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<struct FQuat> ArrayData;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter Size 24
class FGetIntParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	int32_t ReturnValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue Size 64
class FSetNiagaraArrayQuatValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	char pad_20[12];  // Offset: 20 Size: 12
	struct FQuat Value;  // Offset: 32 Size: 16
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bSizeToFit : 1;  // Offset: 48 Size: 1
	char pad_49[15];  // Offset: 49 Size: 15



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector Size 32
class FSetNiagaraArrayVector
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<struct FVector> ArrayData;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D Size 32
class FSetNiagaraArrayVector2D
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<struct FVector2D> ArrayData;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue Size 32
class FSetNiagaraArrayVector2DValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	struct FVector2D Value;  // Offset: 20 Size: 8
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bSizeToFit : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4 Size 32
class FSetNiagaraArrayVector4
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	struct TArray<struct FVector4> ArrayData;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value Size 64
class FSetNiagaraArrayVector4Value
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	char pad_20[12];  // Offset: 20 Size: 12
	struct FVector4 Value;  // Offset: 32 Size: 16
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bSizeToFit : 1;  // Offset: 48 Size: 1
	char pad_49[15];  // Offset: 49 Size: 15



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue Size 40
class FSetNiagaraArrayVectorValue
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FName OverrideName;  // Offset: 8 Size: 8
	int32_t Index;  // Offset: 16 Size: 4
	struct FVector Value;  // Offset: 20 Size: 12
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bSizeToFit : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData Size 24
class FReceiveParticleData
{

 public: 
	struct TArray<struct FBasicParticleData> Data;  // Offset: 0 Size: 16
	struct UNiagaraSystem* NiagaraSystem;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter Size 32
class FGetVector4Parameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FVector4 ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D Size 32
class FFillRawTexture2D
{

 public: 
	struct UNiagaraComponent* Component;  // Offset: 0 Size: 8
	struct UTextureRenderTarget2D* Dest;  // Offset: 8 Size: 8
	int32_t TilesX;  // Offset: 16 Size: 4
	int32_t TilesY;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D Size 24
class FFillTexture2D
{

 public: 
	struct UNiagaraComponent* Component;  // Offset: 0 Size: 8
	struct UTextureRenderTarget2D* Dest;  // Offset: 8 Size: 8
	int32_t AttributeIndex;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool ReturnValue : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize Size 24
class FGetRawTextureSize
{

 public: 
	struct UNiagaraComponent* Component;  // Offset: 0 Size: 8
	int32_t SizeX;  // Offset: 8 Size: 4
	int32_t SizeY;  // Offset: 12 Size: 4
	int32_t SizeZ;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent Size 32
class FOverrideSystemUserVariableStaticMeshComponent
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FString OverrideName;  // Offset: 8 Size: 16
	struct UStaticMeshComponent* StaticMeshComponent;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize Size 24
class FGetTextureSize
{

 public: 
	struct UNiagaraComponent* Component;  // Offset: 0 Size: 8
	int32_t SizeX;  // Offset: 8 Size: 4
	int32_t SizeY;  // Offset: 12 Size: 4
	int32_t SizeZ;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture Size 32
class FFillRawVolumeTexture
{

 public: 
	struct UNiagaraComponent* Component;  // Offset: 0 Size: 8
	struct UVolumeTexture* Dest;  // Offset: 8 Size: 8
	int32_t TilesX;  // Offset: 16 Size: 4
	int32_t TilesY;  // Offset: 20 Size: 4
	int32_t TileZ;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool ReturnValue : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture Size 24
class FFillVolumeTexture
{

 public: 
	struct UNiagaraComponent* Component;  // Offset: 0 Size: 8
	struct UVolumeTexture* Dest;  // Offset: 8 Size: 8
	int32_t AttributeIndex;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool ReturnValue : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent Size 32
class FOverrideSystemUserVariableSkeletalMeshComponent
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FString OverrideName;  // Offset: 8 Size: 16
	struct USkeletalMeshComponent* SkeletalMeshComponent;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions Size 40
class FSetSkeletalMeshDataInterfaceSamplingRegions
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FString OverrideName;  // Offset: 8 Size: 16
	struct TArray<struct FName> SamplingRegions;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject Size 32
class FSetTexture2DArrayObject
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FString OverrideName;  // Offset: 8 Size: 16
	struct UTexture2DArray* Texture;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraFunctionLibrary.SetTextureObject Size 32
class FSetTextureObject
{

 public: 
	struct UNiagaraComponent* NiagaraSystem;  // Offset: 0 Size: 8
	struct FString OverrideName;  // Offset: 8 Size: 16
	struct UTexture* Texture;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter Size 32
class FGetQuatParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FQuat ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter Size 32
class FGetVectorParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FVector ReturnValue;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter Size 24
class FSetFloatParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	float InValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter Size 24
class FSetVector2DParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FVector2D InValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter Size 32
class FSetVector4Parameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FVector4 InValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter Size 32
class FSetVectorParameter
{

 public: 
	struct FString InVariableName;  // Offset: 0 Size: 16
	struct FVector InValue;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraBaselineController.GetSystem Size 8
class FGetSystem
{

 public: 
	struct UNiagaraSystem* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraBaselineController.OnTickTest Size 1
class FOnTickTest
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraPreviewBase.SetLabelText Size 48
class FSetLabelText
{

 public: 
	struct FText InXAxisText;  // Offset: 0 Size: 24
	struct FText InYAxisText;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraPreviewBase.SetSystem Size 8
class FSetSystem
{

 public: 
	struct UNiagaraSystem* InSystem;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraPreviewGrid.ActivatePreviews Size 1
class FActivatePreviews
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bReset : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Niagara.NiagaraPreviewGrid.GetPreviews Size 16
class FGetPreviews
{

 public: 
	struct TArray<struct UNiagaraComponent*> OutPreviews;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 