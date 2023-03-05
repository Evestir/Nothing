#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct CoreUObject.JoinabilitySettings Size 20
class FJoinabilitySettings
{

 public: 
	struct FName SessionName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bPublicSearchable : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bAllowInvites : 1;  // Offset: 9 Size: 1
	char pad_10_1 : 7;  // Offset: 10 Size: 1
	bool bJoinViaPresence : 1;  // Offset: 10 Size: 1
	char pad_11_1 : 7;  // Offset: 11 Size: 1
	bool bJoinViaPresenceFriendsOnly : 1;  // Offset: 11 Size: 1
	int32_t MaxPlayers;  // Offset: 12 Size: 4
	int32_t MaxPartySize;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.PrimaryAssetType Size 8
class FPrimaryAssetType
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.TwoVectors Size 24
class FTwoVectors
{

 public: 
	struct FVector v1;  // Offset: 0 Size: 12
	struct FVector v2;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.UniqueNetIdWrapper Size 1
class FUniqueNetIdWrapper
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Guid Size 16
class FGuid
{

 public: 
	int32_t A;  // Offset: 0 Size: 4
	int32_t B;  // Offset: 4 Size: 4
	int32_t C;  // Offset: 8 Size: 4
	int32_t D;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.ARFilter Size 240
class FARFilter
{

 public: 
	struct TArray<struct FName> PackageNames;  // Offset: 0 Size: 16
	struct TArray<struct FName> PackagePaths;  // Offset: 16 Size: 16
	struct TArray<struct FName> ObjectPaths;  // Offset: 32 Size: 16
	struct TArray<struct FName> ClassNames;  // Offset: 48 Size: 16
	char pad_64[80];  // Offset: 64 Size: 80
	struct TSet<struct FName> RecursiveClassesExclusionSet;  // Offset: 144 Size: 80
	char pad_224_1 : 7;  // Offset: 224 Size: 1
	bool bRecursivePaths : 1;  // Offset: 224 Size: 1
	char pad_225_1 : 7;  // Offset: 225 Size: 1
	bool bRecursiveClasses : 1;  // Offset: 225 Size: 1
	char pad_226_1 : 7;  // Offset: 226 Size: 1
	bool bIncludeOnlyOnDiskAssets : 1;  // Offset: 226 Size: 1
	char pad_227[13];  // Offset: 227 Size: 13



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Vector2D Size 8
class FVector2D
{

 public: 
	float X;  // Offset: 0 Size: 4
	float Y;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.FallbackStruct Size 1
class FFallbackStruct
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.OrientedBox Size 60
class FOrientedBox
{

 public: 
	struct FVector Center;  // Offset: 0 Size: 12
	struct FVector AxisX;  // Offset: 12 Size: 12
	struct FVector AxisY;  // Offset: 24 Size: 12
	struct FVector AxisZ;  // Offset: 36 Size: 12
	float ExtentX;  // Offset: 48 Size: 4
	float ExtentY;  // Offset: 52 Size: 4
	float ExtentZ;  // Offset: 56 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Box Size 28
class FBox
{

 public: 
	struct FVector Min;  // Offset: 0 Size: 12
	struct FVector Max;  // Offset: 12 Size: 12
	char IsValid;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Vector4 Size 16
class FVector4
{

 public: 
	float X;  // Offset: 0 Size: 4
	float Y;  // Offset: 4 Size: 4
	float Z;  // Offset: 8 Size: 4
	float W;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.PackedRGBA16N Size 8
class FPackedRGBA16N
{

 public: 
	int32_t XY;  // Offset: 0 Size: 4
	int32_t ZW;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Rotator Size 12
class FRotator
{

 public: 
	float Pitch;  // Offset: 0 Size: 4
	float Yaw;  // Offset: 4 Size: 4
	float Roll;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Vector Size 12
class FVector
{

 public: 
	float X;  // Offset: 0 Size: 4
	float Y;  // Offset: 4 Size: 4
	float Z;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurveQuat Size 24
class FInterpCurveQuat
{

