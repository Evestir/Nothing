namespace offsets
{
	namespace UTargetFinderComponent
	{
			constexpr auto AimWidget3DLocalOffset = 0xc0; // Size: 12, Type: struct FVector
			constexpr auto AimWidget3DScale = 0xcc; // Size: 4, Type: float
			constexpr auto AimWidgetClass = 0xd0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto AimWidget3DClass = 0xf8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto AudioComponent = 0x120; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto FlySource = 0x128; // Size: 8, Type: struct AActor*
			constexpr auto TargetCandidate = 0x130; // Size: 8, Type: struct AActor*
			constexpr auto TargetReplicated = 0x138; // Size: 8, Type: struct AActor*
			constexpr auto WidgetComponent = 0x150; // Size: 8, Type: struct UWidgetComponent*
			constexpr auto AimWidget = 0x158; // Size: 8, Type: struct UItemAimWidget*
			constexpr auto AimWidget3D = 0x160; // Size: 8, Type: struct UItemAimWidget*
			constexpr auto AimWidgetOnMe = 0x168; // Size: 8, Type: struct UItemAimWidget*
	}
} 
