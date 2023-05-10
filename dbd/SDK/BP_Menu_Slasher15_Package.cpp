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
	 * 		Name   -> PredefinedFunction ABP_Menu_Slasher15_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_Slasher15_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_Menu_Slasher15.BP_Menu_Slasher15_C"));
		return ptr;
	}

}


