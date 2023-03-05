#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct AnimGraphRuntime.AnimLegIKDefinition Size 44
class FAnimLegIKDefinition
{

 public: 
	struct FBoneReference IKFootBone;  // Offset: 0 Size: 16
	struct FBoneReference FKFootBone;  // Offset: 16 Size: 16
	int32_t NumBonesInLimb;  // Offset: 32 Size: 4
	float MinRotationAngle;  // Offset: 36 Size: 4
	enum class EAxis FootBoneForwardAxis;  // Offset: 40 Size: 1
	enum class EAxis HingeRotationAxis;  // Offset: 41 Size: 1
	char pad_42_1 : 7;  // Offset: 42 Size: 1
	bool bEnableRotationLimit : 1;  // Offset: 42 Size: 1
	char pad_43_1 : 7;  // Offset: 43 Size: 1
	bool bEnableKneeTwistCorrection : 1;  // Offset: 43 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AngularRangeLimit Size 40
class FAngularRangeLimit
{

 public: 
	struct FVector LimitMin;  // Offset: 0 Size: 12
	struct FVector LimitMax;  // Offset: 12 Size: 12
	struct FBoneReference Bone;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature Size 8
class FOnMontagePlayDelegate__DelegateSignature
{

 public: 
	struct FName NotifyName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel Size 104
// Inherited 16 bytes 
class FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{

 public: 
	struct FPoseLink A;  // Offset: 16 Size: 16
	struct FPoseLink B;  // Offset: 32 Size: 16
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions;  // Offset: 48 Size: 16
	char pad_64[16];  // Offset: 64 Size: 16
	float Alpha;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4
	struct FInputScaleBias AlphaScaleBias;  // Offset: 88 Size: 8
	enum class EBoneControlSpace TransformsSpace;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_PoseByName Size 152
// Inherited 128 bytes 
class FAnimNode_PoseByName : public FAnimNode_PoseHandler
{

 public: 
	struct FName PoseName;  // Offset: 128 Size: 8
	float PoseWeight;  // Offset: 136 Size: 4
	char pad_140[12];  // Offset: 140 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.IKChain Size 56
class FIKChain
{

 public: 
	char pad_0[56];  // Offset: 0 Size: 56



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit Size 36
class FAnimPhysSphericalLimit
{

 public: 
	struct FBoneReference DrivingBone;  // Offset: 0 Size: 16
	struct FVector SphereLocalOffset;  // Offset: 16 Size: 12
	float LimitRadius;  // Offset: 28 Size: 4
	enum class ESphericalLimitType LimitType;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase Size 200
// Inherited 16 bytes 
class FAnimNode_SkeletalControlBase : public FAnimNode_Base
{

 public: 
	struct FComponentSpacePoseLink ComponentPose;  // Offset: 16 Size: 16
	int32_t LODThreshold;  // Offset: 32 Size: 4
	float ActualAlpha;  // Offset: 36 Size: 4
	enum class EAnimAlphaInputType AlphaInputType;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bAlphaBoolEnabled : 1;  // Offset: 41 Size: 1
	char pad_42[2];  // Offset: 42 Size: 2
	float Alpha;  // Offset: 44 Size: 4
	struct FInputScaleBias AlphaScaleBias;  // Offset: 48 Size: 8
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // Offset: 56 Size: 72
	struct FName AlphaCurveName;  // Offset: 128 Size: 8
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // Offset: 136 Size: 48
	char pad_184[16];  // Offset: 184 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver Size 360
// Inherited 128 bytes 
class FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{

 public: 
	struct FPoseLink SourcePose;  // Offset: 128 Size: 16
	struct TArray<struct FBoneReference> SourceBones;  // Offset: 144 Size: 16
	struct TArray<struct FBoneReference> OnlyDriveBones;  // Offset: 160 Size: 16
	struct TArray<struct FPoseDriverTarget> PoseTargets;  // Offset: 176 Size: 16
	char pad_192[48];  // Offset: 192 Size: 48
	struct FBoneReference EvalSpaceBone;  // Offset: 240 Size: 16
	struct FRBFParams RBFParams;  // Offset: 256 Size: 44
	enum class EPoseDriverSource DriveSource;  // Offset: 300 Size: 1
	enum class EPoseDriverOutput DriveOutput;  // Offset: 301 Size: 1
	char bOnlyDriveSelectedBones : 1;  // Offset: 302 Size: 1
	char pad_302_1 : 7;  // Offset: 302 Size: 1
	char pad_303[2];  // Offset: 303 Size: 2
	int32_t LODThreshold;  // Offset: 304 Size: 4
	char pad_308[52];  // Offset: 308 Size: 52



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer Size 232
// Inherited 56 bytes 
class FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{

 public: 
	float X;  // Offset: 56 Size: 4
	float Y;  // Offset: 60 Size: 4
	float Z;  // Offset: 64 Size: 4
	float PlayRate;  // Offset: 68 Size: 4
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool bLoop : 1;  // Offset: 72 Size: 1
	char pad_73_1 : 7;  // Offset: 73 Size: 1
	bool bResetPlayTimeWhenBlendSpaceChanges : 1;  // Offset: 73 Size: 1
	char pad_74[2];  // Offset: 74 Size: 2
	float StartPosition;  // Offset: 76 Size: 4
	struct UBlendSpaceBase* BlendSpace;  // Offset: 80 Size: 8
	char pad_88[136];  // Offset: 88 Size: 136
	struct UBlendSpaceBase* PreviousBlendSpace;  // Offset: 224 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics Size 1088
// Inherited 200 bytes 
class FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{

