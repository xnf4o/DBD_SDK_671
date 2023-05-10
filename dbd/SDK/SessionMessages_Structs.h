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
	 * ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
	 * Size -> 0x0001
	 */
	struct FSessionServiceLogUnsubscribe
	{
	public:
		unsigned char                                              UnknownData_TAOL[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServiceLogSubscribe
	 * Size -> 0x0001
	 */
	struct FSessionServiceLogSubscribe
	{
	public:
		unsigned char                                              UnknownData_TKY0[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServiceLog
	 * Size -> 0x0040
	 */
	struct FSessionServiceLog
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSAN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Data;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               InstanceId;                                              // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     TimeSeconds;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Verbosity;                                               // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WJN[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServicePong
	 * Size -> 0x0090
	 */
	struct FSessionServicePong
	{
	public:
		bool                                                       Authorized;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1O71[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuildDate;                                               // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceName;                                              // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               InstanceId;                                              // 0x0028(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstanceName;                                            // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlatformName;                                            // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               SESSIONID;                                               // 0x0058(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionName;                                             // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionOwner;                                            // 0x0078(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Standalone;                                              // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKMA[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServicePing
	 * Size -> 0x0010
	 */
	struct FSessionServicePing
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
