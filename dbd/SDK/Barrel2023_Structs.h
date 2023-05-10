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
	 * Enum Barrel2023.EBarrelType
	 */
	enum class EBarrelType : uint8_t
	{
		None        = 0,
		RedBarrel   = 1,
		BlueBarrel  = 2,
		GreenBarrel = 3,
		MAX         = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Barrel2023.BarrelCharmInfo
	 * Size -> 0x0020
	 */
	struct FBarrelCharmInfo
	{
	public:
		EBarrelType                                                BarrelType;                                              // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JB29[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RewardId;                                                // 0x0008(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JU21[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
