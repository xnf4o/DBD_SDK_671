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
	 * 		Name   -> PredefinedFunction USlasherFootstepPerceptionComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlasherFootstepPerceptionComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass SlasherFootstepPerceptionComponent.SlasherFootstepPerceptionComponent_C"));
		return ptr;
	}

}


