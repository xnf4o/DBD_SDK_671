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
	 * 		Name   -> PredefinedFunction UAB_Menu_Haiti_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Menu_Haiti_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("AnimBlueprintGeneratedClass AB_Menu_Haiti.AB_Menu_Haiti_C"));
		return ptr;
	}

}


