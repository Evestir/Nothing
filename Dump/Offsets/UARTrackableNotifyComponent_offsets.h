namespace offsets
{
	namespace UARTrackableNotifyComponent
	{
			constexpr auto OnAddTrackedGeometry = 0xb0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUpdateTrackedGeometry = 0xc0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRemoveTrackedGeometry = 0xd0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAddTrackedPlane = 0xe0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUpdateTrackedPlane = 0xf0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRemoveTrackedPlane = 0x100; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAddTrackedPoint = 0x110; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUpdateTrackedPoint = 0x120; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRemoveTrackedPoint = 0x130; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAddTrackedImage = 0x140; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUpdateTrackedImage = 0x150; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRemoveTrackedImage = 0x160; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAddTrackedFace = 0x170; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUpdateTrackedFace = 0x180; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRemoveTrackedFace = 0x190; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAddTrackedEnvProbe = 0x1a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUpdateTrackedEnvProbe = 0x1b0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRemoveTrackedEnvProbe = 0x1c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAddTrackedObject = 0x1d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUpdateTrackedObject = 0x1e0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRemoveTrackedObject = 0x1f0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