 public: 
	float LinearDampingOverride;  // Offset: 200 Size: 4
	float AngularDampingOverride;  // Offset: 204 Size: 4
	char pad_208[96];  // Offset: 208 Size: 96
	struct FBoneReference RelativeSpaceBone;  // Offset: 304 Size: 16
	struct FBoneReference BoundBone;  // Offset: 320 Size: 16
	struct FBoneReference ChainEnd;  // Offset: 336 Size: 16
	struct FVector BoxExtents;  // Offset: 352 Size: 12
	struct FVector LocalJointOffset;  // Offset: 364 Size: 12
	float GravityScale;  // Offset: 376 Size: 4
	struct FVector GravityOverride;  // Offset: 380 Size: 12
	float LinearSpringConstant;  // Offset: 392 Size: 4
	float AngularSpringConstant;  // Offset: 396 Size: 4
	float WindScale;  // Offset: 400 Size: 4
	struct FVector ComponentLinearAccScale;  // Offset: 404 Size: 12
	struct FVector ComponentLinearVelScale;  // Offset: 416 Size: 12
	struct FVector ComponentAppliedLinearAccClamp;  // Offset: 428 Size: 12
	float AngularBiasOverride;  // Offset: 440 Size: 4
	int32_t NumSolverIterationsPreUpdate;  // Offset: 444 Size: 4
	int32_t NumSolverIterationsPostUpdate;  // Offset: 448 Size: 4
	struct FAnimPhysConstraintSetup ConstraintSetup;  // Offset: 452 Size: 72
	char pad_524[4];  // Offset: 524 Size: 4
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits;  // Offset: 528 Size: 16
	float SphereCollisionRadius;  // Offset: 544 Size: 4
	struct FVector ExternalForce;  // Offset: 548 Size: 12
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits;  // Offset: 560 Size: 16
	enum class AnimPhysCollisionType CollisionType;  // Offset: 576 Size: 1
	enum class AnimPhysSimSpaceType SimulationSpace;  // Offset: 577 Size: 1
	char pad_578[2];  // Offset: 578 Size: 2
	char bUseSphericalLimits : 1;  // Offset: 580 Size: 1
	char bUsePlanarLimit : 1;  // Offset: 580 Size: 1
	char bDoUpdate : 1;  // Offset: 580 Size: 1
	char bDoEval : 1;  // Offset: 580 Size: 1
	char bOverrideLinearDamping : 1;  // Offset: 580 Size: 1
	char bOverrideAngularBias : 1;  // Offset: 580 Size: 1
	char bOverrideAngularDamping : 1;  // Offset: 580 Size: 1
	char bEnableWind : 1;  // Offset: 580 Size: 1
	char pad_581_1 : 1;  // Offset: 581 Size: 1
	char bUseGravityOverride : 1;  // Offset: 581 Size: 1
	char bLinearSpring : 1;  // Offset: 581 Size: 1
	char bAngularSpring : 1;  // Offset: 581 Size: 1
	char bChain : 1;  // Offset: 581 Size: 1
	char pad_581_2 : 3;  // Offset: 581 Size: 1
	char pad_582[11];  // Offset: 582 Size: 11
	struct FRotationRetargetingInfo RetargetingSettings;  // Offset: 592 Size: 304
	char pad_896[192];  // Offset: 896 Size: 192



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt Size 448
// Inherited 232 bytes 
class FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{

 public: 
	char pad_232[104];  // Offset: 232 Size: 104
	struct FPoseLink BasePose;  // Offset: 336 Size: 16
	int32_t LODThreshold;  // Offset: 352 Size: 4
	struct FName SourceSocketName;  // Offset: 356 Size: 8
	struct FName PivotSocketName;  // Offset: 364 Size: 8
	struct FVector LookAtLocation;  // Offset: 372 Size: 12
	struct FVector SocketAxis;  // Offset: 384 Size: 12
	float Alpha;  // Offset: 396 Size: 4
	char pad_400[48];  // Offset: 400 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone Size 256
// Inherited 200 bytes 
class FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference BoneToObserve;  // Offset: 200 Size: 16
	enum class EBoneControlSpace DisplaySpace;  // Offset: 216 Size: 1
	char pad_217_1 : 7;  // Offset: 217 Size: 1
	bool bRelativeToRefPose : 1;  // Offset: 217 Size: 1
	char pad_218[2];  // Offset: 218 Size: 2
	struct FVector Translation;  // Offset: 220 Size: 12
	struct FRotator Rotation;  // Offset: 232 Size: 12
	struct FVector Scale;  // Offset: 244 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.RotationRetargetingInfo Size 304
class FRotationRetargetingInfo
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnabled : 1;  // Offset: 0 Size: 1
	char pad_1[15];  // Offset: 1 Size: 15
	struct FTransform Source;  // Offset: 16 Size: 48
	struct FTransform Target;  // Offset: 64 Size: 48
	enum class ERotationComponent RotationComponent;  // Offset: 112 Size: 1
	char pad_113[3];  // Offset: 113 Size: 3
	struct FVector TwistAxis;  // Offset: 116 Size: 12
	char pad_128_1 : 7;  // Offset: 128 Size: 1
	bool bUseAbsoluteAngle : 1;  // Offset: 128 Size: 1
	char pad_129[3];  // Offset: 129 Size: 3
	float SourceMinimum;  // Offset: 132 Size: 4
	float SourceMaximum;  // Offset: 136 Size: 4
	float TargetMinimum;  // Offset: 140 Size: 4
	float TargetMaximum;  // Offset: 144 Size: 4
	enum class EEasingFuncType EasingType;  // Offset: 148 Size: 1
	char pad_149[3];  // Offset: 149 Size: 3
	struct FRuntimeFloatCurve CustomCurve;  // Offset: 152 Size: 136
	char pad_288_1 : 7;  // Offset: 288 Size: 1
	bool bFlipEasing : 1;  // Offset: 288 Size: 1
	char pad_289[3];  // Offset: 289 Size: 3
	float EasingWeight;  // Offset: 292 Size: 4
	char pad_296_1 : 7;  // Offset: 296 Size: 1
	bool bClamp : 1;  // Offset: 296 Size: 1
	char pad_297[7];  // Offset: 297 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler Size 128
// Inherited 56 bytes 
class FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{

 public: 
	struct UPoseAsset* PoseAsset;  // Offset: 56 Size: 8
	char pad_64[64];  // Offset: 64 Size: 64



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive Size 200
// Inherited 16 bytes 
class FAnimNode_ApplyAdditive : public FAnimNode_Base
{

 public: 
	struct FPoseLink Base;  // Offset: 16 Size: 16
	struct FPoseLink Additive;  // Offset: 32 Size: 16
	float Alpha;  // Offset: 48 Size: 4
	struct FInputScaleBias AlphaScaleBias;  // Offset: 52 Size: 8
	int32_t LODThreshold;  // Offset: 60 Size: 4
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // Offset: 64 Size: 72
	struct FName AlphaCurveName;  // Offset: 136 Size: 8
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // Offset: 144 Size: 48
	char pad_192[4];  // Offset: 192 Size: 4
	enum class EAnimAlphaInputType AlphaInputType;  // Offset: 196 Size: 1
	char pad_197_1 : 7;  // Offset: 197 Size: 1
	bool bAlphaBoolEnabled : 1;  // Offset: 197 Size: 1
	char pad_198[2];  // Offset: 198 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit Size 64
class FAnimPhysPlanarLimit
{

 public: 
	struct FBoneReference DrivingBone;  // Offset: 0 Size: 16
	struct FTransform PlaneTransform;  // Offset: 16 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup Size 72
class FAnimPhysConstraintSetup
{

 public: 
	enum class AnimPhysLinearConstraintType LinearXLimitType;  // Offset: 0 Size: 1
	enum class AnimPhysLinearConstraintType LinearYLimitType;  // Offset: 1 Size: 1
	enum class AnimPhysLinearConstraintType LinearZLimitType;  // Offset: 2 Size: 1
	char pad_3[1];  // Offset: 3 Size: 1
	struct FVector LinearAxesMin;  // Offset: 4 Size: 12
	struct FVector LinearAxesMax;  // Offset: 16 Size: 12
	enum class AnimPhysAngularConstraintType AngularConstraintType;  // Offset: 28 Size: 1
	enum class AnimPhysTwistAxis TwistAxis;  // Offset: 29 Size: 1
	enum class AnimPhysTwistAxis AngularTargetAxis;  // Offset: 30 Size: 1
	char pad_31[1];  // Offset: 31 Size: 1
	float ConeAngle;  // Offset: 32 Size: 4
	struct FVector AngularLimitsMin;  // Offset: 36 Size: 12
	struct FVector AngularLimitsMax;  // Offset: 48 Size: 12
	struct FVector AngularTarget;  // Offset: 60 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits Size 232
// Inherited 200 bytes 
class FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{

