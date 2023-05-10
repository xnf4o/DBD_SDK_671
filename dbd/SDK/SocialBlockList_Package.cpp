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
	 * 		Name   -> PredefinedFunction UBlockListFacade.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlockListFacade::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SocialBlockList.BlockListFacade"));
		return ptr;
	}

}


