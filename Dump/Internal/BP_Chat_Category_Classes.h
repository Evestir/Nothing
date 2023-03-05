#pragma once 
#include <BP_Chat_Category_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_Chat_Category.BP_Chat_Category_C Size 712
// Inherited 608 bytes 
class UBP_Chat_Category_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UWidgetSwitcher* V_CategorySwitcher;  // Offset: 616 Size: 8
	struct UImage* V_img_bg;  // Offset: 624 Size: 8
	struct UImage* V_img_bg_2;  // Offset: 632 Size: 8
	struct UKdTextBlock* V_txtCatogory;  // Offset: 640 Size: 8
	struct UKdTextBlock* V_txtCatogory_2;  // Offset: 648 Size: 8
	struct UKdTextBlock* V_userName_Party;  // Offset: 656 Size: 8
	struct UKdTextBlock* V_userName_Team;  // Offset: 664 Size: 8
	struct FLinearColor Inst_CategoryColor;  // Offset: 672 Size: 16
	struct FText Inst_CategoryName;  // Offset: 688 Size: 24



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_Chat_Category.BP_Chat_Category_C.PreConstruct
	void ExecuteUbergraph_BP_Chat_Category(int32_t EntryPoint); // Function BP_Chat_Category.BP_Chat_Category_C.ExecuteUbergraph_BP_Chat_Category
}; 
 
 


