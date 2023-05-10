/**
 * Name: dbd
 * Version: 6711
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCampaignEventsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCampaignEventsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CampaignEvents.CampaignEventsManager"));
		return ptr;
	}

}


