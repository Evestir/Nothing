#pragma once 
#include <MoviePlayer_Structs.h>
 
 
 
//Class MoviePlayer.MoviePlayerSettings Size 64
// Inherited 40 bytes 
class UMoviePlayerSettings : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bWaitForMoviesToComplete : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bMoviesAreSkippable : 1;  // Offset: 41 Size: 1
	char pad_42[6];  // Offset: 42 Size: 6
	struct TArray<struct FString> StartupMovies;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 


