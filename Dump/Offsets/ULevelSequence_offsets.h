namespace offsets
{
	namespace ULevelSequence
	{
			constexpr auto MovieScene = 0x68; // Size: 8, Type: struct UMovieScene*
			constexpr auto ObjectReferences = 0x70; // Size: 80, Type: struct FLevelSequenceObjectReferenceMap
			constexpr auto BindingReferences = 0xc0; // Size: 160, Type: struct FLevelSequenceBindingReferences
			constexpr auto PossessedObjects = 0x160; // Size: 80, Type: struct TMap<struct FString, struct FLevelSequenceObject>
			constexpr auto DirectorClass = 0x1b0; // Size: 8, Type: UObject*
			constexpr auto AssetUserData = 0x1b8; // Size: 16, Type: struct TArray<struct UAssetUserData*>
	}
} 
