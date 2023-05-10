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
	 * Enum TheHuntress.EThrowHatchetInteractionState
	 */
	enum class EThrowHatchetInteractionState : uint8_t
	{
		None      = 0,
		Aiming    = 1,
		Launching = 2,
		Cancelled = 3,
		MAX       = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
