#pragma once

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
	 * ScriptStruct SystemUtilities.DateTimerArray
	 * Size -> 0x0010
	 */
	struct FDateTimerArray
	{
	public:
		unsigned char                                              UnknownData_0ZGQ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SystemUtilities.DateTimer
	 * Size -> 0x0028
	 */
	struct FDateTimer
	{
	public:
		unsigned char                                              UnknownData_N9M0[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SystemUtilities.DateTimerHandle
	 * Size -> 0x0008
	 */
	struct FDateTimerHandle
	{
	public:
		unsigned char                                              UnknownData_B1KJ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SystemUtilities.FastTimer
	 * Size -> 0x0030
	 */
	struct FFastTimer
	{
	public:
		unsigned char                                              UnknownData_RF90[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