 public: 
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits;  // Offset: 200 Size: 16
	struct TArray<struct FVector> AngularOffsets;  // Offset: 216 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.PoseDriverTarget Size 192
class FPoseDriverTarget
{

 public: 
	struct TArray<struct FPoseDriverTransform> BoneTransforms;  // Offset: 0 Size: 16
	struct FRotator TargetRotation;  // Offset: 16 Size: 12
	float TargetScale;  // Offset: 28 Size: 4
	enum class ERBFDistanceMethod DistanceMethod;  // Offset: 32 Size: 1
	enum class ERBFFunctionType FunctionType;  // Offset: 33 Size: 1
	char pad_34_1 : 7;  // Offset: 34 Size: 1
	bool bApplyCustomCurve : 1;  // Offset: 34 Size: 1
	char pad_35[5];  // Offset: 35 Size: 5
	struct FRichCurve CustomCurve;  // Offset: 40 Size: 128
	struct FName DrivenName;  // Offset: 168 Size: 8
	char pad_176[8];  // Offset: 176 Size: 8
	char pad_184_1 : 7;  // Offset: 184 Size: 1
	bool bIsHidden : 1;  // Offset: 184 Size: 1
	char pad_185[7];  // Offset: 185 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry Size 36
class FBlendBoneByChannelEntry
{

 public: 
	struct FBoneReference SourceBone;  // Offset: 0 Size: 16
	struct FBoneReference TargetBone;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bBlendTranslation : 1;  // Offset: 32 Size: 1
	char pad_33_1 : 7;  // Offset: 33 Size: 1
	bool bBlendRotation : 1;  // Offset: 33 Size: 1
	char pad_34_1 : 7;  // Offset: 34 Size: 1
	bool bBlendScale : 1;  // Offset: 34 Size: 1
	char pad_35[1];  // Offset: 35 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase Size 152
// Inherited 16 bytes 
class FAnimNode_BlendListBase : public FAnimNode_Base
{

 public: 
	struct TArray<struct FPoseLink> BlendPose;  // Offset: 16 Size: 16
	struct TArray<float> BlendTime;  // Offset: 32 Size: 16
	enum class EBlendListTransitionType TransitionType;  // Offset: 48 Size: 1
	enum class EAlphaBlendOption BlendType;  // Offset: 49 Size: 1
	char pad_50_1 : 7;  // Offset: 50 Size: 1
	bool bResetChildOnActivation : 1;  // Offset: 50 Size: 1
	char pad_51[5];  // Offset: 51 Size: 5
	struct UCurveFloat* CustomBlendCurve;  // Offset: 56 Size: 8
	struct UBlendProfile* BlendProfile;  // Offset: 64 Size: 8
	char pad_72[80];  // Offset: 72 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool Size 160
// Inherited 152 bytes 
class FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{

 public: 
	char pad_152_1 : 7;  // Offset: 152 Size: 1
	bool bActiveValue : 1;  // Offset: 152 Size: 1
	char pad_153[7];  // Offset: 153 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum Size 176
// Inherited 152 bytes 
class FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{

 public: 
	struct TArray<int32_t> EnumToPoseIndex;  // Offset: 152 Size: 16
	char ActiveEnumValue;  // Offset: 168 Size: 1
	char pad_169[7];  // Offset: 169 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt Size 160
// Inherited 152 bytes 
class FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{

 public: 
	int32_t ActiveChildIndex;  // Offset: 152 Size: 4
	char pad_156[4];  // Offset: 156 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator Size 240
// Inherited 232 bytes 
class FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{

 public: 
	float NormalizedTime;  // Offset: 232 Size: 4
	char pad_236[4];  // Offset: 236 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_CurveSource Size 64
// Inherited 16 bytes 
class FAnimNode_CurveSource : public FAnimNode_Base
{

 public: 
	struct FPoseLink SourcePose;  // Offset: 16 Size: 16
	struct FName SourceBinding;  // Offset: 32 Size: 8
	float Alpha;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4
	struct TScriptInterface<ICurveSourceInterface> CurveSource;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController Size 280
// Inherited 200 bytes 
class FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference SourceBone;  // Offset: 200 Size: 16
	struct UCurveFloat* DrivingCurve;  // Offset: 216 Size: 8
	float Multiplier;  // Offset: 224 Size: 4
	float RangeMin;  // Offset: 228 Size: 4
	float RangeMax;  // Offset: 232 Size: 4
	float RemappedMin;  // Offset: 236 Size: 4
	float RemappedMax;  // Offset: 240 Size: 4
	struct FName ParameterName;  // Offset: 244 Size: 8
	struct FBoneReference TargetBone;  // Offset: 252 Size: 16
	enum class EDrivenDestinationMode DestinationMode;  // Offset: 268 Size: 1
	enum class EDrivenBoneModificationMode ModificationMode;  // Offset: 269 Size: 1
	enum class EComponentType SourceComponent;  // Offset: 270 Size: 1
	char bUseRange : 1;  // Offset: 271 Size: 1
	char bAffectTargetTranslationX : 1;  // Offset: 271 Size: 1
	char bAffectTargetTranslationY : 1;  // Offset: 271 Size: 1
	char bAffectTargetTranslationZ : 1;  // Offset: 271 Size: 1
	char bAffectTargetRotationX : 1;  // Offset: 271 Size: 1
	char bAffectTargetRotationY : 1;  // Offset: 271 Size: 1
	char bAffectTargetRotationZ : 1;  // Offset: 271 Size: 1
	char bAffectTargetScaleX : 1;  // Offset: 271 Size: 1
	char bAffectTargetScaleY : 1;  // Offset: 272 Size: 1
	char bAffectTargetScaleZ : 1;  // Offset: 272 Size: 1
	char pad_272_1 : 6;  // Offset: 272 Size: 1
	char pad_273[8];  // Offset: 273 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_CCDIK Size 384
// Inherited 200 bytes 
class FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FVector EffectorLocation;  // Offset: 200 Size: 12
	enum class EBoneControlSpace EffectorLocationSpace;  // Offset: 212 Size: 1
	char pad_213[11];  // Offset: 213 Size: 11
	struct FBoneSocketTarget EffectorTarget;  // Offset: 224 Size: 96
	struct FBoneReference TipBone;  // Offset: 320 Size: 16
	struct FBoneReference RootBone;  // Offset: 336 Size: 16
	float Precision;  // Offset: 352 Size: 4
	int32_t MaxIterations;  // Offset: 356 Size: 4
	char pad_360_1 : 7;  // Offset: 360 Size: 1
	bool bStartFromTail : 1;  // Offset: 360 Size: 1
	char pad_361_1 : 7;  // Offset: 361 Size: 1
	bool bEnableRotationLimit : 1;  // Offset: 361 Size: 1
	char pad_362[6];  // Offset: 362 Size: 6
	struct TArray<float> RotationLimitPerJoints;  // Offset: 368 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.BoneSocketTarget Size 96
class FBoneSocketTarget
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bUseSocket : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FBoneReference BoneReference;  // Offset: 4 Size: 16
	char pad_20[12];  // Offset: 20 Size: 12
	struct FSocketReference SocketReference;  // Offset: 32 Size: 64



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.SocketReference Size 64
class FSocketReference
{

