﻿/**
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
	 * 		Name   -> PredefinedFunction UKillerDamagedSurvivorWithHasteAchievement_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerDamagedSurvivorWithHasteAchievement_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass KillerDamagedSurvivorWithHasteAchievement_BP.KillerDamagedSurvivorWithHasteAchievement_BP_C"));
		return ptr;
	}

}


