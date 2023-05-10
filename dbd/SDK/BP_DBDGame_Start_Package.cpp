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
	 * 		Name   -> PredefinedFunction ABP_DBDGame_Start_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DBDGame_Start_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_DBDGame_Start.BP_DBDGame_Start_C"));
		return ptr;
	}

}


