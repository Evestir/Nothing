#pragma once 
#include <BP_LobbyMain_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_LobbyMain.BP_LobbyMain_C Size 1344
// Inherited 1072 bytes 
class UBP_LobbyMain_C : public UC_LobbyPageWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1072 Size: 8
	struct UWidgetAnimation* OnEnter_SocialNotActive;  // Offset: 1080 Size: 8
	struct UWidgetAnimation* GuideOpen;  // Offset: 1088 Size: 8
	struct UWidgetAnimation* GuideClose;  // Offset: 1096 Size: 8
	struct UWidgetAnimation* OnEnter;  // Offset: 1104 Size: 8
	struct UBP_PageKeySlotTemplate_new_C* BP_PageKeySlotTemplate_new;  // Offset: 1112 Size: 8
	struct UMenuAnchor* ContextSlot;  // Offset: 1120 Size: 8
	struct UKdTextBlock* KdTextBlock;  // Offset: 1128 Size: 8
	struct UKdTextBlock* KdTextBlock_4;  // Offset: 1136 Size: 8
	struct UKdTextBlock* KdTextBlock_7;  // Offset: 1144 Size: 8
	struct UKdTextBlock* KdTextBlock_108;  // Offset: 1152 Size: 8
	struct UKdTextBlock* LiveryReportTextBlock;  // Offset: 1160 Size: 8
	struct UImage* UserLevelFull;  // Offset: 1168 Size: 8
	struct UBP_KeyIcon_Bottom_C* V_ChattingButton;  // Offset: 1176 Size: 8
	struct UBP_KeyIcon_Bottom_C* V_CommonMenuButton;  // Offset: 1184 Size: 8
	struct UBP_KeyIcon_Bottom_C* V_EmoticonButton;  // Offset: 1192 Size: 8
	struct UBP_KeyIcon_Bottom_C* V_KeyIcon_LiveryReportViewer;  // Offset: 1200 Size: 8
	struct UBP_KeyIcon_C* V_KeyIcon_PCRoom_DTEvent;  // Offset: 1208 Size: 8
	struct UBP_KeyIcon_C* V_KeyIcon_PCRoom_Emblem;  // Offset: 1216 Size: 8
	struct UBP_KeyIcon_Bottom_C* V_KeyIcon_Quit;  // Offset: 1224 Size: 8
	struct UBP_KeyIcon_Bottom_C* V_KeyIcon_Select;  // Offset: 1232 Size: 8
	struct UWidgetSwitcher* V_LevelGaugeSwitcher;  // Offset: 1240 Size: 8
	struct UBP_ButtonTemplate_C* V_LobbyDTEvenUI;  // Offset: 1248 Size: 8
	struct UBP_LobbyMain_Challenge_C* V_LobbyMain_Challenge;  // Offset: 1256 Size: 8
	struct UBP_LobbyMainTab_C* V_OutGameMainTab;  // Offset: 1264 Size: 8
	struct UBP_KeyIcon_Empty_C* V_RotateCharacterLeftButton;  // Offset: 1272 Size: 8
	struct UBP_KeyIcon_Bottom_C* V_RotateCharacterRightButton;  // Offset: 1280 Size: 8
	struct UKdTextBlock* V_RotateCharRightTextBlock;  // Offset: 1288 Size: 8
	struct UBP_KeyIcon_Empty_C* V_RotatePawnLeftButton;  // Offset: 1296 Size: 8
	struct UBP_KeyIcon_Bottom_C* V_RotatePawnRightButton;  // Offset: 1304 Size: 8
	struct UKdTextBlock* V_RotateRightTextBlock;  // Offset: 1312 Size: 8
	struct UKdTextBlock* V_SelectTextBlock;  // Offset: 1320 Size: 8
	struct UBP_UserEmblem_C* V_UserEmblem;  // Offset: 1328 Size: 8
	struct UProgressBar* V_UserLevelProgressBar;  // Offset: 1336 Size: 8



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTBP_LobbyMain_5(); // Function BP_LobbyMain.BP_LobbyMain_C.SequenceEvent__ENTRYPOINTBP_LobbyMain_5
	void SequenceEvent__ENTRYPOINTBP_LobbyMain_4(); // Function BP_LobbyMain.BP_LobbyMain_C.SequenceEvent__ENTRYPOINTBP_LobbyMain_4
	void SequenceEvent__ENTRYPOINTBP_LobbyMain_3(); // Function BP_LobbyMain.BP_LobbyMain_C.SequenceEvent__ENTRYPOINTBP_LobbyMain_3
	void SequenceEvent__ENTRYPOINTBP_LobbyMain_2(); // Function BP_LobbyMain.BP_LobbyMain_C.SequenceEvent__ENTRYPOINTBP_LobbyMain_2
	void SequenceEvent__ENTRYPOINTBP_LobbyMain_1(); // Function BP_LobbyMain.BP_LobbyMain_C.SequenceEvent__ENTRYPOINTBP_LobbyMain_1
	void Event_GuideKeyShow(); // Function BP_LobbyMain.BP_LobbyMain_C.Event_GuideKeyShow
	void Event_GuideKeyHide(); // Function BP_LobbyMain.BP_LobbyMain_C.Event_GuideKeyHide
	void ExecuteUbergraph_BP_LobbyMain(int32_t EntryPoint); // Function BP_LobbyMain.BP_LobbyMain_C.ExecuteUbergraph_BP_LobbyMain
}; 
 
 


