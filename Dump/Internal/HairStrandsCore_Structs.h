#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function HairStrandsCore.GroomComponent.SetBindingAsset Size 8
class FSetBindingAsset
{

 public: 
	struct UGroomBindingAsset* InBinding;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupsMaterial Size 16
class FHairGroupsMaterial
{

 public: 
	struct UMaterialInterface* Material;  // Offset: 0 Size: 8
	struct FName SlotName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupsLOD Size 24
class FHairGroupsLOD
{

 public: 
	struct TArray<struct FHairLODSettings> LODs;  // Offset: 0 Size: 16
	float ClusterWorldSize;  // Offset: 16 Size: 4
	float ClusterScreenSizeScale;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility Size 28
// Inherited 24 bytes 
class FHairGroupInfoWithVisibility : public FHairGroupInfo
{

 public: 
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bIsVisible : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairInterpolationSettings Size 12
class FHairInterpolationSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bOverrideGuides : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float HairToGuideDensity;  // Offset: 4 Size: 4
	enum class EHairInterpolationQuality InterpolationQuality;  // Offset: 8 Size: 1
	enum class EHairInterpolationWeight InterpolationDistance;  // Offset: 9 Size: 1
	char pad_10_1 : 7;  // Offset: 10 Size: 1
	bool bRandomizeGuide : 1;  // Offset: 10 Size: 1
	char pad_11_1 : 7;  // Offset: 11 Size: 1
	bool bUseUniqueGuide : 1;  // Offset: 11 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupInfo Size 24
class FHairGroupInfo
{

 public: 
	int32_t GroupID;  // Offset: 0 Size: 4
	int32_t NumCurves;  // Offset: 4 Size: 4
	int32_t NumGuides;  // Offset: 8 Size: 4
	int32_t NumCurveVertices;  // Offset: 12 Size: 4
	int32_t NumGuideVertices;  // Offset: 16 Size: 4
	float MaxCurveLength;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters Size 40
// Inherited 32 bytes 
class FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
{

 public: 
	struct FFrameNumber SectionStartTime;  // Offset: 32 Size: 4
	struct FFrameNumber SectionEndTime;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription Size 192
class FHairGroupsCardsSourceDescription
{

 public: 
	struct UMaterialInterface* Material;  // Offset: 0 Size: 8
	struct FName MaterialSlotName;  // Offset: 8 Size: 8
	enum class EHairCardsSourceType SourceType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct UStaticMesh* ProceduralMesh;  // Offset: 24 Size: 8
	struct FString ProceduralMeshKey;  // Offset: 32 Size: 16
	struct UStaticMesh* ImportedMesh;  // Offset: 48 Size: 8
	struct FHairGroupsProceduralCards ProceduralSettings;  // Offset: 56 Size: 56
	struct FHairGroupCardsTextures Textures;  // Offset: 112 Size: 48
	int32_t GroupIndex;  // Offset: 160 Size: 4
	int32_t LODIndex;  // Offset: 164 Size: 4
	struct FHairGroupCardsInfo CardsInfo;  // Offset: 168 Size: 8
	struct FString ImportedMeshKey;  // Offset: 176 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupCardsInfo Size 8
class FHairGroupCardsInfo
{

 public: 
	int32_t NumCards;  // Offset: 0 Size: 4
	int32_t NumCardVertices;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairSolverSettings Size 56
class FHairSolverSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool EnableSimulation : 1;  // Offset: 0 Size: 1
	enum class EGroomNiagaraSolvers NiagaraSolver;  // Offset: 1 Size: 1
	char pad_2[6];  // Offset: 2 Size: 6
	struct TSoftObjectPtr<UNiagaraSystem> CustomSystem;  // Offset: 8 Size: 40
	int32_t SubSteps;  // Offset: 48 Size: 4
	int32_t IterationCount;  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupCardsTextures Size 48
class FHairGroupCardsTextures
{

