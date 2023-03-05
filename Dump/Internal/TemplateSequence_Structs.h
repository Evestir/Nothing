#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer Size 8
class FGetSequencePlayer
{

 public: 
	struct UTemplateSequencePlayer* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData Size 12
class FTemplateSequenceBindingOverrideData
{

 public: 
	struct TWeakObjectPtr<UObject> Object;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bOverridesDefault : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer Size 56
class FCreateTemplateSequencePlayer
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UTemplateSequence* TemplateSequence;  // Offset: 8 Size: 8
	struct FMovieSceneSequencePlaybackSettings Settings;  // Offset: 16 Size: 20
	char pad_36[4];  // Offset: 36 Size: 4
	struct ATemplateSequenceActor* OutActor;  // Offset: 40 Size: 8
	struct UTemplateSequencePlayer* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct TemplateSequence.TemplateSectionPropertyScale Size 200
class FTemplateSectionPropertyScale
{

 public: 
	struct FGuid ObjectBinding;  // Offset: 0 Size: 16
	struct FMovieScenePropertyBinding PropertyBinding;  // Offset: 16 Size: 20
	enum class ETemplateSectionPropertyScaleType PropertyScaleType;  // Offset: 36 Size: 4
	struct FMovieSceneFloatChannel FloatChannel;  // Offset: 40 Size: 160



 // Functions 
 public:
}; 
 
 //Function TemplateSequence.TemplateSequenceActor.GetSequence Size 8
class FGetSequence
{

 public: 
	struct UTemplateSequence* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function TemplateSequence.TemplateSequenceActor.SetBinding Size 16
class FSetBinding
{

 public: 
	struct AActor* Actor;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bOverridesDefault : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function TemplateSequence.TemplateSequenceActor.LoadSequence Size 8
class FLoadSequence
{

 public: 
	struct UTemplateSequence* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function TemplateSequence.TemplateSequenceActor.SetSequence Size 8
class FSetSequence
{

 public: 
	struct UTemplateSequence* InSequence;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 