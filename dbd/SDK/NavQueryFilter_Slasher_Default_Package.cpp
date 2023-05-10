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
	 * 		Name   -> PredefinedFunction UNavQueryFilter_Slasher_Default_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavQueryFilter_Slasher_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass NavQueryFilter_Slasher_Default.NavQueryFilter_Slasher_Default_C"));
		return ptr;
	}

}


