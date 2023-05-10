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
	 * 		Name   -> PredefinedFunction USurvivorRevealedKillerAuraAchievement_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorRevealedKillerAuraAchievement_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass SurvivorRevealedKillerAuraAchievement_BP.SurvivorRevealedKillerAuraAchievement_BP_C"));
		return ptr;
	}

}


