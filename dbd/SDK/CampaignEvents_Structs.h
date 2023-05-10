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
	 * Enum CampaignEvents.EEventEffectTypes
	 */
	enum class EEventEffectTypes : uint8_t
	{
		Bloodpoints                = 0,
		Experience                 = 1,
		RetentionRewards           = 2,
		PromoPack                  = 3,
		EventItemsPack             = 4,
		ProvingGroundCharacterRand = 5,
		ProvingGroundStore         = 6,
		MAX                        = 7
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
