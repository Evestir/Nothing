#pragma once 
#include <DatasmithContent_Structs.h>
 
 
 
//Class DatasmithContent.DatasmithMaterialInstanceTemplate Size 408
// Inherited 48 bytes 
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{

 public: 
	struct TSoftObjectPtr<UMaterialInterface> ParentMaterial;  // Offset: 48 Size: 40
	struct TMap<struct FName, float> ScalarParameterValues;  // Offset: 88 Size: 80
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues;  // Offset: 168 Size: 80
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> TextureParameterValues;  // Offset: 248 Size: 80
	struct FDatasmithStaticParameterSetTemplate StaticParameters;  // Offset: 328 Size: 80



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithOptionsBase Size 40
// Inherited 40 bytes 
class UDatasmithOptionsBase : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithAssetImportData Size 40
// Inherited 40 bytes 
class UDatasmithAssetImportData : public UAssetImportData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithAdditionalData Size 40
// Inherited 40 bytes 
class UDatasmithAdditionalData : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithObjectTemplate Size 48
// Inherited 40 bytes 
class UDatasmithObjectTemplate : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithLightComponentTemplate Size 104
// Inherited 48 bytes 
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{

 public: 
	char bVisible : 1;  // Offset: 48 Size: 1
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	char pad_49[4];  // Offset: 49 Size: 4
	char CastShadows : 1;  // Offset: 52 Size: 1
	char bUseTemperature : 1;  // Offset: 52 Size: 1
	char bUseIESBrightness : 1;  // Offset: 52 Size: 1
	char pad_52_1 : 5;  // Offset: 52 Size: 1
	char pad_53[4];  // Offset: 53 Size: 4
	float Intensity;  // Offset: 56 Size: 4
	float Temperature;  // Offset: 60 Size: 4
	float IESBrightnessScale;  // Offset: 64 Size: 4
	struct FLinearColor LightColor;  // Offset: 68 Size: 16
	char pad_84[4];  // Offset: 84 Size: 4
	struct UMaterialInterface* LightFunctionMaterial;  // Offset: 88 Size: 8
	struct UTextureLightProfile* IESTexture;  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithContentBlueprintLibrary Size 40
// Inherited 40 bytes 
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct FString GetDatasmithUserDataValueForKey(struct UObject* Object, struct FName Key); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
	void GetDatasmithUserDataKeysAndValuesForValue(struct UObject* Object, struct FString StringToMatch, struct TArray<struct FName>& OutKeys, struct TArray<struct FString>& OutValues); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
	struct UDatasmithAssetUserData* GetDatasmithUserData(struct UObject* Object); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
}; 
 
 


//Class DatasmithContent.DatasmithStaticMeshCADImportData Size 40
// Inherited 40 bytes 
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithScene Size 48
// Inherited 40 bytes 
class UDatasmithScene : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithCineCameraComponentTemplate Size 144
// Inherited 48 bytes 
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{

 public: 
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;  // Offset: 48 Size: 8
	struct FDatasmithCameraLensSettingsTemplate LensSettings;  // Offset: 56 Size: 4
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings;  // Offset: 60 Size: 8
	float CurrentFocalLength;  // Offset: 68 Size: 4
	float CurrentAperture;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings;  // Offset: 80 Size: 64



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithActorTemplate Size 208
// Inherited 48 bytes 
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{

 public: 
	struct TSet<struct FName> Layers;  // Offset: 48 Size: 80
	struct TSet<struct FName> Tags;  // Offset: 128 Size: 80



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithAreaLightActor Size 632
// Inherited 544 bytes 
class ADatasmithAreaLightActor : public AActor
{

 public: 
	enum class EComponentMobility Mobility;  // Offset: 544 Size: 1
	enum class EDatasmithAreaLightActorType LightType;  // Offset: 545 Size: 1
	enum class EDatasmithAreaLightActorShape LightShape;  // Offset: 546 Size: 1
	char pad_547[1];  // Offset: 547 Size: 1
	struct FVector2D Dimensions;  // Offset: 548 Size: 8
	float Intensity;  // Offset: 556 Size: 4
	enum class ELightUnits IntensityUnits;  // Offset: 560 Size: 1
	char pad_561[3];  // Offset: 561 Size: 3
	struct FLinearColor Color;  // Offset: 564 Size: 16
	float Temperature;  // Offset: 580 Size: 4
	struct UTextureLightProfile* IESTexture;  // Offset: 584 Size: 8
	char pad_592_1 : 7;  // Offset: 592 Size: 1
	bool bUseIESBrightness : 1;  // Offset: 592 Size: 1
	char pad_593[3];  // Offset: 593 Size: 3
	float IESBrightnessScale;  // Offset: 596 Size: 4
	struct FRotator Rotation;  // Offset: 600 Size: 12
	float SourceRadius;  // Offset: 612 Size: 4
	float SourceLength;  // Offset: 616 Size: 4
	float AttenuationRadius;  // Offset: 620 Size: 4
	float SpotlightInnerAngle;  // Offset: 624 Size: 4
	float SpotlightOuterAngle;  // Offset: 628 Size: 4



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithStaticMeshImportData Size 40
// Inherited 40 bytes 
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithAreaLightActorTemplate Size 160
// Inherited 48 bytes 
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{

 public: 
	enum class EDatasmithAreaLightActorType LightType;  // Offset: 48 Size: 1
	enum class EDatasmithAreaLightActorShape LightShape;  // Offset: 49 Size: 1
	char pad_50[2];  // Offset: 50 Size: 2
	struct FVector2D Dimensions;  // Offset: 52 Size: 8
	struct FLinearColor Color;  // Offset: 60 Size: 16
	float Intensity;  // Offset: 76 Size: 4
	enum class ELightUnits IntensityUnits;  // Offset: 80 Size: 1
	char pad_81[3];  // Offset: 81 Size: 3
	float Temperature;  // Offset: 84 Size: 4
	struct TSoftObjectPtr<UTextureLightProfile> IESTexture;  // Offset: 88 Size: 40
	char pad_128_1 : 7;  // Offset: 128 Size: 1
	bool bUseIESBrightness : 1;  // Offset: 128 Size: 1
	char pad_129[3];  // Offset: 129 Size: 3
	float IESBrightnessScale;  // Offset: 132 Size: 4
	struct FRotator Rotation;  // Offset: 136 Size: 12
	float SourceRadius;  // Offset: 148 Size: 4
	float SourceLength;  // Offset: 152 Size: 4
	float AttenuationRadius;  // Offset: 156 Size: 4



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithSceneImportData Size 40
// Inherited 40 bytes 
class UDatasmithSceneImportData : public UAssetImportData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithTranslatedSceneImportData Size 40
// Inherited 40 bytes 
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithCADImportSceneData Size 40
// Inherited 40 bytes 
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithMDLSceneImportData Size 40
// Inherited 40 bytes 
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithImportedSequencesActor Size 560
// Inherited 544 bytes 
class ADatasmithImportedSequencesActor : public AActor
{

 public: 
	struct TArray<struct ULevelSequence*> ImportedSequences;  // Offset: 544 Size: 16



 // Functions 
 public:
	void PlayLevelSequence(struct ULevelSequence* SequenceToPlay); // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
}; 
 
 


//Class DatasmithContent.DatasmithVREDSceneImportData Size 168
// Inherited 72 bytes 
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{

 public: 
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool bMergeNodes : 1;  // Offset: 72 Size: 1
	char pad_73_1 : 7;  // Offset: 73 Size: 1
	bool bOptimizeDuplicatedNodes : 1;  // Offset: 73 Size: 1
	char pad_74_1 : 7;  // Offset: 74 Size: 1
	bool bImportMats : 1;  // Offset: 74 Size: 1
	char pad_75[5];  // Offset: 75 Size: 5
	struct FString MatsPath;  // Offset: 80 Size: 16
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bImportVar : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bCleanVar : 1;  // Offset: 97 Size: 1
	char pad_98[6];  // Offset: 98 Size: 6
	struct FString VarPath;  // Offset: 104 Size: 16
	char pad_120_1 : 7;  // Offset: 120 Size: 1
	bool bImportLightInfo : 1;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7
	struct FString LightInfoPath;  // Offset: 128 Size: 16
	char pad_144_1 : 7;  // Offset: 144 Size: 1
	bool bImportClipInfo : 1;  // Offset: 144 Size: 1
	char pad_145[7];  // Offset: 145 Size: 7
	struct FString ClipInfoPath;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithGLTFSceneImportData Size 112
// Inherited 40 bytes 
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{

 public: 
	struct FString Generator;  // Offset: 40 Size: 16
	float Version;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4
	struct FString Author;  // Offset: 64 Size: 16
	struct FString License;  // Offset: 80 Size: 16
	struct FString Source;  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithStaticMeshGLTFImportData Size 56
// Inherited 40 bytes 
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{

 public: 
	struct FString SourceMeshName;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithFBXSceneImportData Size 72
// Inherited 40 bytes 
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bGenerateLightmapUVs : 1;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7
	struct FString TexturesDir;  // Offset: 48 Size: 16
	char IntermediateSerialization;  // Offset: 64 Size: 1
	char pad_65_1 : 7;  // Offset: 65 Size: 1
	bool bColorizeMaterials : 1;  // Offset: 65 Size: 1
	char pad_66[6];  // Offset: 66 Size: 6



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithSpotLightComponentTemplate Size 56
// Inherited 48 bytes 
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{

 public: 
	float InnerConeAngle;  // Offset: 48 Size: 4
	float OuterConeAngle;  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithPointLightComponentTemplate Size 64
// Inherited 48 bytes 
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{

 public: 
	enum class ELightUnits IntensityUnits;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	float SourceRadius;  // Offset: 52 Size: 4
	float SourceLength;  // Offset: 56 Size: 4
	float AttenuationRadius;  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithLandscapeTemplate Size 64
// Inherited 48 bytes 
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{

 public: 
	struct UMaterialInterface* LandscapeMaterial;  // Offset: 48 Size: 8
	int32_t StaticLightingLOD;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithStaticMeshIFCImportData Size 56
// Inherited 40 bytes 
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{

 public: 
	struct FString SourceGlobalId;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithDeltaGenAssetImportData Size 40
// Inherited 40 bytes 
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithDeltaGenSceneImportData Size 144
// Inherited 72 bytes 
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{

 public: 
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool bMergeNodes : 1;  // Offset: 72 Size: 1
	char pad_73_1 : 7;  // Offset: 73 Size: 1
	bool bOptimizeDuplicatedNodes : 1;  // Offset: 73 Size: 1
	char pad_74_1 : 7;  // Offset: 74 Size: 1
	bool bRemoveInvisibleNodes : 1;  // Offset: 74 Size: 1
	char pad_75_1 : 7;  // Offset: 75 Size: 1
	bool bSimplifyNodeHierarchy : 1;  // Offset: 75 Size: 1
	char pad_76_1 : 7;  // Offset: 76 Size: 1
	bool bImportVar : 1;  // Offset: 76 Size: 1
	char pad_77[3];  // Offset: 77 Size: 3
	struct FString VarPath;  // Offset: 80 Size: 16
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bImportPos : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7
	struct FString PosPath;  // Offset: 104 Size: 16
	char pad_120_1 : 7;  // Offset: 120 Size: 1
	bool bImportTml : 1;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7
	struct FString TmlPath;  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithVREDAssetImportData Size 40
// Inherited 40 bytes 
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithIFCSceneImportData Size 40
// Inherited 40 bytes 
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithAssetUserData Size 120
// Inherited 40 bytes 
class UDatasmithAssetUserData : public UAssetUserData
{

 public: 
	struct TMap<struct FName, struct FString> MetaData;  // Offset: 40 Size: 80



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithCineCameraActorTemplate Size 96
// Inherited 48 bytes 
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{

 public: 
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;  // Offset: 48 Size: 48



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithCustomActionBase Size 48
// Inherited 40 bytes 
class UDatasmithCustomActionBase : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithDecalComponentTemplate Size 72
// Inherited 48 bytes 
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{

 public: 
	int32_t SortOrder;  // Offset: 48 Size: 4
	struct FVector DecalSize;  // Offset: 52 Size: 12
	struct UMaterialInterface* Material;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithCommonTessellationOptions Size 56
// Inherited 40 bytes 
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{

 public: 
	struct FDatasmithTessellationOptions Options;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithImportOptions Size 112
// Inherited 40 bytes 
class UDatasmithImportOptions : public UDatasmithOptionsBase
{

 public: 
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy;  // Offset: 40 Size: 1
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;  // Offset: 41 Size: 1
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy;  // Offset: 42 Size: 1
	enum class EDatasmithImportActorPolicy StaticMeshActorImportPolicy;  // Offset: 43 Size: 1
	enum class EDatasmithImportActorPolicy LightImportPolicy;  // Offset: 44 Size: 1
	enum class EDatasmithImportActorPolicy CameraImportPolicy;  // Offset: 45 Size: 1
	enum class EDatasmithImportActorPolicy OtherActorImportPolicy;  // Offset: 46 Size: 1
	enum class EDatasmithImportMaterialQuality MaterialQuality;  // Offset: 47 Size: 1
	struct FDatasmithImportBaseOptions BaseOptions;  // Offset: 48 Size: 20
	struct FDatasmithReimportOptions ReimportOptions;  // Offset: 68 Size: 2
	char pad_70[2];  // Offset: 70 Size: 2
	struct FString Filename;  // Offset: 72 Size: 16
	struct FString FilePath;  // Offset: 88 Size: 16
	char pad_104[8];  // Offset: 104 Size: 8



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithPostProcessVolumeTemplate Size 128
// Inherited 48 bytes 
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{

 public: 
	struct FDatasmithPostProcessSettingsTemplate Settings;  // Offset: 48 Size: 64
	char bEnabled : 1;  // Offset: 112 Size: 1
	char bUnbound : 1;  // Offset: 112 Size: 1
	char pad_112_1 : 6;  // Offset: 112 Size: 1
	char pad_113[16];  // Offset: 113 Size: 16



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithSceneActor Size 632
// Inherited 544 bytes 
class ADatasmithSceneActor : public AActor
{

 public: 
	struct UDatasmithScene* Scene;  // Offset: 544 Size: 8
	struct TMap<struct FName, struct TSoftObjectPtr<AActor>> RelatedActors;  // Offset: 552 Size: 80



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithSceneComponentTemplate Size 240
// Inherited 48 bytes 
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{

 public: 
	struct FTransform RelativeTransform;  // Offset: 48 Size: 48
	enum class EComponentMobility Mobility;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7
	struct TSoftObjectPtr<USceneComponent> AttachParent;  // Offset: 104 Size: 40
	char pad_144_1 : 7;  // Offset: 144 Size: 1
	bool bVisible : 1;  // Offset: 144 Size: 1
	char pad_145[7];  // Offset: 145 Size: 7
	struct TSet<struct FName> Tags;  // Offset: 152 Size: 80
	char pad_232[8];  // Offset: 232 Size: 8



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithSkyLightComponentTemplate Size 64
// Inherited 48 bytes 
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{

 public: 
	enum class ESkyLightSourceType SourceType;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	int32_t CubemapResolution;  // Offset: 52 Size: 4
	struct UTextureCube* Cubemap;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithStaticMeshComponentTemplate Size 72
// Inherited 48 bytes 
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{

 public: 
	struct UStaticMesh* StaticMesh;  // Offset: 48 Size: 8
	struct TArray<struct UMaterialInterface*> OverrideMaterials;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 


//Class DatasmithContent.DatasmithStaticMeshTemplate Size 168
// Inherited 48 bytes 
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{

 public: 
	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;  // Offset: 48 Size: 80
	int32_t LightMapCoordinateIndex;  // Offset: 128 Size: 4
	int32_t LightMapResolution;  // Offset: 132 Size: 4
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;  // Offset: 136 Size: 16
	struct TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


