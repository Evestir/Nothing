namespace offsets
{
	namespace AServerStatReplicator
	{
			constexpr auto bUpdateStatNet = 0x220; // Size: 1, Type: bool
			constexpr auto bOverwriteClientStats = 0x221; // Size: 1, Type: bool
			constexpr auto Channels = 0x224; // Size: 4, Type: uint32_t
			constexpr auto InRate = 0x228; // Size: 4, Type: uint32_t
			constexpr auto OutRate = 0x22c; // Size: 4, Type: uint32_t
			constexpr auto MaxPacketOverhead = 0x234; // Size: 4, Type: uint32_t
			constexpr auto InRateClientMax = 0x238; // Size: 4, Type: uint32_t
			constexpr auto InRateClientMin = 0x23c; // Size: 4, Type: uint32_t
			constexpr auto InRateClientAvg = 0x240; // Size: 4, Type: uint32_t
			constexpr auto InPacketsClientMax = 0x244; // Size: 4, Type: uint32_t
			constexpr auto InPacketsClientMin = 0x248; // Size: 4, Type: uint32_t
			constexpr auto InPacketsClientAvg = 0x24c; // Size: 4, Type: uint32_t
			constexpr auto OutRateClientMax = 0x250; // Size: 4, Type: uint32_t
			constexpr auto OutRateClientMin = 0x254; // Size: 4, Type: uint32_t
			constexpr auto OutRateClientAvg = 0x258; // Size: 4, Type: uint32_t
			constexpr auto OutPacketsClientMax = 0x25c; // Size: 4, Type: uint32_t
			constexpr auto OutPacketsClientMin = 0x260; // Size: 4, Type: uint32_t
			constexpr auto OutPacketsClientAvg = 0x264; // Size: 4, Type: uint32_t
			constexpr auto NetNumClients = 0x268; // Size: 4, Type: uint32_t
			constexpr auto InPackets = 0x26c; // Size: 4, Type: uint32_t
			constexpr auto OutPackets = 0x270; // Size: 4, Type: uint32_t
			constexpr auto InBunches = 0x274; // Size: 4, Type: uint32_t
			constexpr auto OutBunches = 0x278; // Size: 4, Type: uint32_t
			constexpr auto OutLoss = 0x27c; // Size: 4, Type: uint32_t
			constexpr auto InLoss = 0x280; // Size: 4, Type: uint32_t
			constexpr auto VoiceBytesSent = 0x284; // Size: 4, Type: uint32_t
			constexpr auto VoiceBytesRecv = 0x288; // Size: 4, Type: uint32_t
			constexpr auto VoicePacketsSent = 0x28c; // Size: 4, Type: uint32_t
			constexpr auto VoicePacketsRecv = 0x290; // Size: 4, Type: uint32_t
			constexpr auto PercentInVoice = 0x294; // Size: 4, Type: uint32_t
			constexpr auto PercentOutVoice = 0x298; // Size: 4, Type: uint32_t
			constexpr auto NumActorChannels = 0x29c; // Size: 4, Type: uint32_t
			constexpr auto NumConsideredActors = 0x2a0; // Size: 4, Type: uint32_t
			constexpr auto PrioritizedActors = 0x2a4; // Size: 4, Type: uint32_t
			constexpr auto NumRelevantActors = 0x2a8; // Size: 4, Type: uint32_t
			constexpr auto NumRelevantDeletedActors = 0x2ac; // Size: 4, Type: uint32_t
			constexpr auto NumReplicatedActorAttempts = 0x2b0; // Size: 4, Type: uint32_t
			constexpr auto NumReplicatedActors = 0x2b4; // Size: 4, Type: uint32_t
			constexpr auto NumActors = 0x2b8; // Size: 4, Type: uint32_t
			constexpr auto NumNetActors = 0x2bc; // Size: 4, Type: uint32_t
			constexpr auto NumDormantActors = 0x2c0; // Size: 4, Type: uint32_t
			constexpr auto NumInitiallyDormantActors = 0x2c4; // Size: 4, Type: uint32_t
			constexpr auto NumNetGUIDsAckd = 0x2c8; // Size: 4, Type: uint32_t
			constexpr auto NumNetGUIDsPending = 0x2cc; // Size: 4, Type: uint32_t
			constexpr auto NumNetGUIDsUnAckd = 0x2d0; // Size: 4, Type: uint32_t
			constexpr auto ObjPathBytes = 0x2d4; // Size: 4, Type: uint32_t
			constexpr auto NetGUIDOutRate = 0x2d8; // Size: 4, Type: uint32_t
			constexpr auto NetGUIDInRate = 0x2dc; // Size: 4, Type: uint32_t
			constexpr auto NetSaturated = 0x2e0; // Size: 4, Type: uint32_t
	}
} 