 public: 
	char pad_0[48];  // Offset: 0 Size: 48
	struct FName SocketName;  // Offset: 48 Size: 8
	char pad_56[8];  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData Size 20
class FSplineIKCachedBoneData
{

 public: 
	struct FBoneReference Bone;  // Offset: 0 Size: 16
	int32_t RefSkeletonIndex;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone Size 160
// Inherited 16 bytes 
class FAnimNode_RotateRootBone : public FAnimNode_Base
{

 public: 
	struct FPoseLink BasePose;  // Offset: 16 Size: 16
	float Pitch;  // Offset: 32 Size: 4
	float Yaw;  // Offset: 36 Size: 4
	struct FInputScaleBiasClamp PitchScaleBiasClamp;  // Offset: 40 Size: 48
	struct FInputScaleBiasClamp YawScaleBiasClamp;  // Offset: 88 Size: 48
	struct FRotator MeshToComponent;  // Offset: 136 Size: 12
	char pad_148[12];  // Offset: 148 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_Constraint Size 264
// Inherited 200 bytes 
class FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference BoneToModify;  // Offset: 200 Size: 16
	struct TArray<struct FConstraint> ConstraintSetup;  // Offset: 216 Size: 16
	struct TArray<float> ConstraintWeights;  // Offset: 232 Size: 16
	char pad_248[16];  // Offset: 248 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier Size 240
// Inherited 200 bytes 
class FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference TargetBone;  // Offset: 200 Size: 16
	struct FBoneReference SourceBone;  // Offset: 216 Size: 16
	float Multiplier;  // Offset: 232 Size: 4
	enum class EBoneAxis RotationAxisToRefer;  // Offset: 236 Size: 1
	char pad_237_1 : 7;  // Offset: 237 Size: 1
	bool bIsAdditive : 1;  // Offset: 237 Size: 1
	char pad_238[2];  // Offset: 238 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.Constraint Size 28
class FConstraint
{

 public: 
	struct FBoneReference TargetBone;  // Offset: 0 Size: 16
	enum class EConstraintOffsetOption OffsetOption;  // Offset: 16 Size: 1
	enum class ETransformConstraintType TransformType;  // Offset: 17 Size: 1
	struct FFilterOptionPerAxis PerAxis;  // Offset: 18 Size: 3
	char pad_21[7];  // Offset: 21 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace Size 400
// Inherited 232 bytes 
class FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{

 public: 
	struct FPoseLink BasePose;  // Offset: 232 Size: 16
	int32_t LODThreshold;  // Offset: 248 Size: 4
	float Alpha;  // Offset: 252 Size: 4
	struct FInputScaleBias AlphaScaleBias;  // Offset: 256 Size: 8
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // Offset: 264 Size: 72
	struct FName AlphaCurveName;  // Offset: 336 Size: 8
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // Offset: 344 Size: 48
	char pad_392[4];  // Offset: 392 Size: 4
	enum class EAnimAlphaInputType AlphaInputType;  // Offset: 396 Size: 1
	char pad_397_1 : 7;  // Offset: 397 Size: 1
	bool bAlphaBoolEnabled : 1;  // Offset: 397 Size: 1
	char pad_398[2];  // Offset: 398 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_CopyBone Size 240
// Inherited 200 bytes 
class FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference SourceBone;  // Offset: 200 Size: 16
	struct FBoneReference TargetBone;  // Offset: 216 Size: 16
	char pad_232_1 : 7;  // Offset: 232 Size: 1
	bool bCopyTranslation : 1;  // Offset: 232 Size: 1
	char pad_233_1 : 7;  // Offset: 233 Size: 1
	bool bCopyRotation : 1;  // Offset: 233 Size: 1
	char pad_234_1 : 7;  // Offset: 234 Size: 1
	bool bCopyScale : 1;  // Offset: 234 Size: 1
	enum class EBoneControlSpace ControlSpace;  // Offset: 235 Size: 1
	char pad_236[4];  // Offset: 236 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry Size 80
class FRandomPlayerSequenceEntry
{

 public: 
	struct UAnimSequence* Sequence;  // Offset: 0 Size: 8
	float ChanceToPlay;  // Offset: 8 Size: 4
	int32_t MinLoopCount;  // Offset: 12 Size: 4
	int32_t MaxLoopCount;  // Offset: 16 Size: 4
	float MinPlayRate;  // Offset: 20 Size: 4
	float MaxPlayRate;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4
	struct FAlphaBlend BlendIn;  // Offset: 32 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta Size 248
// Inherited 200 bytes 
class FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference SourceBone;  // Offset: 200 Size: 16
	struct FBoneReference TargetBone;  // Offset: 216 Size: 16
	char pad_232_1 : 7;  // Offset: 232 Size: 1
	bool bCopyTranslation : 1;  // Offset: 232 Size: 1
	char pad_233_1 : 7;  // Offset: 233 Size: 1
	bool bCopyRotation : 1;  // Offset: 233 Size: 1
	char pad_234_1 : 7;  // Offset: 234 Size: 1
	bool bCopyScale : 1;  // Offset: 234 Size: 1
	enum class CopyBoneDeltaMode CopyMode;  // Offset: 235 Size: 1
	float TranslationMultiplier;  // Offset: 236 Size: 4
	float RotationMultiplier;  // Offset: 240 Size: 4
	float ScaleMultiplier;  // Offset: 244 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve Size 88
// Inherited 16 bytes 
class FAnimNode_ModifyCurve : public FAnimNode_Base
{

 public: 
	struct FPoseLink SourcePose;  // Offset: 16 Size: 16
	struct TArray<float> CurveValues;  // Offset: 32 Size: 16
	struct TArray<struct FName> CurveNames;  // Offset: 48 Size: 16
	char pad_64[16];  // Offset: 64 Size: 16
	float Alpha;  // Offset: 80 Size: 4
	enum class EModifyCurveApplyMode ApplyMode;  // Offset: 84 Size: 1
	char pad_85[3];  // Offset: 85 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot Size 144
// Inherited 16 bytes 
class FAnimNode_PoseSnapshot : public FAnimNode_Base
{

 public: 
	struct FName SnapshotName;  // Offset: 16 Size: 8
	struct FPoseSnapshot Snapshot;  // Offset: 24 Size: 56
	enum class ESnapshotSourceMode Mode;  // Offset: 80 Size: 1
	char pad_81[63];  // Offset: 81 Size: 63



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive Size 56
// Inherited 16 bytes 
class FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{

 public: 
	struct FPoseLink Base;  // Offset: 16 Size: 16
	struct FPoseLink Additive;  // Offset: 32 Size: 16
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bMeshSpaceAdditive : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh Size 472
// Inherited 16 bytes 
class FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{

