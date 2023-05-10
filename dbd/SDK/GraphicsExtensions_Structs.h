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
	 * Enum GraphicsExtensions.EShadowDepthLODSelection
	 */
	enum class EShadowDepthLODSelection : uint8_t
	{
		ViewDependent = 0,
		HighestLOD    = 1,
		LowestLOD     = 2,
		ShadowView    = 3,
		Max           = 4,
		MAX           = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
