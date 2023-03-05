#pragma once 
#include <BP_UserEmblem_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_UserEmblem.BP_UserEmblem_C Size 649
// Inherited 608 bytes 
class UBP_UserEmblem_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct USizeBox* SB_GrandPrix;  // Offset: 616 Size: 8
	struct UBP_UserGrandPrixTier_C* V_BP_UserGrandPrixTier;  // Offset: 624 Size: 8
	struct FVector2D Inst_TierBoxSize;  // Offset: 632 Size: 8
	struct FVector2D Inst_TierBoxPosition;  // Offset: 640 Size: 8
	char pad_648_1 : 7;  // Offset: 648 Size: 1
	bool Inst_TierBoxVisible : 1;  // Offset: 648 Size: 1



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_UserEmblem.BP_UserEmblem_C.PreConstruct
	void ExecuteUbergraph_BP_UserEmblem(int32_t EntryPoint); // Function BP_UserEmblem.BP_UserEmblem_C.ExecuteUbergraph_BP_UserEmblem
}; 
 
 