 public: 
	struct UTexture2D* DepthTexture;  // Offset: 0 Size: 8
	struct UTexture2D* CoverageTexture;  // Offset: 8 Size: 8
	struct UTexture2D* TangentTexture;  // Offset: 16 Size: 8
	struct UTexture2D* AttributeTexture;  // Offset: 24 Size: 8
	struct UTexture2D* AuxilaryDataTexture;  // Offset: 32 Size: 8
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairBendConstraint Size 152
class FHairBendConstraint
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool SolveBend : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool ProjectBend : 1;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	float BendDamping;  // Offset: 4 Size: 4
	float BendStiffness;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FRuntimeFloatCurve BendScale;  // Offset: 16 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupsProceduralCards Size 56
class FHairGroupsProceduralCards
{

 public: 
	struct FHairCardsClusterSettings ClusterSettings;  // Offset: 0 Size: 8
	struct FHairCardsGeometrySettings GeometrySettings;  // Offset: 8 Size: 28
	struct FHairCardsTextureSettings TextureSettings;  // Offset: 36 Size: 16
	int32_t Version;  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.GroomBuildSettings Size 12
class FGroomBuildSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bOverrideGuides : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float HairToGuideDensity;  // Offset: 4 Size: 4
	enum class EGroomInterpolationQuality InterpolationQuality;  // Offset: 8 Size: 1
	enum class EGroomInterpolationWeight InterpolationDistance;  // Offset: 9 Size: 1
	char pad_10_1 : 7;  // Offset: 10 Size: 1
	bool bRandomizeGuide : 1;  // Offset: 10 Size: 1
	char pad_11_1 : 7;  // Offset: 11 Size: 1
	bool bUseUniqueGuide : 1;  // Offset: 11 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairCardsTextureSettings Size 16
class FHairCardsTextureSettings
{

 public: 
	int32_t AtlasMaxResolution;  // Offset: 0 Size: 4
	int32_t PixelPerCentimeters;  // Offset: 4 Size: 4
	int32_t LengthTextureCount;  // Offset: 8 Size: 4
	int32_t DensityTextureCount;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.FollicleMaskOptions Size 16
class FFollicleMaskOptions
{

 public: 
	struct UGroomAsset* Groom;  // Offset: 0 Size: 8
	enum class EFollicleMaskChannel Channel;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairCardsGeometrySettings Size 28
class FHairCardsGeometrySettings
{

 public: 
	enum class EHairCardsGenerationType GenerationType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t CardsCount;  // Offset: 4 Size: 4
	enum class EHairCardsClusterType ClusterType;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	float MinSegmentLength;  // Offset: 12 Size: 4
	float AngularThreshold;  // Offset: 16 Size: 4
	float MinCardsLength;  // Offset: 20 Size: 4
	float MaxCardsLength;  // Offset: 24 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairCardsClusterSettings Size 8
class FHairCardsClusterSettings
{

 public: 
	float ClusterDecimation;  // Offset: 0 Size: 4
	enum class EHairCardsClusterType Type;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool bUseGuide : 1;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairLODSettings Size 24
class FHairLODSettings
{

 public: 
	float CurveDecimation;  // Offset: 0 Size: 4
	float VertexDecimation;  // Offset: 4 Size: 4
	float AngularThreshold;  // Offset: 8 Size: 4
	float ScreenSize;  // Offset: 12 Size: 4
	float ThicknessScale;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bVisible : 1;  // Offset: 20 Size: 1
	enum class EGroomGeometryType GeometryType;  // Offset: 21 Size: 1
	char pad_22[2];  // Offset: 22 Size: 2



 // Functions 
 public:
}; 
 
 //Function HairStrandsCore.GroomComponent.SetGroomAsset Size 8
class FSetGroomAsset
{

 public: 
	struct UGroomAsset* Asset;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupsInterpolation Size 20
class FHairGroupsInterpolation
{

