#pragma once 
#include <Niagara_Structs.h>
 
 
 
//Class Niagara.NiagaraDataInterfaceSimpleCounter Size 56
// Inherited 56 bytes 
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceArrayInt32 Size 96
// Inherited 80 bytes 
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{

 public: 
	struct TArray<int32_t> IntData;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.MovieSceneNiagaraTrack Size 160
// Inherited 144 bytes 
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{

 public: 
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.MovieSceneNiagaraSystemSpawnSection Size 248
// Inherited 232 bytes 
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{

 public: 
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;  // Offset: 232 Size: 4
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;  // Offset: 236 Size: 4
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;  // Offset: 240 Size: 4
	enum class ENiagaraAgeUpdateMode AgeUpdateMode;  // Offset: 244 Size: 1
	char pad_245[3];  // Offset: 245 Size: 3



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraComponentRendererProperties Size 432
// Inherited 120 bytes 
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{

 public: 
	USceneComponent* ComponentType;  // Offset: 120 Size: 8
	uint32_t ComponentCountLimit;  // Offset: 128 Size: 4
	char pad_132[4];  // Offset: 132 Size: 4
	struct FNiagaraVariableAttributeBinding EnabledBinding;  // Offset: 136 Size: 88
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // Offset: 224 Size: 88
	char pad_312_1 : 7;  // Offset: 312 Size: 1
	bool bAssignComponentsOnParticleID : 1;  // Offset: 312 Size: 1
	char pad_313_1 : 7;  // Offset: 313 Size: 1
	bool bOnlyCreateComponentsOnParticleSpawn : 1;  // Offset: 313 Size: 1
	char pad_314[2];  // Offset: 314 Size: 2
	int32_t RendererVisibility;  // Offset: 316 Size: 4
	struct USceneComponent* TemplateComponent;  // Offset: 320 Size: 8
	struct TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings;  // Offset: 328 Size: 16
	char pad_344[88];  // Offset: 344 Size: 88



 // Functions 
 public:
}; 
 
 


//Class Niagara.MovieSceneNiagaraParameterTrack Size 192
// Inherited 160 bytes 
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{

 public: 
	struct FNiagaraVariable Parameter;  // Offset: 160 Size: 32



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceCurlNoise Size 72
// Inherited 56 bytes 
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{

 public: 
	uint32_t Seed;  // Offset: 56 Size: 4
	char pad_60[12];  // Offset: 60 Size: 12



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceGrid2DCollection Size 448
// Inherited 248 bytes 
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{

 public: 
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // Offset: 248 Size: 32
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat;  // Offset: 280 Size: 1
	char bOverrideFormat : 1;  // Offset: 281 Size: 1
	char pad_281_1 : 7;  // Offset: 281 Size: 1
	char pad_282[87];  // Offset: 282 Size: 87
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets;  // Offset: 368 Size: 80



 // Functions 
 public:
	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
}; 
 
 


//Class Niagara.NiagaraDataInterfaceCollisionQuery Size 72
// Inherited 56 bytes 
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{

 public: 
	char pad_56[16];  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceArrayBool Size 96
// Inherited 80 bytes 
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{

 public: 
	struct TArray<bool> BoolData;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.MovieSceneNiagaraFloatParameterTrack Size 200
// Inherited 192 bytes 
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceArrayFloat2 Size 96
// Inherited 80 bytes 
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{

 public: 
	struct TArray<struct FVector2D> floatData;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.MovieSceneNiagaraIntegerParameterTrack Size 200
// Inherited 192 bytes 
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.MovieSceneNiagaraBoolParameterTrack Size 200
// Inherited 192 bytes 
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraEventReceiverEmitterAction Size 40
// Inherited 40 bytes 
class UNiagaraEventReceiverEmitterAction : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.MovieSceneNiagaraSystemTrack Size 168
// Inherited 160 bytes 
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{

 public: 
	char pad_160[8];  // Offset: 160 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceArrayColor Size 96
// Inherited 80 bytes 
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{

 public: 
	struct TArray<struct FLinearColor> ColorData;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.MovieSceneNiagaraColorParameterTrack Size 200
// Inherited 192 bytes 
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.MovieSceneNiagaraVectorParameterTrack Size 208
// Inherited 192 bytes 
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8
	int32_t ChannelsUsed;  // Offset: 200 Size: 4
	char pad_204[4];  // Offset: 204 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraPreviewBase Size 544
// Inherited 544 bytes 
class ANiagaraPreviewBase : public AActor
{

 public: 



 // Functions 
 public:
	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem
	void SetLabelText(struct FText& InXAxisText, struct FText& InYAxisText); // Function Niagara.NiagaraPreviewBase.SetLabelText
}; 
 
 


//Class Niagara.NiagaraActor Size 560
// Inherited 544 bytes 
class ANiagaraActor : public AActor
{

 public: 
	struct UNiagaraComponent* NiagaraComponent;  // Offset: 544 Size: 8
	char bDestroyOnSystemFinish : 1;  // Offset: 552 Size: 1
	char pad_552_1 : 7;  // Offset: 552 Size: 1
	char pad_553[8];  // Offset: 553 Size: 8



 // Functions 
 public:
	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished
}; 
 
 


//Class Niagara.NiagaraDataInterfaceRenderTarget2DArray Size 344
// Inherited 216 bytes 
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{

 public: 
	struct FIntVector Size;  // Offset: 216 Size: 12
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat;  // Offset: 228 Size: 1
	char bInheritUserParameterSettings : 1;  // Offset: 229 Size: 1
	char bOverrideFormat : 1;  // Offset: 229 Size: 1
	char pad_229_1 : 6;  // Offset: 229 Size: 1
	char pad_230[3];  // Offset: 230 Size: 3
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // Offset: 232 Size: 32
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets;  // Offset: 264 Size: 80



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceExport Size 104
// Inherited 56 bytes 
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{

 public: 
	struct FNiagaraUserParameterBinding CallbackHandlerParameter;  // Offset: 56 Size: 32
	enum class ENDIExport_GPUAllocationMode GPUAllocationMode;  // Offset: 88 Size: 1
	char pad_89[3];  // Offset: 89 Size: 3
	int32_t GPUAllocationFixedSize;  // Offset: 92 Size: 4
	float GPUAllocationPerParticleSize;  // Offset: 96 Size: 4
	char pad_100[4];  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceMeshRendererInfo Size 80
// Inherited 56 bytes 
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{

 public: 
	struct UNiagaraMeshRendererProperties* MeshRenderer;  // Offset: 56 Size: 8
	char pad_64[16];  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceRWBase Size 216
// Inherited 56 bytes 
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{

 public: 
	struct TSet<int32_t> OutputShaderStages;  // Offset: 56 Size: 80
	struct TSet<int32_t> IterationShaderStages;  // Offset: 136 Size: 80



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraBakerSettings Size 280
// Inherited 40 bytes 
class UNiagaraBakerSettings : public UObject
{

 public: 
	float StartSeconds;  // Offset: 40 Size: 4
	float DurationSeconds;  // Offset: 44 Size: 4
	int32_t FramesPerSecond;  // Offset: 48 Size: 4
	char bPreviewLooping : 1;  // Offset: 52 Size: 1
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	char pad_53[4];  // Offset: 53 Size: 4
	struct FIntPoint FramesPerDimension;  // Offset: 56 Size: 8
	struct TArray<struct FNiagaraBakerTextureSettings> OutputTextures;  // Offset: 64 Size: 16
	enum class ENiagaraBakerViewMode CameraViewportMode;  // Offset: 80 Size: 4
	struct FVector CameraViewportLocation[7];  // Offset: 84 Size: 84
	struct FRotator CameraViewportRotation[7];  // Offset: 168 Size: 84
	float CameraOrbitDistance;  // Offset: 252 Size: 4
	float CameraFOV;  // Offset: 256 Size: 4
	float CameraOrthoWidth;  // Offset: 260 Size: 4
	char bUseCameraAspectRatio : 1;  // Offset: 264 Size: 1
	char pad_264_1 : 7;  // Offset: 264 Size: 1
	char pad_265[4];  // Offset: 265 Size: 4
	float CameraAspectRatio;  // Offset: 268 Size: 4
	char bRenderComponentOnly : 1;  // Offset: 272 Size: 1
	char pad_272_1 : 7;  // Offset: 272 Size: 1
	char pad_273[8];  // Offset: 273 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceArrayFloat4 Size 96
// Inherited 80 bytes 
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{

 public: 
	struct TArray<struct FVector4> floatData;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraRendererProperties Size 120
// Inherited 40 bytes 
class UNiagaraRendererProperties : public UNiagaraMergeable
{

 public: 
	struct FNiagaraPlatformSet Platforms;  // Offset: 40 Size: 48
	int32_t SortOrderHint;  // Offset: 88 Size: 4
	enum class ENiagaraRendererMotionVectorSetting MotionVectorSetting;  // Offset: 92 Size: 4
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bIsEnabled : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bMotionBlurEnabled : 1;  // Offset: 97 Size: 1
	char pad_98[22];  // Offset: 98 Size: 22



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraBoostTrailRendererProperties Size 1488
// Inherited 120 bytes 
class UNiagaraBoostTrailRendererProperties : public UNiagaraRendererProperties
{

 public: 
	struct UMaterialInterface* Material;  // Offset: 120 Size: 8
	struct FNiagaraUserParameterBinding MaterialUserParamBinding;  // Offset: 128 Size: 32
	float CurveTension;  // Offset: 160 Size: 4
	enum class ENiagaraBoostTrailTessellationMode TessellationMode;  // Offset: 164 Size: 1
	char pad_165[3];  // Offset: 165 Size: 3
	int32_t TessellationFactor;  // Offset: 168 Size: 4
	char pad_172_1 : 7;  // Offset: 172 Size: 1
	bool bUseConstantFactor : 1;  // Offset: 172 Size: 1
	char pad_173[3];  // Offset: 173 Size: 3
	float TessellationAngle;  // Offset: 176 Size: 4
	char pad_180_1 : 7;  // Offset: 180 Size: 1
	bool bScreenSpaceTessellation : 1;  // Offset: 180 Size: 1
	char pad_181[3];  // Offset: 181 Size: 3
	struct FNiagaraVariableAttributeBinding PositionBinding;  // Offset: 184 Size: 88
	struct FNiagaraVariableAttributeBinding ColorBinding;  // Offset: 272 Size: 88
	struct FNiagaraVariableAttributeBinding VelocityBinding;  // Offset: 360 Size: 88
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // Offset: 448 Size: 88
	struct FNiagaraVariableAttributeBinding BoostTrailWidthBinding;  // Offset: 536 Size: 88
	struct FNiagaraVariableAttributeBinding BoostTrailIdBinding;  // Offset: 624 Size: 88
	struct FNiagaraVariableAttributeBinding BoostTrailLinkOrderBinding;  // Offset: 712 Size: 88
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding;  // Offset: 800 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // Offset: 888 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // Offset: 976 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // Offset: 1064 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // Offset: 1152 Size: 88
	struct FNiagaraVariableAttributeBinding BoostTrailUVDistance;  // Offset: 1240 Size: 88
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings;  // Offset: 1328 Size: 16
	char pad_1344[144];  // Offset: 1344 Size: 144



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraComponent Size 1568
// Inherited 1136 bytes 
class UNiagaraComponent : public UFXSystemComponent
{

 public: 
	struct UNiagaraSystem* Asset;  // Offset: 1136 Size: 8
	enum class ENiagaraTickBehavior TickBehavior;  // Offset: 1144 Size: 1
	char pad_1145[3];  // Offset: 1145 Size: 3
	int32_t RandomSeedOffset;  // Offset: 1148 Size: 4
	struct FNiagaraUserRedirectionParameterStore OverrideParameters;  // Offset: 1152 Size: 200
	char bForceSolo : 1;  // Offset: 1352 Size: 1
	char bEnableGpuComputeDebug : 1;  // Offset: 1352 Size: 1
	char pad_1352_1 : 6;  // Offset: 1352 Size: 1
	char pad_1353[48];  // Offset: 1353 Size: 48
	char bAutoDestroy : 1;  // Offset: 1400 Size: 1
	char bRenderingEnabled : 1;  // Offset: 1400 Size: 1
	char bAutoManageAttachment : 1;  // Offset: 1400 Size: 1
	char bAutoAttachWeldSimulatedBodies : 1;  // Offset: 1400 Size: 1
	char pad_1400_1 : 4;  // Offset: 1400 Size: 1
	char pad_1401[4];  // Offset: 1401 Size: 4
	float MaxTimeBeforeForceUpdateTransform;  // Offset: 1404 Size: 4
	struct TArray<struct FNiagaraMaterialOverride> EmitterMaterials;  // Offset: 1408 Size: 16
	char pad_1424[8];  // Offset: 1424 Size: 8
	struct FMulticastInlineDelegate OnSystemFinished;  // Offset: 1432 Size: 16
	struct TWeakObjectPtr<USceneComponent> AutoAttachParent;  // Offset: 1448 Size: 8
	struct FName AutoAttachSocketName;  // Offset: 1456 Size: 8
	enum class EAttachmentRule AutoAttachLocationRule;  // Offset: 1464 Size: 1
	enum class EAttachmentRule AutoAttachRotationRule;  // Offset: 1465 Size: 1
	enum class EAttachmentRule AutoAttachScaleRule;  // Offset: 1466 Size: 1
	char pad_1467[101];  // Offset: 1467 Size: 101



 // Functions 
 public:
	void SetVariableVec4(struct FName InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetVariableVec4
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2
	void SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget); // Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	void SetVariableQuat(struct FName InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetVariableQuat
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetVariableObject
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // Function Niagara.NiagaraComponent.SetVariableMaterial
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat
	void SetVariableBool(struct FName InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetVariableBool
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetVariableActor
	void SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior); // Function Niagara.NiagaraComponent.SetTickBehavior
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta
	void SetRenderingEnabled(bool bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled
	void SetRandomSeedOffset(int32_t NewRandomSeedOffset); // Function Niagara.NiagaraComponent.SetRandomSeedOffset
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance
	void SetPaused(bool bInPaused); // Function Niagara.NiagaraComponent.SetPaused
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool block); // Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	void SetGpuComputeDebug(bool bEnableDebug); // Function Niagara.NiagaraComponent.SetGpuComputeDebug
	void SetForceSolo(bool bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	void SetAutoDestroy(bool bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy
	void SetAsset(struct UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters); // Function Niagara.NiagaraComponent.SetAsset
	void SetAllowScalability(bool bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem
	bool IsPaused(); // Function Niagara.NiagaraComponent.IsPaused
	void InitForPerformanceBaseline(); // Function Niagara.NiagaraComponent.InitForPerformanceBaseline
	enum class ENiagaraTickBehavior GetTickBehavior(); // Function Niagara.NiagaraComponent.GetTickBehavior
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta
	int32_t GetRandomSeedOffset(); // Function Niagara.NiagaraComponent.GetRandomSeedOffset
	bool GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	float GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime
	bool GetLockDesiredAgeDeltaTimeToSeekDelta(); // Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	bool GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface
	struct UNiagaraSystem* GetAsset(); // Function Niagara.NiagaraComponent.GetAsset
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation
}; 
 
 


//Class Niagara.NiagaraDataInterfaceGBuffer Size 56
// Inherited 56 bytes 
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraEditorParametersAdapterBase Size 40
// Inherited 40 bytes 
class UNiagaraEditorParametersAdapterBase : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraComponentPool Size 128
// Inherited 40 bytes 
class UNiagaraComponentPool : public UObject
{

 public: 
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools;  // Offset: 40 Size: 80
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceArrayFloat Size 96
// Inherited 80 bytes 
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{

 public: 
	struct TArray<float> floatData;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceNeighborGrid3D Size 264
// Inherited 256 bytes 
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{

 public: 
	uint32_t MaxNeighborsPerCell;  // Offset: 256 Size: 4
	char pad_260[4];  // Offset: 260 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraComponentSettings Size 280
// Inherited 40 bytes 
class UNiagaraComponentSettings : public UObject
{

 public: 
	struct TSet<struct FName> SuppressActivationList;  // Offset: 40 Size: 80
	struct TSet<struct FName> ForceAutoPooolingList;  // Offset: 120 Size: 80
	struct TSet<struct FNiagaraEmitterNameSettingsRef> SuppressEmitterList;  // Offset: 200 Size: 80



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraConvertInPlaceUtilityBase Size 40
// Inherited 40 bytes 
class UNiagaraConvertInPlaceUtilityBase : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraMeshRendererProperties Size 2200
// Inherited 120 bytes 
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{

 public: 
	struct TArray<struct FNiagaraMeshRendererMeshProperties> Meshes;  // Offset: 120 Size: 16
	enum class ENiagaraRendererSourceDataMode SourceMode;  // Offset: 136 Size: 1
	enum class ENiagaraSortMode SortMode;  // Offset: 137 Size: 1
	char pad_138[2];  // Offset: 138 Size: 2
	char bOverrideMaterials : 1;  // Offset: 140 Size: 1
	char bSortOnlyWhenTranslucent : 1;  // Offset: 140 Size: 1
	char bGpuLowLatencyTranslucency : 1;  // Offset: 140 Size: 1
	char bSubImageBlend : 1;  // Offset: 140 Size: 1
	char bEnableFrustumCulling : 1;  // Offset: 140 Size: 1
	char bEnableCameraDistanceCulling : 1;  // Offset: 140 Size: 1
	char bEnableMeshFlipbook : 1;  // Offset: 140 Size: 1
	char pad_140_1 : 1;  // Offset: 140 Size: 1
	char pad_141[4];  // Offset: 141 Size: 4
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials;  // Offset: 144 Size: 16
	struct FVector2D SubImageSize;  // Offset: 160 Size: 8
	enum class ENiagaraMeshFacingMode FacingMode;  // Offset: 168 Size: 1
	char pad_169[3];  // Offset: 169 Size: 3
	char bLockedAxisEnable : 1;  // Offset: 172 Size: 1
	char pad_172_1 : 7;  // Offset: 172 Size: 1
	char pad_173[4];  // Offset: 173 Size: 4
	struct FVector LockedAxis;  // Offset: 176 Size: 12
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace;  // Offset: 188 Size: 1
	char pad_189[3];  // Offset: 189 Size: 3
	float MinCameraDistance;  // Offset: 192 Size: 4
	float MaxCameraDistance;  // Offset: 196 Size: 4
	uint32_t RendererVisibility;  // Offset: 200 Size: 4
	char pad_204[4];  // Offset: 204 Size: 4
	struct FNiagaraVariableAttributeBinding PositionBinding;  // Offset: 208 Size: 88
	struct FNiagaraVariableAttributeBinding ColorBinding;  // Offset: 296 Size: 88
	struct FNiagaraVariableAttributeBinding VelocityBinding;  // Offset: 384 Size: 88
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding;  // Offset: 472 Size: 88
	struct FNiagaraVariableAttributeBinding ScaleBinding;  // Offset: 560 Size: 88
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding;  // Offset: 648 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // Offset: 736 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // Offset: 824 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // Offset: 912 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // Offset: 1000 Size: 88
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding;  // Offset: 1088 Size: 88
	struct FNiagaraVariableAttributeBinding CustomSortingBinding;  // Offset: 1176 Size: 88
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // Offset: 1264 Size: 88
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding;  // Offset: 1352 Size: 88
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // Offset: 1440 Size: 88
	struct FNiagaraVariableAttributeBinding MeshIndexBinding;  // Offset: 1528 Size: 88
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings;  // Offset: 1616 Size: 16
	struct FNiagaraVariableAttributeBinding PrevPositionBinding;  // Offset: 1632 Size: 88
	struct FNiagaraVariableAttributeBinding PrevScaleBinding;  // Offset: 1720 Size: 88
	struct FNiagaraVariableAttributeBinding PrevMeshOrientationBinding;  // Offset: 1808 Size: 88
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;  // Offset: 1896 Size: 88
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding;  // Offset: 1984 Size: 88
	char pad_2072[104];  // Offset: 2072 Size: 104
	struct UStaticMesh* ParticleMesh;  // Offset: 2176 Size: 8
	struct FVector PivotOffset;  // Offset: 2184 Size: 12
	enum class ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;  // Offset: 2196 Size: 1
	char pad_2197[3];  // Offset: 2197 Size: 3



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterface Size 56
// Inherited 40 bytes 
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{

 public: 
	char pad_40[16];  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceSkeletalMesh Size 200
// Inherited 56 bytes 
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{

 public: 
	enum class ENDISkeletalMesh_SourceMode SourceMode;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7
	struct AActor* Source;  // Offset: 64 Size: 8
	struct FNiagaraUserParameterBinding MeshUserParameter;  // Offset: 72 Size: 32
	struct USkeletalMeshComponent* SourceComponent;  // Offset: 104 Size: 8
	enum class ENDISkeletalMesh_SkinningMode SkinningMode;  // Offset: 112 Size: 1
	char pad_113[7];  // Offset: 113 Size: 7
	struct TArray<struct FName> SamplingRegions;  // Offset: 120 Size: 16
	int32_t WholeMeshLOD;  // Offset: 136 Size: 4
	char pad_140[4];  // Offset: 140 Size: 4
	struct TArray<struct FName> FilteredBones;  // Offset: 144 Size: 16
	struct TArray<struct FName> FilteredSockets;  // Offset: 160 Size: 16
	struct FName ExcludeBoneName;  // Offset: 176 Size: 8
	char bExcludeBone : 1;  // Offset: 184 Size: 1
	char pad_184_1 : 7;  // Offset: 184 Size: 1
	char pad_185[4];  // Offset: 185 Size: 4
	int32_t UvSetIndex;  // Offset: 188 Size: 4
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	bool bRequireCurrentFrameData : 1;  // Offset: 192 Size: 1
	char pad_193[7];  // Offset: 193 Size: 7



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterface2DArrayTexture Size 80
// Inherited 56 bytes 
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{

 public: 
	struct UTexture2DArray* Texture;  // Offset: 56 Size: 8
	char pad_64[16];  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceArray Size 80
// Inherited 56 bytes 
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{

 public: 
	char pad_56[8];  // Offset: 56 Size: 8
	int32_t MaxElements;  // Offset: 64 Size: 4
	char pad_68[12];  // Offset: 68 Size: 12



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceAudioSpectrum Size 80
// Inherited 64 bytes 
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{

 public: 
	int32_t Resolution;  // Offset: 64 Size: 4
	float MinimumFrequency;  // Offset: 68 Size: 4
	float MaximumFrequency;  // Offset: 72 Size: 4
	float NoiseFloorDb;  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDebugHUDSettings Size 296
// Inherited 40 bytes 
class UNiagaraDebugHUDSettings : public UObject
{

 public: 
	char pad_40[32];  // Offset: 40 Size: 32
	struct FNiagaraDebugHUDSettingsData Data;  // Offset: 72 Size: 224



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceDebugDraw Size 56
// Inherited 56 bytes 
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceArrayFloat3 Size 96
// Inherited 80 bytes 
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{

 public: 
	struct TArray<struct FVector> floatData;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceArrayQuat Size 96
// Inherited 80 bytes 
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{

 public: 
	struct TArray<struct FQuat> QuatData;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceGrid3DCollection Size 384
// Inherited 256 bytes 
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{

 public: 
	int32_t NumAttributes;  // Offset: 256 Size: 4
	char pad_260[4];  // Offset: 260 Size: 4
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // Offset: 264 Size: 32
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat;  // Offset: 296 Size: 1
	char bOverrideFormat : 1;  // Offset: 297 Size: 1
	char pad_297_1 : 7;  // Offset: 297 Size: 1
	char pad_298[87];  // Offset: 298 Size: 87



 // Functions 
 public:
	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	bool FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	bool FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
}; 
 
 


//Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary Size 40
// Inherited 40 bytes 
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void SetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
	void SetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector4& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
	void SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector4>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	void SetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector2D& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
	void SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector2D>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	void SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	void SetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FQuat& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
	void SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FQuat>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	void SetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
	void SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	void SetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
	void SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<float>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	void SetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FLinearColor& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
	void SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FLinearColor>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	void SetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
	void SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<bool>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	struct FVector GetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
	struct FVector4 GetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
	struct TArray<struct FVector4> GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	struct FVector2D GetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
	struct TArray<struct FVector2D> GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	struct TArray<struct FVector> GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	struct FQuat GetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
	struct TArray<struct FQuat> GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	int32_t GetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
	struct TArray<int32_t> GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	float GetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
	struct TArray<float> GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	struct FLinearColor GetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
	struct TArray<struct FLinearColor> GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	bool GetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
	struct TArray<bool> GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
}; 
 
 


//Class Niagara.NiagaraDataInterfaceAudioSubmix Size 64
// Inherited 56 bytes 
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{

 public: 
	struct USoundSubmix* Submix;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceAudioOscilloscope Size 72
// Inherited 56 bytes 
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{

 public: 
	struct USoundSubmix* Submix;  // Offset: 56 Size: 8
	int32_t Resolution;  // Offset: 64 Size: 4
	float ScopeInMilliseconds;  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceAudioPlayer Size 112
// Inherited 56 bytes 
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{

 public: 
	struct USoundBase* SoundToPlay;  // Offset: 56 Size: 8
	struct USoundAttenuation* Attenuation;  // Offset: 64 Size: 8
	struct USoundConcurrency* Concurrency;  // Offset: 72 Size: 8
	struct TArray<struct FName> ParameterNames;  // Offset: 80 Size: 16
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bLimitPlaysPerTick : 1;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	int32_t MaxPlaysPerTick;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bStopWhenComponentIsDestroyed : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceCurve Size 240
// Inherited 112 bytes 
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{

 public: 
	struct FRichCurve Curve;  // Offset: 112 Size: 128



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceCamera Size 64
// Inherited 56 bytes 
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{

 public: 
	int32_t PlayerControllerIndex;  // Offset: 56 Size: 4
	char pad_60_1 : 7;  // Offset: 60 Size: 1
	bool bRequireCurrentFrameData : 1;  // Offset: 60 Size: 1
	char pad_61[3];  // Offset: 61 Size: 3



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceCurveBase Size 112
// Inherited 56 bytes 
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{

 public: 
	struct TArray<float> ShaderLUT;  // Offset: 56 Size: 16
	float LUTMinTime;  // Offset: 72 Size: 4
	float LUTMaxTime;  // Offset: 76 Size: 4
	float LUTInvTimeRange;  // Offset: 80 Size: 4
	float LUTNumSamplesMinusOne;  // Offset: 84 Size: 4
	char bUseLUT : 1;  // Offset: 88 Size: 1
	char bExposeCurve : 1;  // Offset: 88 Size: 1
	char pad_88_1 : 6;  // Offset: 88 Size: 1
	char pad_89[4];  // Offset: 89 Size: 4
	struct FName ExposedName;  // Offset: 92 Size: 8
	char pad_100[4];  // Offset: 100 Size: 4
	struct UTexture2D* ExposedTexture;  // Offset: 104 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceColorCurve Size 624
// Inherited 112 bytes 
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{

 public: 
	struct FRichCurve RedCurve;  // Offset: 112 Size: 128
	struct FRichCurve GreenCurve;  // Offset: 240 Size: 128
	struct FRichCurve BlueCurve;  // Offset: 368 Size: 128
	struct FRichCurve AlphaCurve;  // Offset: 496 Size: 128



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceParticleRead Size 232
// Inherited 216 bytes 
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{

 public: 
	struct FString EmitterName;  // Offset: 216 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceIntRenderTarget2D Size 336
// Inherited 216 bytes 
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{

 public: 
	struct FIntPoint Size;  // Offset: 216 Size: 8
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // Offset: 224 Size: 32
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets;  // Offset: 256 Size: 80



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraEmitter Size 672
// Inherited 40 bytes 
class UNiagaraEmitter : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bLocalSpace : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bDeterminism : 1;  // Offset: 41 Size: 1
	char pad_42[2];  // Offset: 42 Size: 2
	int32_t RandomSeed;  // Offset: 44 Size: 4
	enum class EParticleAllocationMode AllocationMode;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	int32_t PreAllocationCount;  // Offset: 52 Size: 4
	struct FNiagaraEmitterScriptProperties UpdateScriptProps;  // Offset: 56 Size: 40
	struct FNiagaraEmitterScriptProperties SpawnScriptProps;  // Offset: 96 Size: 40
	enum class ENiagaraSimTarget SimTarget;  // Offset: 136 Size: 1
	char pad_137[3];  // Offset: 137 Size: 3
	struct FBox FixedBounds;  // Offset: 140 Size: 28
	int32_t MinDetailLevel;  // Offset: 168 Size: 4
	int32_t MaxDetailLevel;  // Offset: 172 Size: 4
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides;  // Offset: 176 Size: 20
	char pad_196[4];  // Offset: 196 Size: 4
	struct FNiagaraPlatformSet Platforms;  // Offset: 200 Size: 48
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;  // Offset: 248 Size: 16
	char bInterpolatedSpawning : 1;  // Offset: 264 Size: 1
	char bFixedBounds : 1;  // Offset: 264 Size: 1
	char bUseMinDetailLevel : 1;  // Offset: 264 Size: 1
	char bUseMaxDetailLevel : 1;  // Offset: 264 Size: 1
	char bOverrideGlobalSpawnCountScale : 1;  // Offset: 264 Size: 1
	char bRequiresPersistentIDs : 1;  // Offset: 264 Size: 1
	char bCombineEventSpawn : 1;  // Offset: 264 Size: 1
	char pad_264_1 : 1;  // Offset: 264 Size: 1
	char pad_265[4];  // Offset: 265 Size: 4
	float MaxDeltaTimePerTick;  // Offset: 268 Size: 4
	uint32_t DefaultShaderStageIndex;  // Offset: 272 Size: 4
	uint32_t MaxUpdateIterations;  // Offset: 276 Size: 4
	struct TSet<uint32_t> SpawnStages;  // Offset: 280 Size: 80
	char bSimulationStagesEnabled : 1;  // Offset: 360 Size: 1
	char bDeprecatedShaderStagesEnabled : 1;  // Offset: 360 Size: 1
	char bLimitDeltaTime : 1;  // Offset: 360 Size: 1
	char pad_360_1 : 5;  // Offset: 360 Size: 1
	char pad_361[8];  // Offset: 361 Size: 8
	struct FString UniqueEmitterName;  // Offset: 368 Size: 16
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties;  // Offset: 384 Size: 16
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;  // Offset: 400 Size: 16
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages;  // Offset: 416 Size: 16
	struct UNiagaraScript* GPUComputeScript;  // Offset: 432 Size: 8
	struct TArray<struct FName> SharedEventGeneratorIds;  // Offset: 440 Size: 16
	char pad_456[216];  // Offset: 456 Size: 216



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceCubeTexture Size 72
// Inherited 56 bytes 
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{

 public: 
	struct UTextureCube* Texture;  // Offset: 56 Size: 8
	char pad_64[8];  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceVectorField Size 72
// Inherited 56 bytes 
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{

 public: 
	struct UVectorField* Field;  // Offset: 56 Size: 8
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bTileX : 1;  // Offset: 64 Size: 1
	char pad_65_1 : 7;  // Offset: 65 Size: 1
	bool bTileY : 1;  // Offset: 65 Size: 1
	char pad_66_1 : 7;  // Offset: 66 Size: 1
	bool bTileZ : 1;  // Offset: 66 Size: 1
	char pad_67[5];  // Offset: 67 Size: 5



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceOcclusion Size 56
// Inherited 56 bytes 
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceGrid3D Size 256
// Inherited 216 bytes 
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{

 public: 
	struct FIntVector NumCells;  // Offset: 216 Size: 12
	float CellSize;  // Offset: 228 Size: 4
	int32_t NumCellsMaxAxis;  // Offset: 232 Size: 4
	enum class ESetResolutionMethod SetResolutionMethod;  // Offset: 236 Size: 4
	struct FVector WorldBBoxSize;  // Offset: 240 Size: 12
	char pad_252[4];  // Offset: 252 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraParticleCallbackHandler Size 40
// Inherited 40 bytes 
class UNiagaraParticleCallbackHandler : public UInterface
{

 public: 



 // Functions 
 public:
	void ReceiveParticleData(struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
}; 
 
 


//Class Niagara.NiagaraDataInterfaceGrid2D Size 248
// Inherited 216 bytes 
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{

 public: 
	int32_t NumCellsX;  // Offset: 216 Size: 4
	int32_t NumCellsY;  // Offset: 220 Size: 4
	int32_t NumCellsMaxAxis;  // Offset: 224 Size: 4
	int32_t NumAttributes;  // Offset: 228 Size: 4
	char pad_232_1 : 7;  // Offset: 232 Size: 1
	bool SetGridFromMaxAxis : 1;  // Offset: 232 Size: 1
	char pad_233[3];  // Offset: 233 Size: 3
	struct FVector2D WorldBBoxSize;  // Offset: 236 Size: 8
	char pad_244[4];  // Offset: 244 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader Size 360
// Inherited 248 bytes 
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{

 public: 
	struct FString EmitterName;  // Offset: 248 Size: 16
	struct FString DIName;  // Offset: 264 Size: 16
	char pad_280[80];  // Offset: 280 Size: 80



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceLandscape Size 88
// Inherited 56 bytes 
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{

 public: 
	struct AActor* SourceLandscape;  // Offset: 56 Size: 8
	enum class ENDILandscape_SourceMode SourceMode;  // Offset: 64 Size: 1
	char pad_65[7];  // Offset: 65 Size: 7
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials;  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfacePlatformSet Size 104
// Inherited 56 bytes 
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{

 public: 
	struct FNiagaraPlatformSet Platforms;  // Offset: 56 Size: 48



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceRenderTarget2D Size 424
// Inherited 216 bytes 
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{

 public: 
	struct FIntPoint Size;  // Offset: 216 Size: 8
	enum class ENiagaraMipMapGeneration MipMapGeneration;  // Offset: 224 Size: 1
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat;  // Offset: 225 Size: 1
	char bInheritUserParameterSettings : 1;  // Offset: 226 Size: 1
	char bOverrideFormat : 1;  // Offset: 226 Size: 1
	char pad_226_1 : 6;  // Offset: 226 Size: 1
	char pad_227[6];  // Offset: 227 Size: 6
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // Offset: 232 Size: 32
	char pad_264[80];  // Offset: 264 Size: 80
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets;  // Offset: 344 Size: 80



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceRenderTargetCube Size 336
// Inherited 216 bytes 
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{

 public: 
	int32_t Size;  // Offset: 216 Size: 4
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat;  // Offset: 220 Size: 1
	char bInheritUserParameterSettings : 1;  // Offset: 221 Size: 1
	char bOverrideFormat : 1;  // Offset: 221 Size: 1
	char pad_221_1 : 6;  // Offset: 221 Size: 1
	char pad_222[3];  // Offset: 222 Size: 3
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // Offset: 224 Size: 32
	struct TMap<uint64_t, struct UTextureRenderTargetCube*> ManagedRenderTargets;  // Offset: 256 Size: 80



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceRenderTargetVolume Size 344
// Inherited 216 bytes 
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{

 public: 
	struct FIntVector Size;  // Offset: 216 Size: 12
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat;  // Offset: 228 Size: 1
	char bInheritUserParameterSettings : 1;  // Offset: 229 Size: 1
	char bOverrideFormat : 1;  // Offset: 229 Size: 1
	char pad_229_1 : 6;  // Offset: 229 Size: 1
	char pad_230[3];  // Offset: 230 Size: 3
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // Offset: 232 Size: 32
	struct TMap<uint64_t, struct UTextureRenderTargetVolume*> ManagedRenderTargets;  // Offset: 264 Size: 80



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceSpline Size 96
// Inherited 56 bytes 
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{

 public: 
	struct AActor* Source;  // Offset: 56 Size: 8
	struct FNiagaraUserParameterBinding SplineUserParameter;  // Offset: 64 Size: 32



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceStaticMesh Size 136
// Inherited 56 bytes 
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{

 public: 
	enum class ENDIStaticMesh_SourceMode SourceMode;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7
	struct UStaticMesh* DefaultMesh;  // Offset: 64 Size: 8
	struct AActor* Source;  // Offset: 72 Size: 8
	struct UStaticMeshComponent* SourceComponent;  // Offset: 80 Size: 8
	struct FNDIStaticMeshSectionFilter SectionFilter;  // Offset: 88 Size: 16
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bUsePhysicsBodyVelocity : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7
	struct TArray<struct FName> FilteredSockets;  // Offset: 112 Size: 16
	char pad_128[8];  // Offset: 128 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceTexture Size 72
// Inherited 56 bytes 
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{

 public: 
	struct UTexture* Texture;  // Offset: 56 Size: 8
	char pad_64[8];  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceVector2DCurve Size 368
// Inherited 112 bytes 
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{

 public: 
	struct FRichCurve XCurve;  // Offset: 112 Size: 128
	struct FRichCurve YCurve;  // Offset: 240 Size: 128



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraFunctionLibrary Size 40
// Inherited 40 bytes 
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTextureObject
	void SetTexture2DArrayObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture2DArray* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
	void SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& SamplingRegions); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
}; 
 
 


//Class Niagara.NiagaraDataInterfaceVector4Curve Size 624
// Inherited 112 bytes 
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{

 public: 
	struct FRichCurve XCurve;  // Offset: 112 Size: 128
	struct FRichCurve YCurve;  // Offset: 240 Size: 128
	struct FRichCurve ZCurve;  // Offset: 368 Size: 128
	struct FRichCurve WCurve;  // Offset: 496 Size: 128



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceVectorCurve Size 496
// Inherited 112 bytes 
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{

 public: 
	struct FRichCurve XCurve;  // Offset: 112 Size: 128
	struct FRichCurve YCurve;  // Offset: 240 Size: 128
	struct FRichCurve ZCurve;  // Offset: 368 Size: 128



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraDataInterfaceVolumeTexture Size 80
// Inherited 56 bytes 
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{

 public: 
	struct UVolumeTexture* Texture;  // Offset: 56 Size: 8
	char pad_64[16];  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraEditorDataBase Size 40
// Inherited 40 bytes 
class UNiagaraEditorDataBase : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraSignificanceHandler Size 40
// Inherited 40 bytes 
class UNiagaraSignificanceHandler : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraSignificanceHandlerDistance Size 40
// Inherited 40 bytes 
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraSignificanceHandlerAge Size 40
// Inherited 40 bytes 
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraEffectType Size 152
// Inherited 40 bytes 
class UNiagaraEffectType : public UObject
{

 public: 
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency;  // Offset: 40 Size: 4
	enum class ENiagaraCullReaction CullReaction;  // Offset: 44 Size: 4
	struct UNiagaraSignificanceHandler* SignificanceHandler;  // Offset: 48 Size: 8
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;  // Offset: 56 Size: 16
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;  // Offset: 72 Size: 16
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;  // Offset: 88 Size: 16
	char pad_104[8];  // Offset: 104 Size: 8
	struct UNiagaraBaselineController* PerformanceBaselineController;  // Offset: 112 Size: 8
	struct FNiagaraPerfBaselineStats PerfBaselineStats;  // Offset: 120 Size: 16
	struct FGuid PerfBaselineVersion;  // Offset: 136 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles Size 48
// Inherited 40 bytes 
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{

 public: 
	uint32_t NumParticles;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraLightRendererProperties Size 816
// Inherited 120 bytes 
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{

 public: 
	char bUseInverseSquaredFalloff : 1;  // Offset: 120 Size: 1
	char bAffectsTranslucency : 1;  // Offset: 120 Size: 1
	char bAlphaScalesBrightness : 1;  // Offset: 120 Size: 1
	char pad_120_1 : 5;  // Offset: 120 Size: 1
	char pad_121[4];  // Offset: 121 Size: 4
	float RadiusScale;  // Offset: 124 Size: 4
	float DefaultExponent;  // Offset: 128 Size: 4
	struct FVector ColorAdd;  // Offset: 132 Size: 12
	int32_t RendererVisibility;  // Offset: 144 Size: 4
	char pad_148[4];  // Offset: 148 Size: 4
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;  // Offset: 152 Size: 88
	struct FNiagaraVariableAttributeBinding LightExponentBinding;  // Offset: 240 Size: 88
	struct FNiagaraVariableAttributeBinding PositionBinding;  // Offset: 328 Size: 88
	struct FNiagaraVariableAttributeBinding ColorBinding;  // Offset: 416 Size: 88
	struct FNiagaraVariableAttributeBinding RadiusBinding;  // Offset: 504 Size: 88
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding;  // Offset: 592 Size: 88
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // Offset: 680 Size: 88
	char pad_768[48];  // Offset: 768 Size: 48



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraMessageDataBase Size 40
// Inherited 40 bytes 
class UNiagaraMessageDataBase : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraParameterCollectionInstance Size 224
// Inherited 40 bytes 
class UNiagaraParameterCollectionInstance : public UObject
{

 public: 
	struct UNiagaraParameterCollection* Collection;  // Offset: 40 Size: 8
	struct TArray<struct FNiagaraVariable> OverridenParameters;  // Offset: 48 Size: 16
	struct FNiagaraParameterStore ParameterStorage;  // Offset: 64 Size: 120
	char pad_184[40];  // Offset: 184 Size: 40



 // Functions 
 public:
	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	void SetVector4Parameter(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	void SetQuatParameter(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	void SetBoolParameter(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	bool GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
}; 
 
 


//Class Niagara.NiagaraParameterCollection Size 96
// Inherited 40 bytes 
class UNiagaraParameterCollection : public UObject
{

 public: 
	struct FName Namespace;  // Offset: 40 Size: 8
	struct TArray<struct FNiagaraVariable> Parameters;  // Offset: 48 Size: 16
	struct UMaterialParameterCollection* SourceMaterialCollection;  // Offset: 64 Size: 8
	struct UNiagaraParameterCollectionInstance* DefaultInstance;  // Offset: 72 Size: 8
	struct FGuid CompileId;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraParameterDefinitionsBase Size 40
// Inherited 40 bytes 
class UNiagaraParameterDefinitionsBase : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraBaselineController Size 104
// Inherited 40 bytes 
class UNiagaraBaselineController : public UObject
{

 public: 
	float TestDuration;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4
	struct UNiagaraEffectType* EffectType;  // Offset: 48 Size: 8
	struct ANiagaraPerfBaselineActor* Owner;  // Offset: 56 Size: 8
	struct TSoftObjectPtr<UNiagaraSystem> System;  // Offset: 64 Size: 40



 // Functions 
 public:
	bool OnTickTest(); // Function Niagara.NiagaraBaselineController.OnTickTest
	void OnOwnerTick(float DeltaTime); // Function Niagara.NiagaraBaselineController.OnOwnerTick
	void OnEndTest(struct FNiagaraPerfBaselineStats Stats); // Function Niagara.NiagaraBaselineController.OnEndTest
	void OnBeginTest(); // Function Niagara.NiagaraBaselineController.OnBeginTest
	struct UNiagaraSystem* GetSystem(); // Function Niagara.NiagaraBaselineController.GetSystem
}; 
 
 


//Class Niagara.NiagaraBaselineController_Basic Size 128
// Inherited 104 bytes 
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{

 public: 
	int32_t NumInstances;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4
	struct TArray<struct UNiagaraComponent*> SpawnedComponents;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraPerfBaselineActor Size 560
// Inherited 544 bytes 
class ANiagaraPerfBaselineActor : public AActor
{

 public: 
	struct UNiagaraBaselineController* Controller;  // Offset: 544 Size: 8
	struct UTextRenderComponent* Label;  // Offset: 552 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraPrecompileContainer Size 64
// Inherited 40 bytes 
class UNiagaraPrecompileContainer : public UObject
{

 public: 
	struct TArray<struct UNiagaraScript*> Scripts;  // Offset: 40 Size: 16
	struct UNiagaraSystem* System;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraPreviewAxis Size 40
// Inherited 40 bytes 
class UNiagaraPreviewAxis : public UObject
{

 public: 



 // Functions 
 public:
	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString& OutLabelText); // Function Niagara.NiagaraPreviewAxis.ApplyToPreview
}; 
 
 


//Class Niagara.NiagaraPreviewAxis_InterpParamBase Size 56
// Inherited 40 bytes 
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{

 public: 
	struct FName Param;  // Offset: 40 Size: 8
	int32_t Count;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraPreviewAxis_InterpParamInt32 Size 64
// Inherited 56 bytes 
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{

 public: 
	int32_t Min;  // Offset: 56 Size: 4
	int32_t Max;  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraPreviewAxis_InterpParamFloat Size 64
// Inherited 56 bytes 
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{

 public: 
	float Min;  // Offset: 56 Size: 4
	float Max;  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraPreviewAxis_InterpParamVector2D Size 72
// Inherited 56 bytes 
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{

 public: 
	struct FVector2D Min;  // Offset: 56 Size: 8
	struct FVector2D Max;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraPreviewAxis_InterpParamVector Size 80
// Inherited 56 bytes 
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{

 public: 
	struct FVector Min;  // Offset: 56 Size: 12
	struct FVector Max;  // Offset: 68 Size: 12



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraPreviewAxis_InterpParamVector4 Size 96
// Inherited 56 bytes 
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{

 public: 
	char pad_56[8];  // Offset: 56 Size: 8
	struct FVector4 Min;  // Offset: 64 Size: 16
	struct FVector4 Max;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor Size 88
// Inherited 56 bytes 
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{

 public: 
	struct FLinearColor Min;  // Offset: 56 Size: 16
	struct FLinearColor Max;  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraPreviewGrid Size 624
// Inherited 544 bytes 
class ANiagaraPreviewGrid : public AActor
{

 public: 
	struct UNiagaraSystem* System;  // Offset: 544 Size: 8
	enum class ENiagaraPreviewGridResetMode ResetMode;  // Offset: 552 Size: 1
	char pad_553[7];  // Offset: 553 Size: 7
	struct UNiagaraPreviewAxis* PreviewAxisX;  // Offset: 560 Size: 8
	struct UNiagaraPreviewAxis* PreviewAxisY;  // Offset: 568 Size: 8
	ANiagaraPreviewBase* PreviewClass;  // Offset: 576 Size: 8
	float SpacingX;  // Offset: 584 Size: 4
	float SpacingY;  // Offset: 588 Size: 4
	int32_t NumX;  // Offset: 592 Size: 4
	int32_t NumY;  // Offset: 596 Size: 4
	struct TArray<struct UChildActorComponent*> PreviewComponents;  // Offset: 600 Size: 16
	char pad_616[8];  // Offset: 616 Size: 8



 // Functions 
 public:
	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused
	void GetPreviews(struct TArray<struct UNiagaraComponent*>& OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
	void ActivatePreviews(bool bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews
}; 
 
 


//Class Niagara.NiagaraRibbonRendererProperties Size 2144
// Inherited 120 bytes 
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{

 public: 
	struct UMaterialInterface* Material;  // Offset: 120 Size: 8
	struct FNiagaraUserParameterBinding MaterialUserParamBinding;  // Offset: 128 Size: 32
	enum class ENiagaraRibbonFacingMode FacingMode;  // Offset: 160 Size: 1
	char pad_161[3];  // Offset: 161 Size: 3
	struct FNiagaraRibbonUVSettings UV0Settings;  // Offset: 164 Size: 36
	struct FNiagaraRibbonUVSettings UV1Settings;  // Offset: 200 Size: 36
	enum class ENiagaraRibbonDrawDirection DrawDirection;  // Offset: 236 Size: 1
	enum class ENiagaraRibbonShapeMode Shape;  // Offset: 237 Size: 1
	char pad_238_1 : 7;  // Offset: 238 Size: 1
	bool bEnableAccurateGeometry : 1;  // Offset: 238 Size: 1
	char pad_239[1];  // Offset: 239 Size: 1
	int32_t WidthSegmentationCount;  // Offset: 240 Size: 4
	int32_t MultiPlaneCount;  // Offset: 244 Size: 4
	int32_t TubeSubdivisions;  // Offset: 248 Size: 4
	char pad_252[4];  // Offset: 252 Size: 4
	struct TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices;  // Offset: 256 Size: 16
	float CurveTension;  // Offset: 272 Size: 4
	enum class ENiagaraRibbonTessellationMode TessellationMode;  // Offset: 276 Size: 1
	char pad_277[3];  // Offset: 277 Size: 3
	int32_t TessellationFactor;  // Offset: 280 Size: 4
	char pad_284_1 : 7;  // Offset: 284 Size: 1
	bool bUseConstantFactor : 1;  // Offset: 284 Size: 1
	char pad_285[3];  // Offset: 285 Size: 3
	float TessellationAngle;  // Offset: 288 Size: 4
	char pad_292_1 : 7;  // Offset: 292 Size: 1
	bool bScreenSpaceTessellation : 1;  // Offset: 292 Size: 1
	char pad_293[3];  // Offset: 293 Size: 3
	struct FNiagaraVariableAttributeBinding PositionBinding;  // Offset: 296 Size: 88
	struct FNiagaraVariableAttributeBinding ColorBinding;  // Offset: 384 Size: 88
	struct FNiagaraVariableAttributeBinding VelocityBinding;  // Offset: 472 Size: 88
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // Offset: 560 Size: 88
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding;  // Offset: 648 Size: 88
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding;  // Offset: 736 Size: 88
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding;  // Offset: 824 Size: 88
	struct FNiagaraVariableAttributeBinding RibbonIdBinding;  // Offset: 912 Size: 88
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;  // Offset: 1000 Size: 88
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding;  // Offset: 1088 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // Offset: 1176 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // Offset: 1264 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // Offset: 1352 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // Offset: 1440 Size: 88
	struct FNiagaraVariableAttributeBinding RibbonUVDistance;  // Offset: 1528 Size: 88
	struct FNiagaraVariableAttributeBinding U0OverrideBinding;  // Offset: 1616 Size: 88
	struct FNiagaraVariableAttributeBinding V0RangeOverrideBinding;  // Offset: 1704 Size: 88
	struct FNiagaraVariableAttributeBinding U1OverrideBinding;  // Offset: 1792 Size: 88
	struct FNiagaraVariableAttributeBinding V1RangeOverrideBinding;  // Offset: 1880 Size: 88
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings;  // Offset: 1968 Size: 16
	char pad_1984[160];  // Offset: 1984 Size: 160



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraScript Size 736
// Inherited 40 bytes 
class UNiagaraScript : public UNiagaraScriptBase
{

 public: 
	enum class ENiagaraScriptUsage Usage;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	struct FGuid UsageId;  // Offset: 44 Size: 16
	char pad_60[4];  // Offset: 60 Size: 4
	struct FNiagaraParameterStore RapidIterationParameters;  // Offset: 64 Size: 120
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;  // Offset: 184 Size: 152
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters;  // Offset: 336 Size: 16
	struct FNiagaraVMExecutableDataId CachedScriptVMId;  // Offset: 352 Size: 88
	char pad_440[16];  // Offset: 440 Size: 16
	struct FNiagaraVMExecutableData CachedScriptVM;  // Offset: 456 Size: 240
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences;  // Offset: 696 Size: 16
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;  // Offset: 712 Size: 16
	char pad_728[8];  // Offset: 728 Size: 8



 // Functions 
 public:
	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
}; 
 
 


//Class Niagara.NiagaraScriptSourceBase Size 72
// Inherited 40 bytes 
class UNiagaraScriptSourceBase : public UObject
{

 public: 
	char pad_40[32];  // Offset: 40 Size: 32



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraSettings Size 200
// Inherited 56 bytes 
class UNiagaraSettings : public UDeveloperSettings
{

 public: 
	struct FSoftObjectPath DefaultEffectType;  // Offset: 56 Size: 24
	struct TArray<struct FText> QualityLevels;  // Offset: 80 Size: 16
	struct TMap<struct FString, struct FText> ComponentRendererWarningsPerClass;  // Offset: 96 Size: 80
	enum class ETextureRenderTargetFormat DefaultRenderTargetFormat;  // Offset: 176 Size: 1
	enum class ENiagaraGpuBufferFormat DefaultGridFormat;  // Offset: 177 Size: 1
	char pad_178[2];  // Offset: 178 Size: 2
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;  // Offset: 180 Size: 4
	enum class ENDISkelMesh_GpuMaxInfluences NDISkelMesh_GpuMaxInfluences;  // Offset: 184 Size: 1
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat;  // Offset: 185 Size: 1
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat;  // Offset: 186 Size: 1
	char pad_187[5];  // Offset: 187 Size: 5
	struct UNiagaraEffectType* DefaultEffectTypePtr;  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraSimulationStageBase Size 64
// Inherited 40 bytes 
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{

 public: 
	struct UNiagaraScript* Script;  // Offset: 40 Size: 8
	struct FName SimulationStageName;  // Offset: 48 Size: 8
	char bEnabled : 1;  // Offset: 56 Size: 1
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	char pad_57[8];  // Offset: 57 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraSimulationStageGeneric Size 112
// Inherited 64 bytes 
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{

 public: 
	enum class ENiagaraIterationSource IterationSource;  // Offset: 64 Size: 1
	char pad_65[3];  // Offset: 65 Size: 3
	int32_t Iterations;  // Offset: 68 Size: 4
	char bSpawnOnly : 1;  // Offset: 72 Size: 1
	char bDisablePartialParticleUpdate : 1;  // Offset: 72 Size: 1
	char pad_72_1 : 6;  // Offset: 72 Size: 1
	char pad_73[8];  // Offset: 73 Size: 8
	struct FNiagaraVariableDataInterfaceBinding DataInterface;  // Offset: 80 Size: 32



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraSpriteRendererProperties Size 2736
// Inherited 120 bytes 
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{

 public: 
	struct UMaterialInterface* Material;  // Offset: 120 Size: 8
	enum class ENiagaraRendererSourceDataMode SourceMode;  // Offset: 128 Size: 1
	char pad_129[7];  // Offset: 129 Size: 7
	struct FNiagaraUserParameterBinding MaterialUserParamBinding;  // Offset: 136 Size: 32
	enum class ENiagaraSpriteAlignment Alignment;  // Offset: 168 Size: 1
	enum class ENiagaraSpriteFacingMode FacingMode;  // Offset: 169 Size: 1
	char pad_170[2];  // Offset: 170 Size: 2
	struct FVector2D PivotInUVSpace;  // Offset: 172 Size: 8
	enum class ENiagaraSortMode SortMode;  // Offset: 180 Size: 1
	char pad_181[3];  // Offset: 181 Size: 3
	struct FVector2D SubImageSize;  // Offset: 184 Size: 8
	char bSubImageBlend : 1;  // Offset: 192 Size: 1
	char bRemoveHMDRollInVR : 1;  // Offset: 192 Size: 1
	char bSortOnlyWhenTranslucent : 1;  // Offset: 192 Size: 1
	char bGpuLowLatencyTranslucency : 1;  // Offset: 192 Size: 1
	char pad_192_1 : 4;  // Offset: 192 Size: 1
	char pad_193[4];  // Offset: 193 Size: 4
	float MinFacingCameraBlendDistance;  // Offset: 196 Size: 4
	float MaxFacingCameraBlendDistance;  // Offset: 200 Size: 4
	char bEnableCameraDistanceCulling : 1;  // Offset: 204 Size: 1
	char pad_204_1 : 7;  // Offset: 204 Size: 1
	char pad_205[4];  // Offset: 205 Size: 4
	float MinCameraDistance;  // Offset: 208 Size: 4
	float MaxCameraDistance;  // Offset: 212 Size: 4
	uint32_t RendererVisibility;  // Offset: 216 Size: 4
	char pad_220[4];  // Offset: 220 Size: 4
	struct FNiagaraVariableAttributeBinding PositionBinding;  // Offset: 224 Size: 88
	struct FNiagaraVariableAttributeBinding ColorBinding;  // Offset: 312 Size: 88
	struct FNiagaraVariableAttributeBinding VelocityBinding;  // Offset: 400 Size: 88
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding;  // Offset: 488 Size: 88
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding;  // Offset: 576 Size: 88
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding;  // Offset: 664 Size: 88
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding;  // Offset: 752 Size: 88
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding;  // Offset: 840 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // Offset: 928 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // Offset: 1016 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // Offset: 1104 Size: 88
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // Offset: 1192 Size: 88
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding;  // Offset: 1280 Size: 88
	struct FNiagaraVariableAttributeBinding UVScaleBinding;  // Offset: 1368 Size: 88
	struct FNiagaraVariableAttributeBinding PivotOffsetBinding;  // Offset: 1456 Size: 88
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding;  // Offset: 1544 Size: 88
	struct FNiagaraVariableAttributeBinding CustomSortingBinding;  // Offset: 1632 Size: 88
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // Offset: 1720 Size: 88
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // Offset: 1808 Size: 88
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings;  // Offset: 1896 Size: 16
	struct FNiagaraVariableAttributeBinding PrevPositionBinding;  // Offset: 1912 Size: 88
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding;  // Offset: 2000 Size: 88
	struct FNiagaraVariableAttributeBinding PrevSpriteRotationBinding;  // Offset: 2088 Size: 88
	struct FNiagaraVariableAttributeBinding PrevSpriteSizeBinding;  // Offset: 2176 Size: 88
	struct FNiagaraVariableAttributeBinding PrevSpriteFacingBinding;  // Offset: 2264 Size: 88
	struct FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding;  // Offset: 2352 Size: 88
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;  // Offset: 2440 Size: 88
	struct FNiagaraVariableAttributeBinding PrevPivotOffsetBinding;  // Offset: 2528 Size: 88
	char pad_2616[120];  // Offset: 2616 Size: 120



 // Functions 
 public:
}; 
 
 


//Class Niagara.NiagaraSystem Size 1176
// Inherited 48 bytes 
class UNiagaraSystem : public UFXSystemAsset
{

 public: 
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bDumpDebugSystemInfo : 1;  // Offset: 48 Size: 1
	char pad_49_1 : 7;  // Offset: 49 Size: 1
	bool bDumpDebugEmitterInfo : 1;  // Offset: 49 Size: 1
	char pad_50[1];  // Offset: 50 Size: 1
	char pad_51_1 : 7;  // Offset: 51 Size: 1
	bool bRequireCurrentFrameData : 1;  // Offset: 51 Size: 1
	char bFixedBounds : 1;  // Offset: 52 Size: 1
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	char pad_53[4];  // Offset: 53 Size: 4
	struct UNiagaraEffectType* EffectType;  // Offset: 56 Size: 8
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bOverrideScalabilitySettings : 1;  // Offset: 64 Size: 1
	char pad_65[7];  // Offset: 65 Size: 7
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides;  // Offset: 72 Size: 16
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;  // Offset: 88 Size: 16
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles;  // Offset: 104 Size: 16
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;  // Offset: 120 Size: 16
	struct UNiagaraScript* SystemSpawnScript;  // Offset: 136 Size: 8
	struct UNiagaraScript* SystemUpdateScript;  // Offset: 144 Size: 8
	char pad_152[16];  // Offset: 152 Size: 16
	struct FNiagaraSystemCompiledData SystemCompiledData;  // Offset: 168 Size: 536
	struct FNiagaraUserRedirectionParameterStore ExposedParameters;  // Offset: 704 Size: 200
	struct FBox FixedBounds;  // Offset: 904 Size: 28
	char pad_932_1 : 7;  // Offset: 932 Size: 1
	bool bAutoDeactivate : 1;  // Offset: 932 Size: 1
	char pad_933[3];  // Offset: 933 Size: 3
	float WarmupTime;  // Offset: 936 Size: 4
	int32_t WarmupTickCount;  // Offset: 940 Size: 4
	float WarmupTickDelta;  // Offset: 944 Size: 4
	char pad_948_1 : 7;  // Offset: 948 Size: 1
	bool bHasSystemScriptDIsWithPerInstanceData : 1;  // Offset: 948 Size: 1
	char pad_949_1 : 7;  // Offset: 949 Size: 1
	bool bNeedsGPUContextInitForDataInterfaces : 1;  // Offset: 949 Size: 1
	char pad_950[2];  // Offset: 950 Size: 2
	struct TArray<struct FName> UserDINamesReadInSystemScripts;  // Offset: 952 Size: 16
	char pad_968[208];  // Offset: 968 Size: 208



 // Functions 
 public:
}; 
 
 


