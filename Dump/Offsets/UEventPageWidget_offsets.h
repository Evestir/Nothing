namespace offsets
{
	namespace UEventPageWidget
	{
			constexpr auto bSetDefaultFocus = 0x2e8; // Size: 1, Type: bool
			constexpr auto LastSceneCaptureType = 0x2e9; // Size: 1, Type: enum class ESceneCaptureType
			constexpr auto EventInfoClass = 0x3b0; // Size: 8, Type: UUserWidget*
			constexpr auto EventTimerElapsedTime = 0x3b8; // Size: 4, Type: float
			constexpr auto ADTEventClass = 0x3c0; // Size: 8, Type: UUserWidget*
			constexpr auto ADTStepIndex = 0x3c8; // Size: 4, Type: int32_t
			constexpr auto ADTRewardIndex = 0x3cc; // Size: 4, Type: int32_t
			constexpr auto ADTRewardStocks = 0x3d0; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto CurStepCheckIndex = 0x3e0; // Size: 4, Type: int32_t
			constexpr auto LastADTEventObject = 0x3e8; // Size: 8, Type: struct UADTEventObject*
			constexpr auto ADTTimerElapsedTime = 0x400; // Size: 4, Type: float
			constexpr auto CurStepADTTimerElapsedTime = 0x408; // Size: 4, Type: float
			constexpr auto ADTPeriodElapsedTime = 0x410; // Size: 4, Type: float
			constexpr auto VDTEventClass = 0x418; // Size: 8, Type: UUserWidget*
			constexpr auto VDTTimerElapsedTime = 0x420; // Size: 4, Type: float
			constexpr auto VDTPeriodElapsedTime = 0x428; // Size: 4, Type: float
			constexpr auto VDTEventStartRemainTime = 0x430; // Size: 4, Type: float
			constexpr auto VDTEventTimeCheckElapsedTime = 0x438; // Size: 4, Type: float
			constexpr auto bIsVDTEventClear = 0x440; // Size: 1, Type: bool
			constexpr auto bVDTEventInit = 0x441; // Size: 1, Type: bool
			constexpr auto VDTEventStatus = 0x442; // Size: 1, Type: enum class EVDTEventStatus
			constexpr auto AttendanceEventClass = 0x448; // Size: 8, Type: UUserWidget*
			constexpr auto CurrentAttendanceEventWidget = 0x450; // Size: 8, Type: struct UUserWidget*
			constexpr auto CurrentAttendanceEventObjects = 0x488; // Size: 16, Type: struct TArray<struct UAttendanceEventObject*>
			constexpr auto RewardDetailDialog = 0x498; // Size: 8, Type: struct TWeakObjectPtr<UDialogTemplate>
	}
} 
