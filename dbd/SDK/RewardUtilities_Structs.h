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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum RewardUtilities.ERewardItemType
	 */
	enum class ERewardItemType : uint8_t
	{
		None      = 0,
		Currency  = 1,
		Inventory = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RewardUtilities.RewardItem
	 * Size -> 0x0020
	 */
	struct FRewardItem
	{
	public:
		ERewardItemType                                            Type;                                                    // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUB9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ID;                                                      // 0x0008(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYSQ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
