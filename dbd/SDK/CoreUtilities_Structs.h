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
	 * Enum CoreUtilities.RealCaseGapEnum
	 */
	enum class ERealCaseGapEnum : uint8_t
	{
		RealCaseGapEnumNone                           = 0,
		RealCaseGapEnumSavefileDeserializationFailure = 1,
		RealCaseGapEnumEarnPlayerXpParamError         = 2,
		RealCaseGapEnumRealCaseGapEnum_MAX            = 3
	};

	/**
	 * Enum CoreUtilities.OutOfOrderEnum
	 */
	enum class EOutOfOrderEnum : uint8_t
	{
		OutOfOrderEnumValue1             = 0,
		OutOfOrderEnumValue2             = 1,
		OutOfOrderEnumValue3             = 2,
		OutOfOrderEnumOutOfOrderEnum_MAX = 3
	};

	/**
	 * Enum CoreUtilities.GapEnum
	 */
	enum class EGapEnum : uint8_t
	{
		GapEnumValue1      = 0,
		GapEnumValue2      = 1,
		GapEnumValue3      = 2,
		GapEnumGapEnum_MAX = 3
	};

	/**
	 * Enum CoreUtilities.SimpleEnum
	 */
	enum class ESimpleEnum : uint8_t
	{
		SimpleEnumValue1         = 0,
		SimpleEnumValue2         = 1,
		SimpleEnumValue3         = 2,
		SimpleEnumSimpleEnum_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CoreUtilities.DelegateHandleWrapper
	 * Size -> 0x0008
	 */
	struct FDelegateHandleWrapper
	{
	public:
		unsigned char                                              UnknownData_ZB76[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
