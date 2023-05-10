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
	 * Enum TheDoctor.EStaticFieldMovementSpeed
	 */
	enum class EStaticFieldMovementSpeed : uint8_t
	{
		Slow        = 0,
		Medium      = 1,
		Fast        = 2,
		RunningFast = 3,
		MAX         = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
