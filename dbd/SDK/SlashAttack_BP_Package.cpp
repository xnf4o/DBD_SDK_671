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
	 * 		Name   -> PredefinedFunction USlashAttack_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlashAttack_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass SlashAttack_BP.SlashAttack_BP_C"));
		return ptr;
	}

}


