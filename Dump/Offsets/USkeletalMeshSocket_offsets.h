namespace offsets
{
	namespace USkeletalMeshSocket
	{
			constexpr auto SocketName = 0x28; // Size: 8, Type: struct FName
			constexpr auto BoneName = 0x30; // Size: 8, Type: struct FName
			constexpr auto RelativeLocation = 0x38; // Size: 12, Type: struct FVector
			constexpr auto RelativeRotation = 0x44; // Size: 12, Type: struct FRotator
			constexpr auto RelativeScale = 0x50; // Size: 12, Type: struct FVector
			constexpr auto bForceAlwaysAnimated = 0x5c; // Size: 1, Type: bool
	}
} 
