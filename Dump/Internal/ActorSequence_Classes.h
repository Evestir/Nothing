#pragma once 
#include <ActorSequence_Structs.h>
 
 
 
//Class ActorSequence.ActorSequenceComponent Size 216
// Inherited 176 bytes 
class UActorSequenceComponent : public UActorComponent
{

 public: 
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // Offset: 176 Size: 20
	char pad_196[4];  // Offset: 196 Size: 4
	struct UActorSequence* Sequence;  // Offset: 200 Size: 8
	struct UActorSequencePlayer* SequencePlayer;  // Offset: 208 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ActorSequence.ActorSequence Size 136
// Inherited 96 bytes 
class UActorSequence : public UMovieSceneSequence
{

 public: 
	struct UMovieScene* MovieScene;  // Offset: 96 Size: 8
	struct FActorSequenceObjectReferenceMap ObjectReferences;  // Offset: 104 Size: 32



 // Functions 
 public:
}; 
 
 


//Class ActorSequence.ActorSequencePlayer Size 1256
// Inherited 1256 bytes 
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{

 public: 



 // Functions 
 public:
}; 
 
 


