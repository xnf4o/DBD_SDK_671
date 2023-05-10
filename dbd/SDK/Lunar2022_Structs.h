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
	 * Enum Lunar2022.ERedEnvelopeState
	 */
	enum class ERedEnvelopeState : uint8_t
	{
		AuraVisibleToOwner     = 0,
		AuraVisibleToNonOwners = 1,
		Disappeared            = 2,
		MAX                    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Lunar2022.RedEnvelopeData
	 * Size -> 0x0018
	 */
	struct FRedEnvelopeData
	{
	public:
		ERedEnvelopeState                                          RedEnvelopeState;                                        // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FO2B[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_XWU3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          LastInteractingPlayer;                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsJackpot;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COU4[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
