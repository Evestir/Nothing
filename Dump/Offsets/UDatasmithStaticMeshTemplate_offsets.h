namespace offsets
{
	namespace UDatasmithStaticMeshTemplate
	{
			constexpr auto SectionInfoMap = 0x30; // Size: 80, Type: struct FDatasmithMeshSectionInfoMapTemplate
			constexpr auto LightMapCoordinateIndex = 0x80; // Size: 4, Type: int32_t
			constexpr auto LightMapResolution = 0x84; // Size: 4, Type: int32_t
			constexpr auto BuildSettings = 0x88; // Size: 16, Type: struct TArray<struct FDatasmithMeshBuildSettingsTemplate>
			constexpr auto StaticMaterials = 0x98; // Size: 16, Type: struct TArray<struct FDatasmithStaticMaterialTemplate>
	}
} 
