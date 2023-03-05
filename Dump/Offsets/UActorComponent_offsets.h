namespace offsets
{
	namespace UActorComponent
	{
			constexpr auto PrimaryComponentTick = 0x30; // Size: 48, Type: struct FActorComponentTickFunction
			constexpr auto ComponentTags = 0x60; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto AssetUserData = 0x70; // Size: 16, Type: struct TArray<struct UAssetUserData*>
			constexpr auto UCSSerializationIndex = 0x84; // Size: 4, Type: int32_t
			constexpr auto bNetAddressable = 0x88; // Size: 1, Type: char
			constexpr auto bReplicates = 0x88; // Size: 1, Type: char
			constexpr auto bAutoActivate = 0x89; // Size: 1, Type: char
			constexpr auto bIsActive = 0x8a; // Size: 1, Type: char
			constexpr auto bEditableWhenInherited = 0x8a; // Size: 1, Type: char
			constexpr auto bCanEverAffectNavigation = 0x8a; // Size: 1, Type: char
			constexpr auto bIsEditorOnly = 0x8a; // Size: 1, Type: char
			constexpr auto CreationMethod = 0x8c; // Size: 1, Type: enum class EComponentCreationMethod
			constexpr auto OnComponentActivated = 0x8d; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnComponentDeactivated = 0x8e; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto UCSModifiedProperties = 0x90; // Size: 16, Type: struct TArray<struct FSimpleMemberReference>
	}
} 
