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
	 * 		Name   -> PredefinedFunction USubscriptionSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubscriptionSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SubscriptionSubsystem.SubscriptionSubsystem"));
		return ptr;
	}

}


