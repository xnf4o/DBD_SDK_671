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
	 * Enum MathUtilities.ECircleToSquareMethod
	 */
	enum class ECircleToSquareMethod : uint8_t
	{
		SimpleStretching = 0,
		EllipticalGrid   = 1,
		FGSquircular     = 2,
		MAX              = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MathUtilities.Cone
	 * Size -> 0x0020
	 */
	struct FCone
	{
	public:
		unsigned char                                              UnknownData_YEYF[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
