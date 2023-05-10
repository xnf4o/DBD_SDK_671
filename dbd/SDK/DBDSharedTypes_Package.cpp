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
	 * 		Name   -> PredefinedFunction UObjectiveIndicatorViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveIndicatorViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDSharedTypes.ObjectiveIndicatorViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTerrorRadiusIndicatorViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrorRadiusIndicatorViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDSharedTypes.TerrorRadiusIndicatorViewData"));
		return ptr;
	}

}


