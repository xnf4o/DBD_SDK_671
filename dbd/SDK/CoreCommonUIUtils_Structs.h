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
	 * Enum CoreCommonUIUtils.ERemainingTimeFormat
	 */
	enum class ERemainingTimeFormat : uint8_t
	{
		Short  = 0,
		Long   = 1,
		EndsIn = 2,
		MAX    = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
