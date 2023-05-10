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
	 * 		Name   -> PredefinedFunction UAB_Menu_Jane_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Menu_Jane_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("AnimBlueprintGeneratedClass AB_Menu_Jane.AB_Menu_Jane_C"));
		return ptr;
	}

}


