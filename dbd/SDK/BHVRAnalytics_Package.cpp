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
	 * 		Name   -> PredefinedFunction UBHVRAnalytics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBHVRAnalytics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class BHVRAnalytics.BHVRAnalytics"));
		return ptr;
	}

}


