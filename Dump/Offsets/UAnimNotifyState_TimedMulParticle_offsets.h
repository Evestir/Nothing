namespace offsets
{
	namespace UAnimNotifyState_TimedMulParticle
	{
			constexpr auto ParticleLayer = 0x30; // Size: 4, Type: int32_t
			constexpr auto Additional_PSTemplate = 0x38; // Size: 16, Type: struct TArray<struct UParticleSystem*>
			constexpr auto DefaultPlayParticle = 0x48; // Size: 4, Type: int32_t
			constexpr auto PSTemplate = 0x50; // Size: 8, Type: struct UParticleSystem*
			constexpr auto MirrorDetailLevel = 0x58; // Size: 4, Type: int32_t
			constexpr auto SocketName = 0x5c; // Size: 8, Type: struct FName
			constexpr auto LocationOffset = 0x64; // Size: 12, Type: struct FVector
			constexpr auto RotationOffset = 0x70; // Size: 12, Type: struct FRotator
			constexpr auto bDestroyAtEnd = 0x7c; // Size: 1, Type: bool
			constexpr auto bPlayAtEnd = 0x7d; // Size: 1, Type: bool
	}
} 
