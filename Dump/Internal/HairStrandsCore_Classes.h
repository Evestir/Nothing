#pragma once 
#include <HairStrandsCore_Structs.h>
 
 
 
//Class HairStrandsCore.GroomImportOptions Size 80
// Inherited 40 bytes 
class UGroomImportOptions : public UObject
{

 public: 
	struct FGroomConversionSettings ConversionSettings;  // Offset: 40 Size: 24
	struct TArray<struct FHairGroupsInterpolation> InterpolationSettings;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomActor Size 552
// Inherited 544 bytes 
class AGroomActor : public AActor
{

 public: 
	struct UGroomComponent* GroomComponent;  // Offset: 544 Size: 8



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomBlueprintLibrary Size 40
// Inherited 40 bytes 
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(struct FString InDesiredPackagePath, struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
	struct UGroomBindingAsset* CreateNewGroomBindingAsset(struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(struct FString DesiredPackagePath, struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
}; 
 
 


//Class HairStrandsCore.GroomAssetImportData Size 48
// Inherited 40 bytes 
class UGroomAssetImportData : public UAssetImportData
{

 public: 
	struct UGroomImportOptions* ImportOptions;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomAsset Size 248
// Inherited 40 bytes 
class UGroomAsset : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct TArray<struct FHairGroupInfoWithVisibility> HairGroupsInfo;  // Offset: 48 Size: 16
	struct TArray<struct FHairGroupsRendering> HairGroupsRendering;  // Offset: 64 Size: 16
	struct TArray<struct FHairGroupsPhysics> HairGroupsPhysics;  // Offset: 80 Size: 16
	struct TArray<struct FHairGroupsInterpolation> HairGroupsInterpolation;  // Offset: 96 Size: 16
	struct TArray<struct FHairGroupsLOD> HairGroupsLOD;  // Offset: 112 Size: 16
	struct TArray<struct FHairGroupsCardsSourceDescription> HairGroupsCards;  // Offset: 128 Size: 16
	struct TArray<struct FHairGroupsMeshesSourceDescription> HairGroupsMeshes;  // Offset: 144 Size: 16
	struct TArray<struct FHairGroupsMaterial> HairGroupsMaterials;  // Offset: 160 Size: 16
	char pad_176[16];  // Offset: 176 Size: 16
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	bool EnableGlobalInterpolation : 1;  // Offset: 192 Size: 1
	enum class EGroomInterpolationType HairInterpolationType;  // Offset: 193 Size: 1
	enum class EHairLODSelectionType LODSelectionType;  // Offset: 194 Size: 1
	char pad_195[1];  // Offset: 195 Size: 1
	struct FPerPlatformInt MinLOD;  // Offset: 196 Size: 4
	struct FPerPlatformBool DisableBelowMinLodStripping;  // Offset: 200 Size: 1
	char pad_201[7];  // Offset: 201 Size: 7
	struct TArray<float> EffectiveLODBias;  // Offset: 208 Size: 16
	struct TArray<struct UAssetUserData*> AssetUserData;  // Offset: 224 Size: 16
	char pad_240[8];  // Offset: 240 Size: 8



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomCacheImportData Size 72
// Inherited 40 bytes 
class UGroomCacheImportData : public UAssetImportData
{

 public: 
	struct FGroomCacheImportSettings Settings;  // Offset: 40 Size: 32



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomBindingAsset Size 176
// Inherited 40 bytes 
class UGroomBindingAsset : public UObject
{

 public: 
	enum class EGroomBindingMeshType GroomBindingType;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7
	struct UGroomAsset* Groom;  // Offset: 48 Size: 8
	struct USkeletalMesh* SourceSkeletalMesh;  // Offset: 56 Size: 8
	struct USkeletalMesh* TargetSkeletalMesh;  // Offset: 64 Size: 8
	struct UGeometryCache* SourceGeometryCache;  // Offset: 72 Size: 8
	struct UGeometryCache* TargetGeometryCache;  // Offset: 80 Size: 8
	int32_t NumInterpolationPoints;  // Offset: 88 Size: 4
	int32_t MatchingSection;  // Offset: 92 Size: 4
	struct TArray<struct FGoomBindingGroupInfo> GroupInfos;  // Offset: 96 Size: 16
	char pad_112[64];  // Offset: 112 Size: 64



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomCache Size 104
// Inherited 40 bytes 
class UGroomCache : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct FGroomCacheInfo GroomCacheInfo;  // Offset: 48 Size: 40
	char pad_88[16];  // Offset: 88 Size: 16



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomCacheImportOptions Size 72
// Inherited 40 bytes 
class UGroomCacheImportOptions : public UObject
{

 public: 
	struct FGroomCacheImportSettings ImportSettings;  // Offset: 40 Size: 32



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomComponent Size 1488
// Inherited 1200 bytes 
class UGroomComponent : public UMeshComponent
{

 public: 
	struct UGroomAsset* GroomAsset;  // Offset: 1200 Size: 8
	struct UGroomCache* GroomCache;  // Offset: 1208 Size: 8
	struct TArray<struct UNiagaraComponent*> NiagaraComponents;  // Offset: 1216 Size: 16
	struct USkeletalMesh* SourceSkeletalMesh;  // Offset: 1232 Size: 8
	struct UGroomBindingAsset* BindingAsset;  // Offset: 1240 Size: 8
	struct UPhysicsAsset* PhysicsAsset;  // Offset: 1248 Size: 8
	struct UMaterialInterface* Strands_DebugMaterial;  // Offset: 1256 Size: 8
	struct UMaterialInterface* Strands_DefaultMaterial;  // Offset: 1264 Size: 8
	struct UMaterialInterface* Cards_DefaultMaterial;  // Offset: 1272 Size: 8
	struct UMaterialInterface* Meshes_DefaultMaterial;  // Offset: 1280 Size: 8
	struct UNiagaraSystem* AngularSpringsSystem;  // Offset: 1288 Size: 8
	struct UNiagaraSystem* CosseratRodsSystem;  // Offset: 1296 Size: 8
	struct FString AttachmentName;  // Offset: 1304 Size: 16
	char pad_1320[72];  // Offset: 1320 Size: 72
	struct TArray<struct FHairGroupDesc> GroomGroupsDesc;  // Offset: 1392 Size: 16
	char pad_1408_1 : 7;  // Offset: 1408 Size: 1
	bool bRunning : 1;  // Offset: 1408 Size: 1
	char pad_1409_1 : 7;  // Offset: 1409 Size: 1
	bool bLooping : 1;  // Offset: 1409 Size: 1
	char pad_1410_1 : 7;  // Offset: 1410 Size: 1
	bool bManualTick : 1;  // Offset: 1410 Size: 1
	char pad_1411[1];  // Offset: 1411 Size: 1
	float ElapsedTime;  // Offset: 1412 Size: 4
	char pad_1416[72];  // Offset: 1416 Size: 72



 // Functions 
 public:
	void SetGroomAsset(struct UGroomAsset* Asset); // Function HairStrandsCore.GroomComponent.SetGroomAsset
	void SetBindingAsset(struct UGroomBindingAsset* InBinding); // Function HairStrandsCore.GroomComponent.SetBindingAsset
}; 
 
 


//Class HairStrandsCore.GroomCreateBindingOptions Size 88
// Inherited 40 bytes 
class UGroomCreateBindingOptions : public UObject
{

 public: 
	enum class EGroomBindingMeshType GroomBindingType;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7
	struct USkeletalMesh* SourceSkeletalMesh;  // Offset: 48 Size: 8
	struct USkeletalMesh* TargetSkeletalMesh;  // Offset: 56 Size: 8
	struct UGeometryCache* SourceGeometryCache;  // Offset: 64 Size: 8
	struct UGeometryCache* TargetGeometryCache;  // Offset: 72 Size: 8
	int32_t NumInterpolationPoints;  // Offset: 80 Size: 4
	int32_t MatchingSection;  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomCreateFollicleMaskOptions Size 64
// Inherited 40 bytes 
class UGroomCreateFollicleMaskOptions : public UObject
{

 public: 
	int32_t Resolution;  // Offset: 40 Size: 4
	int32_t RootRadius;  // Offset: 44 Size: 4
	struct TArray<struct FFollicleMaskOptions> Grooms;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomCreateStrandsTexturesOptions Size 104
// Inherited 40 bytes 
class UGroomCreateStrandsTexturesOptions : public UObject
{

 public: 
	int32_t Resolution;  // Offset: 40 Size: 4
	enum class EStrandsTexturesTraceType TraceType;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3
	float TraceDistance;  // Offset: 48 Size: 4
	enum class EStrandsTexturesMeshType MeshType;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3
	struct UStaticMesh* StaticMesh;  // Offset: 56 Size: 8
	struct USkeletalMesh* SkeletalMesh;  // Offset: 64 Size: 8
	int32_t LODIndex;  // Offset: 72 Size: 4
	int32_t SectionIndex;  // Offset: 76 Size: 4
	int32_t UVChannelIndex;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4
	struct TArray<int32_t> GroupIndex;  // Offset: 88 Size: 16



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset Size 104
// Inherited 56 bytes 
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{

 public: 
	struct UPhysicsAsset* DefaultSource;  // Offset: 56 Size: 8
	struct AActor* SourceActor;  // Offset: 64 Size: 8
	char pad_72[32];  // Offset: 72 Size: 32



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomHairGroupsPreview Size 56
// Inherited 40 bytes 
class UGroomHairGroupsPreview : public UObject
{

 public: 
	struct TArray<struct FGroomHairGroupPreview> Groups;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.GroomPluginSettings Size 48
// Inherited 40 bytes 
class UGroomPluginSettings : public UObject
{

 public: 
	float GroomCacheLookAheadBuffer;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.MovieSceneGroomCacheSection Size 264
// Inherited 232 bytes 
class UMovieSceneGroomCacheSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneGroomCacheParams Params;  // Offset: 232 Size: 32



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.MovieSceneGroomCacheTrack Size 168
// Inherited 144 bytes 
class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.NiagaraDataInterfaceHairStrands Size 80
// Inherited 56 bytes 
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{

 public: 
	struct UGroomAsset* DefaultSource;  // Offset: 56 Size: 8
	struct AActor* SourceActor;  // Offset: 64 Size: 8
	char pad_72[8];  // Offset: 72 Size: 8



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid Size 232
// Inherited 216 bytes 
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{

 public: 
	struct FIntVector GridSize;  // Offset: 216 Size: 12
	char pad_228[4];  // Offset: 228 Size: 4



 // Functions 
 public:
}; 
 
 


//Class HairStrandsCore.NiagaraDataInterfacePressureGrid Size 232
// Inherited 232 bytes 
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{

 public: 



 // Functions 
 public:
}; 
 
 