 public: 
	struct TArray<struct FInterpCurvePointQuat> Points;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIsLooped : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float LoopKeyOffset;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Plane Size 16
// Inherited 12 bytes 
class FPlane : public FVector
{

 public: 
	float W;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Int32Interval Size 8
class FInt32Interval
{

 public: 
	int32_t Min;  // Offset: 0 Size: 4
	int32_t Max;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Quat Size 16
class FQuat
{

 public: 
	float X;  // Offset: 0 Size: 4
	float Y;  // Offset: 4 Size: 4
	float Z;  // Offset: 8 Size: 4
	float W;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.PackedNormal Size 4
class FPackedNormal
{

 public: 
	char X;  // Offset: 0 Size: 1
	char Y;  // Offset: 1 Size: 1
	char Z;  // Offset: 2 Size: 1
	char W;  // Offset: 3 Size: 1



 // Functions 
 public:
}; 
 
 //Function CoreUObject.Object.ExecuteUbergraph Size 4
class FExecuteUbergraph
{

 public: 
	int32_t EntryPoint;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.PolyglotTextData Size 184
class FPolyglotTextData
{

 public: 
	enum class ELocalizedTextSourceCategory Category;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString NativeCulture;  // Offset: 8 Size: 16
	struct FString Namespace;  // Offset: 24 Size: 16
	struct FString Key;  // Offset: 40 Size: 16
	struct FString NativeString;  // Offset: 56 Size: 16
	struct TMap<struct FString, struct FString> LocalizedStrings;  // Offset: 72 Size: 80
	char pad_152_1 : 7;  // Offset: 152 Size: 1
	bool bIsMinimalPatch : 1;  // Offset: 152 Size: 1
	char pad_153[7];  // Offset: 153 Size: 7
	struct FText CachedText;  // Offset: 160 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.FloatInterval Size 8
class FFloatInterval
{

 public: 
	float Min;  // Offset: 0 Size: 4
	float Max;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.PackedRGB10A2N Size 4
class FPackedRGB10A2N
{

 public: 
	int32_t Packed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurveFloat Size 24
class FInterpCurveFloat
{

 public: 
	struct TArray<struct FInterpCurvePointFloat> Points;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIsLooped : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float LoopKeyOffset;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.IntPoint Size 8
class FIntPoint
{

 public: 
	int32_t X;  // Offset: 0 Size: 4
	int32_t Y;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.IntVector Size 12
class FIntVector
{

 public: 
	int32_t X;  // Offset: 0 Size: 4
	int32_t Y;  // Offset: 4 Size: 4
	int32_t Z;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.FrameNumberRangeBound Size 8
class FFrameNumberRangeBound
{

 public: 
	enum class ERangeBoundTypes Type;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FFrameNumber Value;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Color Size 4
class FColor
{

 public: 
	char B;  // Offset: 0 Size: 1
	char G;  // Offset: 1 Size: 1
	char R;  // Offset: 2 Size: 1
	char A;  // Offset: 3 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.LinearColor Size 16
class FLinearColor
{

 public: 
	float R;  // Offset: 0 Size: 4
	float G;  // Offset: 4 Size: 4
	float B;  // Offset: 8 Size: 4
	float A;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Box2D Size 20
class FBox2D
{

 public: 
	struct FVector2D Min;  // Offset: 0 Size: 8
	struct FVector2D Max;  // Offset: 8 Size: 8
	char bIsValid;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.FloatRange Size 16
class FFloatRange
{

 public: 
	struct FFloatRangeBound LowerBound;  // Offset: 0 Size: 8
	struct FFloatRangeBound UpperBound;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurvePointTwoVectors Size 80
class FInterpCurvePointTwoVectors
{

 public: 
	float InVal;  // Offset: 0 Size: 4
	struct FTwoVectors OutVal;  // Offset: 4 Size: 24
	struct FTwoVectors ArriveTangent;  // Offset: 28 Size: 24
	struct FTwoVectors LeaveTangent;  // Offset: 52 Size: 24
	enum class EInterpCurveMode InterpMode;  // Offset: 76 Size: 1
	char pad_77[3];  // Offset: 77 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.BoxSphereBounds Size 28
class FBoxSphereBounds
{

