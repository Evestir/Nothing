namespace offsets
{
	namespace UPcPartyChange
	{
			constexpr auto accountId = 0x30; // Size: 16, Type: struct FString
			constexpr auto riderName = 0x40; // Size: 16, Type: struct FString
			constexpr auto Profile = 0x50; // Size: 96, Type: struct FKtAccountProfile
			constexpr auto joinId = 0xb0; // Size: 4, Type: int32_t
			constexpr auto State = 0xb4; // Size: 4, Type: int32_t
			constexpr auto partyBoss = 0xb8; // Size: 1, Type: bool
			constexpr auto PartyId = 0xc0; // Size: 16, Type: struct FString
			constexpr auto vivoxChannelName = 0xd0; // Size: 16, Type: struct FString
			constexpr auto vivoxJoinToken = 0xe0; // Size: 16, Type: struct FString
			constexpr auto vivoxTranscriptionToken = 0xf0; // Size: 16, Type: struct FString
			constexpr auto ready = 0x100; // Size: 1, Type: bool
			constexpr auto itemPreview = 0x108; // Size: 168, Type: struct FKtItemPreview
			constexpr auto clientStage = 0x1b0; // Size: 16, Type: struct FString
			constexpr auto clientStageParam = 0x1c0; // Size: 16, Type: struct FString
			constexpr auto liverySignedUrl = 0x1d0; // Size: 16, Type: struct FString
	}
} 
