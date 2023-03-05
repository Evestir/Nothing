#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct EngineSettings.AutoCompleteCommand Size 40
class FAutoCompleteCommand
{

 public: 
	struct FString Command;  // Offset: 0 Size: 16
	struct FString desc;  // Offset: 16 Size: 16
	char pad_32[8];  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function EngineSettings.GameMapsSettings.GetGameMapsSettings Size 8
class FGetGameMapsSettings
{

 public: 
	struct UGameMapsSettings* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct EngineSettings.GameModeName Size 40
class FGameModeName
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	struct FSoftClassPath GameMode;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1 Size 1
class FGetSkipAssigningGamepadToPlayer1
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1 Size 1
class FSetSkipAssigningGamepadToPlayer1
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSkipFirstPlayer : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 