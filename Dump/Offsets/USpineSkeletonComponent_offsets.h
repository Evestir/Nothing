namespace offsets
{
	namespace USpineSkeletonComponent
	{
			constexpr auto Atlas = 0xb0; // Size: 8, Type: struct USpineAtlasAsset*
			constexpr auto SkeletonData = 0xb8; // Size: 8, Type: struct USpineSkeletonDataAsset*
			constexpr auto BeforeUpdateWorldTransform = 0xc0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AfterUpdateWorldTransform = 0xd0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
