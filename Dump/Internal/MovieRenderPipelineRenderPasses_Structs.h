#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct MovieRenderPipelineRenderPasses.MoviePipelinePostProcessPass Size 48
class FMoviePipelinePostProcessPass
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnabled : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TSoftObjectPtr<UMaterialInterface> Material;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 