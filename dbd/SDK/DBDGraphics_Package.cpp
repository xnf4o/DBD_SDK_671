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
	 * 		Name   -> PredefinedFunction UFogOverrideComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFogOverrideComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGraphics.FogOverrideComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFogOverrideManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFogOverrideManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGraphics.FogOverrideManager"));
		return ptr;
	}

}


