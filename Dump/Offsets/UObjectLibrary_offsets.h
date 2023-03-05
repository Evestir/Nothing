namespace offsets
{
	namespace UObjectLibrary
	{
			constexpr auto ObjectBaseClass = 0x28; // Size: 8, Type: UObject*
			constexpr auto bHasBlueprintClasses = 0x30; // Size: 1, Type: bool
			constexpr auto Objects = 0x38; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto WeakObjects = 0x48; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<UObject>>
			constexpr auto bUseWeakReferences = 0x58; // Size: 1, Type: bool
			constexpr auto bIsFullyLoaded = 0x59; // Size: 1, Type: bool
	}
} 
