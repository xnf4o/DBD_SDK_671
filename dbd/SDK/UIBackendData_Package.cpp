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
	 * 		Name   -> PredefinedFunction UUIBackendDataAccessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIBackendDataAccessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class UIBackendData.UIBackendDataAccessor"));
		return ptr;
	}

}


