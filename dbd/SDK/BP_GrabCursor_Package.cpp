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
	 * 		Name   -> PredefinedFunction UBP_GrabCursor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GrabCursor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("WidgetBlueprintGeneratedClass BP_GrabCursor.BP_GrabCursor_C"));
		return ptr;
	}

}


