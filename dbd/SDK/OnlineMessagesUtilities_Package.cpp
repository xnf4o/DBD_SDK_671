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
	 * 		Name   -> PredefinedFunction UOnlineMessagesContainerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineMessagesContainerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class OnlineMessagesUtilities.OnlineMessagesContainerComponent"));
		return ptr;
	}

}


