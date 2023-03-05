#pragma once 
#include <OodleNetworkHandlerComponent_Structs.h>
 
 
 
//Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet Size 160
// Inherited 128 bytes 
class UOodleNetworkTrainerCommandlet : public UCommandlet
{

 public: 
	char pad_128_1 : 7;  // Offset: 128 Size: 1
	bool bCompressionTest : 1;  // Offset: 128 Size: 1
	char pad_129[3];  // Offset: 129 Size: 3
	int32_t HashTableSize;  // Offset: 132 Size: 4
	int32_t DictionarySize;  // Offset: 136 Size: 4
	int32_t DictionaryTrials;  // Offset: 140 Size: 4
	int32_t TrialRandomness;  // Offset: 144 Size: 4
	int32_t TrialGenerations;  // Offset: 148 Size: 4
	char pad_152_1 : 7;  // Offset: 152 Size: 1
	bool bNoTrials : 1;  // Offset: 152 Size: 1
	char pad_153[7];  // Offset: 153 Size: 7



 // Functions 
 public:
}; 
 
 


