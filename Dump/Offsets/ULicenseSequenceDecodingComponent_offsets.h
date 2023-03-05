namespace offsets
{
	namespace ULicenseSequenceDecodingComponent
	{
			constexpr auto Sequence = 0xb0; // Size: 8, Type: struct ULevelSequence*
			constexpr auto Player = 0xb8; // Size: 8, Type: struct ULevelSequencePlayer*
			constexpr auto ReplicationComponent = 0xc0; // Size: 8, Type: struct UKartMovementReplication*
			constexpr auto MovementComponent = 0xc8; // Size: 8, Type: struct USimulationMovementComponent*
			constexpr auto BoostComponent = 0xd0; // Size: 8, Type: struct UBoostComponent*
			constexpr auto ItemSlotComponent = 0xd8; // Size: 8, Type: struct UItemSlotComponent*
			constexpr auto SequenceWidgetClass = 0xe0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto SequenceWidget = 0x108; // Size: 8, Type: struct UDialogTemplate*
			constexpr auto SequenceMessageWidget = 0x110; // Size: 8, Type: struct ULicensePortraitMessageWidget*
			constexpr auto PauseSound = 0x118; // Size: 8, Type: struct UFMODEvent*
	}
} 