 public: 
	struct TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent;  // Offset: 16 Size: 8
	char bUseAttachedParent : 1;  // Offset: 24 Size: 1
	char bCopyCurves : 1;  // Offset: 24 Size: 1
	char pad_24_1 : 6;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bCopyCustomAttributes : 1;  // Offset: 25 Size: 1
	char bUseMeshPose : 1;  // Offset: 26 Size: 1
	char pad_26_1 : 7;  // Offset: 26 Size: 1
	char pad_27[2];  // Offset: 27 Size: 2
	struct FName RootBoneToCopy;  // Offset: 28 Size: 8
	char pad_36[436];  // Offset: 36 Size: 436



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_Fabrik Size 400
// Inherited 200 bytes 
class FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{

 public: 
	char pad_200[8];  // Offset: 200 Size: 8
	struct FTransform EffectorTransform;  // Offset: 208 Size: 48
	struct FBoneSocketTarget EffectorTarget;  // Offset: 256 Size: 96
	struct FBoneReference TipBone;  // Offset: 352 Size: 16
	struct FBoneReference RootBone;  // Offset: 368 Size: 16
	float Precision;  // Offset: 384 Size: 4
	int32_t MaxIterations;  // Offset: 388 Size: 4
	enum class EBoneControlSpace EffectorTransformSpace;  // Offset: 392 Size: 1
	enum class EBoneRotationSource EffectorRotationSource;  // Offset: 393 Size: 1
	char pad_394[6];  // Offset: 394 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.PoseDriverTransform Size 24
class FPoseDriverTransform
{

 public: 
	struct FVector TargetTranslation;  // Offset: 0 Size: 12
	struct FRotator TargetRotation;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting Size 288
// Inherited 200 bytes 
class FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference RightHandFK;  // Offset: 200 Size: 16
	struct FBoneReference LeftHandFK;  // Offset: 216 Size: 16
	struct FBoneReference RightHandIK;  // Offset: 232 Size: 16
	struct FBoneReference LeftHandIK;  // Offset: 248 Size: 16
	struct TArray<struct FBoneReference> IKBonesToMove;  // Offset: 264 Size: 16
	float HandFKWeight;  // Offset: 280 Size: 4
	char pad_284[4];  // Offset: 284 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend Size 192
// Inherited 16 bytes 
class FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{

 public: 
	struct FPoseLink BasePose;  // Offset: 16 Size: 16
	struct TArray<struct FPoseLink> BlendPoses;  // Offset: 32 Size: 16
	struct TArray<struct FInputBlendPose> LayerSetup;  // Offset: 48 Size: 16
	struct TArray<float> BlendWeights;  // Offset: 64 Size: 16
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bMeshSpaceRotationBlend : 1;  // Offset: 80 Size: 1
	char pad_81_1 : 7;  // Offset: 81 Size: 1
	bool bMeshSpaceScaleBlend : 1;  // Offset: 81 Size: 1
	enum class ECurveBlendOption CurveBlendOption;  // Offset: 82 Size: 1
	char pad_83_1 : 7;  // Offset: 83 Size: 1
	bool bBlendRootMotionBasedOnRootBone : 1;  // Offset: 83 Size: 1
	char pad_84[4];  // Offset: 84 Size: 4
	int32_t LODThreshold;  // Offset: 88 Size: 4
	char pad_92[4];  // Offset: 92 Size: 4
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights;  // Offset: 96 Size: 16
	struct FGuid SkeletonGuid;  // Offset: 112 Size: 16
	struct FGuid VirtualBoneGuid;  // Offset: 128 Size: 16
	char pad_144[48];  // Offset: 144 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_LegIK Size 248
// Inherited 200 bytes 
class FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{

 public: 
	float ReachPrecision;  // Offset: 200 Size: 4
	int32_t MaxIterations;  // Offset: 204 Size: 4
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition;  // Offset: 208 Size: 16
	char pad_224[24];  // Offset: 224 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimLegIKData Size 160
class FAnimLegIKData
{

 public: 
	char pad_0[160];  // Offset: 0 Size: 160



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.IKChainLink Size 60
class FIKChainLink
{

 public: 
	char pad_0[60];  // Offset: 0 Size: 60



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot Size 216
// Inherited 200 bytes 
class FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{

 public: 
	char pad_200[16];  // Offset: 200 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_LookAt Size 432
// Inherited 200 bytes 
class FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference BoneToModify;  // Offset: 200 Size: 16
	char pad_216[8];  // Offset: 216 Size: 8
	struct FBoneSocketTarget LookAtTarget;  // Offset: 224 Size: 96
	struct FVector LookAtLocation;  // Offset: 320 Size: 12
	struct FAxis LookAt_Axis;  // Offset: 332 Size: 16
	char pad_348_1 : 7;  // Offset: 348 Size: 1
	bool bUseLookUpAxis : 1;  // Offset: 348 Size: 1
	enum class EInterpolationBlend InterpolationType;  // Offset: 349 Size: 1
	char pad_350[2];  // Offset: 350 Size: 2
	struct FAxis LookUp_Axis;  // Offset: 352 Size: 16
	float LookAtClamp;  // Offset: 368 Size: 4
	float InterpolationTime;  // Offset: 372 Size: 4
	float InterpolationTriggerThreashold;  // Offset: 376 Size: 4
	char pad_380[52];  // Offset: 380 Size: 52



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone Size 264
// Inherited 200 bytes 
class FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference BoneToModify;  // Offset: 200 Size: 16
	struct FVector Translation;  // Offset: 216 Size: 12
	struct FRotator Rotation;  // Offset: 228 Size: 12
	struct FVector Scale;  // Offset: 240 Size: 12
	enum class EBoneModificationMode TranslationMode;  // Offset: 252 Size: 1
	enum class EBoneModificationMode RotationMode;  // Offset: 253 Size: 1
	enum class EBoneModificationMode ScaleMode;  // Offset: 254 Size: 1
	enum class EBoneControlSpace TranslationSpace;  // Offset: 255 Size: 1
	enum class EBoneControlSpace RotationSpace;  // Offset: 256 Size: 1
	enum class EBoneControlSpace ScaleSpace;  // Offset: 257 Size: 1
	char pad_258[6];  // Offset: 258 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend Size 80
// Inherited 16 bytes 
class FAnimNode_MultiWayBlend : public FAnimNode_Base
{

 public: 
	struct TArray<struct FPoseLink> Poses;  // Offset: 16 Size: 16
	struct TArray<float> DesiredAlphas;  // Offset: 32 Size: 16
	char pad_48[16];  // Offset: 48 Size: 16
	struct FInputScaleBias AlphaScaleBias;  // Offset: 64 Size: 8
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool bAdditiveNode : 1;  // Offset: 72 Size: 1
	char pad_73_1 : 7;  // Offset: 73 Size: 1
	bool bNormalizeAlpha : 1;  // Offset: 73 Size: 1
	char pad_74[6];  // Offset: 74 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode Size 160
// Inherited 128 bytes 
class FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{

 public: 
	struct FPoseLink SourcePose;  // Offset: 128 Size: 16
	enum class EAlphaBlendOption BlendOption;  // Offset: 144 Size: 1
	char pad_145[7];  // Offset: 145 Size: 7
	struct UCurveFloat* CustomCurve;  // Offset: 152 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.SimSpaceSettings Size 64
class FSimSpaceSettings
{

