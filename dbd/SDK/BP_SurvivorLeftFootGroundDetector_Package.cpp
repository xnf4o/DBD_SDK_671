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
	 * 		Name   -> PredefinedFunction UBP_SurvivorLeftFootGroundDetector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SurvivorLeftFootGroundDetector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_SurvivorLeftFootGroundDetector.BP_SurvivorLeftFootGroundDetector_C"));
		return ptr;
	}

}


