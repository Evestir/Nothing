namespace offsets
{
	namespace UPawnStateComponent
	{
			constexpr auto UniqueIdentifier = 0xe8; // Size: 16, Type: struct FString
			constexpr auto SlotNumber = 0xf8; // Size: 4, Type: int32_t
			constexpr auto TeamIndex = 0xfc; // Size: 4, Type: int32_t
			constexpr auto EquipDesc = 0x100; // Size: 304, Type: struct FRacePlayerEquipDesc
			constexpr auto Profile = 0x230; // Size: 96, Type: struct FKtAccountProfile
			constexpr auto kartExp = 0x290; // Size: 8, Type: struct FKdLevelExpProp
			constexpr auto PlayerExp = 0x298; // Size: 8, Type: struct FKdLevelExpProp
			constexpr auto bUseBeginnerCare = 0x2a0; // Size: 1, Type: bool
			constexpr auto bIsAiPlayer = 0x2a1; // Size: 1, Type: bool
			constexpr auto aiType = 0x2a2; // Size: 1, Type: enum class EKtRaceAiType
			constexpr auto ConnectionStatus = 0x2a8; // Size: 1, Type: enum class EConnectionStatus
	}
} 