 public: 
	float MasterAlpha;  // Offset: 0 Size: 4
	float VelocityScaleZ;  // Offset: 4 Size: 4
	float MaxLinearVelocity;  // Offset: 8 Size: 4
	float MaxAngularVelocity;  // Offset: 12 Size: 4
	float MaxLinearAcceleration;  // Offset: 16 Size: 4
	float MaxAngularAcceleration;  // Offset: 20 Size: 4
	float ExternalLinearDrag;  // Offset: 24 Size: 4
	struct FVector ExternalLinearDragV;  // Offset: 28 Size: 12
	struct FVector ExternalLinearVelocity;  // Offset: 40 Size: 12
	struct FVector ExternalAngularVelocity;  // Offset: 52 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.RBFParams Size 44
class FRBFParams
{

 public: 
	int32_t TargetDimensions;  // Offset: 0 Size: 4
	enum class ERBFSolverType SolverType;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	float Radius;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bAutomaticRadius : 1;  // Offset: 12 Size: 1
	enum class ERBFFunctionType Function;  // Offset: 13 Size: 1
	enum class ERBFDistanceMethod DistanceMethod;  // Offset: 14 Size: 1
	enum class EBoneAxis TwistAxis;  // Offset: 15 Size: 1
	float WeightThreshold;  // Offset: 16 Size: 4
	enum class ERBFNormalizeMethod NormalizeMethod;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct FVector MedianReference;  // Offset: 24 Size: 12
	float MedianMin;  // Offset: 36 Size: 4
	float MedianMax;  // Offset: 40 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer Size 120
// Inherited 16 bytes 
class FAnimNode_RandomPlayer : public FAnimNode_Base
{

 public: 
	struct TArray<struct FRandomPlayerSequenceEntry> Entries;  // Offset: 16 Size: 16
	char pad_32[80];  // Offset: 32 Size: 80
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bShuffleMode : 1;  // Offset: 112 Size: 1
	char pad_113[7];  // Offset: 113 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose Size 16
// Inherited 16 bytes 
class FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

 public: 



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_RefPose Size 24
// Inherited 16 bytes 
class FAnimNode_RefPose : public FAnimNode_Base
{

 public: 
	enum class ERefPoseType RefPoseType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_RigidBody Size 2096
// Inherited 200 bytes 
class FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{

 public: 
	struct UPhysicsAsset* OverridePhysicsAsset;  // Offset: 200 Size: 8
	char pad_208[152];  // Offset: 208 Size: 152
	struct FVector OverrideWorldGravity;  // Offset: 360 Size: 12
	struct FVector ExternalForce;  // Offset: 372 Size: 12
	struct FVector ComponentLinearAccScale;  // Offset: 384 Size: 12
	struct FVector ComponentLinearVelScale;  // Offset: 396 Size: 12
	struct FVector ComponentAppliedLinearAccClamp;  // Offset: 408 Size: 12
	struct FSimSpaceSettings SimSpaceSettings;  // Offset: 420 Size: 64
	float CachedBoundsScale;  // Offset: 484 Size: 4
	struct FBoneReference BaseBoneRef;  // Offset: 488 Size: 16
	enum class ECollisionChannel OverlapChannel;  // Offset: 504 Size: 1
	enum class ESimulationSpace SimulationSpace;  // Offset: 505 Size: 1
	char pad_506_1 : 7;  // Offset: 506 Size: 1
	bool bForceDisableCollisionBetweenConstraintBodies : 1;  // Offset: 506 Size: 1
	char pad_507[1];  // Offset: 507 Size: 1
	char bEnableWorldGeometry : 1;  // Offset: 508 Size: 1
	char bOverrideWorldGravity : 1;  // Offset: 508 Size: 1
	char bTransferBoneVelocities : 1;  // Offset: 508 Size: 1
	char bFreezeIncomingPoseOnStart : 1;  // Offset: 508 Size: 1
	char bClampLinearTranslationLimitToRefPose : 1;  // Offset: 508 Size: 1
	char pad_508_1 : 3;  // Offset: 508 Size: 1
	char pad_509[4];  // Offset: 509 Size: 4
	float WorldSpaceMinimumScale;  // Offset: 512 Size: 4
	float EvaluationResetTime;  // Offset: 516 Size: 4
	char pad_520[1576];  // Offset: 520 Size: 1576



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength Size 120
// Inherited 16 bytes 
class FAnimNode_ScaleChainLength : public FAnimNode_Base
{

 public: 
	struct FPoseLink InputPose;  // Offset: 16 Size: 16
	float DefaultChainLength;  // Offset: 32 Size: 4
	struct FBoneReference ChainStartBone;  // Offset: 36 Size: 16
	struct FBoneReference ChainEndBone;  // Offset: 52 Size: 16
	struct FVector TargetLocation;  // Offset: 68 Size: 12
	float Alpha;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4
	struct FInputScaleBias AlphaScaleBias;  // Offset: 88 Size: 8
	enum class EScaleChainInitialLength ChainInitialLength;  // Offset: 96 Size: 1
	char pad_97[23];  // Offset: 97 Size: 23



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator Size 80
// Inherited 56 bytes 
class FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{

 public: 
	struct UAnimSequenceBase* Sequence;  // Offset: 56 Size: 8
	float ExplicitTime;  // Offset: 64 Size: 4
	char pad_68_1 : 7;  // Offset: 68 Size: 1
	bool bShouldLoop : 1;  // Offset: 68 Size: 1
	char pad_69_1 : 7;  // Offset: 69 Size: 1
	bool bTeleportToExplicitTime : 1;  // Offset: 69 Size: 1
	enum class ESequenceEvalReinit ReinitializationBehavior;  // Offset: 70 Size: 1
	char pad_71[1];  // Offset: 71 Size: 1
	float StartPosition;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_Slot Size 72
// Inherited 16 bytes 
class FAnimNode_Slot : public FAnimNode_Base
{

 public: 
	struct FPoseLink Source;  // Offset: 16 Size: 16
	struct FName SlotName;  // Offset: 32 Size: 8
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bAlwaysUpdateSourcePose : 1;  // Offset: 40 Size: 1
	char pad_41[31];  // Offset: 41 Size: 31



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_SplineIK Size 624
// Inherited 200 bytes 
class FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference StartBone;  // Offset: 200 Size: 16
	struct FBoneReference EndBone;  // Offset: 216 Size: 16
	enum class ESplineBoneAxis BoneAxis;  // Offset: 232 Size: 1
	char pad_233_1 : 7;  // Offset: 233 Size: 1
	bool bAutoCalculateSpline : 1;  // Offset: 233 Size: 1
	char pad_234[2];  // Offset: 234 Size: 2
	int32_t PointCount;  // Offset: 236 Size: 4
	struct TArray<struct FTransform> ControlPoints;  // Offset: 240 Size: 16
	float Roll;  // Offset: 256 Size: 4
	float TwistStart;  // Offset: 260 Size: 4
	float TwistEnd;  // Offset: 264 Size: 4
	char pad_268[4];  // Offset: 268 Size: 4
	struct FAlphaBlend TwistBlend;  // Offset: 272 Size: 48
	float Stretch;  // Offset: 320 Size: 4
	float Offset;  // Offset: 324 Size: 4
	char pad_328[296];  // Offset: 328 Size: 296



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_SpringBone Size 296
// Inherited 200 bytes 
class FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference SpringBone;  // Offset: 200 Size: 16
	float MaxDisplacement;  // Offset: 216 Size: 4
	float SpringStiffness;  // Offset: 220 Size: 4
	float SpringDamping;  // Offset: 224 Size: 4
	float ErrorResetThresh;  // Offset: 228 Size: 4
	char pad_232[60];  // Offset: 232 Size: 60
	char bLimitDisplacement : 1;  // Offset: 292 Size: 1
	char bTranslateX : 1;  // Offset: 292 Size: 1
	char bTranslateY : 1;  // Offset: 292 Size: 1
	char bTranslateZ : 1;  // Offset: 292 Size: 1
	char bRotateX : 1;  // Offset: 292 Size: 1
	char bRotateY : 1;  // Offset: 292 Size: 1
	char bRotateZ : 1;  // Offset: 292 Size: 1
	char pad_292_1 : 1;  // Offset: 292 Size: 1
	char pad_293[4];  // Offset: 293 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_StateResult Size 48
// Inherited 48 bytes 
class FAnimNode_StateResult : public FAnimNode_Root
{

