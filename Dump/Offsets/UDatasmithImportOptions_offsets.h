namespace offsets
{
	namespace UDatasmithImportOptions
	{
			constexpr auto SearchPackagePolicy = 0x28; // Size: 1, Type: enum class EDatasmithImportSearchPackagePolicy
			constexpr auto MaterialConflictPolicy = 0x29; // Size: 1, Type: enum class EDatasmithImportAssetConflictPolicy
			constexpr auto TextureConflictPolicy = 0x2a; // Size: 1, Type: enum class EDatasmithImportAssetConflictPolicy
			constexpr auto StaticMeshActorImportPolicy = 0x2b; // Size: 1, Type: enum class EDatasmithImportActorPolicy
			constexpr auto LightImportPolicy = 0x2c; // Size: 1, Type: enum class EDatasmithImportActorPolicy
			constexpr auto CameraImportPolicy = 0x2d; // Size: 1, Type: enum class EDatasmithImportActorPolicy
			constexpr auto OtherActorImportPolicy = 0x2e; // Size: 1, Type: enum class EDatasmithImportActorPolicy
			constexpr auto MaterialQuality = 0x2f; // Size: 1, Type: enum class EDatasmithImportMaterialQuality
			constexpr auto BaseOptions = 0x30; // Size: 20, Type: struct FDatasmithImportBaseOptions
			constexpr auto ReimportOptions = 0x44; // Size: 2, Type: struct FDatasmithReimportOptions
			constexpr auto Filename = 0x48; // Size: 16, Type: struct FString
			constexpr auto FilePath = 0x58; // Size: 16, Type: struct FString
	}
} 
