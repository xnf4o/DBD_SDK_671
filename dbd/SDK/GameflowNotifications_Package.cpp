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
	 * 		Name   -> PredefinedFunction UGameflowEventsNotifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameflowEventsNotifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameflowNotifications.GameflowEventsNotifier"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerflowEventsNotifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerflowEventsNotifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameflowNotifications.PlayerflowEventsNotifier"));
		return ptr;
	}

}


