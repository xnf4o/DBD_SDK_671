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
	 * 		Name   -> PredefinedFunction UBP_DBDDesignTunables_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DBDDesignTunables_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_DBDDesignTunables.BP_DBDDesignTunables_C"));
		return ptr;
	}

}


