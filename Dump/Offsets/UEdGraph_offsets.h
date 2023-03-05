namespace offsets
{
	namespace UEdGraph
	{
			constexpr auto Schema = 0x28; // Size: 8, Type: UEdGraphSchema*
			constexpr auto nodes = 0x30; // Size: 16, Type: struct TArray<struct UEdGraphNode*>
			constexpr auto bEditable = 0x40; // Size: 1, Type: char
			constexpr auto bAllowDeletion = 0x40; // Size: 1, Type: char
			constexpr auto bAllowRenaming = 0x40; // Size: 1, Type: char
	}
} 
