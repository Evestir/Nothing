namespace offsets
{
	namespace UDatasmithDeltaGenSceneImportData
	{
			constexpr auto bMergeNodes = 0x48; // Size: 1, Type: bool
			constexpr auto bOptimizeDuplicatedNodes = 0x49; // Size: 1, Type: bool
			constexpr auto bRemoveInvisibleNodes = 0x4a; // Size: 1, Type: bool
			constexpr auto bSimplifyNodeHierarchy = 0x4b; // Size: 1, Type: bool
			constexpr auto bImportVar = 0x4c; // Size: 1, Type: bool
			constexpr auto VarPath = 0x50; // Size: 16, Type: struct FString
			constexpr auto bImportPos = 0x60; // Size: 1, Type: bool
			constexpr auto PosPath = 0x68; // Size: 16, Type: struct FString
			constexpr auto bImportTml = 0x78; // Size: 1, Type: bool
			constexpr auto TmlPath = 0x80; // Size: 16, Type: struct FString
	}
} 
