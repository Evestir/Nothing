namespace offsets
{
	namespace ALiveryEditCameraActor
	{
			constexpr auto bUseCameraUpdate = 0xb40; // Size: 1, Type: bool
			constexpr auto LiveryCameraType = 0xb41; // Size: 1, Type: enum class EPawnCameraType
			constexpr auto PreviewCameraValueType = 0xb58; // Size: 1, Type: enum class EEditValueType
			constexpr auto CameraValues[6] = 0xb5c; // Size: 144, Type: struct FEditValue
			constexpr auto BeforeCameraValues[6] = 0xbec; // Size: 144, Type: struct FEditValue
	}
} 
