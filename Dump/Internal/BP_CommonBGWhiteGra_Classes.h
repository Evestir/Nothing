#pragma once 
#include <BP_CommonBGWhiteGra_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_CommonBGWhiteGra.BP_CommonBGWhiteGra_C Size 634
// Inherited 608 bytes 
class UBP_CommonBGWhiteGra_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UImage* img_bottom1;  // Offset: 616 Size: 8
	struct UImage* img_right1;  // Offset: 624 Size: 8
	char pad_632_1 : 7;  // Offset: 632 Size: 1
	bool UseBottom1 : 1;  // Offset: 632 Size: 1
	char pad_633_1 : 7;  // Offset: 633 Size: 1
	bool UseRight1 : 1;  // Offset: 633 Size: 1



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_CommonBGWhiteGra.BP_CommonBGWhiteGra_C.PreConstruct
	void ExecuteUbergraph_BP_CommonBGWhiteGra(int32_t EntryPoint); // Function BP_CommonBGWhiteGra.BP_CommonBGWhiteGra_C.ExecuteUbergraph_BP_CommonBGWhiteGra
}; 
 
 


