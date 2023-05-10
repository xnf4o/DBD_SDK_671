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
	 * 		Name   -> PredefinedFunction USurvivorIncreaseOthersMovementSpeedWithCooldownAchievementBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorIncreaseOthersMovementSpeedWithCooldownAchievementBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass SurvivorIncreaseOthersMovementSpeedWithCooldownAchievementBP.SurvivorIncreaseOthersMovementSpeedWithCooldownAchievementBP_C"));
		return ptr;
	}

}


