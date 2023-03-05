namespace offsets
{
	namespace AEmitter
	{
			constexpr auto ParticleSystemComponent = 0x220; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto bDestroyOnSystemFinish = 0x228; // Size: 1, Type: char
			constexpr auto bPostUpdateTickGroup = 0x228; // Size: 1, Type: char
			constexpr auto bCurrentlyActive = 0x228; // Size: 1, Type: char
			constexpr auto OnParticleSpawn = 0x230; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleBurst = 0x240; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleDeath = 0x250; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleCollide = 0x260; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
