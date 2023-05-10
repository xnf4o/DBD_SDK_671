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
	 * 		Name   -> PredefinedFunction UPounceAttackSuccessSubstate_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPounceAttackSuccessSubstate_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass PounceAttackSuccessSubstate_BP.PounceAttackSuccessSubstate_BP_C"));
		return ptr;
	}

}


