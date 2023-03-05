#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FAnimLegIKDefinition
{
public:
	FAnimLegIKDefinition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetIKFootBone() {
		return memory.read<struct FBoneReference>(m_addr + 0);
	}
	struct FBoneReference GetFKFootBone() {
		return memory.read<struct FBoneReference>(m_addr + 16);
	}
	int32_t GetNumBonesInLimb() {
		return memory.read<int32_t>(m_addr + 32);
	}
	float GetMinRotationAngle() {
		return memory.read<float>(m_addr + 36);
	}
	enum class EAxis GetFootBoneForwardAxis() {
		return memory.read<enum class EAxis>(m_addr + 40);
	}
	enum class EAxis GetHingeRotationAxis() {
		return memory.read<enum class EAxis>(m_addr + 41);
	}
	bool GetbEnableRotationLimit() {
		return memory.read<bool>(m_addr + 42);
	}
	bool GetbEnableKneeTwistCorrection() {
		return memory.read<bool>(m_addr + 43);
	}

private:
	std::uint64_t m_addr = 0;
};class FAngularRangeLimit
{
public:
	FAngularRangeLimit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLimitMin() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetLimitMax() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FBoneReference GetBone() {
		return memory.read<struct FBoneReference>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMontagePlayDelegate__DelegateSignature
{
public:
	FOnMontagePlayDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNotifyName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_BlendBoneByChannel
{
public:
	FAnimNode_BlendBoneByChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetA() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}
	struct FPoseLink GetB() {
		return memory.read<struct FPoseLink>(m_addr + 32);
	}
	struct TArray<struct FBlendBoneByChannelEntry> GetBoneDefinitions() {
		return memory.read<struct TArray<struct FBlendBoneByChannelEntry>>(m_addr + 48);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 80);
	}
	struct FInputScaleBias GetAlphaScaleBias() {
		return memory.read<struct FInputScaleBias>(m_addr + 88);
	}
	enum class EBoneControlSpace GetTransformsSpace() {
		return memory.read<enum class EBoneControlSpace>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_PoseByName
{
public:
	FAnimNode_PoseByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPoseName() {
		return memory.read<struct FName>(m_addr + 128);
	}
	float GetPoseWeight() {
		return memory.read<float>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FIKChain
{
public:
	FIKChain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAnimPhysSphericalLimit
{
public:
	FAnimPhysSphericalLimit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetDrivingBone() {
		return memory.read<struct FBoneReference>(m_addr + 0);
	}
	struct FVector GetSphereLocalOffset() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	float GetLimitRadius() {
		return memory.read<float>(m_addr + 28);
	}
	enum class ESphericalLimitType GetLimitType() {
		return memory.read<enum class ESphericalLimitType>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_SkeletalControlBase
{
public:
	FAnimNode_SkeletalControlBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FComponentSpacePoseLink GetComponentPose() {
		return memory.read<struct FComponentSpacePoseLink>(m_addr + 16);
	}
	int32_t GetLODThreshold() {
		return memory.read<int32_t>(m_addr + 32);
	}
	float GetActualAlpha() {
		return memory.read<float>(m_addr + 36);
	}
	enum class EAnimAlphaInputType GetAlphaInputType() {
		return memory.read<enum class EAnimAlphaInputType>(m_addr + 40);
	}
	bool GetbAlphaBoolEnabled() {
		return memory.read<bool>(m_addr + 41);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 44);
	}
	struct FInputScaleBias GetAlphaScaleBias() {
		return memory.read<struct FInputScaleBias>(m_addr + 48);
	}
	struct FInputAlphaBoolBlend GetAlphaBoolBlend() {
		return memory.read<struct FInputAlphaBoolBlend>(m_addr + 56);
	}
	struct FName GetAlphaCurveName() {
		return memory.read<struct FName>(m_addr + 128);
	}
	struct FInputScaleBiasClamp GetAlphaScaleBiasClamp() {
		return memory.read<struct FInputScaleBiasClamp>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_PoseDriver
{
public:
	FAnimNode_PoseDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetSourcePose() {
		return memory.read<struct FPoseLink>(m_addr + 128);
	}
	struct TArray<struct FBoneReference> GetSourceBones() {
		return memory.read<struct TArray<struct FBoneReference>>(m_addr + 144);
	}
	struct TArray<struct FBoneReference> GetOnlyDriveBones() {
		return memory.read<struct TArray<struct FBoneReference>>(m_addr + 160);
	}
	struct TArray<struct FPoseDriverTarget> GetPoseTargets() {
		return memory.read<struct TArray<struct FPoseDriverTarget>>(m_addr + 176);
	}
	struct FBoneReference GetEvalSpaceBone() {
		return memory.read<struct FBoneReference>(m_addr + 240);
	}
	struct FRBFParams GetRBFParams() {
		return memory.read<struct FRBFParams>(m_addr + 256);
	}
	enum class EPoseDriverSource GetDriveSource() {
		return memory.read<enum class EPoseDriverSource>(m_addr + 300);
	}
	enum class EPoseDriverOutput GetDriveOutput() {
		return memory.read<enum class EPoseDriverOutput>(m_addr + 301);
	}
	char GetbOnlyDriveSelectedBones() {
		return memory.read<char>(m_addr + 302);
	}
	int32_t GetLODThreshold() {
		return memory.read<int32_t>(m_addr + 304);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_BlendSpacePlayer
{
public:
	FAnimNode_BlendSpacePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetX() {
		return memory.read<float>(m_addr + 56);
	}
	float GetY() {
		return memory.read<float>(m_addr + 60);
	}
	float GetZ() {
		return memory.read<float>(m_addr + 64);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 68);
	}
	bool GetbLoop() {
		return memory.read<bool>(m_addr + 72);
	}
	bool GetbResetPlayTimeWhenBlendSpaceChanges() {
		return memory.read<bool>(m_addr + 73);
	}
	float GetStartPosition() {
		return memory.read<float>(m_addr + 76);
	}
	struct UBlendSpaceBase GetBlendSpace() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UBlendSpaceBase(ptr_addr);
	}
	struct UBlendSpaceBase GetPreviousBlendSpace() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct UBlendSpaceBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_AnimDynamics
{
public:
	FAnimNode_AnimDynamics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLinearDampingOverride() {
		return memory.read<float>(m_addr + 200);
	}
	float GetAngularDampingOverride() {
		return memory.read<float>(m_addr + 204);
	}
	struct FBoneReference GetRelativeSpaceBone() {
		return memory.read<struct FBoneReference>(m_addr + 304);
	}
	struct FBoneReference GetBoundBone() {
		return memory.read<struct FBoneReference>(m_addr + 320);
	}
	struct FBoneReference GetChainEnd() {
		return memory.read<struct FBoneReference>(m_addr + 336);
	}
	struct FVector GetBoxExtents() {
		return memory.read<struct FVector>(m_addr + 352);
	}
	struct FVector GetLocalJointOffset() {
		return memory.read<struct FVector>(m_addr + 364);
	}
	float GetGravityScale() {
		return memory.read<float>(m_addr + 376);
	}
	struct FVector GetGravityOverride() {
		return memory.read<struct FVector>(m_addr + 380);
	}
	float GetLinearSpringConstant() {
		return memory.read<float>(m_addr + 392);
	}
	float GetAngularSpringConstant() {
		return memory.read<float>(m_addr + 396);
	}
	float GetWindScale() {
		return memory.read<float>(m_addr + 400);
	}
	struct FVector GetComponentLinearAccScale() {
		return memory.read<struct FVector>(m_addr + 404);
	}
	struct FVector GetComponentLinearVelScale() {
		return memory.read<struct FVector>(m_addr + 416);
	}
	struct FVector GetComponentAppliedLinearAccClamp() {
		return memory.read<struct FVector>(m_addr + 428);
	}
	float GetAngularBiasOverride() {
		return memory.read<float>(m_addr + 440);
	}
	int32_t GetNumSolverIterationsPreUpdate() {
		return memory.read<int32_t>(m_addr + 444);
	}
	int32_t GetNumSolverIterationsPostUpdate() {
		return memory.read<int32_t>(m_addr + 448);
	}
	struct FAnimPhysConstraintSetup GetConstraintSetup() {
		return memory.read<struct FAnimPhysConstraintSetup>(m_addr + 452);
	}
	struct TArray<struct FAnimPhysSphericalLimit> GetSphericalLimits() {
		return memory.read<struct TArray<struct FAnimPhysSphericalLimit>>(m_addr + 528);
	}
	float GetSphereCollisionRadius() {
		return memory.read<float>(m_addr + 544);
	}
	struct FVector GetExternalForce() {
		return memory.read<struct FVector>(m_addr + 548);
	}
	struct TArray<struct FAnimPhysPlanarLimit> GetPlanarLimits() {
		return memory.read<struct TArray<struct FAnimPhysPlanarLimit>>(m_addr + 560);
	}
	enum class AnimPhysCollisionType GetCollisionType() {
		return memory.read<enum class AnimPhysCollisionType>(m_addr + 576);
	}
	enum class AnimPhysSimSpaceType GetSimulationSpace() {
		return memory.read<enum class AnimPhysSimSpaceType>(m_addr + 577);
	}
	char GetbUseSphericalLimits() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbUsePlanarLimit() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbDoUpdate() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbDoEval() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbOverrideLinearDamping() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbOverrideAngularBias() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbOverrideAngularDamping() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbEnableWind() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbUseGravityOverride() {
		return memory.read<char>(m_addr + 581);
	}
	char GetbLinearSpring() {
		return memory.read<char>(m_addr + 581);
	}
	char GetbAngularSpring() {
		return memory.read<char>(m_addr + 581);
	}
	char GetbChain() {
		return memory.read<char>(m_addr + 581);
	}
	struct FRotationRetargetingInfo GetRetargetingSettings() {
		return memory.read<struct FRotationRetargetingInfo>(m_addr + 592);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_AimOffsetLookAt
{
public:
	FAnimNode_AimOffsetLookAt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetBasePose() {
		return memory.read<struct FPoseLink>(m_addr + 336);
	}
	int32_t GetLODThreshold() {
		return memory.read<int32_t>(m_addr + 352);
	}
	struct FName GetSourceSocketName() {
		return memory.read<struct FName>(m_addr + 356);
	}
	struct FName GetPivotSocketName() {
		return memory.read<struct FName>(m_addr + 364);
	}
	struct FVector GetLookAtLocation() {
		return memory.read<struct FVector>(m_addr + 372);
	}
	struct FVector GetSocketAxis() {
		return memory.read<struct FVector>(m_addr + 384);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 396);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_ObserveBone
{
public:
	FAnimNode_ObserveBone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetBoneToObserve() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	enum class EBoneControlSpace GetDisplaySpace() {
		return memory.read<enum class EBoneControlSpace>(m_addr + 216);
	}
	bool GetbRelativeToRefPose() {
		return memory.read<bool>(m_addr + 217);
	}
	struct FVector GetTranslation() {
		return memory.read<struct FVector>(m_addr + 220);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 232);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 244);
	}

private:
	std::uint64_t m_addr = 0;
};class FRotationRetargetingInfo
{
public:
	FRotationRetargetingInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FTransform GetSource() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetTarget() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	enum class ERotationComponent GetRotationComponent() {
		return memory.read<enum class ERotationComponent>(m_addr + 112);
	}
	struct FVector GetTwistAxis() {
		return memory.read<struct FVector>(m_addr + 116);
	}
	bool GetbUseAbsoluteAngle() {
		return memory.read<bool>(m_addr + 128);
	}
	float GetSourceMinimum() {
		return memory.read<float>(m_addr + 132);
	}
	float GetSourceMaximum() {
		return memory.read<float>(m_addr + 136);
	}
	float GetTargetMinimum() {
		return memory.read<float>(m_addr + 140);
	}
	float GetTargetMaximum() {
		return memory.read<float>(m_addr + 144);
	}
	enum class EEasingFuncType GetEasingType() {
		return memory.read<enum class EEasingFuncType>(m_addr + 148);
	}
	struct FRuntimeFloatCurve GetCustomCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 152);
	}
	bool GetbFlipEasing() {
		return memory.read<bool>(m_addr + 288);
	}
	float GetEasingWeight() {
		return memory.read<float>(m_addr + 292);
	}
	bool GetbClamp() {
		return memory.read<bool>(m_addr + 296);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_PoseHandler
{
public:
	FAnimNode_PoseHandler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPoseAsset GetPoseAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UPoseAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_ApplyAdditive
{
public:
	FAnimNode_ApplyAdditive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetBase() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}
	struct FPoseLink GetAdditive() {
		return memory.read<struct FPoseLink>(m_addr + 32);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 48);
	}
	struct FInputScaleBias GetAlphaScaleBias() {
		return memory.read<struct FInputScaleBias>(m_addr + 52);
	}
	int32_t GetLODThreshold() {
		return memory.read<int32_t>(m_addr + 60);
	}
	struct FInputAlphaBoolBlend GetAlphaBoolBlend() {
		return memory.read<struct FInputAlphaBoolBlend>(m_addr + 64);
	}
	struct FName GetAlphaCurveName() {
		return memory.read<struct FName>(m_addr + 136);
	}
	struct FInputScaleBiasClamp GetAlphaScaleBiasClamp() {
		return memory.read<struct FInputScaleBiasClamp>(m_addr + 144);
	}
	enum class EAnimAlphaInputType GetAlphaInputType() {
		return memory.read<enum class EAnimAlphaInputType>(m_addr + 196);
	}
	bool GetbAlphaBoolEnabled() {
		return memory.read<bool>(m_addr + 197);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimPhysPlanarLimit
{
public:
	FAnimPhysPlanarLimit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetDrivingBone() {
		return memory.read<struct FBoneReference>(m_addr + 0);
	}
	struct FTransform GetPlaneTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimPhysConstraintSetup
{
public:
	FAnimPhysConstraintSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class AnimPhysLinearConstraintType GetLinearXLimitType() {
		return memory.read<enum class AnimPhysLinearConstraintType>(m_addr + 0);
	}
	enum class AnimPhysLinearConstraintType GetLinearYLimitType() {
		return memory.read<enum class AnimPhysLinearConstraintType>(m_addr + 1);
	}
	enum class AnimPhysLinearConstraintType GetLinearZLimitType() {
		return memory.read<enum class AnimPhysLinearConstraintType>(m_addr + 2);
	}
	struct FVector GetLinearAxesMin() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct FVector GetLinearAxesMax() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	enum class AnimPhysAngularConstraintType GetAngularConstraintType() {
		return memory.read<enum class AnimPhysAngularConstraintType>(m_addr + 28);
	}
	enum class AnimPhysTwistAxis GetTwistAxis() {
		return memory.read<enum class AnimPhysTwistAxis>(m_addr + 29);
	}
	enum class AnimPhysTwistAxis GetAngularTargetAxis() {
		return memory.read<enum class AnimPhysTwistAxis>(m_addr + 30);
	}
	float GetConeAngle() {
		return memory.read<float>(m_addr + 32);
	}
	struct FVector GetAngularLimitsMin() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	struct FVector GetAngularLimitsMax() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetAngularTarget() {
		return memory.read<struct FVector>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_ApplyLimits
{
public:
	FAnimNode_ApplyLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAngularRangeLimit> GetAngularRangeLimits() {
		return memory.read<struct TArray<struct FAngularRangeLimit>>(m_addr + 200);
	}
	struct TArray<struct FVector> GetAngularOffsets() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};class FPoseDriverTarget
{
public:
	FPoseDriverTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPoseDriverTransform> GetBoneTransforms() {
		return memory.read<struct TArray<struct FPoseDriverTransform>>(m_addr + 0);
	}
	struct FRotator GetTargetRotation() {
		return memory.read<struct FRotator>(m_addr + 16);
	}
	float GetTargetScale() {
		return memory.read<float>(m_addr + 28);
	}
	enum class ERBFDistanceMethod GetDistanceMethod() {
		return memory.read<enum class ERBFDistanceMethod>(m_addr + 32);
	}
	enum class ERBFFunctionType GetFunctionType() {
		return memory.read<enum class ERBFFunctionType>(m_addr + 33);
	}
	bool GetbApplyCustomCurve() {
		return memory.read<bool>(m_addr + 34);
	}
	struct FRichCurve GetCustomCurve() {
		return memory.read<struct FRichCurve>(m_addr + 40);
	}
	struct FName GetDrivenName() {
		return memory.read<struct FName>(m_addr + 168);
	}
	bool GetbIsHidden() {
		return memory.read<bool>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FBlendBoneByChannelEntry
{
public:
	FBlendBoneByChannelEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetSourceBone() {
		return memory.read<struct FBoneReference>(m_addr + 0);
	}
	struct FBoneReference GetTargetBone() {
		return memory.read<struct FBoneReference>(m_addr + 16);
	}
	bool GetbBlendTranslation() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetbBlendRotation() {
		return memory.read<bool>(m_addr + 33);
	}
	bool GetbBlendScale() {
		return memory.read<bool>(m_addr + 34);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_BlendListBase
{
public:
	FAnimNode_BlendListBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPoseLink> GetBlendPose() {
		return memory.read<struct TArray<struct FPoseLink>>(m_addr + 16);
	}
	struct TArray<float> GetBlendTime() {
		return memory.read<struct TArray<float>>(m_addr + 32);
	}
	enum class EBlendListTransitionType GetTransitionType() {
		return memory.read<enum class EBlendListTransitionType>(m_addr + 48);
	}
	enum class EAlphaBlendOption GetBlendType() {
		return memory.read<enum class EAlphaBlendOption>(m_addr + 49);
	}
	bool GetbResetChildOnActivation() {
		return memory.read<bool>(m_addr + 50);
	}
	struct UCurveFloat GetCustomBlendCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UCurveFloat(ptr_addr);
	}
	struct UBlendProfile GetBlendProfile() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UBlendProfile(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_BlendListByBool
{
public:
	FAnimNode_BlendListByBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActiveValue() {
		return memory.read<bool>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_BlendListByEnum
{
public:
	FAnimNode_BlendListByEnum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetEnumToPoseIndex() {
		return memory.read<struct TArray<int32_t>>(m_addr + 152);
	}
	char GetActiveEnumValue() {
		return memory.read<char>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_BlendListByInt
{
public:
	FAnimNode_BlendListByInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetActiveChildIndex() {
		return memory.read<int32_t>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_BlendSpaceEvaluator
{
public:
	FAnimNode_BlendSpaceEvaluator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNormalizedTime() {
		return memory.read<float>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_CurveSource
{
public:
	FAnimNode_CurveSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetSourcePose() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}
	struct FName GetSourceBinding() {
		return memory.read<struct FName>(m_addr + 32);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 40);
	}
	struct TScriptInterface<ICurveSourceInterface> GetCurveSource() {
		return memory.read<struct TScriptInterface<ICurveSourceInterface>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_BoneDrivenController
{
public:
	FAnimNode_BoneDrivenController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetSourceBone() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	struct UCurveFloat GetDrivingCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct UCurveFloat(ptr_addr);
	}
	float GetMultiplier() {
		return memory.read<float>(m_addr + 224);
	}
	float GetRangeMin() {
		return memory.read<float>(m_addr + 228);
	}
	float GetRangeMax() {
		return memory.read<float>(m_addr + 232);
	}
	float GetRemappedMin() {
		return memory.read<float>(m_addr + 236);
	}
	float GetRemappedMax() {
		return memory.read<float>(m_addr + 240);
	}
	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 244);
	}
	struct FBoneReference GetTargetBone() {
		return memory.read<struct FBoneReference>(m_addr + 252);
	}
	enum class EDrivenDestinationMode GetDestinationMode() {
		return memory.read<enum class EDrivenDestinationMode>(m_addr + 268);
	}
	enum class EDrivenBoneModificationMode GetModificationMode() {
		return memory.read<enum class EDrivenBoneModificationMode>(m_addr + 269);
	}
	enum class EComponentType GetSourceComponent() {
		return memory.read<enum class EComponentType>(m_addr + 270);
	}
	char GetbUseRange() {
		return memory.read<char>(m_addr + 271);
	}
	char GetbAffectTargetTranslationX() {
		return memory.read<char>(m_addr + 271);
	}
	char GetbAffectTargetTranslationY() {
		return memory.read<char>(m_addr + 271);
	}
	char GetbAffectTargetTranslationZ() {
		return memory.read<char>(m_addr + 271);
	}
	char GetbAffectTargetRotationX() {
		return memory.read<char>(m_addr + 271);
	}
	char GetbAffectTargetRotationY() {
		return memory.read<char>(m_addr + 271);
	}
	char GetbAffectTargetRotationZ() {
		return memory.read<char>(m_addr + 271);
	}
	char GetbAffectTargetScaleX() {
		return memory.read<char>(m_addr + 271);
	}
	char GetbAffectTargetScaleY() {
		return memory.read<char>(m_addr + 272);
	}
	char GetbAffectTargetScaleZ() {
		return memory.read<char>(m_addr + 272);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_CCDIK
{
public:
	FAnimNode_CCDIK(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetEffectorLocation() {
		return memory.read<struct FVector>(m_addr + 200);
	}
	enum class EBoneControlSpace GetEffectorLocationSpace() {
		return memory.read<enum class EBoneControlSpace>(m_addr + 212);
	}
	struct FBoneSocketTarget GetEffectorTarget() {
		return memory.read<struct FBoneSocketTarget>(m_addr + 224);
	}
	struct FBoneReference GetTipBone() {
		return memory.read<struct FBoneReference>(m_addr + 320);
	}
	struct FBoneReference GetRootBone() {
		return memory.read<struct FBoneReference>(m_addr + 336);
	}
	float GetPrecision() {
		return memory.read<float>(m_addr + 352);
	}
	int32_t GetMaxIterations() {
		return memory.read<int32_t>(m_addr + 356);
	}
	bool GetbStartFromTail() {
		return memory.read<bool>(m_addr + 360);
	}
	bool GetbEnableRotationLimit() {
		return memory.read<bool>(m_addr + 361);
	}
	struct TArray<float> GetRotationLimitPerJoints() {
		return memory.read<struct TArray<float>>(m_addr + 368);
	}

private:
	std::uint64_t m_addr = 0;
};class FBoneSocketTarget
{
public:
	FBoneSocketTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseSocket() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FBoneReference GetBoneReference() {
		return memory.read<struct FBoneReference>(m_addr + 4);
	}
	struct FSocketReference GetSocketReference() {
		return memory.read<struct FSocketReference>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSocketReference
{
public:
	FSocketReference(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSplineIKCachedBoneData
{
public:
	FSplineIKCachedBoneData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetBone() {
		return memory.read<struct FBoneReference>(m_addr + 0);
	}
	int32_t GetRefSkeletonIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_RotateRootBone
{
public:
	FAnimNode_RotateRootBone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetBasePose() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}
	float GetPitch() {
		return memory.read<float>(m_addr + 32);
	}
	float GetYaw() {
		return memory.read<float>(m_addr + 36);
	}
	struct FInputScaleBiasClamp GetPitchScaleBiasClamp() {
		return memory.read<struct FInputScaleBiasClamp>(m_addr + 40);
	}
	struct FInputScaleBiasClamp GetYawScaleBiasClamp() {
		return memory.read<struct FInputScaleBiasClamp>(m_addr + 88);
	}
	struct FRotator GetMeshToComponent() {
		return memory.read<struct FRotator>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_Constraint
{
public:
	FAnimNode_Constraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetBoneToModify() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	struct TArray<struct FConstraint> GetConstraintSetup() {
		return memory.read<struct TArray<struct FConstraint>>(m_addr + 216);
	}
	struct TArray<float> GetConstraintWeights() {
		return memory.read<struct TArray<float>>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_RotationMultiplier
{
public:
	FAnimNode_RotationMultiplier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetTargetBone() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	struct FBoneReference GetSourceBone() {
		return memory.read<struct FBoneReference>(m_addr + 216);
	}
	float GetMultiplier() {
		return memory.read<float>(m_addr + 232);
	}
	enum class EBoneAxis GetRotationAxisToRefer() {
		return memory.read<enum class EBoneAxis>(m_addr + 236);
	}
	bool GetbIsAdditive() {
		return memory.read<bool>(m_addr + 237);
	}

private:
	std::uint64_t m_addr = 0;
};class FConstraint
{
public:
	FConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetTargetBone() {
		return memory.read<struct FBoneReference>(m_addr + 0);
	}
	enum class EConstraintOffsetOption GetOffsetOption() {
		return memory.read<enum class EConstraintOffsetOption>(m_addr + 16);
	}
	enum class ETransformConstraintType GetTransformType() {
		return memory.read<enum class ETransformConstraintType>(m_addr + 17);
	}
	struct FFilterOptionPerAxis GetPerAxis() {
		return memory.read<struct FFilterOptionPerAxis>(m_addr + 18);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_RotationOffsetBlendSpace
{
public:
	FAnimNode_RotationOffsetBlendSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetBasePose() {
		return memory.read<struct FPoseLink>(m_addr + 232);
	}
	int32_t GetLODThreshold() {
		return memory.read<int32_t>(m_addr + 248);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 252);
	}
	struct FInputScaleBias GetAlphaScaleBias() {
		return memory.read<struct FInputScaleBias>(m_addr + 256);
	}
	struct FInputAlphaBoolBlend GetAlphaBoolBlend() {
		return memory.read<struct FInputAlphaBoolBlend>(m_addr + 264);
	}
	struct FName GetAlphaCurveName() {
		return memory.read<struct FName>(m_addr + 336);
	}
	struct FInputScaleBiasClamp GetAlphaScaleBiasClamp() {
		return memory.read<struct FInputScaleBiasClamp>(m_addr + 344);
	}
	enum class EAnimAlphaInputType GetAlphaInputType() {
		return memory.read<enum class EAnimAlphaInputType>(m_addr + 396);
	}
	bool GetbAlphaBoolEnabled() {
		return memory.read<bool>(m_addr + 397);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_CopyBone
{
public:
	FAnimNode_CopyBone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetSourceBone() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	struct FBoneReference GetTargetBone() {
		return memory.read<struct FBoneReference>(m_addr + 216);
	}
	bool GetbCopyTranslation() {
		return memory.read<bool>(m_addr + 232);
	}
	bool GetbCopyRotation() {
		return memory.read<bool>(m_addr + 233);
	}
	bool GetbCopyScale() {
		return memory.read<bool>(m_addr + 234);
	}
	enum class EBoneControlSpace GetControlSpace() {
		return memory.read<enum class EBoneControlSpace>(m_addr + 235);
	}

private:
	std::uint64_t m_addr = 0;
};class FRandomPlayerSequenceEntry
{
public:
	FRandomPlayerSequenceEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimSequence GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAnimSequence(ptr_addr);
	}
	float GetChanceToPlay() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetMinLoopCount() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetMaxLoopCount() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetMinPlayRate() {
		return memory.read<float>(m_addr + 20);
	}
	float GetMaxPlayRate() {
		return memory.read<float>(m_addr + 24);
	}
	struct FAlphaBlend GetBlendIn() {
		return memory.read<struct FAlphaBlend>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_CopyBoneDelta
{
public:
	FAnimNode_CopyBoneDelta(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetSourceBone() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	struct FBoneReference GetTargetBone() {
		return memory.read<struct FBoneReference>(m_addr + 216);
	}
	bool GetbCopyTranslation() {
		return memory.read<bool>(m_addr + 232);
	}
	bool GetbCopyRotation() {
		return memory.read<bool>(m_addr + 233);
	}
	bool GetbCopyScale() {
		return memory.read<bool>(m_addr + 234);
	}
	enum class CopyBoneDeltaMode GetCopyMode() {
		return memory.read<enum class CopyBoneDeltaMode>(m_addr + 235);
	}
	float GetTranslationMultiplier() {
		return memory.read<float>(m_addr + 236);
	}
	float GetRotationMultiplier() {
		return memory.read<float>(m_addr + 240);
	}
	float GetScaleMultiplier() {
		return memory.read<float>(m_addr + 244);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_ModifyCurve
{
public:
	FAnimNode_ModifyCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetSourcePose() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}
	struct TArray<float> GetCurveValues() {
		return memory.read<struct TArray<float>>(m_addr + 32);
	}
	struct TArray<struct FName> GetCurveNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 48);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 80);
	}
	enum class EModifyCurveApplyMode GetApplyMode() {
		return memory.read<enum class EModifyCurveApplyMode>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_PoseSnapshot
{
public:
	FAnimNode_PoseSnapshot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSnapshotName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FPoseSnapshot GetSnapshot() {
		return memory.read<struct FPoseSnapshot>(m_addr + 24);
	}
	enum class ESnapshotSourceMode GetMode() {
		return memory.read<enum class ESnapshotSourceMode>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_MakeDynamicAdditive
{
public:
	FAnimNode_MakeDynamicAdditive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetBase() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}
	struct FPoseLink GetAdditive() {
		return memory.read<struct FPoseLink>(m_addr + 32);
	}
	bool GetbMeshSpaceAdditive() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_CopyPoseFromMesh
{
public:
	FAnimNode_CopyPoseFromMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<USkeletalMeshComponent> GetSourceMeshComponent() {
		return memory.read<struct TWeakObjectPtr<USkeletalMeshComponent>>(m_addr + 16);
	}
	char GetbUseAttachedParent() {
		return memory.read<char>(m_addr + 24);
	}
	char GetbCopyCurves() {
		return memory.read<char>(m_addr + 24);
	}
	bool GetbCopyCustomAttributes() {
		return memory.read<bool>(m_addr + 25);
	}
	char GetbUseMeshPose() {
		return memory.read<char>(m_addr + 26);
	}
	struct FName GetRootBoneToCopy() {
		return memory.read<struct FName>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_Fabrik
{
public:
	FAnimNode_Fabrik(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetEffectorTransform() {
		return memory.read<struct FTransform>(m_addr + 208);
	}
	struct FBoneSocketTarget GetEffectorTarget() {
		return memory.read<struct FBoneSocketTarget>(m_addr + 256);
	}
	struct FBoneReference GetTipBone() {
		return memory.read<struct FBoneReference>(m_addr + 352);
	}
	struct FBoneReference GetRootBone() {
		return memory.read<struct FBoneReference>(m_addr + 368);
	}
	float GetPrecision() {
		return memory.read<float>(m_addr + 384);
	}
	int32_t GetMaxIterations() {
		return memory.read<int32_t>(m_addr + 388);
	}
	enum class EBoneControlSpace GetEffectorTransformSpace() {
		return memory.read<enum class EBoneControlSpace>(m_addr + 392);
	}
	enum class EBoneRotationSource GetEffectorRotationSource() {
		return memory.read<enum class EBoneRotationSource>(m_addr + 393);
	}

private:
	std::uint64_t m_addr = 0;
};class FPoseDriverTransform
{
public:
	FPoseDriverTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTargetTranslation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FRotator GetTargetRotation() {
		return memory.read<struct FRotator>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_HandIKRetargeting
{
public:
	FAnimNode_HandIKRetargeting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetRightHandFK() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	struct FBoneReference GetLeftHandFK() {
		return memory.read<struct FBoneReference>(m_addr + 216);
	}
	struct FBoneReference GetRightHandIK() {
		return memory.read<struct FBoneReference>(m_addr + 232);
	}
	struct FBoneReference GetLeftHandIK() {
		return memory.read<struct FBoneReference>(m_addr + 248);
	}
	struct TArray<struct FBoneReference> GetIKBonesToMove() {
		return memory.read<struct TArray<struct FBoneReference>>(m_addr + 264);
	}
	float GetHandFKWeight() {
		return memory.read<float>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_LayeredBoneBlend
{
public:
	FAnimNode_LayeredBoneBlend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetBasePose() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}
	struct TArray<struct FPoseLink> GetBlendPoses() {
		return memory.read<struct TArray<struct FPoseLink>>(m_addr + 32);
	}
	struct TArray<struct FInputBlendPose> GetLayerSetup() {
		return memory.read<struct TArray<struct FInputBlendPose>>(m_addr + 48);
	}
	struct TArray<float> GetBlendWeights() {
		return memory.read<struct TArray<float>>(m_addr + 64);
	}
	bool GetbMeshSpaceRotationBlend() {
		return memory.read<bool>(m_addr + 80);
	}
	bool GetbMeshSpaceScaleBlend() {
		return memory.read<bool>(m_addr + 81);
	}
	enum class ECurveBlendOption GetCurveBlendOption() {
		return memory.read<enum class ECurveBlendOption>(m_addr + 82);
	}
	bool GetbBlendRootMotionBasedOnRootBone() {
		return memory.read<bool>(m_addr + 83);
	}
	int32_t GetLODThreshold() {
		return memory.read<int32_t>(m_addr + 88);
	}
	struct TArray<struct FPerBoneBlendWeight> GetPerBoneBlendWeights() {
		return memory.read<struct TArray<struct FPerBoneBlendWeight>>(m_addr + 96);
	}
	struct FGuid GetSkeletonGuid() {
		return memory.read<struct FGuid>(m_addr + 112);
	}
	struct FGuid GetVirtualBoneGuid() {
		return memory.read<struct FGuid>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_LegIK
{
public:
	FAnimNode_LegIK(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReachPrecision() {
		return memory.read<float>(m_addr + 200);
	}
	int32_t GetMaxIterations() {
		return memory.read<int32_t>(m_addr + 204);
	}
	struct TArray<struct FAnimLegIKDefinition> GetLegsDefinition() {
		return memory.read<struct TArray<struct FAnimLegIKDefinition>>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimLegIKData
{
public:
	FAnimLegIKData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FIKChainLink
{
public:
	FIKChainLink(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAnimNode_ResetRoot
{
public:
	FAnimNode_ResetRoot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAnimNode_LookAt
{
public:
	FAnimNode_LookAt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetBoneToModify() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	struct FBoneSocketTarget GetLookAtTarget() {
		return memory.read<struct FBoneSocketTarget>(m_addr + 224);
	}
	struct FVector GetLookAtLocation() {
		return memory.read<struct FVector>(m_addr + 320);
	}
	struct FAxis GetLookAt_Axis() {
		return memory.read<struct FAxis>(m_addr + 332);
	}
	bool GetbUseLookUpAxis() {
		return memory.read<bool>(m_addr + 348);
	}
	enum class EInterpolationBlend GetInterpolationType() {
		return memory.read<enum class EInterpolationBlend>(m_addr + 349);
	}
	struct FAxis GetLookUp_Axis() {
		return memory.read<struct FAxis>(m_addr + 352);
	}
	float GetLookAtClamp() {
		return memory.read<float>(m_addr + 368);
	}
	float GetInterpolationTime() {
		return memory.read<float>(m_addr + 372);
	}
	float GetInterpolationTriggerThreashold() {
		return memory.read<float>(m_addr + 376);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_ModifyBone
{
public:
	FAnimNode_ModifyBone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetBoneToModify() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	struct FVector GetTranslation() {
		return memory.read<struct FVector>(m_addr + 216);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 228);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 240);
	}
	enum class EBoneModificationMode GetTranslationMode() {
		return memory.read<enum class EBoneModificationMode>(m_addr + 252);
	}
	enum class EBoneModificationMode GetRotationMode() {
		return memory.read<enum class EBoneModificationMode>(m_addr + 253);
	}
	enum class EBoneModificationMode GetScaleMode() {
		return memory.read<enum class EBoneModificationMode>(m_addr + 254);
	}
	enum class EBoneControlSpace GetTranslationSpace() {
		return memory.read<enum class EBoneControlSpace>(m_addr + 255);
	}
	enum class EBoneControlSpace GetRotationSpace() {
		return memory.read<enum class EBoneControlSpace>(m_addr + 256);
	}
	enum class EBoneControlSpace GetScaleSpace() {
		return memory.read<enum class EBoneControlSpace>(m_addr + 257);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_MultiWayBlend
{
public:
	FAnimNode_MultiWayBlend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPoseLink> GetPoses() {
		return memory.read<struct TArray<struct FPoseLink>>(m_addr + 16);
	}
	struct TArray<float> GetDesiredAlphas() {
		return memory.read<struct TArray<float>>(m_addr + 32);
	}
	struct FInputScaleBias GetAlphaScaleBias() {
		return memory.read<struct FInputScaleBias>(m_addr + 64);
	}
	bool GetbAdditiveNode() {
		return memory.read<bool>(m_addr + 72);
	}
	bool GetbNormalizeAlpha() {
		return memory.read<bool>(m_addr + 73);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_PoseBlendNode
{
public:
	FAnimNode_PoseBlendNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetSourcePose() {
		return memory.read<struct FPoseLink>(m_addr + 128);
	}
	enum class EAlphaBlendOption GetBlendOption() {
		return memory.read<enum class EAlphaBlendOption>(m_addr + 144);
	}
	struct UCurveFloat GetCustomCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSimSpaceSettings
{
public:
	FSimSpaceSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMasterAlpha() {
		return memory.read<float>(m_addr + 0);
	}
	float GetVelocityScaleZ() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxLinearVelocity() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMaxAngularVelocity() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMaxLinearAcceleration() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMaxAngularAcceleration() {
		return memory.read<float>(m_addr + 20);
	}
	float GetExternalLinearDrag() {
		return memory.read<float>(m_addr + 24);
	}
	struct FVector GetExternalLinearDragV() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	struct FVector GetExternalLinearVelocity() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	struct FVector GetExternalAngularVelocity() {
		return memory.read<struct FVector>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FRBFParams
{
public:
	FRBFParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTargetDimensions() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ERBFSolverType GetSolverType() {
		return memory.read<enum class ERBFSolverType>(m_addr + 4);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbAutomaticRadius() {
		return memory.read<bool>(m_addr + 12);
	}
	enum class ERBFFunctionType GetFunction() {
		return memory.read<enum class ERBFFunctionType>(m_addr + 13);
	}
	enum class ERBFDistanceMethod GetDistanceMethod() {
		return memory.read<enum class ERBFDistanceMethod>(m_addr + 14);
	}
	enum class EBoneAxis GetTwistAxis() {
		return memory.read<enum class EBoneAxis>(m_addr + 15);
	}
	float GetWeightThreshold() {
		return memory.read<float>(m_addr + 16);
	}
	enum class ERBFNormalizeMethod GetNormalizeMethod() {
		return memory.read<enum class ERBFNormalizeMethod>(m_addr + 20);
	}
	struct FVector GetMedianReference() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	float GetMedianMin() {
		return memory.read<float>(m_addr + 36);
	}
	float GetMedianMax() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_RandomPlayer
{
public:
	FAnimNode_RandomPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRandomPlayerSequenceEntry> GetEntries() {
		return memory.read<struct TArray<struct FRandomPlayerSequenceEntry>>(m_addr + 16);
	}
	bool GetbShuffleMode() {
		return memory.read<bool>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_MeshSpaceRefPose
{
public:
	FAnimNode_MeshSpaceRefPose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAnimNode_RefPose
{
public:
	FAnimNode_RefPose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERefPoseType GetRefPoseType() {
		return memory.read<enum class ERefPoseType>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_RigidBody
{
public:
	FAnimNode_RigidBody(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicsAsset GetOverridePhysicsAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UPhysicsAsset(ptr_addr);
	}
	struct FVector GetOverrideWorldGravity() {
		return memory.read<struct FVector>(m_addr + 360);
	}
	struct FVector GetExternalForce() {
		return memory.read<struct FVector>(m_addr + 372);
	}
	struct FVector GetComponentLinearAccScale() {
		return memory.read<struct FVector>(m_addr + 384);
	}
	struct FVector GetComponentLinearVelScale() {
		return memory.read<struct FVector>(m_addr + 396);
	}
	struct FVector GetComponentAppliedLinearAccClamp() {
		return memory.read<struct FVector>(m_addr + 408);
	}
	struct FSimSpaceSettings GetSimSpaceSettings() {
		return memory.read<struct FSimSpaceSettings>(m_addr + 420);
	}
	float GetCachedBoundsScale() {
		return memory.read<float>(m_addr + 484);
	}
	struct FBoneReference GetBaseBoneRef() {
		return memory.read<struct FBoneReference>(m_addr + 488);
	}
	enum class ECollisionChannel GetOverlapChannel() {
		return memory.read<enum class ECollisionChannel>(m_addr + 504);
	}
	enum class ESimulationSpace GetSimulationSpace() {
		return memory.read<enum class ESimulationSpace>(m_addr + 505);
	}
	bool GetbForceDisableCollisionBetweenConstraintBodies() {
		return memory.read<bool>(m_addr + 506);
	}
	char GetbEnableWorldGeometry() {
		return memory.read<char>(m_addr + 508);
	}
	char GetbOverrideWorldGravity() {
		return memory.read<char>(m_addr + 508);
	}
	char GetbTransferBoneVelocities() {
		return memory.read<char>(m_addr + 508);
	}
	char GetbFreezeIncomingPoseOnStart() {
		return memory.read<char>(m_addr + 508);
	}
	char GetbClampLinearTranslationLimitToRefPose() {
		return memory.read<char>(m_addr + 508);
	}
	float GetWorldSpaceMinimumScale() {
		return memory.read<float>(m_addr + 512);
	}
	float GetEvaluationResetTime() {
		return memory.read<float>(m_addr + 516);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_ScaleChainLength
{
public:
	FAnimNode_ScaleChainLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetInputPose() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}
	float GetDefaultChainLength() {
		return memory.read<float>(m_addr + 32);
	}
	struct FBoneReference GetChainStartBone() {
		return memory.read<struct FBoneReference>(m_addr + 36);
	}
	struct FBoneReference GetChainEndBone() {
		return memory.read<struct FBoneReference>(m_addr + 52);
	}
	struct FVector GetTargetLocation() {
		return memory.read<struct FVector>(m_addr + 68);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 80);
	}
	struct FInputScaleBias GetAlphaScaleBias() {
		return memory.read<struct FInputScaleBias>(m_addr + 88);
	}
	enum class EScaleChainInitialLength GetChainInitialLength() {
		return memory.read<enum class EScaleChainInitialLength>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_SequenceEvaluator
{
public:
	FAnimNode_SequenceEvaluator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimSequenceBase GetSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UAnimSequenceBase(ptr_addr);
	}
	float GetExplicitTime() {
		return memory.read<float>(m_addr + 64);
	}
	bool GetbShouldLoop() {
		return memory.read<bool>(m_addr + 68);
	}
	bool GetbTeleportToExplicitTime() {
		return memory.read<bool>(m_addr + 69);
	}
	enum class ESequenceEvalReinit GetReinitializationBehavior() {
		return memory.read<enum class ESequenceEvalReinit>(m_addr + 70);
	}
	float GetStartPosition() {
		return memory.read<float>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_Slot
{
public:
	FAnimNode_Slot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetSource() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}
	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 32);
	}
	bool GetbAlwaysUpdateSourcePose() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_SplineIK
{
public:
	FAnimNode_SplineIK(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetStartBone() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	struct FBoneReference GetEndBone() {
		return memory.read<struct FBoneReference>(m_addr + 216);
	}
	enum class ESplineBoneAxis GetBoneAxis() {
		return memory.read<enum class ESplineBoneAxis>(m_addr + 232);
	}
	bool GetbAutoCalculateSpline() {
		return memory.read<bool>(m_addr + 233);
	}
	int32_t GetPointCount() {
		return memory.read<int32_t>(m_addr + 236);
	}
	struct TArray<struct FTransform> GetControlPoints() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 240);
	}
	float GetRoll() {
		return memory.read<float>(m_addr + 256);
	}
	float GetTwistStart() {
		return memory.read<float>(m_addr + 260);
	}
	float GetTwistEnd() {
		return memory.read<float>(m_addr + 264);
	}
	struct FAlphaBlend GetTwistBlend() {
		return memory.read<struct FAlphaBlend>(m_addr + 272);
	}
	float GetStretch() {
		return memory.read<float>(m_addr + 320);
	}
	float GetOffset() {
		return memory.read<float>(m_addr + 324);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_SpringBone
{
public:
	FAnimNode_SpringBone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetSpringBone() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	float GetMaxDisplacement() {
		return memory.read<float>(m_addr + 216);
	}
	float GetSpringStiffness() {
		return memory.read<float>(m_addr + 220);
	}
	float GetSpringDamping() {
		return memory.read<float>(m_addr + 224);
	}
	float GetErrorResetThresh() {
		return memory.read<float>(m_addr + 228);
	}
	char GetbLimitDisplacement() {
		return memory.read<char>(m_addr + 292);
	}
	char GetbTranslateX() {
		return memory.read<char>(m_addr + 292);
	}
	char GetbTranslateY() {
		return memory.read<char>(m_addr + 292);
	}
	char GetbTranslateZ() {
		return memory.read<char>(m_addr + 292);
	}
	char GetbRotateX() {
		return memory.read<char>(m_addr + 292);
	}
	char GetbRotateY() {
		return memory.read<char>(m_addr + 292);
	}
	char GetbRotateZ() {
		return memory.read<char>(m_addr + 292);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_StateResult
{
public:
	FAnimNode_StateResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAnimNode_Trail
{
public:
	FAnimNode_Trail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetTrailBone() {
		return memory.read<struct FBoneReference>(m_addr + 256);
	}
	int32_t GetChainLength() {
		return memory.read<int32_t>(m_addr + 272);
	}
	enum class EAxis GetChainBoneAxis() {
		return memory.read<enum class EAxis>(m_addr + 276);
	}
	char GetbInvertChainBoneAxis() {
		return memory.read<char>(m_addr + 277);
	}
	char GetbLimitStretch() {
		return memory.read<char>(m_addr + 277);
	}
	char GetbLimitRotation() {
		return memory.read<char>(m_addr + 277);
	}
	char GetbUsePlanarLimit() {
		return memory.read<char>(m_addr + 277);
	}
	char GetbActorSpaceFakeVel() {
		return memory.read<char>(m_addr + 277);
	}
	char GetbReorientParentToChild() {
		return memory.read<char>(m_addr + 277);
	}
	float GetMaxDeltaTime() {
		return memory.read<float>(m_addr + 280);
	}
	float GetRelaxationSpeedScale() {
		return memory.read<float>(m_addr + 284);
	}
	struct FRuntimeFloatCurve GetTrailRelaxationSpeed() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 288);
	}
	struct FInputScaleBiasClamp GetRelaxationSpeedScaleInputProcessor() {
		return memory.read<struct FInputScaleBiasClamp>(m_addr + 424);
	}
	struct TArray<struct FRotationLimit> GetRotationLimits() {
		return memory.read<struct TArray<struct FRotationLimit>>(m_addr + 472);
	}
	struct TArray<struct FVector> GetRotationOffsets() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 488);
	}
	struct TArray<struct FAnimPhysPlanarLimit> GetPlanarLimits() {
		return memory.read<struct TArray<struct FAnimPhysPlanarLimit>>(m_addr + 504);
	}
	float GetStretchLimit() {
		return memory.read<float>(m_addr + 520);
	}
	struct FVector GetFakeVelocity() {
		return memory.read<struct FVector>(m_addr + 524);
	}
	struct FBoneReference GetBaseJoint() {
		return memory.read<struct FBoneReference>(m_addr + 536);
	}
	float GetLastBoneRotationAnimAlphaBlend() {
		return memory.read<float>(m_addr + 552);
	}

private:
	std::uint64_t m_addr = 0;
};class FRotationLimit
{
public:
	FRotationLimit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLimitMin() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetLimitMax() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateProxyObjectForPlayMontage
{
public:
	FCreateProxyObjectForPlayMontage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetInSkeletalMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct UAnimMontage GetMontageToPlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAnimMontage(ptr_addr);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 16);
	}
	float GetStartingPosition() {
		return memory.read<float>(m_addr + 20);
	}
	struct FName GetStartingSection() {
		return memory.read<struct FName>(m_addr + 24);
	}
	struct UPlayMontageCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UPlayMontageCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_TwistCorrectiveNode
{
public:
	FAnimNode_TwistCorrectiveNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FReferenceBoneFrame GetBaseFrame() {
		return memory.read<struct FReferenceBoneFrame>(m_addr + 200);
	}
	struct FReferenceBoneFrame GetTwistFrame() {
		return memory.read<struct FReferenceBoneFrame>(m_addr + 232);
	}
	struct FAxis GetTwistPlaneNormalAxis() {
		return memory.read<struct FAxis>(m_addr + 264);
	}
	float GetRangeMax() {
		return memory.read<float>(m_addr + 280);
	}
	float GetRemappedMin() {
		return memory.read<float>(m_addr + 284);
	}
	float GetRemappedMax() {
		return memory.read<float>(m_addr + 288);
	}
	struct FAnimCurveParam GetCurve() {
		return memory.read<struct FAnimCurveParam>(m_addr + 292);
	}

private:
	std::uint64_t m_addr = 0;
};class FReferenceBoneFrame
{
public:
	FReferenceBoneFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetBone() {
		return memory.read<struct FBoneReference>(m_addr + 0);
	}
	struct FAxis GetAxis() {
		return memory.read<struct FAxis>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_TwoBoneIK
{
public:
	FAnimNode_TwoBoneIK(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoneReference GetIKBone() {
		return memory.read<struct FBoneReference>(m_addr + 200);
	}
	float GetStartStretchRatio() {
		return memory.read<float>(m_addr + 216);
	}
	float GetMaxStretchScale() {
		return memory.read<float>(m_addr + 220);
	}
	struct FVector GetEffectorLocation() {
		return memory.read<struct FVector>(m_addr + 224);
	}
	struct FBoneSocketTarget GetEffectorTarget() {
		return memory.read<struct FBoneSocketTarget>(m_addr + 240);
	}
	struct FVector GetJointTargetLocation() {
		return memory.read<struct FVector>(m_addr + 336);
	}
	struct FBoneSocketTarget GetJointTarget() {
		return memory.read<struct FBoneSocketTarget>(m_addr + 352);
	}
	struct FAxis GetTwistAxis() {
		return memory.read<struct FAxis>(m_addr + 448);
	}
	enum class EBoneControlSpace GetEffectorLocationSpace() {
		return memory.read<enum class EBoneControlSpace>(m_addr + 464);
	}
	enum class EBoneControlSpace GetJointTargetLocationSpace() {
		return memory.read<enum class EBoneControlSpace>(m_addr + 465);
	}
	char GetbAllowStretching() {
		return memory.read<char>(m_addr + 466);
	}
	char GetbTakeRotationFromEffectorSpace() {
		return memory.read<char>(m_addr + 466);
	}
	char GetbMaintainEffectorRelRot() {
		return memory.read<char>(m_addr + 466);
	}
	char GetbAllowTwist() {
		return memory.read<char>(m_addr + 466);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_TwoWayBlend
{
public:
	FAnimNode_TwoWayBlend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetA() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}
	struct FPoseLink GetB() {
		return memory.read<struct FPoseLink>(m_addr + 32);
	}
	enum class EAnimAlphaInputType GetAlphaInputType() {
		return memory.read<enum class EAnimAlphaInputType>(m_addr + 48);
	}
	char GetbAlphaBoolEnabled() {
		return memory.read<char>(m_addr + 49);
	}
	char GetbResetChildOnActivation() {
		return memory.read<char>(m_addr + 49);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 52);
	}
	struct FInputScaleBias GetAlphaScaleBias() {
		return memory.read<struct FInputScaleBias>(m_addr + 56);
	}
	struct FInputAlphaBoolBlend GetAlphaBoolBlend() {
		return memory.read<struct FInputAlphaBoolBlend>(m_addr + 64);
	}
	struct FName GetAlphaCurveName() {
		return memory.read<struct FName>(m_addr + 136);
	}
	struct FInputScaleBiasClamp GetAlphaScaleBiasClamp() {
		return memory.read<struct FInputScaleBiasClamp>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimSequencerInstanceProxy
{
public:
	FAnimSequencerInstanceProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FPositionHistory
{
public:
	FPositionHistory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetPositions() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}
	float GetRange() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRBFEntry
{
public:
	FRBFEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetValues() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRBFTarget
{
public:
	FRBFTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetScaleFactor() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetbApplyCustomCurve() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FRichCurve GetCustomCurve() {
		return memory.read<struct FRichCurve>(m_addr + 24);
	}
	enum class ERBFDistanceMethod GetDistanceMethod() {
		return memory.read<enum class ERBFDistanceMethod>(m_addr + 152);
	}
	enum class ERBFFunctionType GetFunctionType() {
		return memory.read<enum class ERBFFunctionType>(m_addr + 153);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_CalculateVelocityFromPositionHistory
{
public:
	FK2_CalculateVelocityFromPositionHistory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct FPositionHistory GetHistory() {
		return memory.read<struct FPositionHistory>(m_addr + 16);
	}
	int32_t GetNumberOfSamples() {
		return memory.read<int32_t>(m_addr + 64);
	}
	float GetVelocityMin() {
		return memory.read<float>(m_addr + 68);
	}
	float GetVelocityMax() {
		return memory.read<float>(m_addr + 72);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_CalculateVelocityFromSockets
{
public:
	FK2_CalculateVelocityFromSockets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	struct USkeletalMeshComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct FName GetSocketOrBoneName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FName GetReferenceSocketOrBone() {
		return memory.read<struct FName>(m_addr + 24);
	}
	enum class ERelativeTransformSpace GetSocketSpace() {
		return memory.read<enum class ERelativeTransformSpace>(m_addr + 32);
	}
	struct FVector GetOffsetInBoneSpace() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	struct FPositionHistory GetHistory() {
		return memory.read<struct FPositionHistory>(m_addr + 48);
	}
	int32_t GetNumberOfSamples() {
		return memory.read<int32_t>(m_addr + 96);
	}
	float GetVelocityMin() {
		return memory.read<float>(m_addr + 100);
	}
	float GetVelocityMax() {
		return memory.read<float>(m_addr + 104);
	}
	enum class EEasingFuncType GetEasingType() {
		return memory.read<enum class EEasingFuncType>(m_addr + 108);
	}
	struct FRuntimeFloatCurve GetCustomCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 112);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_DirectionBetweenSockets
{
public:
	FK2_DirectionBetweenSockets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct FName GetSocketOrBoneNameFrom() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetSocketOrBoneNameTo() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_DistanceBetweenTwoSocketsAndMapRange
{
public:
	FK2_DistanceBetweenTwoSocketsAndMapRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct FName GetSocketOrBoneNameA() {
		return memory.read<struct FName>(m_addr + 8);
	}
	enum class ERelativeTransformSpace GetSocketSpaceA() {
		return memory.read<enum class ERelativeTransformSpace>(m_addr + 16);
	}
	struct FName GetSocketOrBoneNameB() {
		return memory.read<struct FName>(m_addr + 20);
	}
	enum class ERelativeTransformSpace GetSocketSpaceB() {
		return memory.read<enum class ERelativeTransformSpace>(m_addr + 28);
	}
	bool GetbRemapRange() {
		return memory.read<bool>(m_addr + 29);
	}
	float GetInRangeMin() {
		return memory.read<float>(m_addr + 32);
	}
	float GetInRangeMax() {
		return memory.read<float>(m_addr + 36);
	}
	float GetOutRangeMin() {
		return memory.read<float>(m_addr + 40);
	}
	float GetOutRangeMax() {
		return memory.read<float>(m_addr + 44);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_EndProfilingTimer
{
public:
	FK2_EndProfilingTimer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbLog() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FString GetLogPrefix() {
		return memory.read<struct FString>(m_addr + 8);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_LookAt
{
public:
	FK2_LookAt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetCurrentTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	struct FVector GetTargetPosition() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetLookAtVector() {
		return memory.read<struct FVector>(m_addr + 60);
	}
	bool GetbUseUpVector() {
		return memory.read<bool>(m_addr + 72);
	}
	struct FVector GetUpVector() {
		return memory.read<struct FVector>(m_addr + 76);
	}
	float GetClampConeInDegree() {
		return memory.read<float>(m_addr + 88);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_MakePerlinNoiseAndRemap
{
public:
	FK2_MakePerlinNoiseAndRemap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}
	float GetRangeOutMin() {
		return memory.read<float>(m_addr + 4);
	}
	float GetRangeOutMax() {
		return memory.read<float>(m_addr + 8);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_MakePerlinNoiseVectorAndRemap
{
public:
	FK2_MakePerlinNoiseVectorAndRemap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	float GetRangeOutMinX() {
		return memory.read<float>(m_addr + 12);
	}
	float GetRangeOutMaxX() {
		return memory.read<float>(m_addr + 16);
	}
	float GetRangeOutMinY() {
		return memory.read<float>(m_addr + 20);
	}
	float GetRangeOutMaxY() {
		return memory.read<float>(m_addr + 24);
	}
	float GetRangeOutMinZ() {
		return memory.read<float>(m_addr + 28);
	}
	float GetRangeOutMaxZ() {
		return memory.read<float>(m_addr + 32);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_TwoBoneIK
{
public:
	FK2_TwoBoneIK(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetRootPos() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetJointPos() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetEndPos() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetJointTarget() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	struct FVector GetEffector() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetOutJointPos() {
		return memory.read<struct FVector>(m_addr + 60);
	}
	struct FVector GetOutEndPos() {
		return memory.read<struct FVector>(m_addr + 72);
	}
	bool GetbAllowStretching() {
		return memory.read<bool>(m_addr + 84);
	}
	float GetStartStretchRatio() {
		return memory.read<float>(m_addr + 88);
	}
	float GetMaxStretchScale() {
		return memory.read<float>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMontageBlendingOut
{
public:
	FOnMontageBlendingOut(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimMontage GetMontage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAnimMontage(ptr_addr);
	}
	bool GetbInterrupted() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMontageEnded
{
public:
	FOnMontageEnded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimMontage GetMontage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAnimMontage(ptr_addr);
	}
	bool GetbInterrupted() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNotifyBeginReceived
{
public:
	FOnNotifyBeginReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNotifyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FBranchingPointNotifyPayload GetBranchingPointNotifyPayload() {
		return memory.read<struct FBranchingPointNotifyPayload>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNotifyEndReceived
{
public:
	FOnNotifyEndReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNotifyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FBranchingPointNotifyPayload GetBranchingPointNotifyPayload() {
		return memory.read<struct FBranchingPointNotifyPayload>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};