#pragma once 
#include <MovieRenderPipelineRenderPasses_Structs.h>
 
 
 
//Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase Size 368
// Inherited 200 bytes 
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{

 public: 
	char pad_200_1 : 7;  // Offset: 200 Size: 1
	bool bAccumulatorIncludesAlpha : 1;  // Offset: 200 Size: 1
	char pad_201_1 : 7;  // Offset: 201 Size: 1
	bool bDisableMultisampleEffects : 1;  // Offset: 201 Size: 1
	char pad_202_1 : 7;  // Offset: 202 Size: 1
	bool bUse32BitPostProcessMaterials : 1;  // Offset: 202 Size: 1
	char pad_203[5];  // Offset: 203 Size: 5
	struct TArray<struct FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;  // Offset: 208 Size: 16
	char pad_224_1 : 7;  // Offset: 224 Size: 1
	bool bAddDefaultLayer : 1;  // Offset: 224 Size: 1
	char pad_225[7];  // Offset: 225 Size: 7
	struct TArray<struct FActorLayer> StencilLayers;  // Offset: 232 Size: 16
	struct TArray<struct UMaterialInterface*> ActivePostProcessMaterials;  // Offset: 248 Size: 16
	struct UMaterialInterface* StencilLayerMaterial;  // Offset: 264 Size: 8
	struct TArray<struct UTextureRenderTarget2D*> TileRenderTargets;  // Offset: 272 Size: 16
	char pad_288[80];  // Offset: 288 Size: 80



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase Size 104
// Inherited 72 bytes 
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{

 public: 
	char pad_72[32];  // Offset: 72 Size: 32



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase Size 200
// Inherited 72 bytes 
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{

 public: 
	char pad_72[128];  // Offset: 72 Size: 128



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly Size 368
// Inherited 368 bytes 
class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit Size 368
// Inherited 368 bytes 
class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting Size 368
// Inherited 368 bytes 
class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer Size 368
// Inherited 368 bytes 
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly Size 368
// Inherited 368 bytes 
class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR Size 112
// Inherited 104 bytes 
class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{

 public: 
	enum class EEXRCompressionFormat Compression;  // Offset: 104 Size: 1
	char pad_105_1 : 7;  // Offset: 105 Size: 1
	bool bMultilayer : 1;  // Offset: 105 Size: 1
	char pad_106[6];  // Offset: 106 Size: 6



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP Size 104
// Inherited 104 bytes 
class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG Size 104
// Inherited 104 bytes 
class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG Size 104
// Inherited 104 bytes 
class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput Size 184
// Inherited 72 bytes 
class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{

 public: 
	struct FString FileNameFormatOverride;  // Offset: 72 Size: 16
	char pad_88[96];  // Offset: 88 Size: 96



 // Functions 
 public:
}; 
 
 


