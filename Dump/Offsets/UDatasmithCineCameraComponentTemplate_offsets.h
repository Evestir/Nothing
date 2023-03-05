namespace offsets
{
	namespace UDatasmithCineCameraComponentTemplate
	{
			constexpr auto FilmbackSettings = 0x30; // Size: 8, Type: struct FDatasmithCameraFilmbackSettingsTemplate
			constexpr auto LensSettings = 0x38; // Size: 4, Type: struct FDatasmithCameraLensSettingsTemplate
			constexpr auto FocusSettings = 0x3c; // Size: 8, Type: struct FDatasmithCameraFocusSettingsTemplate
			constexpr auto CurrentFocalLength = 0x44; // Size: 4, Type: float
			constexpr auto CurrentAperture = 0x48; // Size: 4, Type: float
			constexpr auto PostProcessSettings = 0x50; // Size: 64, Type: struct FDatasmithPostProcessSettingsTemplate
	}
} 
