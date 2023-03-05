namespace offsets
{
	namespace UKdGestureWidget
	{
			constexpr auto LimitFlickAngle = 0x2a8; // Size: 4, Type: float
			constexpr auto bUsePinchInverse = 0x2ac; // Size: 1, Type: bool
			constexpr auto bGestureDebugPrint = 0x2ad; // Size: 1, Type: bool
			constexpr auto bTouchMove = 0x2ae; // Size: 1, Type: bool
			constexpr auto BeforeTouchLocation = 0x2b0; // Size: 12, Type: struct FVector
			constexpr auto TouchStartLocation = 0x2bc; // Size: 12, Type: struct FVector
			constexpr auto BeforePinch = 0x2c8; // Size: 4, Type: float
			constexpr auto BeforeRotate = 0x2cc; // Size: 4, Type: float
			constexpr auto bGesutrePause = 0x2d0; // Size: 1, Type: bool
	}
} 
