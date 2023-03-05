namespace offsets
{
	namespace AMatineeActor
	{
			constexpr auto MatineeData = 0x220; // Size: 8, Type: struct UInterpData*
			constexpr auto MatineeControllerName = 0x228; // Size: 8, Type: struct FName
			constexpr auto PlayRate = 0x230; // Size: 4, Type: float
			constexpr auto bPlayOnLevelLoad = 0x234; // Size: 1, Type: char
			constexpr auto bForceStartPos = 0x234; // Size: 1, Type: char
			constexpr auto ForceStartPosition = 0x238; // Size: 4, Type: float
			constexpr auto bLooping = 0x23c; // Size: 1, Type: char
			constexpr auto bRewindOnPlay = 0x23c; // Size: 1, Type: char
			constexpr auto bNoResetOnRewind = 0x23c; // Size: 1, Type: char
			constexpr auto bRewindIfAlreadyPlaying = 0x23c; // Size: 1, Type: char
			constexpr auto bDisableRadioFilter = 0x23c; // Size: 1, Type: char
			constexpr auto bClientSideOnly = 0x23c; // Size: 1, Type: char
			constexpr auto bSkipUpdateIfNotVisible = 0x23c; // Size: 1, Type: char
			constexpr auto bIsSkippable = 0x23c; // Size: 1, Type: char
			constexpr auto PreferredSplitScreenNum = 0x240; // Size: 4, Type: int32_t
			constexpr auto bDisableMovementInput = 0x244; // Size: 1, Type: char
			constexpr auto bDisableLookAtInput = 0x244; // Size: 1, Type: char
			constexpr auto bHidePlayer = 0x244; // Size: 1, Type: char
			constexpr auto bHideHud = 0x244; // Size: 1, Type: char
			constexpr auto GroupActorInfos = 0x248; // Size: 16, Type: struct TArray<struct FInterpGroupActorInfo>
			constexpr auto bShouldShowGore = 0x258; // Size: 1, Type: char
			constexpr auto GroupInst = 0x260; // Size: 16, Type: struct TArray<struct UInterpGroupInst*>
			constexpr auto CameraCuts = 0x270; // Size: 16, Type: struct TArray<struct FCameraCutInfo>
			constexpr auto bIsPlaying = 0x280; // Size: 1, Type: char
			constexpr auto bReversePlayback = 0x280; // Size: 1, Type: char
			constexpr auto bPaused = 0x280; // Size: 1, Type: char
			constexpr auto bPendingStop = 0x280; // Size: 1, Type: char
			constexpr auto InterpPosition = 0x284; // Size: 4, Type: float
			constexpr auto ReplicationForceIsPlaying = 0x28c; // Size: 1, Type: char
			constexpr auto OnPlay = 0x290; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStop = 0x2a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPause = 0x2b0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