 public: 
	struct FHairDecimationSettings DecimationSettings;  // Offset: 0 Size: 8
	struct FHairInterpolationSettings InterpolationSettings;  // Offset: 8 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairDecimationSettings Size 8
class FHairDecimationSettings
{

 public: 
	float CurveDecimation;  // Offset: 0 Size: 4
	float VertexDecimation;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription Size 96
class FHairGroupsMeshesSourceDescription
{

 public: 
	struct UMaterialInterface* Material;  // Offset: 0 Size: 8
	struct FName MaterialSlotName;  // Offset: 8 Size: 8
	struct UStaticMesh* ImportedMesh;  // Offset: 16 Size: 8
	struct FHairGroupCardsTextures Textures;  // Offset: 24 Size: 48
	int32_t GroupIndex;  // Offset: 72 Size: 4
	int32_t LODIndex;  // Offset: 76 Size: 4
	struct FString ImportedMeshKey;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupsPhysics Size 712
class FHairGroupsPhysics
{

 public: 
	struct FHairSolverSettings SolverSettings;  // Offset: 0 Size: 56
	struct FHairExternalForces ExternalForces;  // Offset: 56 Size: 28
	char pad_84[4];  // Offset: 84 Size: 4
	struct FHairMaterialConstraints MaterialConstraints;  // Offset: 88 Size: 472
	struct FHairStrandsParameters StrandsParameters;  // Offset: 560 Size: 152



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairStrandsParameters Size 152
class FHairStrandsParameters
{

 public: 
	enum class EGroomStrandsSize StrandsSize;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float StrandsDensity;  // Offset: 4 Size: 4
	float StrandsSmoothing;  // Offset: 8 Size: 4
	float StrandsThickness;  // Offset: 12 Size: 4
	struct FRuntimeFloatCurve ThicknessScale;  // Offset: 16 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGeometrySettings Size 16
class FHairGeometrySettings
{

 public: 
	float HairWidth;  // Offset: 0 Size: 4
	float HairRootScale;  // Offset: 4 Size: 4
	float HairTipScale;  // Offset: 8 Size: 4
	float HairClipScale;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairShadowSettings Size 12
class FHairShadowSettings
{

 public: 
	float HairShadowDensity;  // Offset: 0 Size: 4
	float HairRaytracingRadiusScale;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bUseHairRaytracingGeometry : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bVoxelize : 1;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairMaterialConstraints Size 472
class FHairMaterialConstraints
{

 public: 
	struct FHairBendConstraint BendConstraint;  // Offset: 0 Size: 152
	struct FHairStretchConstraint StretchConstraint;  // Offset: 152 Size: 152
	struct FHairCollisionConstraint CollisionConstraint;  // Offset: 304 Size: 168



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairCollisionConstraint Size 168
class FHairCollisionConstraint
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool SolveCollision : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool ProjectCollision : 1;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	float StaticFriction;  // Offset: 4 Size: 4
	float KineticFriction;  // Offset: 8 Size: 4
	float StrandsViscosity;  // Offset: 12 Size: 4
	struct FIntVector GridDimension;  // Offset: 16 Size: 12
	float CollisionRadius;  // Offset: 28 Size: 4
	struct FRuntimeFloatCurve RadiusScale;  // Offset: 32 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.GroomCacheInfo Size 40
class FGroomCacheInfo
{

 public: 
	int32_t Version;  // Offset: 0 Size: 4
	enum class EGroomCacheType Type;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	struct FGroomAnimationInfo AnimationInfo;  // Offset: 8 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairStretchConstraint Size 152
class FHairStretchConstraint
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool SolveStretch : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool ProjectStretch : 1;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	float StretchDamping;  // Offset: 4 Size: 4
	float StretchStiffness;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FRuntimeFloatCurve StretchScale;  // Offset: 16 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairExternalForces Size 28
class FHairExternalForces
{

