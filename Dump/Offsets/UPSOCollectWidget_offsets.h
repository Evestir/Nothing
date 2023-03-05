namespace offsets
{
	namespace UPSOCollectWidget
	{
			constexpr auto SequenceLevelDataTable = 0x268; // Size: 40, Type: struct TSoftObjectPtr<UDataTable>
			constexpr auto ControlPawnEquipWidget = 0x290; // Size: 8, Type: struct UControlPawnEquipWidget*
			constexpr auto ControlPawnFXWidget = 0x298; // Size: 8, Type: struct UControlPawnFXWidget*
			constexpr auto ControlDirectingWidget = 0x2a0; // Size: 8, Type: struct UControlDirectingWidget*
			constexpr auto ControlTrackWidget = 0x2a8; // Size: 8, Type: struct UControlTrackWidget*
			constexpr auto Button_Travel = 0x2b0; // Size: 8, Type: struct UButton*
			constexpr auto Button_StartCollect = 0x2b8; // Size: 8, Type: struct UButton*
			constexpr auto Button_StartSequence_Tutorial = 0x2c0; // Size: 8, Type: struct UButton*
			constexpr auto Button_StartSequence_License = 0x2c8; // Size: 8, Type: struct UButton*
			constexpr auto Button_StartOneStep = 0x2d0; // Size: 8, Type: struct UButton*
			constexpr auto Button_GotoLoginStage = 0x2d8; // Size: 8, Type: struct UButton*
			constexpr auto V_FocusedButtonText = 0x2e0; // Size: 8, Type: struct UTextBlock*
			constexpr auto SequenceList = 0x2e8; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<ULevelSequence>>
			constexpr auto SpringArm = 0x310; // Size: 8, Type: struct USpringArmComponent*
	}
} 
