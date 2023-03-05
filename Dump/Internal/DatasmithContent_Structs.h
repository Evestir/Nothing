#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate Size 48
class FDatasmithCameraLookatTrackingSettingsTemplate
{

 public: 
	char bEnableLookAtTracking : 1;  // Offset: 0 Size: 1
	char bAllowRoll : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 6;  // Offset: 0 Size: 1
	char pad_1[8];  // Offset: 1 Size: 8
	struct TSoftObjectPtr<AActor> ActorToTrack;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate Size 4
class FDatasmithCameraLensSettingsTemplate
{

 public: 
	float MaxFStop;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate Size 64
class FDatasmithPostProcessSettingsTemplate
{

 public: 
	char bOverride_WhiteTemp : 1;  // Offset: 0 Size: 1
	char bOverride_ColorSaturation : 1;  // Offset: 0 Size: 1
	char bOverride_VignetteIntensity : 1;  // Offset: 0 Size: 1
	char bOverride_FilmWhitePoint : 1;  // Offset: 0 Size: 1
	char bOverride_AutoExposureMethod : 1;  // Offset: 0 Size: 1
	char bOverride_CameraISO : 1;  // Offset: 0 Size: 1
	char bOverride_CameraShutterSpeed : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 1;  // Offset: 0 Size: 1
	char pad_1[4];  // Offset: 1 Size: 4
	char bOverride_DepthOfFieldFstop : 1;  // Offset: 4 Size: 1
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	char pad_5[4];  // Offset: 5 Size: 4
	float WhiteTemp;  // Offset: 8 Size: 4
	float VignetteIntensity;  // Offset: 12 Size: 4
	struct FLinearColor FilmWhitePoint;  // Offset: 16 Size: 16
	struct FVector4 ColorSaturation;  // Offset: 32 Size: 16
	enum class EAutoExposureMethod AutoExposureMethod;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	float CameraISO;  // Offset: 52 Size: 4
	float CameraShutterSpeed;  // Offset: 56 Size: 4
	float DepthOfFieldFstop;  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithImportBaseOptions Size 20
class FDatasmithImportBaseOptions
{

 public: 
	enum class EDatasmithImportScene SceneHandling;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bIncludeGeometry : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bIncludeMaterial : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool bIncludeLight : 1;  // Offset: 3 Size: 1
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bIncludeCamera : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool bIncludeAnimation : 1;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2
	struct FDatasmithAssetImportOptions AssetOptions;  // Offset: 8 Size: 8
	struct FDatasmithStaticMeshImportOptions StaticMeshOptions;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate Size 8
class FDatasmithCameraFocusSettingsTemplate
{

 public: 
	enum class ECameraFocusMethod FocusMethod;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float ManualFocusDistance;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithTessellationOptions Size 16
class FDatasmithTessellationOptions
{

 public: 
	float ChordTolerance;  // Offset: 0 Size: 4
	float MaxEdgeLength;  // Offset: 4 Size: 4
	float NormalTolerance;  // Offset: 8 Size: 4
	enum class EDatasmithCADStitchingTechnique StitchingTechnique;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate Size 8
class FDatasmithCameraFilmbackSettingsTemplate
{

 public: 
	float SensorWidth;  // Offset: 0 Size: 4
	float SensorHeight;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithRetessellationOptions Size 20
// Inherited 16 bytes 
class FDatasmithRetessellationOptions : public FDatasmithTessellationOptions
{

 public: 
	enum class EDatasmithCADRetessellationRule RetessellationRule;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions Size 4
class FDatasmithStaticMeshImportOptions
{

 public: 
	enum class EDatasmithImportLightmapMin MinLightmapResolution;  // Offset: 0 Size: 1
	enum class EDatasmithImportLightmapMax MaxLightmapResolution;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bGenerateLightmapUVs : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool bRemoveDegenerates : 1;  // Offset: 3 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate Size 80
class FDatasmithStaticParameterSetTemplate
{

 public: 
	struct TMap<struct FName, bool> StaticSwitchParameters;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithAssetImportOptions Size 8
class FDatasmithAssetImportOptions
{

 public: 
	struct FName PackagePath;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithReimportOptions Size 2
class FDatasmithReimportOptions
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bUpdateActors : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bRespawnDeletedActors : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate Size 80
class FDatasmithMeshSectionInfoMapTemplate
{

 public: 
	struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence Size 8
class FPlayLevelSequence
{

 public: 
	struct ULevelSequence* SequenceToPlay;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate Size 4
class FDatasmithMeshSectionInfoTemplate
{

 public: 
	int32_t MaterialIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate Size 16
class FDatasmithStaticMaterialTemplate
{

 public: 
	struct FName MaterialSlotName;  // Offset: 0 Size: 8
	struct UMaterialInterface* MaterialInterface;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate Size 16
class FDatasmithMeshBuildSettingsTemplate
{

 public: 
	char bUseMikkTSpace : 1;  // Offset: 0 Size: 1
	char bRecomputeNormals : 1;  // Offset: 0 Size: 1
	char bRecomputeTangents : 1;  // Offset: 0 Size: 1
	char bRemoveDegenerates : 1;  // Offset: 0 Size: 1
	char bBuildAdjacencyBuffer : 1;  // Offset: 0 Size: 1
	char bUseHighPrecisionTangentBasis : 1;  // Offset: 0 Size: 1
	char bUseFullPrecisionUVs : 1;  // Offset: 0 Size: 1
	char bGenerateLightmapUVs : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t MinLightmapResolution;  // Offset: 4 Size: 4
	int32_t SrcLightmapIndex;  // Offset: 8 Size: 4
	int32_t DstLightmapIndex;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData Size 16
class FGetDatasmithUserData
{

 public: 
	struct UObject* Object;  // Offset: 0 Size: 8
	struct UDatasmithAssetUserData* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue Size 56
class FGetDatasmithUserDataKeysAndValuesForValue
{

 public: 
	struct UObject* Object;  // Offset: 0 Size: 8
	struct FString StringToMatch;  // Offset: 8 Size: 16
	struct TArray<struct FName> OutKeys;  // Offset: 24 Size: 16
	struct TArray<struct FString> OutValues;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey Size 32
class FGetDatasmithUserDataValueForKey
{

 public: 
	struct UObject* Object;  // Offset: 0 Size: 8
	struct FName Key;  // Offset: 8 Size: 8
	struct FString ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 