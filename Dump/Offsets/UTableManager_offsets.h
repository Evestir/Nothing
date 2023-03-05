namespace offsets
{
	namespace UTableManager
	{
			constexpr auto DataTableMap = 0x30; // Size: 80, Type: struct TMap<enum class ETableType, struct UDataTable*>
			constexpr auto DataTableKtStyleFlagMap = 0x80; // Size: 80, Type: struct TMap<enum class ETableType, bool>
			constexpr auto UiDataTableMap = 0xd0; // Size: 80, Type: struct TMap<enum class EUiTableType, struct UDataTable*>
	}
} 
