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
	 * 		Name   -> PredefinedFunction USlashAttackMissSubstate_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlashAttackMissSubstate_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass SlashAttackMissSubstate_BP.SlashAttackMissSubstate_BP_C"));
		return ptr;
	}

}


