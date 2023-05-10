﻿#pragma once

/**
 * Name: dbd
 * Version: 6711
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class TimeManagement.FixedFrameRateCustomTimeStep
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TimeManagement.GenlockedCustomTimeStep
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TimeManagement.GenlockedFixedRateCustomTimeStep
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
	{
	public:
		struct FFrameRate                                          FrameRate;                                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKQ9[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TimeManagement.GenlockedTimecodeProvider
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UGenlockedTimecodeProvider : public UTimecodeProvider
	{
	public:
		bool                                                       bUseGenlockToCount;                                      // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KB6[0x27];                                  // 0x0039(0x0027) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TimeManagement.TimeManagementBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FFrameTime STATIC_TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate);
		struct FFrameNumber STATIC_Subtract_FrameNumberInteger(const struct FFrameNumber& A, int32_t B);
		struct FFrameNumber STATIC_Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
		struct FFrameTime STATIC_SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate);
		struct FFrameTime STATIC_Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);
		struct FFrameNumber STATIC_Multiply_FrameNumberInteger(const struct FFrameNumber& A, int32_t B);
		bool STATIC_IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate);
		bool STATIC_IsValid_Framerate(const struct FFrameRate& InFrameRate);
		struct FFrameRate STATIC_GetTimecodeFrameRate();
		struct FTimecode STATIC_GetTimecode();
		struct FFrameNumber STATIC_Divide_FrameNumberInteger(const struct FFrameNumber& A, int32_t B);
		class FString STATIC_Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);
		float STATIC_Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);
		float STATIC_Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);
		int32_t STATIC_Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber);
		struct FFrameNumber STATIC_Add_FrameNumberInteger(const struct FFrameNumber& A, int32_t B);
		struct FFrameNumber STATIC_Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
		static UClass* StaticClass();
	};

	/**
	 * Class TimeManagement.TimeSynchronizationSource
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UTimeSynchronizationSource : public UObject
	{
	public:
		bool                                                       bUseForSynchronization;                                  // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DNX[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FrameOffset;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
