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
	 * 		Name   -> PredefinedFunction UKillerHitSurvivorDuringGuardHuntAchievement_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerHitSurvivorDuringGuardHuntAchievement_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass KillerHitSurvivorDuringGuardHuntAchievement_BP.KillerHitSurvivorDuringGuardHuntAchievement_BP_C"));
		return ptr;
	}

}


