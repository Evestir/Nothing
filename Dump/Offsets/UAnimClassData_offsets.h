namespace offsets
{
	namespace UAnimClassData
	{
			constexpr auto BakedStateMachines = 0x30; // Size: 16, Type: struct TArray<struct FBakedAnimationStateMachine>
			constexpr auto TargetSkeleton = 0x40; // Size: 8, Type: struct USkeleton*
			constexpr auto AnimNotifies = 0x48; // Size: 16, Type: struct TArray<struct FAnimNotifyEvent>
			constexpr auto OrderedSavedPoseIndicesMap = 0x58; // Size: 80, Type: struct TMap<struct FName, struct FCachedPoseIndices>
			constexpr auto AnimBlueprintFunctions = 0xa8; // Size: 16, Type: struct TArray<struct FAnimBlueprintFunction>
			constexpr auto AnimBlueprintFunctionData = 0xb8; // Size: 16, Type: struct TArray<struct FAnimBlueprintFunctionData>
			constexpr auto AnimNodeProperties = 0xc8; // Size: 16, Type: struct TArray<struct TFieldPath<FNone>>
			constexpr auto LinkedAnimGraphNodeProperties = 0xe8; // Size: 16, Type: struct TArray<struct TFieldPath<FNone>>
			constexpr auto LinkedAnimLayerNodeProperties = 0x108; // Size: 16, Type: struct TArray<struct TFieldPath<FNone>>
			constexpr auto PreUpdateNodeProperties = 0x128; // Size: 16, Type: struct TArray<struct TFieldPath<FNone>>
			constexpr auto DynamicResetNodeProperties = 0x148; // Size: 16, Type: struct TArray<struct TFieldPath<FNone>>
			constexpr auto StateMachineNodeProperties = 0x168; // Size: 16, Type: struct TArray<struct TFieldPath<FNone>>
			constexpr auto InitializationNodeProperties = 0x188; // Size: 16, Type: struct TArray<struct TFieldPath<FNone>>
			constexpr auto GraphNameAssetPlayers = 0x1a8; // Size: 80, Type: struct TMap<struct FName, struct FGraphAssetPlayerInformation>
			constexpr auto SyncGroupNames = 0x1f8; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto EvaluateGraphExposedInputs = 0x208; // Size: 16, Type: struct TArray<struct FExposedValueHandler>
			constexpr auto GraphBlendOptions = 0x218; // Size: 80, Type: struct TMap<struct FName, struct FAnimGraphBlendOptions>
			constexpr auto PropertyAccessLibrary = 0x268; // Size: 200, Type: struct FPropertyAccessLibrary
	}
} 