 public: 
	struct FVector GravityVector;  // Offset: 0 Size: 12
	float AirDrag;  // Offset: 12 Size: 4
	struct FVector AirVelocity;  // Offset: 16 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupsRendering Size 48
class FHairGroupsRendering
{

 public: 
	struct FName MaterialSlotName;  // Offset: 0 Size: 8
	struct UMaterialInterface* Material;  // Offset: 8 Size: 8
	struct FHairGeometrySettings GeometrySettings;  // Offset: 16 Size: 16
	struct FHairShadowSettings ShadowSettings;  // Offset: 32 Size: 12
	struct FHairAdvancedRenderingSettings AdvancedSettings;  // Offset: 44 Size: 2
	char pad_46[2];  // Offset: 46 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings Size 2
class FHairAdvancedRenderingSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bUseStableRasterization : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bScatterSceneLighting : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.MovieSceneGroomCacheParams Size 32
class FMovieSceneGroomCacheParams
{

 public: 
	struct UGroomCache* GroomCache;  // Offset: 0 Size: 8
	struct FFrameNumber FirstLoopStartFrameOffset;  // Offset: 8 Size: 4
	struct FFrameNumber StartFrameOffset;  // Offset: 12 Size: 4
	struct FFrameNumber EndFrameOffset;  // Offset: 16 Size: 4
	float PlayRate;  // Offset: 20 Size: 4
	char bReverse : 1;  // Offset: 24 Size: 1
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	char pad_25[8];  // Offset: 25 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.GoomBindingGroupInfo Size 16
class FGoomBindingGroupInfo
{

 public: 
	int32_t RenRootCount;  // Offset: 0 Size: 4
	int32_t RenLODCount;  // Offset: 4 Size: 4
	int32_t SimRootCount;  // Offset: 8 Size: 4
	int32_t SimLODCount;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.GroomAnimationInfo Size 32
class FGroomAnimationInfo
{

 public: 
	uint32_t NumFrames;  // Offset: 0 Size: 4
	float SecondsPerFrame;  // Offset: 4 Size: 4
	float Duration;  // Offset: 8 Size: 4
	float StartTime;  // Offset: 12 Size: 4
	float EndTime;  // Offset: 16 Size: 4
	int32_t StartFrame;  // Offset: 20 Size: 4
	int32_t EndFrame;  // Offset: 24 Size: 4
	enum class EGroomCacheAttributes Attributes;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.GroomCacheImportSettings Size 32
class FGroomCacheImportSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bImportGroomCache : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bImportGroomAsset : 1;  // Offset: 1 Size: 1
	char pad_2[6];  // Offset: 2 Size: 6
	struct FSoftObjectPath GroomAsset;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath Size 64
class FCreateNewGeometryCacheGroomBindingAssetWithPath
{

 public: 
	struct FString DesiredPackagePath;  // Offset: 0 Size: 16
	struct UGroomAsset* GroomAsset;  // Offset: 16 Size: 8
	struct UGeometryCache* GeometryCache;  // Offset: 24 Size: 8
	int32_t NumInterpolationPoints;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct UGeometryCache* SourceGeometryCacheForTransfer;  // Offset: 40 Size: 8
	int32_t MatchingSection;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4
	struct UGroomBindingAsset* ReturnValue;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.HairGroupDesc Size 68
class FHairGroupDesc
{

