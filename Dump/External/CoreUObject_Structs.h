#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FJoinabilitySettings
{
public:
	FJoinabilitySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSessionName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetbPublicSearchable() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetbAllowInvites() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetbJoinViaPresence() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetbJoinViaPresenceFriendsOnly() {
		return memory.read<bool>(m_addr + 11);
	}
	int32_t GetMaxPlayers() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetMaxPartySize() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPrimaryAssetType
{
public:
	FPrimaryAssetType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTwoVectors
{
public:
	FTwoVectors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector Getv1() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector Getv2() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FUniqueNetIdWrapper
{
public:
	FUniqueNetIdWrapper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGuid
{
public:
	FGuid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetA() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetC() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetD() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FARFilter
{
public:
	FARFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetPackageNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}
	struct TArray<struct FName> GetPackagePaths() {
		return memory.read<struct TArray<struct FName>>(m_addr + 16);
	}
	struct TArray<struct FName> GetObjectPaths() {
		return memory.read<struct TArray<struct FName>>(m_addr + 32);
	}
	struct TArray<struct FName> GetClassNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 48);
	}
	struct TSet<struct FName> GetRecursiveClassesExclusionSet() {
		return memory.read<struct TSet<struct FName>>(m_addr + 144);
	}
	bool GetbRecursivePaths() {
		return memory.read<bool>(m_addr + 224);
	}
	bool GetbRecursiveClasses() {
		return memory.read<bool>(m_addr + 225);
	}
	bool GetbIncludeOnlyOnDiskAssets() {
		return memory.read<bool>(m_addr + 226);
	}

private:
	std::uint64_t m_addr = 0;
};class FVector2D
{
public:
	FVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetX() {
		return memory.read<float>(m_addr + 0);
	}
	float GetY() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FFallbackStruct
{
public:
	FFallbackStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOrientedBox
{
public:
	FOrientedBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCenter() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetAxisX() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetAxisY() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetAxisZ() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	float GetExtentX() {
		return memory.read<float>(m_addr + 48);
	}
	float GetExtentY() {
		return memory.read<float>(m_addr + 52);
	}
	float GetExtentZ() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FBox
{
public:
	FBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetMin() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetMax() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	char GetIsValid() {
		return memory.read<char>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FVector4
{
public:
	FVector4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetX() {
		return memory.read<float>(m_addr + 0);
	}
	float GetY() {
		return memory.read<float>(m_addr + 4);
	}
	float GetZ() {
		return memory.read<float>(m_addr + 8);
	}
	float GetW() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FPackedRGBA16N
{
public:
	FPackedRGBA16N(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetXY() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetZW() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRotator
{
public:
	FRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPitch() {
		return memory.read<float>(m_addr + 0);
	}
	float GetYaw() {
		return memory.read<float>(m_addr + 4);
	}
	float GetRoll() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FVector
{
public:
	FVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetX() {
		return memory.read<float>(m_addr + 0);
	}
	float GetY() {
		return memory.read<float>(m_addr + 4);
	}
	float GetZ() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FInterpCurveQuat
{
public:
	FInterpCurveQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInterpCurvePointQuat> GetPoints() {
		return memory.read<struct TArray<struct FInterpCurvePointQuat>>(m_addr + 0);
	}
	bool GetbIsLooped() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetLoopKeyOffset() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlane
{
public:
	FPlane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetW() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FInt32Interval
{
public:
	FInt32Interval(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMin() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetMax() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FQuat
{
public:
	FQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetX() {
		return memory.read<float>(m_addr + 0);
	}
	float GetY() {
		return memory.read<float>(m_addr + 4);
	}
	float GetZ() {
		return memory.read<float>(m_addr + 8);
	}
	float GetW() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FPackedNormal
{
public:
	FPackedNormal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetX() {
		return memory.read<char>(m_addr + 0);
	}
	char GetY() {
		return memory.read<char>(m_addr + 1);
	}
	char GetZ() {
		return memory.read<char>(m_addr + 2);
	}
	char GetW() {
		return memory.read<char>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph
{
public:
	FExecuteUbergraph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPolyglotTextData
{
public:
	FPolyglotTextData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELocalizedTextSourceCategory GetCategory() {
		return memory.read<enum class ELocalizedTextSourceCategory>(m_addr + 0);
	}
	struct FString GetNativeCulture() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetNamespace() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetKey() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetNativeString() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct TMap<struct FString, struct FString> GetLocalizedStrings() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 72);
	}
	bool GetbIsMinimalPatch() {
		return memory.read<bool>(m_addr + 152);
	}
	struct FText GetCachedText() {
		return memory.read<struct FText>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FFloatInterval
{
public:
	FFloatInterval(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMin() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMax() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FPackedRGB10A2N
{
public:
	FPackedRGB10A2N(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPacked() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInterpCurveFloat
{
public:
	FInterpCurveFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInterpCurvePointFloat> GetPoints() {
		return memory.read<struct TArray<struct FInterpCurvePointFloat>>(m_addr + 0);
	}
	bool GetbIsLooped() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetLoopKeyOffset() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FIntPoint
{
public:
	FIntPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetY() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FIntVector
{
public:
	FIntVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetY() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetZ() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFrameNumberRangeBound
{
public:
	FFrameNumberRangeBound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERangeBoundTypes GetType() {
		return memory.read<enum class ERangeBoundTypes>(m_addr + 0);
	}
	struct FFrameNumber GetValue() {
		return memory.read<struct FFrameNumber>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FColor
{
public:
	FColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetB() {
		return memory.read<char>(m_addr + 0);
	}
	char GetG() {
		return memory.read<char>(m_addr + 1);
	}
	char GetR() {
		return memory.read<char>(m_addr + 2);
	}
	char GetA() {
		return memory.read<char>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FLinearColor
{
public:
	FLinearColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetR() {
		return memory.read<float>(m_addr + 0);
	}
	float GetG() {
		return memory.read<float>(m_addr + 4);
	}
	float GetB() {
		return memory.read<float>(m_addr + 8);
	}
	float GetA() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FBox2D
{
public:
	FBox2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetMin() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	struct FVector2D GetMax() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	char GetbIsValid() {
		return memory.read<char>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FFloatRange
{
public:
	FFloatRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFloatRangeBound GetLowerBound() {
		return memory.read<struct FFloatRangeBound>(m_addr + 0);
	}
	struct FFloatRangeBound GetUpperBound() {
		return memory.read<struct FFloatRangeBound>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FInterpCurvePointTwoVectors
{
public:
	FInterpCurvePointTwoVectors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInVal() {
		return memory.read<float>(m_addr + 0);
	}
	struct FTwoVectors GetOutVal() {
		return memory.read<struct FTwoVectors>(m_addr + 4);
	}
	struct FTwoVectors GetArriveTangent() {
		return memory.read<struct FTwoVectors>(m_addr + 28);
	}
	struct FTwoVectors GetLeaveTangent() {
		return memory.read<struct FTwoVectors>(m_addr + 52);
	}
	enum class EInterpCurveMode GetInterpMode() {
		return memory.read<enum class EInterpCurveMode>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FBoxSphereBounds
{
public:
	FBoxSphereBounds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetBoxExtent() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	float GetSphereRadius() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatrix
{
public:
	FMatrix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPlane GetXPlane() {
		return memory.read<struct FPlane>(m_addr + 0);
	}
	struct FPlane GetYPlane() {
		return memory.read<struct FPlane>(m_addr + 16);
	}
	struct FPlane GetZPlane() {
		return memory.read<struct FPlane>(m_addr + 32);
	}
	struct FPlane GetWPlane() {
		return memory.read<struct FPlane>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FInterpCurvePointFloat
{
public:
	FInterpCurvePointFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInVal() {
		return memory.read<float>(m_addr + 0);
	}
	float GetOutVal() {
		return memory.read<float>(m_addr + 4);
	}
	float GetArriveTangent() {
		return memory.read<float>(m_addr + 8);
	}
	float GetLeaveTangent() {
		return memory.read<float>(m_addr + 12);
	}
	enum class EInterpCurveMode GetInterpMode() {
		return memory.read<enum class EInterpCurveMode>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FInterpCurvePointVector2D
{
public:
	FInterpCurvePointVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInVal() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector2D GetOutVal() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}
	struct FVector2D GetArriveTangent() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}
	struct FVector2D GetLeaveTangent() {
		return memory.read<struct FVector2D>(m_addr + 20);
	}
	enum class EInterpCurveMode GetInterpMode() {
		return memory.read<enum class EInterpCurveMode>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FInterpCurveVector2D
{
public:
	FInterpCurveVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInterpCurvePointVector2D> GetPoints() {
		return memory.read<struct TArray<struct FInterpCurvePointVector2D>>(m_addr + 0);
	}
	bool GetbIsLooped() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetLoopKeyOffset() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FInterpCurvePointVector
{
public:
	FInterpCurvePointVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInVal() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector GetOutVal() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct FVector GetArriveTangent() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FVector GetLeaveTangent() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	enum class EInterpCurveMode GetInterpMode() {
		return memory.read<enum class EInterpCurveMode>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FInterpCurveVector
{
public:
	FInterpCurveVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInterpCurvePointVector> GetPoints() {
		return memory.read<struct TArray<struct FInterpCurvePointVector>>(m_addr + 0);
	}
	bool GetbIsLooped() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetLoopKeyOffset() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransform
{
public:
	FTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 0);
	}
	struct FVector GetTranslation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FVector GetScale3D() {
		return memory.read<struct FVector>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FInterpCurvePointQuat
{
public:
	FInterpCurvePointQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInVal() {
		return memory.read<float>(m_addr + 0);
	}
	struct FQuat GetOutVal() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetArriveTangent() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	struct FQuat GetLeaveTangent() {
		return memory.read<struct FQuat>(m_addr + 48);
	}
	enum class EInterpCurveMode GetInterpMode() {
		return memory.read<enum class EInterpCurveMode>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FAutomationExecutionEntry
{
public:
	FAutomationExecutionEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAutomationEvent GetEvent() {
		return memory.read<struct FAutomationEvent>(m_addr + 0);
	}
	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 56);
	}
	int32_t GetLineNumber() {
		return memory.read<int32_t>(m_addr + 72);
	}
	struct FDateTime GetTimestamp() {
		return memory.read<struct FDateTime>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimespan
{
public:
	FTimespan(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FInterpCurveTwoVectors
{
public:
	FInterpCurveTwoVectors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInterpCurvePointTwoVectors> GetPoints() {
		return memory.read<struct TArray<struct FInterpCurvePointTwoVectors>>(m_addr + 0);
	}
	bool GetbIsLooped() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetLoopKeyOffset() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FInterpCurvePointLinearColor
{
public:
	FInterpCurvePointLinearColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInVal() {
		return memory.read<float>(m_addr + 0);
	}
	struct FLinearColor GetOutVal() {
		return memory.read<struct FLinearColor>(m_addr + 4);
	}
	struct FLinearColor GetArriveTangent() {
		return memory.read<struct FLinearColor>(m_addr + 20);
	}
	struct FLinearColor GetLeaveTangent() {
		return memory.read<struct FLinearColor>(m_addr + 36);
	}
	enum class EInterpCurveMode GetInterpMode() {
		return memory.read<enum class EInterpCurveMode>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FInterpCurveLinearColor
{
public:
	FInterpCurveLinearColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInterpCurvePointLinearColor> GetPoints() {
		return memory.read<struct TArray<struct FInterpCurvePointLinearColor>>(m_addr + 0);
	}
	bool GetbIsLooped() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetLoopKeyOffset() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRandomStream
{
public:
	FRandomStream(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInitialSeed() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetSeed() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDateTime
{
public:
	FDateTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAssetBundleData
{
public:
	FAssetBundleData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAssetBundleEntry> GetBundles() {
		return memory.read<struct TArray<struct FAssetBundleEntry>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFrameNumber
{
public:
	FFrameNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFrameRate
{
public:
	FFrameRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumerator() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetDenominator() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FFrameTime
{
public:
	FFrameTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetFrameNumber() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	float GetSubFrame() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FQualifiedFrameTime
{
public:
	FQualifiedFrameTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameTime GetTime() {
		return memory.read<struct FFrameTime>(m_addr + 0);
	}
	struct FFrameRate GetRate() {
		return memory.read<struct FFrameRate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimecode
{
public:
	FTimecode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetHours() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetMinutes() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetSeconds() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetFrames() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetbDropFrameFormat() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSoftObjectPath
{
public:
	FSoftObjectPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetAssetPathName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FString GetSubPathString() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSoftClassPath
{
public:
	FSoftClassPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FPrimaryAssetId
{
public:
	FPrimaryAssetId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPrimaryAssetType GetPrimaryAssetType() {
		return memory.read<struct FPrimaryAssetType>(m_addr + 0);
	}
	struct FName GetPrimaryAssetName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFloatRangeBound
{
public:
	FFloatRangeBound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERangeBoundTypes GetType() {
		return memory.read<enum class ERangeBoundTypes>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FInt32RangeBound
{
public:
	FInt32RangeBound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERangeBoundTypes GetType() {
		return memory.read<enum class ERangeBoundTypes>(m_addr + 0);
	}
	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FInt32Range
{
public:
	FInt32Range(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInt32RangeBound GetLowerBound() {
		return memory.read<struct FInt32RangeBound>(m_addr + 0);
	}
	struct FInt32RangeBound GetUpperBound() {
		return memory.read<struct FInt32RangeBound>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFrameNumberRange
{
public:
	FFrameNumberRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumberRangeBound GetLowerBound() {
		return memory.read<struct FFrameNumberRangeBound>(m_addr + 0);
	}
	struct FFrameNumberRangeBound GetUpperBound() {
		return memory.read<struct FFrameNumberRangeBound>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAutomationEvent
{
public:
	FAutomationEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAutomationEventType GetType() {
		return memory.read<enum class EAutomationEventType>(m_addr + 0);
	}
	struct FString GetMessage() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetContext() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FGuid GetArtifact() {
		return memory.read<struct FGuid>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAssetBundleEntry
{
public:
	FAssetBundleEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBundleName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FSoftObjectPath> GetBundleAssets() {
		return memory.read<struct TArray<struct FSoftObjectPath>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAssetData
{
public:
	FAssetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetObjectPath() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetPackageName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetPackagePath() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FName GetAssetName() {
		return memory.read<struct FName>(m_addr + 24);
	}
	struct FName GetAssetClass() {
		return memory.read<struct FName>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FTestUninitializedScriptStructMembersTest
{
public:
	FTestUninitializedScriptStructMembersTest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetUninitializedObjectReference() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UObject GetInitializedObjectReference() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	float GetUnusedValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};