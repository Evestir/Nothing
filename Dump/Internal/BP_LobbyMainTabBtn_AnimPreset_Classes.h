#pragma once 
#include <BP_LobbyMainTabBtn_AnimPreset_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_LobbyMainTabBtn_AnimPreset.BP_LobbyMainTabBtn_AnimPreset_C Size 824
// Inherited 776 bytes 
class UBP_LobbyMainTabBtn_AnimPreset_C : public UAnimationPresetWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 776 Size: 8
	struct UWidgetAnimation* UnFocus;  // Offset: 784 Size: 8
	struct UWidgetAnimation* Focus;  // Offset: 792 Size: 8
	struct UImage* img_mainbtn;  // Offset: 800 Size: 8
	struct UOverlay* Overlay_focus;  // Offset: 808 Size: 8
	struct UTextBlock* txt_ratio_test;  // Offset: 816 Size: 8



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_LobbyMainTabBtn_AnimPreset.BP_LobbyMainTabBtn_AnimPreset_C.PreConstruct
	void Construct(); // Function BP_LobbyMainTabBtn_AnimPreset.BP_LobbyMainTabBtn_AnimPreset_C.Construct
	void ExecuteUbergraph_BP_LobbyMainTabBtn_AnimPreset(int32_t EntryPoint); // Function BP_LobbyMainTabBtn_AnimPreset.BP_LobbyMainTabBtn_AnimPreset_C.ExecuteUbergraph_BP_LobbyMainTabBtn_AnimPreset
}; 
 
 


