namespace offsets
{
	namespace ULiveLinkSettings
	{
			constexpr auto DefaultRoleSettings = 0x28; // Size: 16, Type: struct TArray<struct FLiveLinkRoleProjectSetting>
			constexpr auto FrameInterpolationProcessor = 0x38; // Size: 8, Type: ULiveLinkFrameInterpolationProcessor*
			constexpr auto DefaultLiveLinkPreset = 0x40; // Size: 40, Type: struct TSoftObjectPtr<ULiveLinkPreset>
			constexpr auto PresetSaveDir = 0x68; // Size: 16, Type: struct FDirectoryPath
			constexpr auto ClockOffsetCorrectionStep = 0x78; // Size: 4, Type: float
			constexpr auto DefaultMessageBusSourceMode = 0x7c; // Size: 1, Type: enum class ELiveLinkSourceMode
			constexpr auto MessageBusPingRequestFrequency = 0x80; // Size: 8, Type: double
			constexpr auto MessageBusHeartbeatFrequency = 0x88; // Size: 8, Type: double
			constexpr auto MessageBusHeartbeatTimeout = 0x90; // Size: 8, Type: double
			constexpr auto MessageBusTimeBeforeRemovingInactiveSource = 0x98; // Size: 8, Type: double
			constexpr auto TimeWithoutFrameToBeConsiderAsInvalid = 0xa0; // Size: 8, Type: double
			constexpr auto ValidColor = 0xa8; // Size: 16, Type: struct FLinearColor
			constexpr auto InvalidColor = 0xb8; // Size: 16, Type: struct FLinearColor
			constexpr auto TextSizeSource = 0xc8; // Size: 1, Type: char
			constexpr auto TextSizeSubject = 0xc9; // Size: 1, Type: char
	}
} 
