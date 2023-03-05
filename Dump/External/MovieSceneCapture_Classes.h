#pragma once 
#include <MovieSceneCapture_Structs.h>
 
 
 
class UMovieSceneCaptureEnvironment
{
public:
	UMovieSceneCaptureEnvironment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneAudioCaptureProtocolBase
{
public:
	UMovieSceneAudioCaptureProtocolBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UImageSequenceProtocol_EXR
{
public:
	UImageSequenceProtocol_EXR(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbCompressed() {
		return memory.read<bool>(m_addr + 216);
	}
	enum class EHDRCaptureGamut GetCaptureGamut() {
		return memory.read<enum class EHDRCaptureGamut>(m_addr + 217);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCaptureProtocolBase
{
public:
	UMovieSceneCaptureProtocolBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMovieSceneCaptureProtocolState GetState() {
		return memory.read<enum class EMovieSceneCaptureProtocolState>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNullAudioCaptureProtocol
{
public:
	UNullAudioCaptureProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMasterAudioSubmixCaptureProtocol
{
public:
	UMasterAudioSubmixCaptureProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UImageSequenceProtocol_JPG
{
public:
	UImageSequenceProtocol_JPG(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneImageCaptureProtocolBase
{
public:
	UMovieSceneImageCaptureProtocolBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UImageSequenceProtocol
{
public:
	UImageSequenceProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCompositionGraphCaptureProtocol
{
public:
	UCompositionGraphCaptureProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCompositionGraphCapturePasses GetIncludeRenderPasses() {
		return memory.read<struct FCompositionGraphCapturePasses>(m_addr + 88);
	}
	bool GetbCaptureFramesInHDR() {
		return memory.read<bool>(m_addr + 104);
	}
	int32_t GetHDRCompressionQuality() {
		return memory.read<int32_t>(m_addr + 108);
	}
	enum class EHDRCaptureGamut GetCaptureGamut() {
		return memory.read<enum class EHDRCaptureGamut>(m_addr + 112);
	}
	struct FSoftObjectPath GetPostProcessingMaterial() {
		return memory.read<struct FSoftObjectPath>(m_addr + 120);
	}
	bool GetbDisableScreenPercentage() {
		return memory.read<bool>(m_addr + 144);
	}
	struct UMaterialInterface GetPostProcessingMaterialPtr() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFrameGrabberProtocol
{
public:
	UFrameGrabberProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCompressedImageSequenceProtocol
{
public:
	UCompressedImageSequenceProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCompressionQuality() {
		return memory.read<int32_t>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};


class UImageSequenceProtocol_BMP
{
public:
	UImageSequenceProtocol_BMP(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UImageSequenceProtocol_PNG
{
public:
	UImageSequenceProtocol_PNG(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCaptureInterface
{
public:
	UMovieSceneCaptureInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneCapture
{
public:
	UMovieSceneCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftClassPath GetImageCaptureProtocolType() {
		return memory.read<struct FSoftClassPath>(m_addr + 56);
	}
	struct FSoftClassPath GetAudioCaptureProtocolType() {
		return memory.read<struct FSoftClassPath>(m_addr + 80);
	}
	struct UMovieSceneImageCaptureProtocolBase GetImageCaptureProtocol() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UMovieSceneImageCaptureProtocolBase(ptr_addr);
	}
	struct UMovieSceneAudioCaptureProtocolBase GetAudioCaptureProtocol() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UMovieSceneAudioCaptureProtocolBase(ptr_addr);
	}
	struct FMovieSceneCaptureSettings GetSettings() {
		return memory.read<struct FMovieSceneCaptureSettings>(m_addr + 120);
	}
	bool GetbUseSeparateProcess() {
		return memory.read<bool>(m_addr + 232);
	}
	bool GetbCloseEditorWhenCaptureStarts() {
		return memory.read<bool>(m_addr + 233);
	}
	struct FString GetAdditionalCommandLineArguments() {
		return memory.read<struct FString>(m_addr + 240);
	}
	struct FString GetInheritedCommandLineArguments() {
		return memory.read<struct FString>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULevelCapture
{
public:
	ULevelCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbAutoStartCapture() {
		return memory.read<bool>(m_addr + 544);
	}
	struct FGuid GetPrerequisiteActorId() {
		return memory.read<struct FGuid>(m_addr + 556);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUserDefinedCaptureProtocol
{
public:
	UUserDefinedCaptureProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UWorld(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUserDefinedImageCaptureProtocol
{
public:
	UUserDefinedImageCaptureProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDesiredImageFormat GetFormat() {
		return memory.read<enum class EDesiredImageFormat>(m_addr + 216);
	}
	bool GetbEnableCompression() {
		return memory.read<bool>(m_addr + 217);
	}
	int32_t GetCompressionQuality() {
		return memory.read<int32_t>(m_addr + 220);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVideoCaptureProtocol
{
public:
	UVideoCaptureProtocol(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseCompression() {
		return memory.read<bool>(m_addr + 104);
	}
	float GetCompressionQuality() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


