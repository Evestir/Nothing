namespace offsets
{
	namespace ULicenseDriftCheckComponent
	{
			constexpr auto Data = 0xb8; // Size: 8, Type: struct ULicenseDriftCheckData*
			constexpr auto ParticleSystem = 0xc0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto DriftGateList = 0xc8; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto CurrentIndex = 0xd8; // Size: 4, Type: int32_t
			constexpr auto Pawn = 0xe0; // Size: 8, Type: struct APawn*
			constexpr auto LastPosition = 0xe8; // Size: 12, Type: struct FVector
			constexpr auto Particle = 0x108; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
	}
} 