 public: 
	struct FVector Origin;  // Offset: 0 Size: 12
	struct FVector BoxExtent;  // Offset: 12 Size: 12
	float SphereRadius;  // Offset: 24 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Matrix Size 64
class FMatrix
{

 public: 
	struct FPlane XPlane;  // Offset: 0 Size: 16
	struct FPlane YPlane;  // Offset: 16 Size: 16
	struct FPlane ZPlane;  // Offset: 32 Size: 16
	struct FPlane WPlane;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurvePointFloat Size 20
class FInterpCurvePointFloat
{

 public: 
	float InVal;  // Offset: 0 Size: 4
	float OutVal;  // Offset: 4 Size: 4
	float ArriveTangent;  // Offset: 8 Size: 4
	float LeaveTangent;  // Offset: 12 Size: 4
	enum class EInterpCurveMode InterpMode;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurvePointVector2D Size 32
class FInterpCurvePointVector2D
{

 public: 
	float InVal;  // Offset: 0 Size: 4
	struct FVector2D OutVal;  // Offset: 4 Size: 8
	struct FVector2D ArriveTangent;  // Offset: 12 Size: 8
	struct FVector2D LeaveTangent;  // Offset: 20 Size: 8
	enum class EInterpCurveMode InterpMode;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurveVector2D Size 24
class FInterpCurveVector2D
{

 public: 
	struct TArray<struct FInterpCurvePointVector2D> Points;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIsLooped : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float LoopKeyOffset;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurvePointVector Size 44
class FInterpCurvePointVector
{

 public: 
	float InVal;  // Offset: 0 Size: 4
	struct FVector OutVal;  // Offset: 4 Size: 12
	struct FVector ArriveTangent;  // Offset: 16 Size: 12
	struct FVector LeaveTangent;  // Offset: 28 Size: 12
	enum class EInterpCurveMode InterpMode;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurveVector Size 24
class FInterpCurveVector
{

 public: 
	struct TArray<struct FInterpCurvePointVector> Points;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIsLooped : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float LoopKeyOffset;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Transform Size 48
class FTransform
{

 public: 
	struct FQuat Rotation;  // Offset: 0 Size: 16
	struct FVector Translation;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4
	struct FVector Scale3D;  // Offset: 32 Size: 12
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurvePointQuat Size 80
class FInterpCurvePointQuat
{

 public: 
	float InVal;  // Offset: 0 Size: 4
	char pad_4[12];  // Offset: 4 Size: 12
	struct FQuat OutVal;  // Offset: 16 Size: 16
	struct FQuat ArriveTangent;  // Offset: 32 Size: 16
	struct FQuat LeaveTangent;  // Offset: 48 Size: 16
	enum class EInterpCurveMode InterpMode;  // Offset: 64 Size: 1
	char pad_65[15];  // Offset: 65 Size: 15



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.AutomationExecutionEntry Size 88
class FAutomationExecutionEntry
{

 public: 
	struct FAutomationEvent Event;  // Offset: 0 Size: 56
	struct FString Filename;  // Offset: 56 Size: 16
	int32_t LineNumber;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4
	struct FDateTime Timestamp;  // Offset: 80 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Timespan Size 8
class FTimespan
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurveTwoVectors Size 24
class FInterpCurveTwoVectors
{

 public: 
	struct TArray<struct FInterpCurvePointTwoVectors> Points;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIsLooped : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float LoopKeyOffset;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurvePointLinearColor Size 56
class FInterpCurvePointLinearColor
{

 public: 
	float InVal;  // Offset: 0 Size: 4
	struct FLinearColor OutVal;  // Offset: 4 Size: 16
	struct FLinearColor ArriveTangent;  // Offset: 20 Size: 16
	struct FLinearColor LeaveTangent;  // Offset: 36 Size: 16
	enum class EInterpCurveMode InterpMode;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.InterpCurveLinearColor Size 24
class FInterpCurveLinearColor
{

