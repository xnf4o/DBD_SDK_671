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
	 * 		Name   -> PredefinedFunction UPounceAttackHittingSubstate_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPounceAttackHittingSubstate_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass PounceAttackHittingSubstate_BP.PounceAttackHittingSubstate_BP_C"));
		return ptr;
	}

}


