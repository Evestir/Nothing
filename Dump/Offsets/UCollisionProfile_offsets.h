namespace offsets
{
	namespace UCollisionProfile
	{
			constexpr auto Profiles = 0x38; // Size: 16, Type: struct TArray<struct FCollisionResponseTemplate>
			constexpr auto DefaultChannelResponses = 0x48; // Size: 16, Type: struct TArray<struct FCustomChannelSetup>
			constexpr auto EditProfiles = 0x58; // Size: 16, Type: struct TArray<struct FCustomProfile>
			constexpr auto ProfileRedirects = 0x68; // Size: 16, Type: struct TArray<struct FRedirector>
			constexpr auto CollisionChannelRedirects = 0x78; // Size: 16, Type: struct TArray<struct FRedirector>
	}
} 
