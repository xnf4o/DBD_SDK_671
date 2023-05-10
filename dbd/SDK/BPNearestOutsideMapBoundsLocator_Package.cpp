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
	 * 		Name   -> PredefinedFunction UBPNearestOutsideMapBoundsLocator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPNearestOutsideMapBoundsLocator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BPNearestOutsideMapBoundsLocator.BPNearestOutsideMapBoundsLocator_C"));
		return ptr;
	}

}


