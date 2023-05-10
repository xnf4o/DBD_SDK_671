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
	 * 		Name   -> PredefinedFunction USlashAttackHittingSubstate_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlashAttackHittingSubstate_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass SlashAttackHittingSubstate_BP.SlashAttackHittingSubstate_BP_C"));
		return ptr;
	}

}


