#pragma once 
#include <TemplateSequence_Structs.h>
 
 
 
//Class TemplateSequence.TemplateSequence Size 264
// Inherited 96 bytes 
class UTemplateSequence : public UMovieSceneSequence
{

 public: 
	struct UMovieScene* MovieScene;  // Offset: 96 Size: 8
	struct TSoftClassPtr<UObject> BoundActorClass;  // Offset: 104 Size: 40
	struct TSoftObjectPtr<AActor> BoundPreviewActor;  // Offset: 144 Size: 40
	struct TMap<struct FGuid, struct FName> BoundActorComponents;  // Offset: 184 Size: 80



 // Functions 
 public:
}; 
 
 


//Class TemplateSequence.SequenceCameraShakePattern Size 88
// Inherited 40 bytes 
class USequenceCameraShakePattern : public UCameraShakePattern
{

 public: 
	struct UCameraAnimationSequence* Sequence;  // Offset: 40 Size: 8
	float PlayRate;  // Offset: 48 Size: 4
	float Scale;  // Offset: 52 Size: 4
	float BlendInTime;  // Offset: 56 Size: 4
	float BlendOutTime;  // Offset: 60 Size: 4
	float RandomSegmentDuration;  // Offset: 64 Size: 4
	char pad_68_1 : 7;  // Offset: 68 Size: 1
	bool bRandomSegment : 1;  // Offset: 68 Size: 1
	char pad_69[3];  // Offset: 69 Size: 3
	struct USequenceCameraShakeSequencePlayer* Player;  // Offset: 72 Size: 8
	struct USequenceCameraShakeCameraStandIn* CameraStandIn;  // Offset: 80 Size: 8



 // Functions 
 public:
}; 
 
 


//Class TemplateSequence.CameraAnimationSequence Size 264
// Inherited 264 bytes 
class UCameraAnimationSequence : public UTemplateSequence
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class TemplateSequence.TemplateSequenceActor Size 632
// Inherited 544 bytes 
class ATemplateSequenceActor : public AActor
{

 public: 
	char pad_544[16];  // Offset: 544 Size: 16
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // Offset: 560 Size: 20
	char pad_580[4];  // Offset: 580 Size: 4
	struct UTemplateSequencePlayer* SequencePlayer;  // Offset: 584 Size: 8
	struct FSoftObjectPath TemplateSequence;  // Offset: 592 Size: 24
	struct FTemplateSequenceBindingOverrideData BindingOverride;  // Offset: 616 Size: 12
	char pad_628[4];  // Offset: 628 Size: 4



 // Functions 
 public:
	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence
	void SetBinding(struct AActor* Actor, bool bOverridesDefault); // Function TemplateSequence.TemplateSequenceActor.SetBinding
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence
}; 
 
 


//Class TemplateSequence.SequenceCameraShakeCameraStandIn Size 1760
// Inherited 40 bytes 
class USequenceCameraShakeCameraStandIn : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	float FieldOfView;  // Offset: 48 Size: 4
	char bConstrainAspectRatio : 1;  // Offset: 52 Size: 1
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	char pad_53[4];  // Offset: 53 Size: 4
	float AspectRatio;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4
	struct FPostProcessSettings PostProcessSettings;  // Offset: 64 Size: 1488
	float PostProcessBlendWeight;  // Offset: 1552 Size: 4
	struct FCameraFilmbackSettings Filmback;  // Offset: 1556 Size: 12
	struct FCameraLensSettings LensSettings;  // Offset: 1568 Size: 24
	struct FCameraFocusSettings FocusSettings;  // Offset: 1592 Size: 88
	float CurrentFocalLength;  // Offset: 1680 Size: 4
	float CurrentAperture;  // Offset: 1684 Size: 4
	float CurrentFocusDistance;  // Offset: 1688 Size: 4
	char pad_1692[68];  // Offset: 1692 Size: 68



 // Functions 
 public:
}; 
 
 


//Class TemplateSequence.SequenceCameraShakeSequencePlayer Size 1064
// Inherited 40 bytes 
class USequenceCameraShakeSequencePlayer : public UObject
{

 public: 
	char pad_40[680];  // Offset: 40 Size: 680
	struct UObject* BoundObjectOverride;  // Offset: 720 Size: 8
	struct UMovieSceneSequence* Sequence;  // Offset: 728 Size: 8
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // Offset: 736 Size: 232
	char pad_968[96];  // Offset: 968 Size: 96



 // Functions 
 public:
}; 
 
 


//Class TemplateSequence.TemplateSequencePlayer Size 1264
// Inherited 1256 bytes 
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{

 public: 
	char pad_1256[8];  // Offset: 1256 Size: 8



 // Functions 
 public:
	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
}; 
 
 


//Class TemplateSequence.TemplateSequenceSection Size 384
// Inherited 360 bytes 
class UTemplateSequenceSection : public UMovieSceneSubSection
{

 public: 
	char pad_360[8];  // Offset: 360 Size: 8
	struct TArray<struct FTemplateSectionPropertyScale> PropertyScales;  // Offset: 368 Size: 16



 // Functions 
 public:
}; 
 
 


//Class TemplateSequence.TemplateSequenceSystem Size 176
// Inherited 64 bytes 
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[112];  // Offset: 64 Size: 112



 // Functions 
 public:
}; 
 
 


//Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem Size 152
// Inherited 64 bytes 
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[88];  // Offset: 64 Size: 88



 // Functions 
 public:
}; 
 
 


//Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem Size 144
// Inherited 64 bytes 
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[80];  // Offset: 64 Size: 80



 // Functions 
 public:
}; 
 
 


//Class TemplateSequence.TemplateSequenceTrack Size 160
// Inherited 160 bytes 
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


