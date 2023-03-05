namespace offsets
{
	namespace UGarbageCollectionSettings
	{
			constexpr auto TimeBetweenPurgingPendingKillObjects = 0x38; // Size: 4, Type: float
			constexpr auto FlushStreamingOnGC = 0x3c; // Size: 1, Type: char
			constexpr auto AllowParallelGC = 0x3c; // Size: 1, Type: char
			constexpr auto IncrementalBeginDestroyEnabled = 0x3c; // Size: 1, Type: char
			constexpr auto MultithreadedDestructionEnabled = 0x3c; // Size: 1, Type: char
			constexpr auto CreateGCClusters = 0x3c; // Size: 1, Type: char
			constexpr auto AssetClusteringEnabled = 0x3c; // Size: 1, Type: char
			constexpr auto ActorClusteringEnabled = 0x3c; // Size: 1, Type: char
			constexpr auto BlueprintClusteringEnabled = 0x3c; // Size: 1, Type: char
			constexpr auto UseDisregardForGCOnDedicatedServers = 0x3d; // Size: 1, Type: char
			constexpr auto MinGCClusterSize = 0x40; // Size: 4, Type: int32_t
			constexpr auto NumRetriesBeforeForcingGC = 0x44; // Size: 4, Type: int32_t
			constexpr auto MaxObjectsNotConsideredByGC = 0x48; // Size: 4, Type: int32_t
			constexpr auto SizeOfPermanentObjectPool = 0x4c; // Size: 4, Type: int32_t
			constexpr auto MaxObjectsInGame = 0x50; // Size: 4, Type: int32_t
			constexpr auto MaxObjectsInEditor = 0x54; // Size: 4, Type: int32_t
	}
} 
