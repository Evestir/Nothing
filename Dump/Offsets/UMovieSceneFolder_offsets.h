namespace offsets
{
	namespace UMovieSceneFolder
	{
			constexpr auto FolderName = 0x28; // Size: 8, Type: struct FName
			constexpr auto ChildFolders = 0x30; // Size: 16, Type: struct TArray<struct UMovieSceneFolder*>
			constexpr auto ChildMasterTracks = 0x40; // Size: 16, Type: struct TArray<struct UMovieSceneTrack*>
			constexpr auto ChildObjectBindingStrings = 0x50; // Size: 16, Type: struct TArray<struct FString>
	}
} 
