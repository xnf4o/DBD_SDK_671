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
	 * 		Name   -> PredefinedFunction AAIController_Slasher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIController_Slasher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass AIController_Slasher.AIController_Slasher_C"));
		return ptr;
	}

}


