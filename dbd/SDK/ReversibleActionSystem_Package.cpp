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
	 * 		Name   -> PredefinedFunction UBaseReversibleInstantActionHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseReversibleInstantActionHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ReversibleActionSystem.BaseReversibleInstantActionHandler"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReversibleActionSystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReversibleActionSystemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ReversibleActionSystem.ReversibleActionSystemComponent"));
		return ptr;
	}

}


