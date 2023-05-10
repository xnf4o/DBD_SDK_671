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
	 * 		Name   -> PredefinedFunction UDBDTimeUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDTimeUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TimeUtilities.DBDTimeUtilities"));
		return ptr;
	}

}