 public: 
	struct TArray<struct FInterpCurvePointLinearColor> Points;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIsLooped : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float LoopKeyOffset;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.RandomStream Size 8
class FRandomStream
{

 public: 
	int32_t InitialSeed;  // Offset: 0 Size: 4
	int32_t Seed;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.DateTime Size 8
class FDateTime
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.AssetBundleData Size 16
class FAssetBundleData
{

 public: 
	struct TArray<struct FAssetBundleEntry> Bundles;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.FrameNumber Size 4
class FFrameNumber
{

 public: 
	int32_t Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.FrameRate Size 8
class FFrameRate
{

 public: 
	int32_t Numerator;  // Offset: 0 Size: 4
	int32_t Denominator;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.FrameTime Size 8
class FFrameTime
{

 public: 
	struct FFrameNumber FrameNumber;  // Offset: 0 Size: 4
	float SubFrame;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.QualifiedFrameTime Size 16
class FQualifiedFrameTime
{

 public: 
	struct FFrameTime Time;  // Offset: 0 Size: 8
	struct FFrameRate Rate;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Timecode Size 20
class FTimecode
{

 public: 
	int32_t Hours;  // Offset: 0 Size: 4
	int32_t Minutes;  // Offset: 4 Size: 4
	int32_t Seconds;  // Offset: 8 Size: 4
	int32_t Frames;  // Offset: 12 Size: 4
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bDropFrameFormat : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.SoftObjectPath Size 24
class FSoftObjectPath
{

 public: 
	struct FName AssetPathName;  // Offset: 0 Size: 8
	struct FString SubPathString;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.SoftClassPath Size 24
// Inherited 24 bytes 
class FSoftClassPath : public FSoftObjectPath
{

 public: 



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.PrimaryAssetId Size 16
class FPrimaryAssetId
{

 public: 
	struct FPrimaryAssetType PrimaryAssetType;  // Offset: 0 Size: 8
	struct FName PrimaryAssetName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.FloatRangeBound Size 8
class FFloatRangeBound
{

 public: 
	enum class ERangeBoundTypes Type;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float Value;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Int32RangeBound Size 8
class FInt32RangeBound
{

 public: 
	enum class ERangeBoundTypes Type;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t Value;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.Int32Range Size 16
class FInt32Range
{

 public: 
	struct FInt32RangeBound LowerBound;  // Offset: 0 Size: 8
	struct FInt32RangeBound UpperBound;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.FrameNumberRange Size 16
class FFrameNumberRange
{

 public: 
	struct FFrameNumberRangeBound LowerBound;  // Offset: 0 Size: 8
	struct FFrameNumberRangeBound UpperBound;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.AutomationEvent Size 56
class FAutomationEvent
{

 public: 
	enum class EAutomationEventType Type;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString Message;  // Offset: 8 Size: 16
	struct FString Context;  // Offset: 24 Size: 16
	struct FGuid Artifact;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.AssetBundleEntry Size 24
class FAssetBundleEntry
{

 public: 
	struct FName BundleName;  // Offset: 0 Size: 8
	struct TArray<struct FSoftObjectPath> BundleAssets;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.AssetData Size 96
class FAssetData
{

 public: 
	struct FName ObjectPath;  // Offset: 0 Size: 8
	struct FName PackageName;  // Offset: 8 Size: 8
	struct FName PackagePath;  // Offset: 16 Size: 8
	struct FName AssetName;  // Offset: 24 Size: 8
	struct FName AssetClass;  // Offset: 32 Size: 8
	char pad_40[56];  // Offset: 40 Size: 56



 // Functions 
 public:
}; 
 
 //ScriptStruct CoreUObject.TestUninitializedScriptStructMembersTest Size 24
class FTestUninitializedScriptStructMembersTest
{

 public: 
	struct UObject* UninitializedObjectReference;  // Offset: 0 Size: 8
	struct UObject* InitializedObjectReference;  // Offset: 8 Size: 8
	float UnusedValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 