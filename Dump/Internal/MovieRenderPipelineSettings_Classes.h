#pragma once 
#include <MovieRenderPipelineSettings_Structs.h>
 
 
 
//Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting Size 160
// Inherited 72 bytes 
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{

 public: 
	struct FSoftClassPath BurnInClass;  // Offset: 72 Size: 24
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bCompositeOntoFinalImage : 1;  // Offset: 96 Size: 1
	char pad_97[47];  // Offset: 97 Size: 47
	struct UTextureRenderTarget2D* RenderTarget;  // Offset: 144 Size: 8
	struct UMoviePipelineBurnInWidget* BurnInWidgetInstance;  // Offset: 152 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget Size 608
// Inherited 608 bytes 
class UMoviePipelineBurnInWidget : public UUserWidget
{

 public: 



 // Functions 
 public:
	void OnOutputFrameStarted(struct UMoviePipeline* ForPipeline); // Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
}; 
 
 


//Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting Size 200
// Inherited 72 bytes 
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{

 public: 
	struct TMap<struct FString, float> ConsoleVariables;  // Offset: 72 Size: 80
	struct TArray<struct FString> StartConsoleCommands;  // Offset: 152 Size: 16
	struct TArray<struct FString> EndConsoleCommands;  // Offset: 168 Size: 16
	char pad_184[16];  // Offset: 184 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer Size 104
// Inherited 72 bytes 
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{

 public: 
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool bCompositeOntoFinalImage : 1;  // Offset: 72 Size: 1
	char pad_73[23];  // Offset: 73 Size: 23
	struct UTextureRenderTarget2D* RenderTarget;  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 