 public: 



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_Trail Size 608
// Inherited 200 bytes 
class FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{

 public: 
	char pad_200[56];  // Offset: 200 Size: 56
	struct FBoneReference TrailBone;  // Offset: 256 Size: 16
	int32_t ChainLength;  // Offset: 272 Size: 4
	enum class EAxis ChainBoneAxis;  // Offset: 276 Size: 1
	char bInvertChainBoneAxis : 1;  // Offset: 277 Size: 1
	char bLimitStretch : 1;  // Offset: 277 Size: 1
	char bLimitRotation : 1;  // Offset: 277 Size: 1
	char bUsePlanarLimit : 1;  // Offset: 277 Size: 1
	char bActorSpaceFakeVel : 1;  // Offset: 277 Size: 1
	char bReorientParentToChild : 1;  // Offset: 277 Size: 1
	char pad_277_1 : 2;  // Offset: 277 Size: 1
	char pad_278[3];  // Offset: 278 Size: 3
	float MaxDeltaTime;  // Offset: 280 Size: 4
	float RelaxationSpeedScale;  // Offset: 284 Size: 4
	struct FRuntimeFloatCurve TrailRelaxationSpeed;  // Offset: 288 Size: 136
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor;  // Offset: 424 Size: 48
	struct TArray<struct FRotationLimit> RotationLimits;  // Offset: 472 Size: 16
	struct TArray<struct FVector> RotationOffsets;  // Offset: 488 Size: 16
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits;  // Offset: 504 Size: 16
	float StretchLimit;  // Offset: 520 Size: 4
	struct FVector FakeVelocity;  // Offset: 524 Size: 12
	struct FBoneReference BaseJoint;  // Offset: 536 Size: 16
	float LastBoneRotationAnimAlphaBlend;  // Offset: 552 Size: 4
	char pad_556[52];  // Offset: 556 Size: 52



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.RotationLimit Size 24
class FRotationLimit
{

 public: 
	struct FVector LimitMin;  // Offset: 0 Size: 12
	struct FVector LimitMax;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage Size 40
class FCreateProxyObjectForPlayMontage
{

 public: 
	struct USkeletalMeshComponent* InSkeletalMeshComponent;  // Offset: 0 Size: 8
	struct UAnimMontage* MontageToPlay;  // Offset: 8 Size: 8
	float PlayRate;  // Offset: 16 Size: 4
	float StartingPosition;  // Offset: 20 Size: 4
	struct FName StartingSection;  // Offset: 24 Size: 8
	struct UPlayMontageCallbackProxy* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode Size 312
// Inherited 200 bytes 
class FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FReferenceBoneFrame BaseFrame;  // Offset: 200 Size: 32
	struct FReferenceBoneFrame TwistFrame;  // Offset: 232 Size: 32
	struct FAxis TwistPlaneNormalAxis;  // Offset: 264 Size: 16
	float RangeMax;  // Offset: 280 Size: 4
	float RemappedMin;  // Offset: 284 Size: 4
	float RemappedMax;  // Offset: 288 Size: 4
	struct FAnimCurveParam Curve;  // Offset: 292 Size: 12
	char pad_304[8];  // Offset: 304 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.ReferenceBoneFrame Size 32
class FReferenceBoneFrame
{

 public: 
	struct FBoneReference Bone;  // Offset: 0 Size: 16
	struct FAxis Axis;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK Size 480
// Inherited 200 bytes 
class FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{

 public: 
	struct FBoneReference IKBone;  // Offset: 200 Size: 16
	float StartStretchRatio;  // Offset: 216 Size: 4
	float MaxStretchScale;  // Offset: 220 Size: 4
	struct FVector EffectorLocation;  // Offset: 224 Size: 12
	char pad_236[4];  // Offset: 236 Size: 4
	struct FBoneSocketTarget EffectorTarget;  // Offset: 240 Size: 96
	struct FVector JointTargetLocation;  // Offset: 336 Size: 12
	char pad_348[4];  // Offset: 348 Size: 4
	struct FBoneSocketTarget JointTarget;  // Offset: 352 Size: 96
	struct FAxis TwistAxis;  // Offset: 448 Size: 16
	enum class EBoneControlSpace EffectorLocationSpace;  // Offset: 464 Size: 1
	enum class EBoneControlSpace JointTargetLocationSpace;  // Offset: 465 Size: 1
	char bAllowStretching : 1;  // Offset: 466 Size: 1
	char bTakeRotationFromEffectorSpace : 1;  // Offset: 466 Size: 1
	char bMaintainEffectorRelRot : 1;  // Offset: 466 Size: 1
	char bAllowTwist : 1;  // Offset: 466 Size: 1
	char pad_466_1 : 4;  // Offset: 466 Size: 1
	char pad_467[14];  // Offset: 467 Size: 14



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend Size 200
// Inherited 16 bytes 
class FAnimNode_TwoWayBlend : public FAnimNode_Base
{

 public: 
	struct FPoseLink A;  // Offset: 16 Size: 16
	struct FPoseLink B;  // Offset: 32 Size: 16
	enum class EAnimAlphaInputType AlphaInputType;  // Offset: 48 Size: 1
	char bAlphaBoolEnabled : 1;  // Offset: 49 Size: 1
	char pad_49_1 : 2;  // Offset: 49 Size: 1
	char bResetChildOnActivation : 1;  // Offset: 49 Size: 1
	char pad_49_2 : 4;  // Offset: 49 Size: 1
	char pad_50[3];  // Offset: 50 Size: 3
	float Alpha;  // Offset: 52 Size: 4
	struct FInputScaleBias AlphaScaleBias;  // Offset: 56 Size: 8
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // Offset: 64 Size: 72
	struct FName AlphaCurveName;  // Offset: 136 Size: 8
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // Offset: 144 Size: 48
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy Size 2576
// Inherited 1904 bytes 
class FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{

 public: 
	char pad_1904[672];  // Offset: 1904 Size: 672



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.PositionHistory Size 48
class FPositionHistory
{