 public: 
	float HairLength;  // Offset: 0 Size: 4
	float HairWidth;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool HairWidth_Override : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	float HairRootScale;  // Offset: 12 Size: 4
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool HairRootScale_Override : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float HairTipScale;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool HairTipScale_Override : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	float HairClipScale;  // Offset: 28 Size: 4
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool HairClipScale_Override : 1;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3
	float HairShadowDensity;  // Offset: 36 Size: 4
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool HairShadowDensity_Override : 1;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	float HairRaytracingRadiusScale;  // Offset: 44 Size: 4
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool HairRaytracingRadiusScale_Override : 1;  // Offset: 48 Size: 1
	char pad_49_1 : 7;  // Offset: 49 Size: 1
	bool bUseHairRaytracingGeometry : 1;  // Offset: 49 Size: 1
	char pad_50_1 : 7;  // Offset: 50 Size: 1
	bool bUseHairRaytracingGeometry_Override : 1;  // Offset: 50 Size: 1
	char pad_51[1];  // Offset: 51 Size: 1
	float LODBias;  // Offset: 52 Size: 4
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bUseStableRasterization : 1;  // Offset: 56 Size: 1
	char pad_57_1 : 7;  // Offset: 57 Size: 1
	bool bUseStableRasterization_Override : 1;  // Offset: 57 Size: 1
	char pad_58_1 : 7;  // Offset: 58 Size: 1
	bool bScatterSceneLighting : 1;  // Offset: 58 Size: 1
	char pad_59_1 : 7;  // Offset: 59 Size: 1
	bool bScatterSceneLighting_Override : 1;  // Offset: 59 Size: 1
	char pad_60_1 : 7;  // Offset: 60 Size: 1
	bool bSupportVoxelization : 1;  // Offset: 60 Size: 1
	char pad_61_1 : 7;  // Offset: 61 Size: 1
	bool bSupportVoxelization_Override : 1;  // Offset: 61 Size: 1
	char pad_62[2];  // Offset: 62 Size: 2
	int32_t LODForcedIndex;  // Offset: 64 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.GroomHairGroupPreview Size 32
class FGroomHairGroupPreview
{

 public: 
	int32_t GroupID;  // Offset: 0 Size: 4
	int32_t CurveCount;  // Offset: 4 Size: 4
	int32_t GuideCount;  // Offset: 8 Size: 4
	struct FHairGroupsInterpolation InterpolationSettings;  // Offset: 12 Size: 20



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.GroomConversionSettings Size 24
class FGroomConversionSettings
{

 public: 
	struct FVector Rotation;  // Offset: 0 Size: 12
	struct FVector Scale;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplate Size 72
// Inherited 32 bytes 
class FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneGroomCacheSectionTemplateParameters Params;  // Offset: 32 Size: 40



 // Functions 
 public:
}; 
 
 //Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset Size 48
class FCreateNewGeometryCacheGroomBindingAsset
{

 public: 
	struct UGroomAsset* GroomAsset;  // Offset: 0 Size: 8
	struct UGeometryCache* GeometryCache;  // Offset: 8 Size: 8
	int32_t NumInterpolationPoints;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct UGeometryCache* SourceGeometryCacheForTransfer;  // Offset: 24 Size: 8
	int32_t MatchingSection;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct UGroomBindingAsset* ReturnValue;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset Size 48
class FCreateNewGroomBindingAsset
{

 public: 
	struct UGroomAsset* InGroomAsset;  // Offset: 0 Size: 8
	struct USkeletalMesh* InSkeletalMesh;  // Offset: 8 Size: 8
	int32_t InNumInterpolationPoints;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct USkeletalMesh* InSourceSkeletalMeshForTransfer;  // Offset: 24 Size: 8
	int32_t InMatchingSection;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct UGroomBindingAsset* ReturnValue;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath Size 64
class FCreateNewGroomBindingAssetWithPath
{

 public: 
	struct FString InDesiredPackagePath;  // Offset: 0 Size: 16
	struct UGroomAsset* InGroomAsset;  // Offset: 16 Size: 8
	struct USkeletalMesh* InSkeletalMesh;  // Offset: 24 Size: 8
	int32_t InNumInterpolationPoints;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct USkeletalMesh* InSourceSkeletalMeshForTransfer;  // Offset: 40 Size: 8
	int32_t InMatchingSection;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4
	struct UGroomBindingAsset* ReturnValue;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 