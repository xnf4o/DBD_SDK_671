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
	 * Class AudioAnalyzer.AudioAnalyzerAsset
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAudioAnalyzerAsset : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioAnalyzer.AudioAnalyzerNRTSettings
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioAnalyzer.AudioAnalyzerNRT
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
	{
	public:
		class USoundWave*                                          Sound;                                                   // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationInSeconds;                                       // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JA79[0x44];                                  // 0x003C(0x0044) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
