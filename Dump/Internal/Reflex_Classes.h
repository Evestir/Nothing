#pragma once 
#include <Reflex_Structs.h>
 
 
 
//Class Reflex.ReflexBlueprintLibrary Size 40
// Inherited 40 bytes 
class UReflexBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void SetReflexMode(enum class EReflexMode Mode); // Function Reflex.ReflexBlueprintLibrary.SetReflexMode
	void SetFlashIndicatorEnabled(bool bEnabled); // Function Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled
	float GetRenderLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs
	enum class EReflexMode GetReflexMode(); // Function Reflex.ReflexBlueprintLibrary.GetReflexMode
	bool GetReflexAvailable(); // Function Reflex.ReflexBlueprintLibrary.GetReflexAvailable
	float GetGameToRenderLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs
	float GetGameLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs
	bool GetFlashIndicatorEnabled(); // Function Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled
}; 
 
 


