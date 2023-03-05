#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct NiagaraShader.SimulationStageMetaData Size 48
class FSimulationStageMetaData
{

 public: 
	struct FName SimulationStageName;  // Offset: 0 Size: 8
	struct FName IterationSource;  // Offset: 8 Size: 8
	char bSpawnOnly : 1;  // Offset: 16 Size: 1
	char bWritesParticles : 1;  // Offset: 16 Size: 1
	char bPartialParticleUpdate : 1;  // Offset: 16 Size: 1
	char pad_16_1 : 5;  // Offset: 16 Size: 1
	char pad_17[8];  // Offset: 17 Size: 8
	struct TArray<struct FName> OutputDestinations;  // Offset: 24 Size: 16
	int32_t MinStage;  // Offset: 40 Size: 4
	int32_t MaxStage;  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo Size 48
class FNiagaraDataInterfaceGPUParamInfo
{

 public: 
	struct FString DataInterfaceHLSLSymbol;  // Offset: 0 Size: 16
	struct FString DIClassName;  // Offset: 16 Size: 16
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction Size 40
class FNiagaraDataInterfaceGeneratedFunction
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct NiagaraShader.NiagaraCompileEvent Size 96
class FNiagaraCompileEvent
{

 public: 
	enum class FNiagaraCompileEventSeverity Severity;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString Message;  // Offset: 8 Size: 16
	struct FString ShortDescription;  // Offset: 24 Size: 16
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bDismissable : 1;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	struct FGuid NodeGuid;  // Offset: 44 Size: 16
	struct FGuid PinGuid;  // Offset: 60 Size: 16
	char pad_76[4];  // Offset: 76 Size: 4
	struct TArray<struct FGuid> StackGuids;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 