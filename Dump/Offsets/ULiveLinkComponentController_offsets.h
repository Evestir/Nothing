namespace offsets
{
	namespace ULiveLinkComponentController
	{
			constexpr auto SubjectRepresentation = 0xb0; // Size: 16, Type: struct FLiveLinkSubjectRepresentation
			constexpr auto ControllerMap = 0xc0; // Size: 80, Type: struct TMap<ULiveLinkRole*, struct ULiveLinkControllerBase*>
			constexpr auto bUpdateInEditor = 0x110; // Size: 1, Type: bool
			constexpr auto OnLiveLinkUpdated = 0x118; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ComponentToControl = 0x128; // Size: 40, Type: struct FComponentReference
			constexpr auto bDisableEvaluateLiveLinkWhenSpawnable = 0x150; // Size: 1, Type: bool
			constexpr auto bEvaluateLiveLink = 0x151; // Size: 1, Type: bool
	}
} 
