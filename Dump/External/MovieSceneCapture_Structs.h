#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnPixelsReceived
{
public:
	FOnPixelsReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCapturedPixels GetPixels() {
		return memory.read<struct FCapturedPixels>(m_addr + 0);
	}
	struct FCapturedPixelsID GetID() {
		return memory.read<struct FCapturedPixelsID>(m_addr + 16);
	}
	struct FFrameMetrics GetFrameMetrics() {
		return memory.read<struct FFrameMetrics>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentFrameMetrics
{
public:
	FGetCurrentFrameMetrics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameMetrics GetReturnValue() {
		return memory.read<struct FFrameMetrics>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCompositionGraphCapturePasses
{
public:
	FCompositionGraphCapturePasses(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetValue() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCaptureResolution
{
public:
	FCaptureResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetResX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetResY() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FFrameMetrics
{
public:
	FFrameMetrics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTotalElapsedTime() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFrameDelta() {
		return memory.read<float>(m_addr + 4);
	}
	int32_t GetFrameNumber() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetNumDroppedFrames() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneCaptureSettings
{
public:
	FMovieSceneCaptureSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDirectoryPath GetOutputDirectory() {
		return memory.read<struct FDirectoryPath>(m_addr + 0);
	}
	AGameModeBase GetGameModeOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return AGameModeBase(ptr_addr);
	}
	struct FString GetOutputFormat() {
		return memory.read<struct FString>(m_addr + 24);
	}
	bool GetbOverwriteExisting() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbUseRelativeFrameNumbers() {
		return memory.read<bool>(m_addr + 41);
	}
	int32_t GetHandleFrames() {
		return memory.read<int32_t>(m_addr + 44);
	}
	struct FString GetMovieExtension() {
		return memory.read<struct FString>(m_addr + 48);
	}
	char GetZeroPadFrameNumbers() {
		return memory.read<char>(m_addr + 64);
	}
	struct FFrameRate GetFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 68);
	}
	bool GetbUseCustomFrameRate() {
		return memory.read<bool>(m_addr + 76);
	}
	struct FFrameRate GetCustomFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 80);
	}
	struct FCaptureResolution GetResolution() {
		return memory.read<struct FCaptureResolution>(m_addr + 88);
	}
	bool GetbEnableTextureStreaming() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbCinematicEngineScalability() {
		return memory.read<bool>(m_addr + 97);
	}
	bool GetbCinematicMode() {
		return memory.read<bool>(m_addr + 98);
	}
	bool GetbAllowMovement() {
		return memory.read<bool>(m_addr + 99);
	}
	bool GetbAllowTurning() {
		return memory.read<bool>(m_addr + 100);
	}
	bool GetbShowPlayer() {
		return memory.read<bool>(m_addr + 101);
	}
	bool GetbShowHUD() {
		return memory.read<bool>(m_addr + 102);
	}
	bool GetbUsePathTracer() {
		return memory.read<bool>(m_addr + 103);
	}
	int32_t GetPathTracerSamplePerPixel() {
		return memory.read<int32_t>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsCapturing
{
public:
	FIsCapturing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCapturedPixels
{
public:
	FCapturedPixels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FCapturedPixelsID
{
public:
	FCapturedPixelsID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FName> GetIdentifiers() {
		return memory.read<struct TMap<struct FName, struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetState
{
public:
	FGetState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMovieSceneCaptureProtocolState GetReturnValue() {
		return memory.read<enum class EMovieSceneCaptureProtocolState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioCaptureProtocol
{
public:
	FGetAudioCaptureProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneCaptureProtocolBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneCaptureProtocolBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetImageCaptureProtocol
{
public:
	FGetImageCaptureProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneCaptureProtocolBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneCaptureProtocolBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAudioCaptureProtocolType
{
public:
	FSetAudioCaptureProtocolType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UMovieSceneCaptureProtocolBase GetProtocolType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UMovieSceneCaptureProtocolBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetImageCaptureProtocolType
{
public:
	FSetImageCaptureProtocolType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UMovieSceneCaptureProtocolBase GetProtocolType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UMovieSceneCaptureProtocolBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindAudioCaptureProtocol
{
public:
	FFindAudioCaptureProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneAudioCaptureProtocolBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneAudioCaptureProtocolBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindImageCaptureProtocol
{
public:
	FFindImageCaptureProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneImageCaptureProtocolBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMovieSceneImageCaptureProtocolBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCaptureElapsedTime
{
public:
	FGetCaptureElapsedTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCaptureFrameNumber
{
public:
	FGetCaptureFrameNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSetup
{
public:
	FOnSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsCaptureInProgress
{
public:
	FIsCaptureInProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGenerateFilename
{
public:
	FGenerateFilename(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameMetrics GetInFrameMetrics() {
		return memory.read<struct FFrameMetrics>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCanFinalize
{
public:
	FOnCanFinalize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartCapturingFinalPixels
{
public:
	FStartCapturingFinalPixels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCapturedPixelsID GetStreamID() {
		return memory.read<struct FCapturedPixelsID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FResolveBuffer
{
public:
	FResolveBuffer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetBuffer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}
	struct FCapturedPixelsID GetBufferID() {
		return memory.read<struct FCapturedPixelsID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGenerateFilenameForBuffer
{
public:
	FGenerateFilenameForBuffer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetBuffer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}
	struct FCapturedPixelsID GetStreamID() {
		return memory.read<struct FCapturedPixelsID>(m_addr + 8);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FGenerateFilenameForCurrentFrame
{
public:
	FGenerateFilenameForCurrentFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWriteImageToDisk
{
public:
	FWriteImageToDisk(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCapturedPixels GetPixelData() {
		return memory.read<struct FCapturedPixels>(m_addr + 0);
	}
	struct FCapturedPixelsID GetStreamID() {
		return memory.read<struct FCapturedPixelsID>(m_addr + 16);
	}
	struct FFrameMetrics GetFrameMetrics() {
		return memory.read<struct FFrameMetrics>(m_addr + 96);
	}
	bool GetbCopyImageData() {
		return memory.read<bool>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};