 public: 
	struct TArray<struct FVector> Positions;  // Offset: 0 Size: 16
	float Range;  // Offset: 16 Size: 4
	char pad_20[28];  // Offset: 20 Size: 28



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.RBFEntry Size 16
class FRBFEntry
{

 public: 
	struct TArray<float> Values;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimGraphRuntime.RBFTarget Size 160
// Inherited 16 bytes 
class FRBFTarget : public FRBFEntry
{

 public: 
	float ScaleFactor;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bApplyCustomCurve : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct FRichCurve CustomCurve;  // Offset: 24 Size: 128
	enum class ERBFDistanceMethod DistanceMethod;  // Offset: 152 Size: 1
	enum class ERBFFunctionType FunctionType;  // Offset: 153 Size: 1
	char pad_154[6];  // Offset: 154 Size: 6



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory Size 80
class FK2_CalculateVelocityFromPositionHistory
{

 public: 
	float DeltaSeconds;  // Offset: 0 Size: 4
	struct FVector position;  // Offset: 4 Size: 12
	struct FPositionHistory History;  // Offset: 16 Size: 48
	int32_t NumberOfSamples;  // Offset: 64 Size: 4
	float VelocityMin;  // Offset: 68 Size: 4
	float VelocityMax;  // Offset: 72 Size: 4
	float ReturnValue;  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets Size 256
class FK2_CalculateVelocityFromSockets
{

 public: 
	float DeltaSeconds;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct USkeletalMeshComponent* Component;  // Offset: 8 Size: 8
	struct FName SocketOrBoneName;  // Offset: 16 Size: 8
	struct FName ReferenceSocketOrBone;  // Offset: 24 Size: 8
	enum class ERelativeTransformSpace SocketSpace;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3
	struct FVector OffsetInBoneSpace;  // Offset: 36 Size: 12
	struct FPositionHistory History;  // Offset: 48 Size: 48
	int32_t NumberOfSamples;  // Offset: 96 Size: 4
	float VelocityMin;  // Offset: 100 Size: 4
	float VelocityMax;  // Offset: 104 Size: 4
	enum class EEasingFuncType EasingType;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3
	struct FRuntimeFloatCurve CustomCurve;  // Offset: 112 Size: 136
	float ReturnValue;  // Offset: 248 Size: 4
	char pad_252[4];  // Offset: 252 Size: 4



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets Size 40
class FK2_DirectionBetweenSockets
{

 public: 
	struct USkeletalMeshComponent* Component;  // Offset: 0 Size: 8
	struct FName SocketOrBoneNameFrom;  // Offset: 8 Size: 8
	struct FName SocketOrBoneNameTo;  // Offset: 16 Size: 8
	struct FVector ReturnValue;  // Offset: 24 Size: 12
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange Size 56
class FK2_DistanceBetweenTwoSocketsAndMapRange
{

 public: 
	struct USkeletalMeshComponent* Component;  // Offset: 0 Size: 8
	struct FName SocketOrBoneNameA;  // Offset: 8 Size: 8
	enum class ERelativeTransformSpace SocketSpaceA;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	struct FName SocketOrBoneNameB;  // Offset: 20 Size: 8
	enum class ERelativeTransformSpace SocketSpaceB;  // Offset: 28 Size: 1
	char pad_29_1 : 7;  // Offset: 29 Size: 1
	bool bRemapRange : 1;  // Offset: 29 Size: 1
	char pad_30[2];  // Offset: 30 Size: 2
	float InRangeMin;  // Offset: 32 Size: 4
	float InRangeMax;  // Offset: 36 Size: 4
	float OutRangeMin;  // Offset: 40 Size: 4
	float OutRangeMax;  // Offset: 44 Size: 4
	float ReturnValue;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer Size 32
class FK2_EndProfilingTimer
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bLog : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString LogPrefix;  // Offset: 8 Size: 16
	float ReturnValue;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt Size 144
class FK2_LookAt
{

 public: 
	struct FTransform CurrentTransform;  // Offset: 0 Size: 48
	struct FVector TargetPosition;  // Offset: 48 Size: 12
	struct FVector LookAtVector;  // Offset: 60 Size: 12
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool bUseUpVector : 1;  // Offset: 72 Size: 1
	char pad_73[3];  // Offset: 73 Size: 3
	struct FVector UpVector;  // Offset: 76 Size: 12
	float ClampConeInDegree;  // Offset: 88 Size: 4
	char pad_92[4];  // Offset: 92 Size: 4
	struct FTransform ReturnValue;  // Offset: 96 Size: 48



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap Size 16
class FK2_MakePerlinNoiseAndRemap
{

 public: 
	float Value;  // Offset: 0 Size: 4
	float RangeOutMin;  // Offset: 4 Size: 4
	float RangeOutMax;  // Offset: 8 Size: 4
	float ReturnValue;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap Size 48
class FK2_MakePerlinNoiseVectorAndRemap
{

 public: 
	float X;  // Offset: 0 Size: 4
	float Y;  // Offset: 4 Size: 4
	float Z;  // Offset: 8 Size: 4
	float RangeOutMinX;  // Offset: 12 Size: 4
	float RangeOutMaxX;  // Offset: 16 Size: 4
	float RangeOutMinY;  // Offset: 20 Size: 4
	float RangeOutMaxY;  // Offset: 24 Size: 4
	float RangeOutMinZ;  // Offset: 28 Size: 4
	float RangeOutMaxZ;  // Offset: 32 Size: 4
	struct FVector ReturnValue;  // Offset: 36 Size: 12



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK Size 96
class FK2_TwoBoneIK
{

 public: 
	struct FVector RootPos;  // Offset: 0 Size: 12
	struct FVector JointPos;  // Offset: 12 Size: 12
	struct FVector EndPos;  // Offset: 24 Size: 12
	struct FVector JointTarget;  // Offset: 36 Size: 12
	struct FVector Effector;  // Offset: 48 Size: 12
	struct FVector OutJointPos;  // Offset: 60 Size: 12
	struct FVector OutEndPos;  // Offset: 72 Size: 12
	char pad_84_1 : 7;  // Offset: 84 Size: 1
	bool bAllowStretching : 1;  // Offset: 84 Size: 1
	char pad_85[3];  // Offset: 85 Size: 3
	float StartStretchRatio;  // Offset: 88 Size: 4
	float MaxStretchScale;  // Offset: 92 Size: 4



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut Size 16
class FOnMontageBlendingOut
{

 public: 
	struct UAnimMontage* Montage;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bInterrupted : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded Size 16
class FOnMontageEnded
{

 public: 
	struct UAnimMontage* Montage;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bInterrupted : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived Size 40
class FOnNotifyBeginReceived
{

 public: 
	struct FName NotifyName;  // Offset: 0 Size: 8
	struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;  // Offset: 8 Size: 32



 // Functions 
 public:
}; 
 
 //Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived Size 40
class FOnNotifyEndReceived
{

 public: 
	struct FName NotifyName;  // Offset: 0 Size: 8
	struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;  // Offset: 8 Size: 32



 // Functions 
 public:
}; 
 
 