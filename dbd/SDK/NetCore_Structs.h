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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NetCore.NetAnalyticsDataConfig
	 * Size -> 0x0010
	 */
	struct FNetAnalyticsDataConfig
	{
	public:
		class FName                                                DataName;                                                // 0x0000(0x000C) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x000C(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73QV[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
