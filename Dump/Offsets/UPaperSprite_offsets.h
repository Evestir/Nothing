namespace offsets
{
	namespace UPaperSprite
	{
			constexpr auto AdditionalSourceTextures = 0x38; // Size: 16, Type: struct TArray<struct UTexture*>
			constexpr auto BakedSourceUV = 0x48; // Size: 8, Type: struct FVector2D
			constexpr auto BakedSourceDimension = 0x50; // Size: 8, Type: struct FVector2D
			constexpr auto BakedSourceTexture = 0x58; // Size: 8, Type: struct UTexture2D*
			constexpr auto DefaultMaterial = 0x60; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto AlternateMaterial = 0x68; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto Sockets = 0x70; // Size: 16, Type: struct TArray<struct FPaperSpriteSocket>
			constexpr auto SpriteCollisionDomain = 0x80; // Size: 1, Type: enum class ESpriteCollisionMode
			constexpr auto PixelsPerUnrealUnit = 0x84; // Size: 4, Type: float
			constexpr auto BodySetup = 0x88; // Size: 8, Type: struct UBodySetup*
			constexpr auto AlternateMaterialSplitIndex = 0x90; // Size: 4, Type: int32_t
			constexpr auto BakedRenderData = 0x98; // Size: 16, Type: struct TArray<struct FVector4>
	}
} 
